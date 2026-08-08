/*
 * Ghidra decompilation
 *
 * Function : render_polygon_writeback_all_pass_1x
 * Address  : 080c35a8
 * Program  : drastic
 */


void render_polygon_writeback_all_pass_1x
               (int param_1,int param_2,int param_3,int param_4,int param_5,undefined8 *param_6,
               undefined (*param_7) [16])

{
  bool bVar1;
  undefined auVar2 [16];
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined (*pauVar8) [16];
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  auVar2._4_4_ = param_5 << 0x18;
  auVar2._0_4_ = param_5 << 0x18;
  auVar2._8_8_ = 0;
  auVar2 = auVar2 & auVar2 << 0x40;
  uVar5 = *(uint *)(param_1 + 0x630) & 0xffff;
  puVar4 = (undefined8 *)(param_3 + (uint)*(ushort *)(param_1 + 0x580) * 4);
  puVar3 = (undefined8 *)(param_2 + (uint)*(ushort *)(param_1 + 0x580) * 4);
  iVar6 = uVar5 - 8;
  iVar7 = iVar6;
  if (7 < uVar5) {
    do {
      auVar9 = *param_7;
      pauVar8 = param_7 + 1;
      param_7 = param_7 + 2;
      uVar11 = *param_6;
      uVar12 = param_6[1];
      uVar13 = param_6[2];
      uVar14 = param_6[3];
      param_6 = param_6 + 4;
      auVar9 = auVar9 | auVar2;
      auVar10 = *pauVar8 | auVar2;
      iVar6 = iVar7 + -8;
      *puVar4 = auVar9._0_8_;
      puVar4[1] = auVar9._8_8_;
      puVar4[2] = auVar10._0_8_;
      puVar4[3] = auVar10._8_8_;
      puVar4 = puVar4 + 4;
      *puVar3 = uVar11;
      puVar3[1] = uVar12;
      puVar3[2] = uVar13;
      puVar3[3] = uVar14;
      puVar3 = puVar3 + 4;
      bVar1 = 7 < iVar7;
      iVar7 = iVar6;
    } while (iVar6 != 0 && bVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x080c3638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&DAT_080c3640 + (iVar6 + 8) * 4))
            (SUB164(*param_7,0),param_1 + 0x584,puVar3,puVar4,param_4 + -1);
  return;
}


