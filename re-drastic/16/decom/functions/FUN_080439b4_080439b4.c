/*
 * Ghidra decompilation
 *
 * Function : FUN_080439b4
 * Address  : 080439b4
 * Program  : drastic16
 */


void FUN_080439b4(int param_1,uint param_2,uint param_3)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  short sVar4;
  uint uVar5;
  uint uVar6;
  short *psVar7;
  short *psVar8;
  uint uVar9;
  ushort *puVar10;
  uint uVar11;
  uint unaff_r8;
  short *psVar12;
  short sVar13;
  short sVar14;
  uint uVar15;
  ushort *puVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  uint local_40;
  uint local_3c;
  uint local_38;
  short *local_28;
  
  psVar7 = (short *)(param_1 + 0x460);
  local_28 = (short *)(param_1 + 0x3f0);
  puVar16 = (ushort *)(param_1 + 0x380);
  if ((param_3 & 1) == 0) {
    uVar19 = (uint)*(ushort *)(param_1 + 0x380);
    local_38 = *(ushort *)(param_1 + 0x3f4) + uVar19;
    local_3c = uVar19;
  }
  else {
    local_3c = (uint)*(ushort *)(param_1 + 0x37c);
    uVar19 = (uint)*(ushort *)(param_1 + 0x380);
    local_38 = *(ushort *)(param_1 + 0x3ec) + local_3c;
  }
  param_3 = param_3 & 2;
  if (param_3 == 0) {
    unaff_r8 = param_2;
  }
  uVar11 = *(ushort *)(param_1 + 0x3f0) + uVar19;
  local_40 = param_2;
  if (param_3 == 0) {
    local_40 = unaff_r8 - 1;
  }
  if (local_40 != 0) {
    psVar8 = psVar7;
    if (local_40 < 3) {
      uVar17 = 0;
      uVar9 = local_3c;
      psVar12 = local_28;
      uVar20 = local_38;
    }
    else {
      uVar15 = (uint)*(ushort *)(param_1 + 0x3f0);
      uVar17 = 0;
      puVar10 = (ushort *)(param_1 + 900);
      iVar18 = param_1 + 0x464;
      do {
        uVar2 = (uint)puVar10[0x38];
        uVar1 = *puVar10;
        uVar9 = (uint)uVar1;
        uVar17 = uVar17 + 2;
        uVar20 = uVar2 + uVar9;
        uVar3 = uVar19 + 1;
        if (uVar19 + 1 < uVar9) {
          uVar3 = uVar9;
        }
        uVar5 = uVar3;
        if (local_3c <= uVar3) {
          uVar5 = uVar3 - uVar19;
        }
        sVar4 = (short)uVar5;
        if (uVar3 < local_3c) {
          sVar4 = (short)local_3c - (short)uVar19;
        }
        uVar3 = uVar11 - 1;
        if ((int)uVar20 <= (int)(uVar11 - 1)) {
          uVar3 = uVar20;
        }
        if (uVar15 == 0) {
          sVar4 = 0;
        }
        if ((int)uVar3 <= (int)local_38) {
          local_38 = uVar3;
        }
        uVar3 = uVar9 + 1;
        if (uVar15 == 0) {
          sVar13 = 0;
        }
        else {
          sVar13 = (short)uVar11 - (short)local_38;
        }
        psVar8[1] = sVar13;
        *(short *)(iVar18 + -4) = sVar4;
        uVar6 = (uint)puVar10[2];
        uVar15 = (uint)puVar10[0x3a];
        uVar5 = uVar6;
        if (uVar6 < uVar19) {
          uVar5 = uVar19;
        }
        uVar19 = uVar5;
        if (uVar3 <= uVar5) {
          uVar19 = uVar5 - uVar9;
        }
        sVar4 = (short)uVar19;
        if (uVar5 < uVar3) {
          sVar4 = (short)uVar3 - uVar1;
        }
        uVar3 = uVar15 + uVar6;
        if (uVar3 <= uVar11) {
          uVar11 = uVar3;
        }
        if (uVar2 == 0) {
          sVar4 = 0;
        }
        if ((int)(uVar20 - 1) <= (int)uVar11) {
          uVar11 = uVar20 - 1;
        }
        if (uVar2 == 0) {
          sVar13 = 0;
        }
        else {
          sVar13 = (short)uVar20 - (short)uVar11;
        }
        *(short *)(iVar18 + 2) = sVar13;
        psVar8[2] = sVar4;
        puVar16 = (ushort *)(psVar8 + -0x6c);
        psVar12 = psVar8 + -0x34;
        psVar8 = psVar8 + 4;
        uVar11 = uVar3;
        uVar19 = uVar6;
        puVar10 = puVar10 + 4;
        iVar18 = iVar18 + 8;
        local_3c = uVar9;
        local_38 = uVar20;
      } while (uVar17 != (local_40 - 3 & 0xfffffffe) + 2);
    }
    do {
      uVar2 = uVar19;
      uVar3 = uVar11;
      puVar16 = puVar16 + 2;
      uVar19 = (uint)*puVar16;
      sVar4 = *psVar12;
      uVar15 = uVar2 + 1;
      if (uVar2 + 1 < uVar19) {
        uVar15 = uVar19;
      }
      uVar11 = (ushort)psVar12[2] + uVar19;
      uVar5 = uVar15;
      if (uVar9 <= uVar15) {
        uVar5 = uVar15 - uVar2;
      }
      sVar13 = (short)uVar5;
      if (uVar15 < uVar9) {
        sVar13 = (short)uVar9 - (short)uVar2;
      }
      uVar9 = uVar3 - 1;
      if ((int)uVar11 <= (int)(uVar3 - 1)) {
        uVar9 = uVar11;
      }
      uVar17 = uVar17 + 1;
      if ((int)uVar9 <= (int)uVar20) {
        uVar20 = uVar9;
      }
      if (sVar4 != 0) {
        uVar9 = uVar3 - uVar20;
      }
      sVar14 = (short)uVar9;
      if (sVar4 == 0) {
        sVar14 = 0;
      }
      psVar8[1] = sVar14;
      if (sVar4 == 0) {
        sVar13 = 0;
      }
      *psVar8 = sVar13;
      psVar8 = psVar8 + 2;
      uVar9 = uVar2;
      psVar12 = psVar12 + 2;
      uVar20 = uVar3;
    } while (uVar17 < local_40);
    local_28 = local_28 + local_40 * 2;
    psVar7 = psVar7 + local_40 * 2;
  }
  if (param_3 == 0) {
    sVar4 = *local_28;
    psVar7[1] = 0;
    *psVar7 = sVar4 + 1;
  }
  return;
}


