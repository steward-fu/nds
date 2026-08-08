/*
 * Ghidra decompilation
 *
 * Function : render_scanline_color_effects_setup_blend_base_c
 * Address  : 00139a90
 * Program  : drastic64
 */


void render_scanline_color_effects_setup_blend_base_c
               (uint param_1,long param_2,long param_3,uint *param_4)

{
  long lVar1;
  undefined uVar2;
  char cVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  
  uVar6 = (param_1 & 0x1f) << 1;
  uVar2 = (undefined)uVar6;
  uVar4 = param_1 >> 8 & 0x1f;
  cVar3 = (char)uVar4 * '\x02';
  if (0x20 < uVar6) {
    uVar2 = 0x20;
  }
  if (0x10 < uVar4) {
    cVar3 = ' ';
  }
  lVar1 = param_3 + 0x100;
  do {
    uVar6 = *param_4;
    lVar5 = 0;
    do {
      if ((uVar6 & 1) == 0) {
        *(undefined *)(param_2 + lVar5) = 0x20;
        *(undefined *)(param_3 + lVar5) = 0;
      }
      else {
        *(undefined *)(param_2 + lVar5) = uVar2;
        *(char *)(param_3 + lVar5) = cVar3;
      }
      lVar5 = lVar5 + 1;
      uVar6 = uVar6 >> 1;
    } while (lVar5 != 0x20);
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
    param_4 = param_4 + 1;
  } while (lVar1 != param_3);
  return;
}


