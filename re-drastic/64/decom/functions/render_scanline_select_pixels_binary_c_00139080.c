/*
 * Ghidra decompilation
 *
 * Function : render_scanline_select_pixels_binary_c
 * Address  : 00139080
 * Program  : drastic64
 */


void render_scanline_select_pixels_binary_c(long param_1,long param_2,long param_3,uint *param_4)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  undefined2 uVar4;
  
  lVar1 = param_2 + 0x200;
  if (param_2 == param_1) {
    do {
      uVar3 = *param_4;
      lVar2 = 0;
      do {
        if ((uVar3 & 1) != 0) {
          *(undefined2 *)(param_1 + lVar2) = *(undefined2 *)(param_3 + lVar2);
        }
        lVar2 = lVar2 + 2;
        uVar3 = uVar3 >> 1;
      } while (lVar2 != 0x40);
      param_1 = param_1 + 0x40;
      param_3 = param_3 + 0x40;
      param_4 = param_4 + 1;
    } while (lVar1 != param_1);
    return;
  }
  do {
    uVar3 = *param_4;
    lVar2 = 0;
    do {
      if ((uVar3 & 1) == 0) {
        uVar4 = *(undefined2 *)(param_2 + lVar2);
      }
      else {
        uVar4 = *(undefined2 *)(param_3 + lVar2);
      }
      *(undefined2 *)(param_1 + lVar2) = uVar4;
      lVar2 = lVar2 + 2;
      uVar3 = uVar3 >> 1;
    } while (lVar2 != 0x40);
    param_2 = param_2 + 0x40;
    param_1 = param_1 + 0x40;
    param_3 = param_3 + 0x40;
    param_4 = param_4 + 1;
  } while (lVar1 != param_2);
  return;
}


