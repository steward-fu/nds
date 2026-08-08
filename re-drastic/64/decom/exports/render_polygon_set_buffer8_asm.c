/*
 * Ghidra decompilation
 *
 * Function : render_polygon_set_buffer8_asm
 * Address  : 0019ab98
 * Program  : drastic64
 */


void render_polygon_set_buffer8_asm(undefined *param_1,undefined param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  
  do {
    *param_1 = param_2;
    param_1[1] = param_2;
    param_1[2] = param_2;
    param_1[3] = param_2;
    param_1[4] = param_2;
    param_1[5] = param_2;
    param_1[6] = param_2;
    param_1[7] = param_2;
    param_1[8] = param_2;
    param_1[9] = param_2;
    param_1[10] = param_2;
    param_1[0xb] = param_2;
    param_1[0xc] = param_2;
    param_1[0xd] = param_2;
    param_1[0xe] = param_2;
    param_1[0xf] = param_2;
    param_1 = param_1 + 0x10;
    iVar2 = param_3 + -0x10;
    bVar1 = 0xf < param_3;
    param_3 = iVar2;
  } while (iVar2 != 0 && bVar1);
  return;
}


