/*
 * Ghidra decompilation
 *
 * Function : render_scanline_color_effects_setup_alpha_base_c
 * Address  : 00139b80
 * Program  : drastic64
 */


void render_scanline_color_effects_setup_alpha_base_c
               (long param_1,long param_2,long param_3,uint *param_4)

{
  long lVar1;
  char cVar2;
  long lVar3;
  uint uVar4;
  
  lVar1 = param_3 + 0x100;
LAB_00139ba0:
  do {
    uVar4 = *param_4;
    lVar3 = 0;
    do {
      while (cVar2 = *(char *)(param_3 + lVar3), (uVar4 & 1) != 0) {
        *(char *)(param_1 + lVar3) = cVar2 + '\x01';
        *(char *)(param_2 + lVar3) = '\x1f' - cVar2;
        lVar3 = lVar3 + 1;
        uVar4 = uVar4 >> 1;
        if (lVar3 == 0x20) {
          param_3 = param_3 + 0x20;
          param_1 = param_1 + 0x20;
          param_2 = param_2 + 0x20;
          param_4 = param_4 + 1;
          if (lVar1 == param_3) {
            return;
          }
          goto LAB_00139ba0;
        }
      }
      *(undefined *)(param_1 + lVar3) = 0x20;
      *(undefined *)(param_2 + lVar3) = 0;
      lVar3 = lVar3 + 1;
      uVar4 = uVar4 >> 1;
    } while (lVar3 != 0x20);
    param_3 = param_3 + 0x20;
    param_1 = param_1 + 0x20;
    param_2 = param_2 + 0x20;
    param_4 = param_4 + 1;
    if (lVar1 == param_3) {
      return;
    }
  } while( true );
}


