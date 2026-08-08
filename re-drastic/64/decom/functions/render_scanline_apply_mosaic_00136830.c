/*
 * Ghidra decompilation
 *
 * Function : render_scanline_apply_mosaic
 * Address  : 00136830
 * Program  : drastic64
 */


void render_scanline_apply_mosaic(long param_1,int param_2)

{
  uint uVar1;
  undefined2 uVar2;
  uint uVar3;
  undefined2 *puVar4;
  ulong uVar5;
  
  uVar5 = 0;
  while( true ) {
    while( true ) {
      uVar2 = *(undefined2 *)(param_1 + uVar5 * 2);
      uVar3 = (int)uVar5 + 1;
      if (param_2 != 0) break;
      uVar5 = (ulong)uVar3;
    }
    if (0xff < uVar3) break;
    uVar1 = (int)uVar5 + param_2 + 1;
    uVar5 = (ulong)uVar1;
    puVar4 = (undefined2 *)(param_1 + (ulong)uVar3 * 2);
    while( true ) {
      *puVar4 = uVar2;
      uVar3 = uVar3 + 1;
      if (uVar3 == uVar1) break;
      puVar4 = puVar4 + 1;
      if (uVar3 == 0x100) {
        return;
      }
    }
  }
  return;
}


