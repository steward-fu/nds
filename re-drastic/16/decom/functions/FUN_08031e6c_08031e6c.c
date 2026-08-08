/*
 * Ghidra decompilation
 *
 * Function : FUN_08031e6c
 * Address  : 08031e6c
 * Program  : drastic16
 */


void FUN_08031e6c(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  ushort uVar4;
  short sVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  undefined2 uVar9;
  undefined uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  
  iVar11 = param_1 + param_2 * 0x88;
  uVar13 = (param_3 << 0x13) >> 0x1b;
  iVar7 = *(int *)(param_1 + 0x74);
  iVar1 = ((param_3 << 0x1a) >> 0x1c) * 0x4000;
  iVar2 = uVar13 * 0x800;
  iVar8 = iVar1 + *(int *)(param_1 + 0x78);
  *(int *)(iVar11 + 0xbc) = iVar1;
  iVar7 = iVar2 + iVar7;
  uVar4 = *(ushort *)(iVar11 + 0x108);
  *(int *)(iVar11 + 0xb0) = iVar8;
  *(int *)(iVar11 + 0xb8) = iVar2;
  *(int *)(iVar11 + 0xac) = iVar7;
  *(short *)(iVar11 + 0x108) = (short)param_3;
  if (*(char *)(param_1 + 0x97) == '\x01') {
    uVar3 = SIMDExpandImmediate(1,5,0x1e);
    *(ulonglong *)(iVar11 + 0xac) = CONCAT44(iVar8,iVar7) & ~uVar3;
  }
  uVar12 = param_3 ^ uVar4;
  if ((uVar12 & 3) != 0) {
    FUN_08031b14(param_1);
  }
  if (param_2 < 2) {
    *(undefined4 *)(iVar11 + 0xa4) =
         *(undefined4 *)
          (*(int *)(param_1 + 0x10) + (param_2 + ((int)(param_3 << 0x12) >> 0x1f) * -2) * 4);
    return;
  }
  if ((*(uint *)(param_1 + 0x70) & 7) == 6) {
    *(undefined4 *)(iVar11 + 0xb4) = 0;
    if (*(ushort *)(iVar11 + 0x108) >> 0xe == 0) {
      uVar9 = 0x1ff;
      *(undefined2 *)(iVar11 + 0x116) = 0x3ff;
      uVar10 = 10;
    }
    else {
      uVar9 = 0x3ff;
      *(undefined2 *)(iVar11 + 0x116) = 0x1ff;
      uVar10 = 9;
    }
    *(undefined2 *)(iVar11 + 0x118) = uVar9;
    *(undefined *)(iVar11 + 0x11a) = uVar10;
    return;
  }
  iVar1 = uVar13 * 0x4000;
  uVar13 = 1 << ((param_3 << 0x10) >> 0x1e) + 7;
  *(int *)(iVar11 + 0xb4) = iVar1;
  bVar6 = (byte)(param_3 >> 8);
  *(byte *)(iVar11 + 0x11c) = (bVar6 >> 6) + 4;
  *(char *)(iVar11 + 0x11b) = (char)(uVar13 >> 3) + -1;
  if (*(char *)(param_1 + 0x97) == '\x01') {
    *(int *)(iVar11 + 0xb4) = iVar1 + 0x200000;
  }
  if ((uVar12 & 0x84) != 0) {
    FUN_08031d2c(param_1);
  }
  if (uVar13 < 0x101) {
    sVar5 = (short)uVar13 + -1;
    *(byte *)(iVar11 + 0x11a) = (bVar6 >> 6) + 7;
    *(short *)(iVar11 + 0x116) = sVar5;
    *(short *)(iVar11 + 0x118) = sVar5;
    return;
  }
  *(undefined2 *)(iVar11 + 0x116) = 0x1ff;
  *(short *)(iVar11 + 0x118) = (short)(uVar13 >> 1) + -1;
  *(undefined *)(iVar11 + 0x11a) = 9;
  return;
}


