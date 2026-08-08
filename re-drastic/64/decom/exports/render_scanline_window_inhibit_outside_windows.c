/*
 * Ghidra decompilation
 *
 * Function : render_scanline_window_inhibit_outside_windows
 * Address  : 0013b310
 * Program  : drastic64
 */


void render_scanline_window_inhibit_outside_windows
               (long param_1,undefined8 *param_2,uint param_3,uint param_4)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  
  param_3 = param_4 & param_3;
  if ((param_4 >> 5 & 1) != 0) {
    *param_2 = 0xffffffffffffffff;
    param_2[1] = 0xffffffffffffffff;
    param_2[2] = 0xffffffffffffffff;
    param_2[3] = 0xffffffffffffffff;
  }
  uVar3 = 0;
  for (; param_3 != 0; param_3 = param_3 >> 1) {
    if ((param_3 & 1) != 0) {
      lVar1 = param_1 + uVar3 * 0x20;
      puVar2 = (undefined8 *)(param_1 + uVar3 * 0x20);
      puVar2[1] = 0xffffffffffffffff;
      *puVar2 = 0xffffffffffffffff;
      *(undefined8 *)(lVar1 + 0x18) = 0xffffffffffffffff;
      *(undefined8 *)(lVar1 + 0x10) = 0xffffffffffffffff;
    }
    uVar3 = (ulong)((int)uVar3 + 1);
  }
  return;
}


