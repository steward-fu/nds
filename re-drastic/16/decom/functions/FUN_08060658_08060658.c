/*
 * Ghidra decompilation
 *
 * Function : FUN_08060658
 * Address  : 08060658
 * Program  : drastic16
 */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

int * FUN_08060658(char *param_1,int param_2,int param_3)

{
  int iVar1;
  int *__ptr;
  char *__s1;
  int iVar2;
  __off_t _Var3;
  void *pvVar4;
  ssize_t sVar5;
  uint uVar6;
  size_t sVar7;
  FILE *pFVar8;
  uint uVar9;
  char *__s;
  uint auStack_1090 [2];
  undefined8 local_1088;
  stat sStack_1080;
  char acStack_1028 [1024];
  char acStack_c28 [1024];
  char acStack_828 [1023];
  undefined local_429;
  char acStack_428 [1023];
  undefined local_29;
  
  if (param_1 == (char *)0x0) {
    return (int *)0x0;
  }
  iVar1 = open(param_1,0);
  if (iVar1 < 0) {
    return (int *)0x0;
  }
  __ptr = (int *)malloc(0x18);
  if ((__ptr != (int *)0x0) && (__s1 = strrchr(param_1,0x2e), __s1 != (char *)0x0)) {
    __ptr[1] = 0;
    iVar2 = strcasecmp(__s1,".nds");
    if (iVar2 != 0) {
      close(iVar1);
      if (param_2 == 0) {
        __s = (char *)0x0;
      }
      else {
        memset(acStack_828,0,0x400);
        memset(acStack_428,0,0x400);
        sprintf(acStack_1028,"%s%cunzipped_rom.nds",param_2,0x2f);
        sprintf(acStack_c28,"%s%ccache_info",param_2,0x2f);
        uVar6 = __xstat(3,acStack_1028,&sStack_1080);
        if ((uVar6 == 0) && (pFVar8 = fopen(acStack_1028,"rb"), pFVar8 != (FILE *)0x0)) {
          fseek(pFVar8,0,2);
          uVar9 = ftell(pFVar8);
          fclose(pFVar8);
          pFVar8 = fopen(acStack_c28,"rb");
          if (pFVar8 != (FILE *)0x0) {
            local_1088 = 0;
            auStack_1090[0] = uVar6;
            snprintf(acStack_828,0x3ff,"%s",param_1);
            local_429 = 0;
            sVar7 = fread(acStack_428,0x400,1,pFVar8);
            if ((((sVar7 != 0) && (sVar7 = fread(&local_1088,8,1,pFVar8), sVar7 != 0)) &&
                (sVar7 = fread(auStack_1090,4,1,pFVar8), sVar7 != 0)) && (uVar9 == auStack_1090[0]))
            {
              if ((sStack_1080.st_mtim.tv_sec >> 0x1f == local_1088._4_4_ &&
                   sStack_1080.st_mtim.tv_sec == (int)local_1088) &&
                 (iVar1 = strcmp(acStack_428,acStack_828), iVar1 == 0)) {
                printf("File %s already cached\n",param_1);
                fclose(pFVar8);
                iVar1 = FUN_080604e4(__ptr,param_2,param_3);
                if (iVar1 == 0) {
                  return __ptr;
                }
                puts("ERROR: could not open cached file");
                goto LAB_08060868;
              }
            }
            fclose(pFVar8);
          }
        }
LAB_08060868:
        __s = acStack_1028;
        snprintf(__s,0x400,"%s%cunzipped_rom.nds",param_2,0x2f);
      }
      iVar1 = strcasecmp(__s1,".zip");
      if (iVar1 == 0) {
        __ptr[4] = 1;
        pvVar4 = (void *)FUN_080963b4(param_1,&DAT_080e8920,__ptr + 2,__s);
        __ptr[1] = (int)pvVar4;
      }
      else {
        iVar1 = strcasecmp(__s1,".7z");
        if (iVar1 == 0) {
          __ptr[4] = 2;
          pvVar4 = (void *)FUN_08094678(param_1,&DAT_080e8920,__ptr + 2,__s);
          __ptr[1] = (int)pvVar4;
        }
        else {
          iVar1 = strcasecmp(__s1,".rar");
          if (iVar1 != 0) goto LAB_080607c0;
          __ptr[4] = 3;
          pvVar4 = (void *)FUN_08096b94(param_1,&DAT_080e8920,__ptr + 2,__s);
          __ptr[1] = (int)pvVar4;
        }
      }
      if ((pvVar4 == (void *)0x0) || (uVar6 = __ptr[2], uVar6 == 0)) goto LAB_080607c0;
      __ptr[3] = uVar6;
      *(undefined *)(__ptr + 5) = 0;
      if (param_2 == 0) {
        if (param_3 == 0) {
          return __ptr;
        }
        uVar9 = *(uint *)((int)pvVar4 + 0x80);
        __ptr[3] = uVar9;
        if ((uVar9 != 0) && (uVar9 <= uVar6)) {
          pvVar4 = realloc(pvVar4,uVar9);
          __ptr[1] = (int)pvVar4;
          return __ptr;
        }
        printf("WARNING: invalid trim size: %08x\n");
        __ptr[3] = __ptr[2];
        return __ptr;
      }
      memset(acStack_428,0,0x400);
      sprintf(acStack_828,"%s%cunzipped_rom.nds",param_2,0x2f);
      sprintf(acStack_c28,"%s%ccache_info",param_2,0x2f);
      iVar1 = __xstat(3,acStack_828,&sStack_1080);
      if ((iVar1 == 0) && (pFVar8 = fopen(acStack_828,"rb"), pFVar8 != (FILE *)0x0)) {
        fseek(pFVar8,0,2);
        auStack_1090[0] = ftell(pFVar8);
        fclose(pFVar8);
        if (uVar6 != auStack_1090[0]) {
          puts("ERROR: can\'t write cache info: file size mismatch");
          goto LAB_08060988;
        }
        pFVar8 = fopen(acStack_c28,"wb");
        if (pFVar8 == (FILE *)0x0) goto LAB_08060988;
        local_1088 = VectorShiftRight(CONCAT44(sStack_1080.st_mtim.tv_sec,sStack_1080.st_mtim.tv_sec
                                              ),0x20);
        snprintf(acStack_428,0x3ff,"%s",param_1);
        local_29 = 0;
        fwrite(acStack_428,0x400,1,pFVar8);
        fwrite(&local_1088,8,1,pFVar8);
        fwrite(auStack_1090,4,1,pFVar8);
        fclose(pFVar8);
        printf("Wrote %s to cache\n",param_1);
      }
      else {
LAB_08060988:
        puts("ERROR: could not write cache info");
      }
      iVar1 = FUN_080604e4(__ptr,param_2,param_3);
      if (iVar1 == 0) {
        return __ptr;
      }
      goto LAB_080607c0;
    }
    __ptr[4] = 0;
    *__ptr = iVar1;
    _Var3 = lseek(iVar1,0,2);
    *(undefined *)(__ptr + 5) = 1;
    __ptr[2] = _Var3;
    __ptr[3] = _Var3;
    if (param_3 != 0) goto LAB_08060754;
    while( true ) {
      lseek(iVar1,0,0);
      pvVar4 = mmap((void *)0x0,__ptr[3],1,1,iVar1,0);
      __ptr[1] = (int)pvVar4;
      if (pvVar4 != (void *)0xffffffff) {
        return __ptr;
      }
      puts("Could not mmap cached ROM.");
      if (param_3 != 0) break;
      puts("Trying again with trimming enabled.");
      param_3 = 1;
LAB_08060754:
      lseek(iVar1,0x80,0);
      sVar5 = read(iVar1,__ptr + 3,4);
      if (sVar5 < 1) {
        puts("ERROR: could not read trim size from header");
      }
      else if ((__ptr[3] == 0) || ((uint)__ptr[2] < (uint)__ptr[3])) {
        printf("WARNING: invalid trim size %08x/%08x\n");
        __ptr[3] = __ptr[2];
      }
    }
    puts("ERROR: Total failure on uncached ROM mmap.");
  }
  close(iVar1);
LAB_080607c0:
  if (__ptr != (int *)0x0) {
    free(__ptr);
  }
  return (int *)0x0;
}


