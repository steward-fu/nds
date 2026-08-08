/*
 * Ghidra decompilation
 *
 * Function : FUN_08095e94
 * Address  : 08095e94
 * Program  : drastic16
 */


undefined4
FUN_08095e94(char *param_1,char *param_2,uint *param_3,void *param_4,uint param_5,int param_6)

{
  char cVar1;
  int __fd;
  ssize_t sVar2;
  char *pcVar3;
  int iVar4;
  char *extraout_r1;
  char *__whence;
  void *pvVar5;
  char *__s;
  uint uVar6;
  uint uVar7;
  size_t __n;
  void *__buf;
  uint __nbytes;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint in_stack_fffff92c;
  int local_6c8;
  void *local_6a0;
  void *local_69c;
  int local_698;
  uint local_694;
  int local_690;
  int local_68c;
  int local_688;
  void *local_660;
  uint local_65c;
  void *local_654;
  uint local_650;
  undefined4 local_640;
  undefined4 local_63c;
  undefined auStack_429 [1029];
  
  __fd = open64(param_1,0);
  __buf = (void *)((uint)auStack_429 & 0xfffffe00);
  if (__fd == -1) {
    printf("ERROR: could not open zip file %s.\n",param_1);
    return 0xffffffff;
  }
  uVar7 = 0;
  local_6c8 = 6;
  while( true ) {
    uVar6 = uVar7 & 0x1ff;
    if (uVar6 == 0) {
      __nbytes = 0x200;
    }
    else {
      __nbytes = 0x400;
    }
    sVar2 = read(__fd,__buf,__nbytes);
    __s = (char *)((int)__buf + uVar6 + 0x1e);
    if (sVar2 < 1) {
      printf("ERROR: Couldn\'t read header for %s (partial unzip)\n",param_1);
      goto LAB_08096014;
    }
    local_688 = CONCAT31(*(undefined3 *)((int)__buf + uVar6 + 1),*(undefined *)((int)__buf + uVar6))
    ;
    if (local_688 != 0x4034b50) {
      printf("ERROR: %s is not a valid zip file.\n",param_1);
      goto LAB_08096014;
    }
    uVar12 = (uint)*(ushort *)((int)__buf + uVar6 + 0x1a);
    uVar10 = (uint)*(ushort *)((int)__buf + uVar6 + 8);
    iVar9 = uVar12 + 0x1e + (uint)*(ushort *)((int)__buf + uVar6 + 0x1c);
    uVar11 = *(uint *)((int)__buf + uVar6 + 0x16);
    uVar8 = *(uint *)((int)__buf + uVar6 + 0x12);
    if (__nbytes <= uVar6 + 1 + uVar12) {
      printf("ERROR: Unzip partial can\'t handle large file names (failed on size %d)\n",uVar12);
      goto LAB_08096014;
    }
    cVar1 = __s[uVar12];
    __s[uVar12] = '\0';
    pcVar3 = strrchr(__s,0x2e);
    __whence = param_2;
    if ((pcVar3 != (char *)0x0) &&
       (iVar4 = strcmp(pcVar3 + 1,param_2), __whence = extraout_r1, iVar4 == 0)) {
      if (param_5 == 0 || param_4 == (void *)0x0) {
        close(__fd);
        *param_3 = uVar11;
        return 0;
      }
      if (uVar11 < param_5 + param_6) {
        return 0xffffffff;
      }
      uVar7 = (__nbytes - uVar6) - iVar9;
      pvVar5 = (void *)((int)__buf + iVar9 + uVar6);
      __s[uVar12] = cVar1;
      if (uVar10 == 0) {
        if (param_5 < uVar7) {
          memcpy(param_4,pvVar5,param_5);
          goto LAB_0809613c;
        }
        memcpy(param_4,pvVar5,uVar7);
        param_5 = param_5 - uVar7;
        pvVar5 = (void *)((int)param_4 + uVar7);
        goto joined_r0x080961d8;
      }
      if (uVar10 != 8) {
        printf("ERROR: Unhandled zip compression method %x.\n",uVar10);
        goto LAB_0809613c;
      }
      local_640 = 0;
      local_63c = 0;
      local_660 = pvVar5;
      local_654 = param_4;
      if (param_6 != 0) {
        local_650 = uVar8;
        pvVar5 = malloc(0x8000);
        if (uVar8 <= uVar7) {
          uVar7 = uVar8;
        }
        if (pvVar5 == (void *)0x0) goto LAB_08096014;
        iVar9 = inflateBackInit_(&local_660,0xf,pvVar5,"1.2.3",0x38);
        local_65c = uVar7;
        if (iVar9 == 0) {
          local_694 = param_5;
          local_690 = param_6;
          local_6a0 = param_4;
          local_69c = __buf;
          local_698 = __fd;
          local_68c = iVar9;
          inflateBack(&local_660,&UINT_08094554,&local_6a0,FUN_08094454,&local_6a0);
          inflateBackEnd(&local_660);
          close(__fd);
          if (local_694 == 0) {
            free(pvVar5);
            return 0;
          }
        }
        free(pvVar5);
        goto LAB_0809613c;
      }
      local_650 = param_5;
      iVar9 = inflateInit2_(&local_660,0xfffffff1,"1.2.3",0x38);
      if (uVar8 <= uVar7) {
        uVar7 = uVar8;
      }
      local_65c = uVar7;
      if (iVar9 != 0) goto LAB_0809613c;
      iVar9 = inflate(&local_660,2);
      if (local_650 == 0) {
        *param_3 = param_5;
        inflateEnd(&local_660);
        close(__fd);
        return 0;
      }
      uVar7 = uVar8 - uVar7;
      if (iVar9 != -5) {
        printf("ERROR: %s could not be decompressed.\n",param_1);
        goto LAB_08096014;
      }
      local_65c = 0x200;
      local_660 = __buf;
      if ((uVar7 == 0) || (sVar2 = read(__fd,__buf,0x200), 0 < sVar2)) {
        inflateEnd(&local_660);
        goto LAB_0809613c;
      }
      uVar6 = uVar7;
      if (0x1ff < uVar7) {
        uVar6 = 0x200;
      }
      printf("ERROR: %s has incomplete size (inflate @ %d/%d, %d).\n",param_1,uVar7,uVar8,uVar6);
      goto LAB_08096014;
    }
    local_6c8 = local_6c8 + -1;
    uVar7 = uVar7 + uVar8 + iVar9;
    if (local_6c8 == 0) break;
    lseek64(__fd,(ulonglong)in_stack_fffff92c << 0x20,(int)__whence);
  }
  printf("ERROR: Stopped looking through %s because it has too many files (> %d)\n",param_1,6,0);
LAB_08096014:
  close(__fd);
  return 0xffffffff;
joined_r0x080961d8:
  if (param_5 == 0) {
LAB_0809613c:
    *param_3 = uVar11;
    close(__fd);
    return 0;
  }
  __n = param_5;
  if (0x1ff < param_5) {
    __n = 0x200;
  }
  sVar2 = read(__fd,__buf,0x200);
  if (sVar2 < 1) {
    printf("ERROR: %s has incomplete size (uncompressed).\n",param_1);
    goto LAB_08096014;
  }
  memcpy(pvVar5,__buf,__n);
  param_5 = param_5 - __n;
  pvVar5 = (void *)((int)pvVar5 + __n);
  goto joined_r0x080961d8;
}


