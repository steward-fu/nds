/*
 * Ghidra decompilation
 *
 * Function : FUN_0800d114
 * Address  : 0800d114
 * Program  : drastic16
 */


void FUN_0800d114(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  size_t sVar6;
  uint uVar7;
  int iVar8;
  size_t sVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint local_3c;
  uint local_38;
  
  sVar9 = *(int *)(param_1 + 0xfc7f8) - *(int *)(param_1 + 0xfc7f4);
  iVar8 = *(int *)(param_1 + 0xfba2c);
  printf("Remapping DTCM from %x, %x to %x, %x\n",*(int *)(param_1 + 0xfc7f4),sVar9,param_2,param_3)
  ;
  if (sVar9 != 0) {
    uVar11 = *(uint *)(param_1 + 0xfc7f4);
    iVar3 = *(int *)(iVar8 + 0x800004);
    sVar6 = sVar9;
    uVar7 = uVar11;
    do {
      while (uVar1 = uVar7 >> 0xb, 0xfffffff < uVar7) {
        if ((0xfffeffff < uVar7) && (*(char *)(*(int *)(iVar8 + 0x800008) + 0x2104) == '\x01')) {
          iVar12 = 0;
          iVar10 = iVar3 + 0x10010 + (uVar7 & 0xfff);
          goto LAB_0800d1f0;
        }
LAB_0800d240:
        sVar6 = sVar6 - 0x800;
        uVar7 = uVar7 + 0x800;
        *(undefined4 *)(iVar8 + uVar1 * 4) = 0x40000000;
        if (sVar6 == 0) goto LAB_0800d254;
      }
      uVar4 = uVar7 >> 0x17;
      iVar12 = *(int *)(iVar8 + 0x800000);
      iVar2 = iVar12 + uVar4 * 0x30;
      if (*(char *)(iVar2 + 0x2c) == '\0') {
        iVar10 = *(int *)(iVar2 + 4) + (uVar7 & *(uint *)(iVar12 + uVar4 * 0x30));
      }
      else {
        iVar10 = 0;
      }
      if (*(char *)(iVar2 + 0x2d) == '\0') {
        iVar12 = *(int *)(iVar2 + 4) + (uVar7 & *(uint *)(iVar12 + uVar4 * 0x30));
      }
      else {
        iVar12 = 0;
      }
LAB_0800d1f0:
      if (iVar10 == 0) goto LAB_0800d240;
      uVar4 = iVar10 - uVar7 >> 2;
      if (iVar10 != iVar12) {
        uVar4 = uVar4 | 0x40000000;
      }
      sVar6 = sVar6 - 0x800;
      *(uint *)(iVar8 + uVar1 * 4) = uVar4;
      uVar7 = uVar7 + 0x800;
    } while (sVar6 != 0);
LAB_0800d254:
    if (uVar11 < 0x4000000) {
      if (0x4000000 < sVar9 + uVar11) {
        sVar9 = 0x4000000 - uVar11;
      }
      if (uVar11 + 0xfe000000 < 0x1000000) {
        puts("DTCM moved off of main RAM, remapping main RAM to it.");
        uVar7 = *(uint *)(param_1 + 0xfc7f4);
        iVar3 = *(int *)(param_1 + 0xfc80c);
        sVar6 = __aeabi_uidiv(uVar7 & 0x3fffff,*(undefined4 *)(param_1 + 0xfc800));
        remap_file_pages((void *)(uVar7 + iVar3),sVar9,0,sVar6,0);
      }
      else if (uVar11 < 0x2000000) {
        FUN_0800cbc4(param_1,*(undefined4 *)(param_1 + 0xfc7fc));
      }
      else {
        FUN_0800cf5c(param_1);
      }
    }
  }
  *(uint *)(param_1 + 0xfc7f4) = param_2;
  *(uint *)(param_1 + 0xfc7f8) = param_2 + param_3;
  local_3c = param_2;
  local_38 = param_3;
  if (param_3 < 0x4001) {
    if (param_3 != 0) {
      iVar3 = *(int *)(param_1 + 0xc);
      iVar10 = param_2 - iVar3;
      uVar7 = param_3;
      do {
        uVar7 = uVar7 - 0x800;
        uVar11 = iVar3 + iVar10;
        iVar3 = iVar3 + 0x800;
        iVar12 = iVar8 + (uVar11 >> 0x15) * 4;
        iVar2 = iVar8 + (uVar11 >> 0x10) * 4;
        *(uint *)(iVar12 + 0x80400c) = *(uint *)(iVar12 + 0x80400c) | 1 << (uVar11 * 0x800 >> 0x1b);
        *(uint *)(iVar2 + 0x80000c) = *(uint *)(iVar2 + 0x80000c) | 1 << (uVar11 * 0x10000 >> 0x1b);
        *(uint *)(iVar8 + (uVar11 >> 0xb) * 4) = (uint)-iVar10 >> 2;
      } while (uVar7 != 0);
      if (param_2 < 0x4000000) {
        iVar8 = *(int *)(param_1 + 0xfc80c);
        sVar9 = __aeabi_uidiv(0x410000,*(undefined4 *)(param_1 + 0xfc800));
        remap_file_pages((void *)(param_2 + iVar8),param_3,0,sVar9,0);
        return;
      }
    }
  }
  else {
    do {
      iVar3 = *(int *)(param_1 + 0xc);
      iVar10 = local_3c - iVar3;
      iVar12 = iVar3 + 0x4000;
      do {
        uVar7 = iVar3 + iVar10;
        iVar3 = iVar3 + 0x800;
        iVar2 = iVar8 + (uVar7 >> 0x15) * 4;
        iVar5 = iVar8 + (uVar7 >> 0x10) * 4;
        *(uint *)(iVar2 + 0x80400c) = *(uint *)(iVar2 + 0x80400c) | 1 << (uVar7 * 0x800 >> 0x1b);
        *(uint *)(iVar5 + 0x80000c) = *(uint *)(iVar5 + 0x80000c) | 1 << (uVar7 * 0x10000 >> 0x1b);
        *(uint *)(iVar8 + (uVar7 >> 0xb) * 4) = (uint)-iVar10 >> 2;
      } while (iVar3 != iVar12);
      if (local_3c < 0x4000000) {
        iVar3 = *(int *)(param_1 + 0xfc80c);
        sVar9 = __aeabi_uidiv(0x410000,*(undefined4 *)(param_1 + 0xfc800));
        remap_file_pages((void *)(local_3c + iVar3),local_38,0,sVar9,0);
      }
      local_38 = local_38 - 0x4000;
      local_3c = local_3c + 0x4000;
    } while (local_38 != 0);
  }
  return;
}


