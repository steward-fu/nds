/*
 * Ghidra decompilation
 *
 * Function : render_polygon_load_depth_asm_1x
 * Address  : 0019b3c8
 * Program  : drastic64
 */


void render_polygon_load_depth_asm_1x(undefined4 *param_1,long param_2,long param_3,int param_4)

{
  bool bVar1;
  uint uVar2;
  ushort *puVar3;
  ushort *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  
  puVar3 = (ushort *)(param_3 + 0x630);
  puVar4 = (ushort *)(param_3 + 0x580);
  do {
    puVar5 = (undefined4 *)(param_2 + (ulong)*puVar4 * 4);
    uVar6 = (uint)*puVar3;
    do {
      uVar7 = *puVar5;
      uVar8 = puVar5[1];
      uVar9 = puVar5[2];
      uVar10 = puVar5[3];
      uVar11 = puVar5[4];
      uVar12 = puVar5[5];
      uVar13 = puVar5[6];
      uVar14 = puVar5[7];
      uVar15 = puVar5[8];
      uVar16 = puVar5[9];
      uVar17 = puVar5[10];
      uVar18 = puVar5[0xb];
      uVar19 = puVar5[0xc];
      uVar20 = puVar5[0xd];
      uVar21 = puVar5[0xe];
      uVar22 = puVar5[0xf];
      puVar5 = puVar5 + 0x10;
      *param_1 = uVar7;
      param_1[1] = uVar8;
      param_1[2] = uVar9;
      param_1[3] = uVar10;
      param_1[4] = uVar11;
      param_1[5] = uVar12;
      param_1[6] = uVar13;
      param_1[7] = uVar14;
      param_1[8] = uVar15;
      param_1[9] = uVar16;
      param_1[10] = uVar17;
      param_1[0xb] = uVar18;
      param_1[0xc] = uVar19;
      param_1[0xd] = uVar20;
      param_1[0xe] = uVar21;
      param_1[0xf] = uVar22;
      param_1 = param_1 + 0x10;
      uVar2 = uVar6 - 0x10;
      bVar1 = 0xf < (int)uVar6;
      uVar6 = uVar2;
    } while (uVar2 != 0 && bVar1);
    param_1 = param_1 + (int)uVar2;
    param_2 = param_2 + 0x400;
    param_4 = param_4 + -1;
    puVar3 = puVar3 + 2;
    puVar4 = puVar4 + 2;
  } while (param_4 != 0);
  return;
}


