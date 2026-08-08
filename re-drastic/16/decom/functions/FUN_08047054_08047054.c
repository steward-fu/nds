/*
 * Ghidra decompilation
 *
 * Function : FUN_08047054
 * Address  : 08047054
 * Program  : drastic16
 */


void FUN_08047054(int param_1,int param_2,int param_3,uint param_4,char param_5,int param_6)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  int local_40;
  uint local_28;
  
  uVar16 = (uint)*(byte *)(param_1 + 0x9a85);
  uVar3 = ((uint)(param_2 << 0xb) >> 0x1b) - 1;
  iVar5 = *(int *)(param_1 + 0x30c);
  iVar11 = param_1 + (iVar5 + 0xffd) * 8;
  iVar4 = *(int *)(param_1 + 0x62c);
  uVar13 = (uint)*(byte *)(iVar11 + 6);
  uVar12 = *(uint *)(param_1 + 0x630);
  local_40 = *(int *)(param_1 + uVar16 * 0x18004 + 0x21a98) - param_6;
  if ((uVar3 < 0x1e) || (uVar6 = (uint)(iVar4 << 3) >> 0x1d, uVar6 == 6 || uVar6 == 1)) {
    iVar9 = uVar16 * 0xa004 + param_1 + 0x4daa8;
  }
  else {
    iVar9 = uVar16 * 0xa004 + param_1 + 0x39aa0;
  }
  if (param_5 == '\0') {
    uVar10 = 4;
  }
  else {
    uVar10 = 0x44;
  }
  uVar1 = *(ushort *)(param_1 + 0x9a68);
  local_28 = param_4;
  if (0x800 < (int)(param_4 + uVar1)) {
    local_28 = 0x800 - uVar1;
  }
  if (0x1800 < local_40 + local_28 * 2 + 2) {
    if (0x1800U - local_40 < 4) {
      return;
    }
    local_28 = 0x17fcU - local_40 >> 1;
  }
  if (0 < (int)local_28) {
    uVar16 = param_3 + 3;
    iVar14 = local_40 + local_28 * 2;
    do {
      if (uVar13 < uVar16) {
        if (uVar3 < 0x1e) {
          iVar7 = iVar11 + 8;
          iVar17 = iVar11;
          do {
            iVar8 = iVar7;
            iVar4 = *(int *)(iVar8 + -8);
            uVar2 = *(ushort *)(iVar8 + -4);
            iVar5 = iVar5 + 1;
            uVar13 = (uint)*(byte *)(iVar11 + 8 + (iVar17 - iVar11) + 6);
            iVar17 = iVar17 + 8;
            iVar9 = (uint)*(byte *)(param_1 + 0x9a85) * 0xa004 + param_1 + 0x4daa8;
            iVar7 = iVar8 + 8;
          } while (uVar13 < uVar16);
        }
        else {
          iVar15 = (uint)*(byte *)(param_1 + 0x9a85) * 0xa004;
          iVar7 = iVar11 + 8;
          iVar17 = iVar11;
          do {
            iVar8 = iVar7;
            iVar4 = *(int *)(iVar8 + -8);
            uVar12 = (uint)(iVar4 << 3) >> 0x1d;
            uVar2 = *(ushort *)(iVar8 + -4);
            uVar13 = (uint)*(byte *)(iVar11 + 8 + (iVar17 - iVar11) + 6);
            iVar5 = iVar5 + 1;
            iVar17 = iVar17 + 8;
            iVar9 = param_1 + iVar15 + 0x4daa8;
            if (uVar12 != 6 && uVar12 != 1) {
              iVar9 = param_1 + iVar15 + 0x39aa0;
            }
            iVar7 = iVar8 + 8;
          } while (uVar13 < uVar16);
        }
        iVar11 = iVar8;
        uVar12 = (uint)uVar2;
      }
      iVar17 = *(int *)(iVar9 + 0xa000);
      uVar16 = uVar16 + 2;
      iVar7 = iVar9 + iVar17 * 0x14;
      *(int *)(iVar7 + 4) = param_2;
      *(int *)(iVar9 + iVar17 * 0x14) = iVar4;
      *(short *)(iVar7 + 0x12) = (short)local_40;
      local_40 = local_40 + 2;
      *(short *)(iVar7 + 0x10) = (short)uVar12;
      *(undefined4 *)(iVar7 + 8) = uVar10;
      *(int *)(iVar9 + 0xa000) = iVar17 + 1;
    } while (local_40 != iVar14);
  }
  *(int *)(param_1 + 0x62c) = iVar4;
  *(uint *)(param_1 + 0x630) = uVar12;
  *(int *)(param_1 + 0x30c) = iVar5;
  *(ushort *)(param_1 + 0x9a68) = uVar1 + (short)local_28;
  return;
}


