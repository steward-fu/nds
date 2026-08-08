/*
 * Ghidra decompilation
 *
 * Function : FUN_0807ff08
 * Address  : 0807ff08
 * Program  : drastic16
 */


void FUN_0807ff08(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  uint local_2c;
  
  iVar6 = 0;
  iVar11 = 0;
  iVar7 = param_1 + 0x400;
  iVar8 = param_1 + 0x480;
  iVar3 = param_1;
  do {
    if ((*(char *)(iVar7 + iVar6 + 4) == -1) && (*(byte *)(iVar7 + iVar6 + 5) < 0xfd)) {
      uVar4 = (uint)*(byte *)(iVar3 + 0x405);
      if ((uVar4 < 0xfd) &&
         ((*(undefined *)(iVar8 + uVar4) = 0xff, *(char *)(iVar3 + 0x406) != '\0' &&
          (((int)(uint)*(ushort *)(*(int *)(param_1 + 0x4d8) + 0x12) >> uVar4 & 1U) != 0)))) {
        uVar10 = (uVar4 + 0x3fffffeb) * 4;
        puVar5 = *(uint **)(param_1 + 0x4ac);
        if ((int)uVar10 < 0) {
          uVar10 = (uVar4 + 0x3fffffeb) * -4;
          uVar4 = 0;
        }
        else {
          uVar4 = 0x800000;
        }
        *puVar5 = iVar11 << 0xc | 0xe50b0000U | uVar4 | uVar10;
        *(uint **)(param_1 + 0x4ac) = puVar5 + 1;
      }
      *(undefined *)(iVar3 + 0x405) = 0xff;
    }
    iVar6 = iVar6 + 8;
    iVar11 = iVar11 + 1;
    iVar3 = iVar3 + 8;
  } while (iVar6 != 0x78);
  iVar6 = 0;
  iVar11 = 0;
  iVar3 = param_1;
  do {
    iVar12 = iVar7 + iVar6;
    bVar1 = *(byte *)(iVar12 + 4);
    uVar4 = (uint)bVar1;
    if ((uVar4 != 0xff) && (*(byte *)(iVar12 + 5) != uVar4)) {
      uVar10 = (uint)*(byte *)(iVar3 + 0x405);
      bVar2 = *(byte *)(iVar8 + uVar4);
      if ((uVar4 != uVar10 && uVar10 < 0xfd) &&
         ((*(undefined *)(iVar8 + uVar10) = 0xff, *(char *)(iVar3 + 0x406) != '\0' &&
          (((int)(uint)*(ushort *)(*(int *)(param_1 + 0x4d8) + 0x12) >> uVar10 & 1U) != 0)))) {
        uVar9 = (uVar10 + 0x3fffffeb) * 4;
        bVar13 = (int)uVar9 < 0;
        local_2c = uVar9;
        if (bVar13) {
          local_2c = (uVar10 + 0x3fffffeb) * -4;
          uVar9 = 0;
        }
        puVar5 = *(uint **)(param_1 + 0x4ac);
        if (!bVar13) {
          uVar9 = 0x800000;
        }
        *puVar5 = iVar11 << 0xc | 0xe50b0000U | uVar9 | local_2c;
        *(uint **)(param_1 + 0x4ac) = puVar5 + 1;
      }
      if (uVar4 < 0xfd) {
        *(char *)(iVar8 + uVar4) = (char)iVar11;
      }
      *(byte *)(iVar3 + 0x405) = bVar1;
      if (bVar2 < 0xfd) {
        *(undefined *)(iVar7 + (uint)bVar2 * 8 + 5) = 0xff;
      }
      else {
        iVar12 = *(byte *)(iVar12 + 4) - 0x15;
        uVar4 = iVar12 * 4;
        puVar5 = *(uint **)(param_1 + 0x4ac);
        if ((int)uVar4 < 0) {
          uVar4 = iVar12 * -4;
          uVar10 = 0;
        }
        else {
          uVar10 = 0x800000;
        }
        *puVar5 = iVar11 << 0xc | 0xe51b0000U | uVar10 | uVar4;
        *(uint **)(param_1 + 0x4ac) = puVar5 + 1;
      }
    }
    iVar6 = iVar6 + 8;
    iVar11 = iVar11 + 1;
    iVar3 = iVar3 + 8;
  } while (iVar6 != 0x78);
  return;
}


