/*
 * Ghidra decompilation
 *
 * Function : nds_file_open
 * Address  : 001755a0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * nds_file_open(char *param_1,long param_2,int param_3,int param_4)

{
  uint uVar1;
  int __fd;
  int iVar2;
  int iVar3;
  char *__s1;
  void *pvVar4;
  __off_t _Var5;
  ssize_t sVar6;
  ulong uVar7;
  size_t sVar8;
  FILE *pFVar9;
  uint uVar10;
  long *__ptr;
  char *__filename;
  ulong local_1098;
  long local_1090;
  undefined auStack_1088 [1152];
  char acStack_c08 [1024];
  undefined8 local_808;
  undefined8 uStack_800;
  undefined auStack_7f8 [1007];
  undefined local_409;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined auStack_3f8 [1007];
  undefined local_9;
  long local_8;
  
  __ptr = (long *)0x0;
  local_8 = ___stack_chk_guard;
  iVar3 = 1;
  if (param_4 != 0) {
    iVar3 = 0x8001;
  }
  if ((param_1 == (char *)0x0) || (__fd = open(param_1,0), __fd < 0)) goto LAB_00175820;
  __ptr = (long *)malloc(0x20);
  if (__ptr == (long *)0x0) {
    close(__fd);
    goto LAB_00175820;
  }
  __s1 = strrchr(param_1,0x2e);
  if (__s1 == (char *)0x0) {
LAB_0017598c:
    close(__fd);
  }
  else {
    __ptr[1] = 0;
    iVar2 = strcasecmp(__s1,".nds");
    if (iVar2 == 0) {
      *__ptr = (long)__fd;
      *(undefined4 *)(__ptr + 3) = 0;
      _Var5 = lseek(__fd,0,2);
      *(undefined *)((long)__ptr + 0x1c) = 1;
      __ptr[2] = CONCAT44((int)_Var5,(int)_Var5);
      if (param_3 == 0) {
        lseek(__fd,0,0);
        pvVar4 = mmap((void *)0x0,(ulong)*(uint *)((long)__ptr + 0x14),1,iVar3,__fd,0);
        __ptr[1] = (long)pvVar4;
        if (pvVar4 != (void *)0xffffffffffffffff) goto LAB_00175820;
        puts("Could not mmap cached ROM.");
        puts("Trying again with trimming enabled.");
      }
      lseek(__fd,0x80,0);
      sVar6 = read(__fd,(void *)((long)__ptr + 0x14),4);
      if (sVar6 < 1) {
        puts("ERROR: could not read trim size from header");
        uVar10 = *(uint *)((long)__ptr + 0x14);
      }
      else {
        uVar10 = *(uint *)((long)__ptr + 0x14);
        if ((uVar10 == 0) || (*(uint *)(__ptr + 2) < uVar10)) {
          __printf_chk(1,"WARNING: invalid trim size %08x/%08x\n");
          uVar10 = *(uint *)(__ptr + 2);
          *(uint *)((long)__ptr + 0x14) = uVar10;
        }
      }
      __printf_chk(1,"Trimmed ROM size to %d bytes.\n",uVar10);
      lseek(__fd,0,0);
      pvVar4 = mmap((void *)0x0,(ulong)*(uint *)((long)__ptr + 0x14),1,iVar3,__fd,0);
      __ptr[1] = (long)pvVar4;
      if (pvVar4 != (void *)0xffffffffffffffff) goto LAB_00175820;
      puts("Could not mmap cached ROM.");
      puts("ERROR: Total failure on uncached ROM mmap.");
      goto LAB_0017598c;
    }
    close(__fd);
    if (param_2 == 0) {
      __filename = (char *)0x0;
    }
    else {
      local_808 = 0;
      uStack_800 = 0;
      memset(auStack_7f8,0,0x3f0);
      local_408 = 0;
      uStack_400 = 0;
      memset(auStack_3f8,0,0x3f0);
      __filename = auStack_1088 + 0x80;
      __sprintf_chk(__filename,1,0x400,"%s%cunzipped_rom.nds",param_2,0x2f);
      __sprintf_chk(acStack_c08,1,0x400,"%s%ccache_info",param_2,0x2f);
      iVar3 = __xstat(0,__filename,(stat *)auStack_1088);
      if ((iVar3 == 0) && (pFVar9 = fopen(__filename,"rb"), pFVar9 != (FILE *)0x0)) {
        fseek(pFVar9,0,2);
        uVar7 = ftell(pFVar9);
        fclose(pFVar9);
        pFVar9 = fopen(acStack_c08,"rb");
        if (pFVar9 != (FILE *)0x0) {
          local_1098 = local_1098 & 0xffffffff00000000;
          local_1090 = 0;
          snprintf((char *)&local_808,0x3ff,"%s",param_1);
          local_409 = 0;
          sVar8 = fread(&local_408,0x400,1,pFVar9);
          if (((((sVar8 == 0) || (sVar8 = fread(&local_1090,8,1,pFVar9), sVar8 == 0)) ||
               (sVar8 = fread(&local_1098,4,1,pFVar9), sVar8 == 0)) ||
              ((uVar7 != (local_1098 & 0xffffffff) || (auStack_1088._88_8_ != local_1090)))) ||
             (iVar3 = strcmp((char *)&local_408,(char *)&local_808), iVar3 != 0)) {
            fclose(pFVar9);
          }
          else {
            __printf_chk(1,"File %s already cached\n",param_1);
            fclose(pFVar9);
            iVar3 = nds_file_open_cached(__ptr,param_2,param_3,param_4);
            if (iVar3 == 0) goto LAB_00175820;
            puts("ERROR: could not open cached file");
          }
        }
      }
      __snprintf_chk(__filename,0x400,1,0x400,"%s%cunzipped_rom.nds",param_2,0x2f);
    }
    iVar3 = strcasecmp(__s1,".zip");
    if (iVar3 == 0) {
      *(undefined4 *)(__ptr + 3) = 1;
      pvVar4 = (void *)unzip_file(param_1,&DAT_00220328,__ptr + 2,__filename);
      __ptr[1] = (long)pvVar4;
LAB_00175764:
      if ((pvVar4 != (void *)0x0) && (uVar10 = *(uint *)(__ptr + 2), uVar10 != 0)) {
        *(uint *)((long)__ptr + 0x14) = uVar10;
        *(undefined *)((long)__ptr + 0x1c) = 0;
        if (param_2 == 0) {
          if (param_3 != 0) {
            uVar1 = *(uint *)((long)pvVar4 + 0x80);
            *(uint *)((long)__ptr + 0x14) = uVar1;
            if (uVar1 == 0 || uVar10 < uVar1) {
              __printf_chk(1,"WARNING: invalid trim size: %08x\n");
              *(undefined4 *)((long)__ptr + 0x14) = *(undefined4 *)(__ptr + 2);
            }
            else {
              pvVar4 = realloc(pvVar4,(ulong)uVar1);
              __ptr[1] = (long)pvVar4;
              __printf_chk(1,"Trimmed ROM size to %d bytes. (compressed in RAM)\n",
                           *(undefined4 *)((long)__ptr + 0x14));
            }
          }
          goto LAB_00175820;
        }
        local_408 = 0;
        uStack_400 = 0;
        memset(auStack_3f8,0,0x3f0);
        __sprintf_chk(&local_808,1,0x400,"%s%cunzipped_rom.nds",param_2,0x2f);
        __sprintf_chk(acStack_c08,1,0x400,"%s%ccache_info",param_2,0x2f);
        iVar3 = __xstat(0,(char *)&local_808,(stat *)auStack_1088);
        if ((iVar3 == 0) && (pFVar9 = fopen((char *)&local_808,"rb"), pFVar9 != (FILE *)0x0)) {
          fseek(pFVar9,0,2);
          local_1098 = ftell(pFVar9);
          fclose(pFVar9);
          if (local_1098 != uVar10) {
            puts("ERROR: can\'t write cache info: file size mismatch");
            goto LAB_001757f0;
          }
          pFVar9 = fopen(acStack_c08,"wb");
          if (pFVar9 == (FILE *)0x0) goto LAB_001757f0;
          local_1090 = auStack_1088._88_8_;
          snprintf((char *)&local_408,0x3ff,"%s",param_1);
          local_9 = 0;
          fwrite(&local_408,0x400,1,pFVar9);
          fwrite(&local_1090,8,1,pFVar9);
          fwrite(&local_1098,4,1,pFVar9);
          fclose(pFVar9);
          __printf_chk(1,"Wrote %s to cache\n",param_1);
        }
        else {
LAB_001757f0:
          puts("ERROR: could not write cache info");
        }
        iVar3 = nds_file_open_cached(__ptr,param_2,param_3,param_4);
        if (iVar3 == 0) goto LAB_00175820;
      }
    }
    else {
      iVar3 = strcasecmp(__s1,".7z");
      if (iVar3 == 0) {
        *(undefined4 *)(__ptr + 3) = 2;
        pvVar4 = (void *)un7z_file(param_1,&DAT_00220328,__ptr + 2,__filename);
        __ptr[1] = (long)pvVar4;
        goto LAB_00175764;
      }
      iVar3 = strcasecmp(__s1,".rar");
      if (iVar3 == 0) {
        *(undefined4 *)(__ptr + 3) = 3;
        pvVar4 = (void *)unrar_file(param_1,&DAT_00220328,__ptr + 2,__filename);
        __ptr[1] = (long)pvVar4;
        goto LAB_00175764;
      }
    }
  }
  free(__ptr);
  __ptr = (long *)0x0;
LAB_00175820:
  if (local_8 - ___stack_chk_guard == 0) {
    return __ptr;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


