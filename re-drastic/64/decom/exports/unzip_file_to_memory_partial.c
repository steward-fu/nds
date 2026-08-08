/*
 * Ghidra decompilation
 *
 * Function : unzip_file_to_memory_partial
 * Address  : 001a7090
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
unzip_file_to_memory_partial
          (char *param_1,undefined8 param_2,uint *param_3,void *param_4,uint param_5,uint param_6)

{
  uint uVar1;
  int __fd;
  int iVar2;
  ssize_t sVar3;
  void *pvVar4;
  void *__buf;
  undefined4 uVar5;
  uint uVar6;
  ulong __nbytes;
  uint local_6c0;
  uint local_6b0;
  uint local_6ac;
  uint local_6a8;
  short local_6a4;
  void *local_6a0;
  void *pvStack_698;
  int local_690;
  uint local_68c;
  uint local_688;
  undefined4 uStack_684;
  void *local_680;
  uint local_678;
  void *local_668;
  uint local_660;
  undefined8 local_640;
  undefined8 uStack_638;
  undefined auStack_409 [1025];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __fd = open64(param_1,0);
  if (__fd == -1) {
    __printf_chk(1,"ERROR: could not open zip file %s.\n",param_1);
  }
  else {
    iVar2 = unzip_find_file_entry(__fd,param_2,&local_6b0,6);
    if (iVar2 == 0) {
      uVar5 = 0;
      if (param_4 == (void *)0x0 || param_5 == 0) {
        close(__fd);
        *param_3 = local_6ac;
        goto LAB_001a7198;
      }
      lseek64(__fd,(ulong)local_6a8 & 0xfffffe00,0);
      __buf = (void *)((ulong)auStack_409 & 0xfffffffffffffe00);
      pvVar4 = (void *)((long)__buf + ((ulong)local_6a8 & 0x1ff));
      uVar6 = 0x200 - (local_6a8 & 0x1ff);
      local_6c0 = local_6a8 & 0x1ff;
      sVar3 = read(__fd,__buf,0x200);
      uVar1 = local_6b0;
      if (0 < sVar3) {
        if (local_6a4 == 0) {
          if (param_6 != 0) {
            if (uVar6 <= param_6) {
              lseek64(__fd,(ulong)((local_6c0 - 0x200) + param_6),1);
              do {
                uVar6 = param_5;
                if (0x200 < param_5) {
                  uVar6 = 0x200;
                }
                __nbytes = (ulong)uVar6;
                uVar6 = param_5;
                if (0x200 < param_5) {
                  uVar6 = 0x200;
                }
                sVar3 = read(__fd,__buf,__nbytes);
                if (sVar3 < 1) {
                  __printf_chk(1,"ERROR: %s has incomplete size (uncompressed).\n",param_1);
                  goto LAB_001a73cc;
                }
                memcpy(param_4,__buf,__nbytes);
                param_4 = (void *)((long)param_4 + __nbytes);
                param_5 = param_5 - uVar6;
joined_r0x001a7368:
              } while (param_5 != 0);
              goto LAB_001a7184;
            }
            pvVar4 = (void *)((long)pvVar4 + (ulong)param_6);
            uVar6 = uVar6 - param_6;
          }
          if (uVar6 <= param_5) {
            memcpy(param_4,pvVar4,(ulong)uVar6);
            param_4 = (void *)((long)param_4 + (ulong)uVar6);
            param_5 = param_5 - uVar6;
            goto joined_r0x001a7368;
          }
          memcpy(param_4,pvVar4,(ulong)param_5);
        }
        else if (local_6a4 == 8) {
          local_640 = 0;
          uStack_638 = 0;
          if (local_6b0 < uVar6) {
            uVar6 = local_6b0;
          }
          local_680 = pvVar4;
          local_668 = param_4;
          if (param_6 == 0) {
            local_660 = param_5;
            iVar2 = inflateInit2_(&local_680,0xfffffff1,"1.2.11",0x70);
            local_678 = uVar6;
            if (iVar2 == 0) {
              iVar2 = inflate(&local_680,2);
              if (local_660 == 0) {
                *param_3 = param_5;
                inflateEnd(&local_680);
                close(__fd);
                goto LAB_001a7198;
              }
              uVar1 = uVar1 - uVar6;
              if (iVar2 != -5) {
                __printf_chk(1,"ERROR: %s could not be decompressed: %08X.\n",param_1,iVar2);
                goto LAB_001a73cc;
              }
              local_678 = 0x200;
              local_680 = __buf;
              if (uVar1 != 0) {
                uVar6 = uVar1;
                if (0x200 < uVar1) {
                  uVar6 = 0x200;
                }
                sVar3 = read(__fd,__buf,(ulong)uVar6);
                if (sVar3 < 1) {
                  __printf_chk(1,"ERROR: %s has incomplete size (inflate @ %d/%d, %d).\n",param_1,
                               uVar1,local_6b0,uVar6);
                  goto LAB_001a73cc;
                }
              }
              inflateEnd(&local_680);
            }
          }
          else {
            local_660 = local_6b0;
            pvVar4 = malloc(0x8000);
            if (pvVar4 == (void *)0x0) {
              uVar5 = 0xffffffff;
              close(__fd);
              goto LAB_001a7198;
            }
            iVar2 = inflateBackInit_(&local_680,0xf,pvVar4,"1.2.11",0x70);
            local_678 = uVar6;
            if (iVar2 == 0) {
              uStack_684 = 0;
              local_6a0 = param_4;
              pvStack_698 = __buf;
              local_690 = __fd;
              local_68c = param_5;
              local_688 = param_6;
              inflateBack(&local_680,unzip_in_func,&local_6a0,unzip_out_func);
              inflateBackEnd(&local_680);
              close(__fd);
              if (local_68c == 0) {
                uVar5 = 0;
                free(pvVar4);
                goto LAB_001a7198;
              }
            }
            free(pvVar4);
          }
        }
        else {
          __printf_chk(1,"ERROR: Unhandled zip compression method %x.\n");
        }
LAB_001a7184:
        *param_3 = local_6ac;
        close(__fd);
        goto LAB_001a7198;
      }
      __printf_chk(1,"ERROR: %s could not be read.\n",param_1);
    }
  }
LAB_001a73cc:
  uVar5 = 0xffffffff;
  close(__fd);
LAB_001a7198:
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_8 - ___stack_chk_guard,0);
  }
  return uVar5;
}


