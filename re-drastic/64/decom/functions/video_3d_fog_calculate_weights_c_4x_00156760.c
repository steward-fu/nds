/*
 * Ghidra decompilation
 *
 * Function : video_3d_fog_calculate_weights_c_4x
 * Address  : 00156760
 * Program  : drastic64
 */


void video_3d_fog_calculate_weights_c_4x(long param_1,long param_2,long param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = 0;
  do {
    iVar2 = (*(uint *)(param_1 + lVar3 * 4) >> 9 & 0x7fff) - (param_4 >> 0x10);
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    uVar1 = iVar2 << (ulong)(param_4 & 0x1f);
    if (0x7fff < (int)uVar1) {
      uVar1 = 0x7fff;
    }
    *(char *)(param_2 + lVar3) =
         *(char *)(param_3 + (ulong)(uint)((int)uVar1 >> 10)) +
         (char)((int)(*(char *)(param_3 + (ulong)(uint)((int)uVar1 >> 10) + 0x20) * 0x20 *
                     (uVar1 & 0x3ff)) >> 0xf);
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0x200);
  return;
}


