/*
 * Ghidra decompilation
 *
 * Function : render_polygon_set_buffer8_c
 * Address  : 0014a3c0
 * Program  : drastic64
 */


void render_polygon_set_buffer8_c(void *param_1,uint param_2,int param_3)

{
  if (param_3 != 0) {
    memset(param_1,param_2 & 0xff,(ulong)(param_3 - 1) + 1);
    return;
  }
  return;
}


