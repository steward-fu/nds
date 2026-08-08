/*
 * Ghidra decompilation
 *
 * Function : FUN_08046d9c
 * Address  : 08046d9c
 * Program  : drastic16
 */


void FUN_08046d9c(int param_1,int param_2,int param_3,int param_4,char param_5,int param_6)

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
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int local_40;
  uint local_38;
  int local_28;
  
  uVar15 = (uint)*(byte *)(param_1 + 0x9a85);
  uVar3 = ((uint)(param_2 << 0xb) >> 0x1b) - 1;
  iVar5 = *(int *)(param_1 + 0x30c);
  iVar10 = param_1 + (iVar5 + 0xffd) * 8;
  iVar4 = *(int *)(param_1 + 0x62c);
  uVar11 = (uint)*(byte *)(iVar10 + 6);
  uVar13 = *(uint *)(param_1 + 0x630);
  local_40 = *(int *)(param_1 + uVar15 * 0x18004 + 0x21a98) - param_6;
  if ((uVar3 < 0x1e) || (uVar6 = (uint)(iVar4 << 3) >> 0x1d, uVar6 == 6 || uVar6 == 1)) {
    iVar9 = uVar15 * 0xa004 + param_1 + 0x4daa8;
  }
  else {
    iVar9 = uVar15 * 0xa004 + param_1 + 0x39aa0;
  }
  if (param_5 == '\0') {
    local_38 = 3;
  }
  else {
    local_38 = 0x43;
  }
  uVar1 = *(ushort *)(param_1 + 0x9a68);
  local_28 = param_4;
  if (0x800 < (int)(param_4 + (uint)uVar1)) {
    local_28 = 0x800 - (uint)uVar1;
  }
  if (0x1800 < local_28 + local_40 + 2U) {
    if (0x1800U - local_40 < 3) {
      return;
    }
    local_28 = 0x17fd - local_40;
  }
  if (0 < local_28) {
    uVar15 = param_3 + 2;
    iVar12 = local_28 + local_40;
    do {
      if (uVar11 < uVar15) {
        if (uVar3 < 0x1e) {
          iVar7 = iVar10 + 8;
          iVar16 = iVar10;
          do {
            iVar8 = iVar7;
            iVar4 = *(int *)(iVar8 + -8);
            uVar2 = *(ushort *)(iVar8 + -4);
            iVar5 = iVar5 + 1;
            uVar11 = (uint)*(byte *)(iVar10 + 8 + (iVar16 - iVar10) + 6);
            iVar16 = iVar16 + 8;
            iVar9 = (uint)*(byte *)(param_1 + 0x9a85) * 0xa004 + param_1 + 0x4daa8;
            iVar7 = iVar8 + 8;
          } while (uVar11 < uVar15);
        }
        else {
          iVar14 = (uint)*(byte *)(param_1 + 0x9a85) * 0xa004;
          iVar7 = iVar10 + 8;
          iVar16 = iVar10;
          do {
            iVar8 = iVar7;
            iVar4 = *(int *)(iVar8 + -8);
            uVar13 = (uint)(iVar4 << 3) >> 0x1d;
            uVar2 = *(ushort *)(iVar8 + -4);
            uVar11 = (uint)*(byte *)(iVar10 + 8 + (iVar16 - iVar10) + 6);
            iVar5 = iVar5 + 1;
            iVar16 = iVar16 + 8;
            iVar9 = param_1 + iVar14 + 0x4daa8;
            if (uVar13 != 6 && uVar13 != 1) {
              iVar9 = param_1 + iVar14 + 0x39aa0;
            }
            iVar7 = iVar8 + 8;
          } while (uVar11 < uVar15);
        }
        iVar10 = iVar8;
        uVar13 = (uint)uVar2;
      }
      iVar16 = *(int *)(iVar9 + 0xa000);
      uVar15 = uVar15 + 1;
      iVar7 = iVar9 + iVar16 * 0x14;
      *(int *)(iVar7 + 4) = param_2;
      *(int *)(iVar9 + iVar16 * 0x14) = iVar4;
      *(short *)(iVar7 + 0x12) = (short)local_40;
      local_40 = local_40 + 1;
      *(uint *)(iVar7 + 8) = local_38;
      *(short *)(iVar7 + 0x10) = (short)uVar13;
      local_38 = local_38 ^ 0x40;
      *(int *)(iVar9 + 0xa000) = iVar16 + 1;
    } while (local_40 != iVar12);
  }
  *(int *)(param_1 + 0x62c) = iVar4;
  *(uint *)(param_1 + 0x630) = uVar13;
  *(int *)(param_1 + 0x30c) = iVar5;
  *(ushort *)(param_1 + 0x9a68) = uVar1 + (short)local_28;
  return;
}


