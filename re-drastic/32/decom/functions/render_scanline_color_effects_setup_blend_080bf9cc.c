/*
 * Ghidra decompilation
 *
 * Function : render_scanline_color_effects_setup_blend
 * Address  : 080bf9cc
 * Program  : drastic
 */


/* WARNING: Control flow encountered unimplemented instructions */

void render_scanline_color_effects_setup_blend(int param_1)

{
  undefined auVar1 [16];
  byte bVar2;
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined2 uVar5;
  undefined4 uVar6;
  
  auVar1 = SIMDExpandImmediate(0,0xe,0x20);
  bVar2 = (byte)((uint)(param_1 << 0x1b) >> 0x1a);
  uVar5 = CONCAT11(bVar2,bVar2);
  uVar6 = CONCAT22(uVar5,uVar5);
  auVar3._4_4_ = uVar6;
  auVar3._0_4_ = uVar6;
  auVar3._8_8_ = 0;
  bVar2 = (byte)((uint)(param_1 << 0x13) >> 0x1a);
  uVar5 = CONCAT11(bVar2,bVar2);
  uVar6 = CONCAT22(uVar5,uVar5);
  auVar4._4_4_ = uVar6;
  auVar4._0_4_ = uVar6;
  auVar4._8_8_ = 0;
  VectorMin(auVar4 & auVar4 << 0x40,auVar1,1,1);
  VectorMin(auVar3 & auVar3 << 0x40,auVar1,1,1);
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}


