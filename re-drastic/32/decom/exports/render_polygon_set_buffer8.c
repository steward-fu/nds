/*
 * Ghidra decompilation
 *
 * Function : render_polygon_set_buffer8
 * Address  : 080c2b80
 * Program  : drastic
 */


void render_polygon_set_buffer8(undefined8 *param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  
  do {
    *param_1 = 0;
    param_1[1] = 0;
    param_1 = param_1 + 2;
    iVar2 = param_3 + -0x10;
    bVar1 = 0xf < param_3;
    param_3 = iVar2;
  } while (iVar2 != 0 && bVar1);
  return;
}


