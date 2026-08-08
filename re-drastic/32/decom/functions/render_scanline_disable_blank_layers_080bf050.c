/*
 * Ghidra decompilation
 *
 * Function : render_scanline_disable_blank_layers
 * Address  : 080bf050
 * Program  : drastic
 */


/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined (*) [16] render_scanline_disable_blank_layers(undefined (*param_1) [16],byte *param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  
  auVar3._0_8_ = SUB168(*param_1 | param_1[1],0) | SUB168(*param_1 | param_1[1],8);
  auVar3._8_8_ = SUB168(param_1[2] | param_1[3],0) | SUB168(param_1[2] | param_1[3],8);
  auVar6._0_8_ = SUB168(param_1[4] | param_1[5],0) | SUB168(param_1[4] | param_1[5],8);
  auVar6._8_8_ = SUB168(param_1[6] | param_1[7],0) | SUB168(param_1[6] | param_1[7],8);
  uVar1 = VectorCopyNarrow(auVar3,8,1);
  auVar4._0_8_ = SatQ(uVar1,8,0);
  uVar1 = VectorCopyNarrow(auVar6,8,1);
  auVar4._8_8_ = SatQ(uVar1,8,0);
  uVar1 = VectorCopyNarrow(auVar4,4,1);
  auVar5._0_8_ = SatQ(uVar1,4,0);
  auVar5._8_8_ = auVar4._8_8_;
  uVar1 = VectorCopyNarrow(auVar5,2,1);
  uVar1 = SatQ(uVar1,2,0);
  uVar2 = VectorCompareEqual(uVar1,0,1);
  uVar1 = VectorPairwiseAdd(uVar2 & 0x8040201008040201,uVar2 & 0x8040201008040201,1);
  uVar1 = VectorPairwiseAdd(uVar1,uVar1,1);
  *param_2 = *param_2 & ~(byte)uVar1;
  return param_1 + 8;
}


