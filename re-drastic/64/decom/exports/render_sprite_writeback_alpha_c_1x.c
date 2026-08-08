/*
 * Ghidra decompilation
 *
 * Function : render_sprite_writeback_alpha_c_1x
 * Address  : 0014e470
 * Program  : drastic64
 */


void render_sprite_writeback_alpha_c_1x
               (long param_1,long param_2,long param_3,uint param_4,int param_5,long param_6,
               long param_7,long param_8)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if ((param_5 != 0) && (param_4 != 0)) {
    lVar1 = (ulong)(param_4 - 1) + 1;
    lVar2 = param_1 + ((ulong)(param_5 - 1) + 1) * 0x400;
    lVar4 = lVar1 * 4;
    do {
      lVar3 = 0;
      do {
        *(undefined4 *)(param_1 + lVar3 * 4) = *(undefined4 *)(param_6 + lVar3 * 4);
        *(undefined4 *)(param_2 + lVar3 * 4) = *(undefined4 *)(param_7 + lVar3 * 4);
        *(undefined *)(param_3 + lVar3) = *(undefined *)(param_8 + lVar3);
        lVar3 = lVar3 + 1;
      } while ((uint)lVar3 < param_4);
      param_1 = param_1 + 0x400;
      param_6 = param_6 + lVar4;
      param_7 = param_7 + lVar4;
      param_8 = param_8 + lVar1;
      param_2 = param_2 + 0x400;
      param_3 = param_3 + 0x100;
    } while (param_1 != lVar2);
  }
  return;
}


