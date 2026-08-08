/*
 * Ghidra decompilation
 *
 * Function : video_3d_resolve_bin_4x
 * Address  : 080c50fc
 * Program  : drastic
 */


void video_3d_resolve_bin_4x(undefined8 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined4 *puVar8;
  longlong lVar9;
  undefined in_q0 [16];
  undefined in_q1 [16];
  undefined in_q2 [16];
  undefined in_q3 [16];
  undefined auVar10 [16];
  undefined8 *puVar7;
  
  iVar5 = 0x20;
  iVar4 = 0x200;
  auVar10 = SIMDExpandImmediate(1,6,0xe0);
  puVar7 = param_1 + 0x80;
  do {
    do {
      puVar1 = (undefined4 *)0x300;
      puVar2 = (undefined4 *)0x310;
      lVar9 = 2;
      puVar3 = param_1;
      puVar6 = puVar7;
      puVar8 = param_2;
      while( true ) {
        *puVar1 = *puVar8;
        puVar8 = puVar8 + 1;
        *puVar2 = *puVar8;
        puVar8 = puVar8 + 1;
        lVar9 = lVar9 + -1;
        if (lVar9 == 0) break;
        puVar1 = puVar1 + 1;
        puVar2 = puVar2 + 1;
      }
      param_2 = param_2 + 4;
      puVar1 = (undefined4 *)0x308;
      puVar2 = (undefined4 *)0x318;
      lVar9 = 2;
      puVar8 = param_2;
      while( true ) {
        *puVar1 = *puVar8;
        puVar8 = puVar8 + 1;
        *puVar2 = *puVar8;
        puVar8 = puVar8 + 1;
        lVar9 = lVar9 + -1;
        if (lVar9 == 0) break;
        puVar1 = puVar1 + 1;
        puVar2 = puVar2 + 1;
      }
      param_2 = param_2 + 4;
      puVar1 = (undefined4 *)0x320;
      puVar2 = (undefined4 *)0x330;
      lVar9 = 2;
      puVar8 = param_2;
      while( true ) {
        *puVar1 = *puVar8;
        puVar8 = puVar8 + 1;
        *puVar2 = *puVar8;
        puVar8 = puVar8 + 1;
        lVar9 = lVar9 + -1;
        if (lVar9 == 0) break;
        puVar1 = puVar1 + 1;
        puVar2 = puVar2 + 1;
      }
      param_2 = param_2 + 4;
      puVar1 = (undefined4 *)0x328;
      puVar2 = (undefined4 *)0x338;
      lVar9 = 2;
      puVar8 = param_2;
      while( true ) {
        *puVar1 = *puVar8;
        puVar8 = puVar8 + 1;
        *puVar2 = *puVar8;
        puVar8 = puVar8 + 1;
        lVar9 = lVar9 + -1;
        if (lVar9 == 0) break;
        puVar1 = puVar1 + 1;
        puVar2 = puVar2 + 1;
      }
      param_2 = param_2 + 4;
      in_q0 = in_q0 & auVar10;
      in_q1 = in_q1 & auVar10;
      in_q2 = in_q2 & auVar10;
      in_q3 = in_q3 & auVar10;
      *puVar3 = in_q0._0_8_;
      puVar3[1] = in_q0._8_8_;
      *puVar6 = in_q1._0_8_;
      puVar6[1] = in_q1._8_8_;
      puVar3[2] = in_q2._0_8_;
      puVar3[3] = in_q2._8_8_;
      param_1 = puVar3 + 4;
      puVar6[2] = in_q3._0_8_;
      puVar6[3] = in_q3._8_8_;
      puVar7 = puVar6 + 4;
      iVar4 = iVar4 + -0x10;
    } while (iVar4 != 0);
    iVar5 = iVar5 + -1;
    iVar4 = 0x200;
    param_1 = puVar3 + 0x84;
    puVar7 = puVar6 + 0x84;
  } while (iVar5 != 0);
  return;
}


