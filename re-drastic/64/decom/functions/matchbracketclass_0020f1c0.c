/*
 * Ghidra decompilation
 *
 * Function : matchbracketclass
 * Address  : 0020f1c0
 * Program  : drastic64
 */


bool matchbracketclass(uint param_1,ulong param_2,ulong param_3)

{
  int iVar1;
  bool bVar2;
  __int32_t **pp_Var3;
  ushort **ppuVar4;
  ushort *puVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  ushort uVar9;
  uint uVar10;
  ulong uVar11;
  
  bVar2 = *(char *)(param_2 + 1) != '^';
  uVar7 = param_2 + 1;
  if (!bVar2) {
    uVar7 = param_2 + 2;
    param_2 = param_2 + 1;
  }
  uVar11 = -(ulong)(param_1 >> 0x1f) & 0xfffffffe00000000 | (ulong)param_1 << 1;
  do {
    uVar8 = uVar7;
    if (param_3 <= uVar8) {
      return !bVar2;
    }
    uVar6 = (uint)*(byte *)(param_2 + 1);
    uVar10 = (uint)*(byte *)(param_2 + 2);
    if (uVar6 == 0x25) {
      pp_Var3 = __ctype_tolower_loc();
      iVar1 = (*pp_Var3)[uVar10];
      uVar8 = param_2 + 2;
      if (iVar1 == 0x70) {
        ppuVar4 = __ctype_b_loc();
        puVar5 = *ppuVar4;
        uVar9 = *(ushort *)((long)puVar5 + uVar11) & 4;
      }
      else if (iVar1 < 0x71) {
        if (iVar1 == 100) {
          ppuVar4 = __ctype_b_loc();
          puVar5 = *ppuVar4;
          uVar9 = *(ushort *)((long)puVar5 + uVar11) & 0x800;
        }
        else if (iVar1 < 0x65) {
          if (iVar1 == 0x61) {
            ppuVar4 = __ctype_b_loc();
            puVar5 = *ppuVar4;
            uVar9 = *(ushort *)((long)puVar5 + uVar11) & 0x400;
          }
          else {
            if (iVar1 != 99) goto LAB_0020f3c4;
            ppuVar4 = __ctype_b_loc();
            puVar5 = *ppuVar4;
            uVar9 = *(ushort *)((long)puVar5 + uVar11) & 2;
          }
        }
        else if (iVar1 == 0x67) {
          ppuVar4 = __ctype_b_loc();
          puVar5 = *ppuVar4;
          uVar9 = *(ushort *)((long)puVar5 + uVar11) & 0x8000;
        }
        else {
          if (iVar1 != 0x6c) {
LAB_0020f3c4:
            if (uVar10 == param_1) {
              return bVar2;
            }
            goto LAB_0020f234;
          }
          ppuVar4 = __ctype_b_loc();
          puVar5 = *ppuVar4;
          uVar9 = *(ushort *)((long)puVar5 + uVar11) & 0x200;
        }
      }
      else if (iVar1 == 0x77) {
        ppuVar4 = __ctype_b_loc();
        puVar5 = *ppuVar4;
        uVar9 = *(ushort *)((long)puVar5 + uVar11) & 8;
      }
      else if (iVar1 < 0x78) {
        if (iVar1 == 0x73) {
          ppuVar4 = __ctype_b_loc();
          puVar5 = *ppuVar4;
          uVar9 = *(ushort *)((long)puVar5 + uVar11) & 0x2000;
        }
        else {
          if (iVar1 != 0x75) goto LAB_0020f3c4;
          ppuVar4 = __ctype_b_loc();
          puVar5 = *ppuVar4;
          uVar9 = *(ushort *)((long)puVar5 + uVar11) & 0x100;
        }
      }
      else if (iVar1 == 0x78) {
        ppuVar4 = __ctype_b_loc();
        puVar5 = *ppuVar4;
        uVar9 = *(ushort *)((long)puVar5 + uVar11) & 0x1000;
      }
      else {
        if (iVar1 != 0x7a) goto LAB_0020f3c4;
        uVar9 = (ushort)(param_1 == 0);
        ppuVar4 = __ctype_b_loc();
        puVar5 = *ppuVar4;
      }
      if ((puVar5[uVar10] >> 9 & 1) == 0) {
        uVar9 = (ushort)(uVar9 == 0);
      }
      if (uVar9 != 0) {
        return bVar2;
      }
    }
    else if ((uVar10 == 0x2d) && (uVar7 = param_2 + 3, uVar7 < param_3)) {
      uVar8 = uVar7;
      if (((int)uVar6 <= (int)param_1) && ((int)param_1 <= (int)(uint)*(byte *)(param_2 + 3))) {
        return bVar2;
      }
    }
    else if (param_1 == uVar6) {
      return bVar2;
    }
LAB_0020f234:
    uVar7 = uVar8 + 1;
    param_2 = uVar8;
  } while( true );
}


