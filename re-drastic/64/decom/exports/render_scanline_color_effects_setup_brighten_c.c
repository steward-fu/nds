/*
 * Ghidra decompilation
 *
 * Function : render_scanline_color_effects_setup_brighten_c
 * Address  : 00139a10
 * Program  : drastic64
 */


void render_scanline_color_effects_setup_brighten_c
               (int param_1,long param_2,long param_3,long param_4,uint *param_5)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  
  uVar2 = param_1 << 1;
  if (0x20 < uVar2) {
    uVar2 = 0x20;
  }
  lVar1 = param_4 + 0x100;
  do {
    uVar4 = *param_5;
    lVar3 = 0;
    do {
      if ((uVar4 & 1) == 0) {
        *(undefined *)(param_2 + lVar3) = 0x20;
        *(undefined *)(param_4 + lVar3) = 0;
      }
      else {
        *(char *)(param_2 + lVar3) = ' ' - (char)uVar2;
        *(char *)(param_4 + lVar3) = (char)uVar2;
      }
      *(undefined *)(param_3 + lVar3) = 0;
      lVar3 = lVar3 + 1;
      uVar4 = uVar4 >> 1;
    } while (lVar3 != 0x20);
    param_4 = param_4 + 0x20;
    param_2 = param_2 + 0x20;
    param_3 = param_3 + 0x20;
    param_5 = param_5 + 1;
  } while (lVar1 != param_4);
  return;
}


