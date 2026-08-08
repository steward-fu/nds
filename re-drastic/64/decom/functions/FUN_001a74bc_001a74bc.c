/*
 * Ghidra decompilation
 *
 * Function : FUN_001a74bc
 * Address  : 001a74bc
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void * FUN_001a74bc(char *param_1,undefined8 param_2,uint *param_3,FILE *param_4)

{
  uint uVar1;
  uint uVar2;
  int __fd;
  int iVar3;
  void *__ptr;
  void *pvVar4;
  long lVar5;
  char *__s;
  size_t sVar6;
  ssize_t sVar7;
  void *__buf;
  ulong uVar8;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  uint uStack_88;
  short sStack_84;
  void *pvStack_80;
  uint uStack_78;
  void *pvStack_68;
  uint uStack_60;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  __fd = open64(param_1,0);
  if ((param_4 != (FILE *)0x0) && (param_4 = fopen64((char *)param_4,"wb"), param_4 == (FILE *)0x0))
  {
    __buf = (void *)0x0;
    close(__fd);
    goto LAB_001a7568;
  }
  if (__fd == -1) {
    __printf_chk(1,"ERROR: could not open zip file %s.\n",param_1);
LAB_001a7550:
    close(__fd);
    if (param_4 != (FILE *)0x0) {
      __buf = (void *)0x0;
      fclose(param_4);
      goto LAB_001a7568;
    }
  }
  else {
    iVar3 = unzip_find_file_entry(__fd,param_2,&uStack_90,0);
    if (iVar3 != 0) {
      __printf_chk(1,"ERROR: could not find entry in file %s.\n",param_1);
      goto LAB_001a7550;
    }
    g_current_unpack_size = (ulong)uStack_8c;
    g_current_unpack_done = 0;
    lseek64(__fd,(ulong)uStack_88,0);
    uVar1 = uStack_8c;
    uStack_94 = uStack_90;
    if (sStack_84 == 0) {
      if (param_4 != (FILE *)0x0) {
        pvVar4 = malloc(0x20000);
        uVar2 = uVar1;
        if (pvVar4 == (void *)0x0) {
          puts("ERROR: Could not allocate zip buffer.");
          close(__fd);
          fclose(param_4);
          __buf = (void *)0x0;
          goto LAB_001a7568;
        }
        while (uVar1 != 0) {
          uVar2 = uVar1;
          if (0x20000 < uVar1) {
            uVar2 = 0x20000;
          }
          uVar8 = (ulong)uVar2;
          uVar2 = uVar1;
          if (0x20000 < uVar1) {
            uVar2 = 0x20000;
          }
          lVar5 = __read_chk(__fd,pvVar4,uVar8,0x20000);
          if (lVar5 < 1) {
            close(__fd);
            fclose(param_4);
            __buf = (void *)0x0;
            free(pvVar4);
            goto LAB_001a7568;
          }
          fwrite(pvVar4,uVar8,1,param_4);
          g_current_unpack_done = g_current_unpack_done + uVar8;
          uVar1 = uVar1 - uVar2;
          uVar2 = uStack_8c;
        }
        *param_3 = uVar2;
        close(__fd);
LAB_001a7910:
        __buf = (void *)0x1;
        fclose(param_4);
        goto LAB_001a7568;
      }
      uVar8 = (ulong)uStack_8c;
      __buf = malloc(uVar8);
      if (__buf == (void *)0x0) {
        puts("ERROR: Could not allocate memory for unzipped gamecard.");
        close(__fd);
        goto LAB_001a7568;
      }
      sVar7 = read(__fd,__buf,uVar8);
      if (0 < sVar7) {
        *param_3 = uStack_8c;
        close(__fd);
        goto LAB_001a7568;
      }
      __printf_chk(1,"ERROR: %s has incomplete size (uncompressed).\n",param_1);
      close(__fd);
      pvVar4 = __buf;
LAB_001a7884:
      __buf = (void *)0x0;
      free(pvVar4);
      goto LAB_001a7568;
    }
    if (sStack_84 != 8) {
      __printf_chk(1,"ERROR: Unhandled zip compression method %x.\n");
      goto LAB_001a7550;
    }
    __printf_chk(1,"%d compressed bytes, %d uncompressed bytes\n",uStack_90,uStack_8c);
    if (param_4 == (FILE *)0x0) {
      uVar1 = uStack_8c;
      __buf = malloc((ulong)uStack_8c);
      if (__buf == (void *)0x0) {
        puts("ERROR: Could not allocate memory for unzipped gamecard.");
        close(__fd);
        goto LAB_001a7568;
      }
      pvVar4 = malloc(0x20000);
      if (pvVar4 == (void *)0x0) {
        puts("ERROR: Could not allocate zip buffer.");
        close(__fd);
        pvVar4 = __buf;
        goto LAB_001a7884;
      }
      __ptr = (void *)0x0;
      pvStack_68 = __buf;
      uStack_60 = uVar1;
LAB_001a7624:
      uStack_38 = 0;
      uStack_40 = 0;
      pvStack_80 = pvVar4;
      iVar3 = inflateInit2_(&pvStack_80,0xfffffff1,"1.2.11",0x70);
      uVar1 = uStack_94;
      if (0x20000 < uStack_94) {
        uVar1 = 0x20000;
      }
      uStack_78 = uVar1;
      lVar5 = __read_chk(__fd,pvVar4,uVar1,0x20000);
      if (lVar5 < 1) {
        __printf_chk(1,"ERROR: %s has incomplete size (inflate @ %d/%d).\n",param_1,uStack_94,
                     uStack_90);
      }
      else {
        if (iVar3 != 0) {
          if (__ptr != (void *)0x0) {
LAB_001a7928:
            free(__ptr);
          }
LAB_001a7688:
          inflateEnd(&pvStack_80);
          free(pvVar4);
          *param_3 = uStack_8c;
          close(__fd);
          if (param_4 == (FILE *)0x0) goto LAB_001a7568;
          goto LAB_001a7910;
        }
        uStack_94 = uStack_94 - uVar1;
        while( true ) {
          do {
            if (__ptr == (void *)0x0) {
              while (iVar3 = inflate(&pvStack_80,2), iVar3 != -5) {
                if (iVar3 == 1) goto LAB_001a7688;
              }
            }
            else {
              while( true ) {
                iVar3 = inflate(&pvStack_80,2);
                uVar1 = 0x20000 - uStack_60;
                if (uVar1 != 0) {
                  g_current_unpack_done = g_current_unpack_done + (ulong)uVar1;
                  sVar6 = fwrite(__ptr,(ulong)uVar1,1,param_4);
                  if (sVar6 == 0) {
                    puts("ERROR: Failed writing unzipped file.");
                    free(__ptr);
                    close(__fd);
                    goto LAB_001a786c;
                  }
                }
                uStack_60 = 0x20000;
                pvStack_68 = __ptr;
                if (iVar3 == -5) break;
                if (iVar3 == 1) goto LAB_001a7928;
              }
            }
            pvStack_80 = pvVar4;
          } while (uStack_94 == 0);
          uVar1 = uStack_94;
          if (0x20000 < uStack_94) {
            uVar1 = 0x20000;
          }
          lVar5 = __read_chk(__fd,pvVar4,uVar1,0x20000);
          if (lVar5 < 1) break;
          uStack_94 = uStack_94 - uVar1;
          uStack_78 = uVar1;
        }
        __printf_chk(1,"ERROR: %s has incomplete size (inflate @ %d/%d, %d).\n",param_1,uStack_94,
                     uStack_90);
      }
      close(__fd);
      if (param_4 != (FILE *)0x0) {
LAB_001a786c:
        fclose(param_4);
      }
      free(pvVar4);
      pvVar4 = __buf;
      if (__buf != (void *)0x0) goto LAB_001a7884;
    }
    else {
      __ptr = malloc(0x20000);
      if (__ptr == (void *)0x0) {
        __s = "ERROR: Could not allocate memory for decompression buffer.";
      }
      else {
        pvVar4 = malloc(0x20000);
        if (pvVar4 != (void *)0x0) {
          __buf = (void *)0x0;
          uStack_60 = 0x20000;
          pvStack_68 = __ptr;
          goto LAB_001a7624;
        }
        __s = "ERROR: Could not allocate zip buffer.";
      }
      puts(__s);
      close(__fd);
      fclose(param_4);
    }
  }
  __buf = (void *)0x0;
LAB_001a7568:
  if (lStack_8 - ___stack_chk_guard == 0) {
    return __buf;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lStack_8 - ___stack_chk_guard,0);
}


