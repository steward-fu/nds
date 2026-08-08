/*
 * Ghidra decompilation
 *
 * Function : render_polygon_alpha_combine_constant_c
 * Address  : 001492c0
 * Program  : drastic64
 */


void render_polygon_alpha_combine_constant_c
               (long param_1,uint param_2,long param_3,long param_4,long param_5,byte param_6,
               long param_7,long param_8,uint param_9)

{
  long lVar1;
  
  if (param_9 != 0) {
    lVar1 = 0;
    do {
      while (*(char *)(param_8 + lVar1) == '\0') {
        *(undefined4 *)(param_1 + lVar1 * 4) = *(undefined4 *)(param_3 + lVar1 * 4);
        lVar1 = lVar1 + 1;
        if (param_9 <= (uint)lVar1) {
          return;
        }
      }
      if (*(char *)(param_7 + lVar1) == '\x1f') {
        *(uint *)(param_4 + lVar1 * 4) = param_2 | (uint)param_6 << 0x18;
      }
      else {
        *(byte *)(param_5 + lVar1) = param_6;
      }
      lVar1 = lVar1 + 1;
    } while ((uint)lVar1 < param_9);
  }
  return;
}


