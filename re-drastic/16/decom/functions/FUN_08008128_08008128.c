/*
 * Ghidra decompilation
 *
 * Function : FUN_08008128
 * Address  : 08008128
 * Program  : drastic16
 */


uint FUN_08008128(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  
  if (param_2 != 0x1a2) {
    if (param_2 < 0x1a3) {
      if (param_2 != 0x108) {
        if (param_2 < 0x109) {
          if ((param_2 != 0x100) && (param_2 != 0x104)) goto LAB_08008210;
        }
        else if (param_2 != 0x10c) {
          if (param_2 == 0x1a0) goto LAB_080082b8;
          goto LAB_08008210;
        }
      }
      iVar5 = (param_2 - 0x100 >> 2) * 0x20 + 0x1da5188;
      iVar2 = *(int *)(param_1 + 0xfba1c) + iVar5;
      if ((*(ushort *)(iVar2 + 0x1a) & 4) == 0) {
        if ((*(ushort *)(iVar2 + 0x1a) & 0x80) == 0) {
          uVar1 = (uint)*(ushort *)(iVar2 + 0x18);
        }
        else {
          iVar5 = *(int *)(*(int *)(param_1 + 0xfba1c) + iVar5);
          iVar6 = *(int *)(iVar5 + 0x2308);
          uVar1 = (uint)*(ushort *)(iVar2 + 0x18) +
                  ((uint)(((*(int *)(iVar6 + 8) + *(int *)(iVar6 + 0x10)) - *(int *)(iVar5 + 0x236c)
                          ) - *(int *)(iVar2 + 8)) >> *(sbyte *)(iVar2 + 0x1c)) & 0xffff;
        }
LAB_08008170:
        return uVar1 & 0xffff;
      }
    }
    else {
      if (param_2 == 0x1aa) goto LAB_080082b8;
      if (param_2 < 0x1ab) {
        if (param_2 == 0x1a6) {
          iVar2 = *(int *)(param_1 + 0xfba1c);
          uVar3 = *(uint *)(iVar2 + 0x15a0f64);
          uVar7 = *(uint *)(iVar2 + 8) + *(uint *)(iVar2 + 0x10);
          uVar4 = *(uint *)(*(int *)(param_1 + 0xfc7e8) + 0x87c);
          uVar1 = *(uint *)(param_1 + 0x1b1e4);
          uVar8 = (*(int *)(iVar2 + 0xc) +
                  (uint)CARRY4(*(uint *)(iVar2 + 8),*(uint *)(iVar2 + 0x10))) -
                  (((int)uVar3 >> 0x1f) + (uint)(uVar7 < uVar3));
          bVar9 = uVar4 <= uVar8;
          if (uVar8 == uVar4) {
            bVar9 = *(uint *)(*(int *)(param_1 + 0xfc7e8) + 0x878) <= uVar7 - uVar3;
          }
          if (!bVar9) {
            uVar1 = uVar1 & 0xff7fffff;
          }
          return uVar1 >> 0x10;
        }
        if (param_2 == 0x1a8) goto LAB_080082b8;
      }
      else {
        if (param_2 == 0x204) {
          return *(ushort *)(param_1 + 0x1b244) & 0xe880 | *(ushort *)(param_1 + 0x23244) & 0x3f |
                 0x4000;
        }
        if (param_2 == 0x100000) {
          uVar1 = FUN_0801d91c(param_1 + 0xfc798);
          goto LAB_08008170;
        }
      }
    }
LAB_08008210:
    return (uint)*(ushort *)(param_1 + (param_2 & 0x7fff) + 0x23040);
  }
LAB_080082b8:
  return (uint)*(ushort *)(param_1 + param_2 + 0x1b040);
}


