/*
 * Ghidra decompilation
 *
 * Function : render_polygon_alpha_id_test_c
 * Address  : 00145ca0
 * Program  : drastic64
 */


void render_polygon_alpha_id_test_c
               (long param_1,long param_2,long param_3,uint param_4,uint param_5)

{
  long lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      while ((*(byte *)(param_2 + lVar1) == param_5 && (*(char *)(param_3 + lVar1) != '\x1f'))) {
        *(undefined *)(param_1 + lVar1) = 0;
        lVar1 = lVar1 + 1;
        if (param_4 <= (uint)lVar1) {
          return;
        }
      }
      lVar1 = lVar1 + 1;
    } while ((uint)lVar1 < param_4);
  }
  return;
}


