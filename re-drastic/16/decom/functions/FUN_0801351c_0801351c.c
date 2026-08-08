/*
 * Ghidra decompilation
 *
 * Function : FUN_0801351c
 * Address  : 0801351c
 * Program  : drastic16
 */


void FUN_0801351c(void **param_1)

{
  int iVar1;
  size_t sVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  void *pvVar8;
  size_t sVar9;
  int iVar10;
  void *pvVar11;
  void *pvVar12;
  int iVar13;
  
  memset(param_1 + 0x6c10,0,0x8000);
  memset(param_1 + 0x8c10,0,0x8000);
  *(undefined *)((int)param_1 + 0x1b287) = 3;
  *(undefined2 *)(param_1 + 0x6c5c) = 0x3ff;
  *(undefined *)((int)param_1 + 0x23281) = 3;
  *(undefined2 *)(param_1 + 0x8c5c) = 0x3ff;
  *(undefined2 *)(param_1 + 0x8c5d) = 0x800f;
  *(undefined2 *)((int)param_1 + 0x23176) = 0x7f;
  *(undefined2 *)((int)param_1 + 0x1b1e2) = 0xff;
  *(undefined2 *)(param_1 + 0x6cd1) = 1;
  *(undefined2 *)(param_1 + 0x8cd0) = 1;
  *(undefined2 *)(param_1 + 0x6cd0) = 1;
  memset(*param_1,0,0x400000);
  memset(param_1[1],0,0x8000);
  memset(param_1[2],0,0x8000);
  memset(param_1[3],0,0x4000);
  memset(param_1 + 4,0,0x10000);
  memset(param_1[0x5404],0,0x20000);
  memset(param_1[0x5405],0,0x20000);
  memset(param_1[0x5406],0,0x20000);
  memset(param_1[0x5407],0,0x20000);
  memset(param_1[0x5408],0,0x10000);
  memset(param_1[0x5409],0,0x4000);
  memset(param_1[0x540a],0,0x4000);
  memset(param_1[0x540b],0,0x8000);
  memset(param_1[0x540c],0,0x4000);
  memset(param_1 + 0x1ac10,0,0x20000);
  memset(param_1[0x540d],0,0x4000);
  memset(param_1 + 0x5810,0,0x800);
  memset(param_1 + 0x5a10,0,0x800);
  memset(param_1 + 0x5410,0,0x800);
  memset(param_1 + 0x5610,0,0x800);
  *(undefined *)(param_1 + 0x3f207) = 0;
  *(undefined *)((int)param_1 + 0xfc81d) = 0;
  FUN_0800cf5c(param_1);
  FUN_08010e2c(param_1);
  FUN_08011bc8(param_1);
  puts("  Setting up ARM9 memory map.");
  pvVar11 = param_1[0x3ee8b];
  uVar3 = 0;
  iVar10 = *(int *)((int)pvVar11 + 0x800004);
  iVar1 = 0x200000;
LAB_08013874:
  do {
    iVar7 = iVar1;
    uVar5 = uVar3 >> 0xb;
    if (uVar3 < 0x10000000) {
      uVar4 = uVar3 >> 0x17;
      iVar13 = *(int *)((int)pvVar11 + 0x800000);
      iVar1 = iVar13 + uVar4 * 0x30;
      if (*(char *)(iVar1 + 0x2c) == '\0') {
        iVar6 = *(int *)(iVar1 + 4) + (uVar3 & *(uint *)(iVar13 + uVar4 * 0x30));
      }
      else {
        iVar6 = 0;
      }
      if (*(char *)(iVar1 + 0x2d) == '\0') {
        iVar1 = *(int *)(iVar1 + 4) + (uVar3 & *(uint *)(iVar13 + uVar4 * 0x30));
      }
      else {
        iVar1 = 0;
      }
LAB_0801384c:
      if (iVar6 != 0) {
        uVar4 = iVar6 - uVar3 >> 2;
        if (iVar6 != iVar1) {
          uVar4 = uVar4 | 0x40000000;
        }
        *(uint *)((int)pvVar11 + uVar5 * 4) = uVar4;
        uVar3 = uVar3 + 0x800;
        iVar1 = iVar7 + -1;
        if (iVar7 + -1 == 0) break;
        goto LAB_08013874;
      }
    }
    else if ((0xfffeffff < uVar3) &&
            (*(char *)(*(int *)((int)pvVar11 + 0x800008) + 0x2104) == '\x01')) {
      iVar1 = 0;
      iVar6 = iVar10 + 0x10010 + (uVar3 & 0xfff);
      goto LAB_0801384c;
    }
    uVar3 = uVar3 + 0x800;
    *(undefined4 *)((int)pvVar11 + uVar5 * 4) = 0x40000000;
    iVar1 = iVar7 + -1;
  } while (iVar7 + -1 != 0);
  uVar3 = iVar7 - 1;
  puts("  Setting up ARM7 memory map.");
  pvVar11 = param_1[0x3ee8c];
  iVar10 = *(int *)((int)pvVar11 + 0x800004);
  iVar1 = 0x200000;
LAB_08013970:
  do {
    iVar7 = iVar1;
    uVar5 = uVar3 >> 0xb;
    if (uVar3 < 0x10000000) {
      uVar4 = uVar3 >> 0x17;
      iVar13 = *(int *)((int)pvVar11 + 0x800000);
      iVar1 = iVar13 + uVar4 * 0x30;
      if (*(char *)(iVar1 + 0x2c) == '\0') {
        iVar6 = *(int *)(iVar1 + 4) + (uVar3 & *(uint *)(iVar13 + uVar4 * 0x30));
      }
      else {
        iVar6 = 0;
      }
      if (*(char *)(iVar1 + 0x2d) == '\0') {
        iVar1 = *(int *)(iVar1 + 4) + (uVar3 & *(uint *)(iVar13 + uVar4 * 0x30));
      }
      else {
        iVar1 = 0;
      }
LAB_08013948:
      if (iVar6 != 0) {
        uVar4 = iVar6 - uVar3 >> 2;
        if (iVar6 != iVar1) {
          uVar4 = uVar4 | 0x40000000;
        }
        *(uint *)((int)pvVar11 + uVar5 * 4) = uVar4;
        uVar3 = uVar3 + 0x800;
        iVar1 = iVar7 + -1;
        if (iVar7 + -1 == 0) break;
        goto LAB_08013970;
      }
    }
    else if ((0xfffeffff < uVar3) &&
            (*(char *)(*(int *)((int)pvVar11 + 0x800008) + 0x2104) == '\x01')) {
      iVar1 = 0;
      iVar6 = iVar10 + 0x10010 + (uVar3 & 0xfff);
      goto LAB_08013948;
    }
    uVar3 = uVar3 + 0x800;
    *(undefined4 *)((int)pvVar11 + uVar5 * 4) = 0x40000000;
    iVar1 = iVar7 + -1;
  } while (iVar7 + -1 != 0);
  pvVar11 = (void *)(iVar7 + -1);
  pvVar8 = param_1[0x3ee8b];
  printf("Remapping ITCM limit from %x to %x\n",param_1[0x3f1ff],pvVar11);
  pvVar12 = param_1[0x3f1ff];
  if (pvVar12 != (void *)0x0) {
    iVar1 = *(int *)((int)pvVar8 + 0x800004);
LAB_08013a80:
    do {
      uVar3 = (uint)pvVar11 >> 0xb;
      if (pvVar11 < (void *)0x10000000) {
        uVar5 = (uint)pvVar11 >> 0x17;
        iVar10 = *(int *)((int)pvVar8 + 0x800000);
        iVar6 = iVar10 + uVar5 * 0x30;
        if (*(char *)(iVar6 + 0x2c) == '\0') {
          iVar7 = *(int *)(iVar6 + 4) + ((uint)pvVar11 & *(uint *)(iVar10 + uVar5 * 0x30));
        }
        else {
          iVar7 = 0;
        }
        if (*(char *)(iVar6 + 0x2d) == '\0') {
          iVar10 = *(int *)(iVar6 + 4) + ((uint)pvVar11 & *(uint *)(iVar10 + uVar5 * 0x30));
        }
        else {
          iVar10 = 0;
        }
LAB_08013a58:
        if (iVar7 != 0) {
          uVar5 = (uint)(iVar7 - (int)pvVar11) >> 2;
          if (iVar7 != iVar10) {
            uVar5 = uVar5 | 0x40000000;
          }
          pvVar11 = (void *)((int)pvVar11 + 0x800);
          *(uint *)((int)pvVar8 + uVar3 * 4) = uVar5;
          if (pvVar12 == pvVar11) break;
          goto LAB_08013a80;
        }
      }
      else if (((void *)0xfffeffff < pvVar11) &&
              (*(char *)(*(int *)((int)pvVar8 + 0x800008) + 0x2104) == '\x01')) {
        iVar10 = 0;
        iVar7 = iVar1 + 0x10010 + ((uint)pvVar11 & 0xfff);
        goto LAB_08013a58;
      }
      pvVar11 = (void *)((int)pvVar11 + 0x800);
      *(undefined4 *)((int)pvVar8 + uVar3 * 4) = 0x40000000;
    } while (pvVar12 != pvVar11);
    param_1[0x3f1ff] = (void *)0x0;
  }
  sVar9 = (int)param_1[0x3f1fe] - (int)param_1[0x3f1fd];
  pvVar11 = param_1[0x3ee8b];
  printf("Remapping DTCM from %x, %x to %x, %x\n",param_1[0x3f1fd],sVar9,0,0);
  if (sVar9 != 0) {
    pvVar12 = param_1[0x3f1fd];
    iVar1 = *(int *)((int)pvVar11 + 0x800004);
    sVar2 = sVar9;
    pvVar8 = pvVar12;
LAB_08013bc4:
    do {
      uVar3 = (uint)pvVar8 >> 0xb;
      if (pvVar8 < (void *)0x10000000) {
        uVar5 = (uint)pvVar8 >> 0x17;
        iVar6 = *(int *)((int)pvVar11 + 0x800000);
        iVar7 = iVar6 + uVar5 * 0x30;
        if (*(char *)(iVar7 + 0x2c) == '\0') {
          iVar10 = *(int *)(iVar7 + 4) + ((uint)pvVar8 & *(uint *)(iVar6 + uVar5 * 0x30));
        }
        else {
          iVar10 = 0;
        }
        if (*(char *)(iVar7 + 0x2d) == '\0') {
          iVar7 = *(int *)(iVar7 + 4) + ((uint)pvVar8 & *(uint *)(iVar6 + uVar5 * 0x30));
        }
        else {
          iVar7 = 0;
        }
LAB_08013b9c:
        if (iVar10 != 0) {
          uVar5 = (uint)(iVar10 - (int)pvVar8) >> 2;
          if (iVar10 != iVar7) {
            uVar5 = uVar5 | 0x40000000;
          }
          sVar2 = sVar2 - 0x800;
          *(uint *)((int)pvVar11 + uVar3 * 4) = uVar5;
          pvVar8 = (void *)((int)pvVar8 + 0x800);
          if (sVar2 == 0) break;
          goto LAB_08013bc4;
        }
      }
      else if (((void *)0xfffeffff < pvVar8) &&
              (*(char *)(*(int *)((int)pvVar11 + 0x800008) + 0x2104) == '\x01')) {
        iVar7 = 0;
        iVar10 = iVar1 + 0x10010 + ((uint)pvVar8 & 0xfff);
        goto LAB_08013b9c;
      }
      sVar2 = sVar2 - 0x800;
      pvVar8 = (void *)((int)pvVar8 + 0x800);
      *(undefined4 *)((int)pvVar11 + uVar3 * 4) = 0x40000000;
    } while (sVar2 != 0);
    if (pvVar12 < (void *)0x4000000) {
      if (0x4000000 < sVar9 + (int)pvVar12) {
        sVar9 = 0x4000000 - (int)pvVar12;
      }
      if ((int)pvVar12 + 0xfe000000U < 0x1000000) {
        puts("DTCM moved off of main RAM, remapping main RAM to it.");
        pvVar11 = param_1[0x3f1fd];
        pvVar8 = param_1[0x3f203];
        sVar2 = __aeabi_uidiv((uint)pvVar11 & 0x3fffff,param_1[0x3f200]);
        remap_file_pages((void *)((int)pvVar11 + (int)pvVar8),sVar9,0,sVar2,0);
      }
      else if (pvVar12 < (void *)0x2000000) {
        FUN_0800cbc4(param_1,param_1[0x3f1ff]);
      }
      else {
        FUN_0800cf5c(param_1);
      }
    }
  }
  iVar1 = 0;
  param_1[0x3f1fd] = (void *)0x0;
  param_1[0x3f1fe] = (void *)0x0;
  FUN_0801d60c(param_1 + 0x3f208);
  FUN_0801ad78(param_1 + 0x3f18e);
  FUN_0801ad78(param_1 + 0x3f1b0);
  FUN_0801da54(param_1 + 0x3f1d2);
  FUN_0801da54(param_1 + 0x3f1e6);
  do {
    sVar9 = __aeabi_uidiv(0xa4000,param_1[0x3f200]);
    pvVar11 = (void *)((int)param_1[0x3f205] + iVar1);
    iVar1 = iVar1 + 0x4000;
    remap_file_pages(pvVar11,0x4000,0,sVar9,0);
  } while (iVar1 != 0x800000);
  FUN_08012248((int)param_1[0x3ee87] + 0x81320,param_1 + 0xac10);
  memcpy((void *)((int)*param_1 + 0x3ffc80),param_1 + 0x1ab90,0x70);
  *(undefined *)((int)*param_1 + 0x3ffc40) = 1;
  return;
}


