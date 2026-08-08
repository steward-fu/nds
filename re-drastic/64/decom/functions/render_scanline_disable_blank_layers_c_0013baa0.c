/*
 * Ghidra decompilation
 *
 * Function : render_scanline_disable_blank_layers_c
 * Address  : 0013baa0
 * Program  : drastic64
 */


void render_scanline_disable_blank_layers_c(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_2;
  uVar2 = uVar1;
  if (((uVar1 & 1) != 0) &&
     (uVar2 = uVar1 & 0xfffffffe,
     (param_1[1] | *param_1 | param_1[3] | param_1[2] | param_1[4] | param_1[5] |
     param_1[6] | param_1[7]) != 0)) {
    uVar2 = uVar1;
  }
  uVar1 = uVar2;
  if (((uVar2 >> 1 & 1) != 0) &&
     (uVar1 = uVar2 & 0xfffffffd,
     (param_1[8] | param_1[9] | param_1[10] | param_1[0xb] | param_1[0xc] | param_1[0xd] |
     param_1[0xe] | param_1[0xf]) != 0)) {
    uVar1 = uVar2;
  }
  uVar2 = uVar1;
  if (((uVar1 >> 2 & 1) != 0) &&
     (uVar2 = uVar1 & 0xfffffffb,
     (param_1[0x12] | param_1[0x13] | param_1[0x10] | param_1[0x11] | param_1[0x14] | param_1[0x15]
     | param_1[0x16] | param_1[0x17]) != 0)) {
    uVar2 = uVar1;
  }
  uVar1 = uVar2;
  if (((uVar2 >> 3 & 1) != 0) &&
     (uVar1 = uVar2 & 0xfffffff7,
     (param_1[0x1a] | param_1[0x1b] | param_1[0x18] | param_1[0x19] | param_1[0x1c] | param_1[0x1d]
     | param_1[0x1e] | param_1[0x1f]) != 0)) {
    uVar1 = uVar2;
  }
  *param_2 = uVar1;
  return;
}


