/*
 * Ghidra decompilation
 *
 * Function : render_sprite_load_depth_asm_4x
 * Address  : 0019cb98
 * Program  : drastic64
 */


void render_sprite_load_depth_asm_4x
               (undefined4 *param_1,undefined4 *param_2,uint param_3,int param_4)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
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
  
  uVar3 = param_3;
  do {
    do {
      uVar4 = *param_2;
      uVar5 = param_2[1];
      uVar6 = param_2[2];
      uVar7 = param_2[3];
      uVar8 = param_2[4];
      uVar9 = param_2[5];
      uVar10 = param_2[6];
      uVar11 = param_2[7];
      uVar12 = param_2[8];
      uVar13 = param_2[9];
      uVar14 = param_2[10];
      uVar15 = param_2[0xb];
      uVar16 = param_2[0xc];
      uVar17 = param_2[0xd];
      uVar18 = param_2[0xe];
      uVar19 = param_2[0xf];
      param_2 = param_2 + 0x10;
      *param_1 = uVar4;
      param_1[1] = uVar5;
      param_1[2] = uVar6;
      param_1[3] = uVar7;
      param_1[4] = uVar8;
      param_1[5] = uVar9;
      param_1[6] = uVar10;
      param_1[7] = uVar11;
      param_1[8] = uVar12;
      param_1[9] = uVar13;
      param_1[10] = uVar14;
      param_1[0xb] = uVar15;
      param_1[0xc] = uVar16;
      param_1[0xd] = uVar17;
      param_1[0xe] = uVar18;
      param_1[0xf] = uVar19;
      param_1 = param_1 + 0x10;
      uVar2 = uVar3 - 0x10;
      bVar1 = 0xf < (int)uVar3;
      uVar3 = uVar2;
    } while (uVar2 != 0 && bVar1);
    param_1 = param_1 + (int)uVar2;
    param_4 = param_4 + -1;
    param_2 = param_2 + (((long)(int)uVar2 + 0x200) - (ulong)param_3);
    uVar3 = param_3;
  } while (param_4 != 0);
  return;
}


