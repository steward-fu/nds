/*
 * Ghidra decompilation
 *
 * Function : render_scanline_affine_diff_tile_widths_c
 * Address  : 001a31f0
 * Program  : drastic64
 */


void render_scanline_affine_diff_tile_widths_c(char *param_1,uint param_2,char param_3)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char cVar4;
  
  param_1[param_2] = param_3 + '\x01';
  if (param_2 != 0xfffffffe) {
    pcVar2 = param_1;
    cVar4 = '\0';
    do {
      cVar1 = *pcVar2;
      pcVar3 = pcVar2 + 1;
      *pcVar2 = cVar1 - cVar4;
      pcVar2 = pcVar3;
      cVar4 = cVar1;
    } while (param_1 + (ulong)(param_2 + 1) + 1 != pcVar3);
  }
  return;
}


