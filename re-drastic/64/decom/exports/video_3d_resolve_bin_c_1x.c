/*
 * Ghidra decompilation
 *
 * Function : video_3d_resolve_bin_c_1x
 * Address  : 00150750
 * Program  : drastic64
 */


void video_3d_resolve_bin_c_1x(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = 0;
  if ((ulong)((param_1 + 0xf) - param_2) < 0x1f) {
    do {
      *(uint *)(param_1 + lVar2) = *(uint *)(param_2 + lVar2) & 0x3fffffff;
      lVar1 = lVar2 + 4;
      if (lVar1 == 0x4000) {
        return;
      }
      *(uint *)(param_1 + lVar1) = *(uint *)(param_2 + lVar1) & 0x3fffffff;
      lVar2 = lVar2 + 8;
    } while (lVar2 != 0x4000);
  }
  else {
    do {
      uVar3 = *(ulong *)(param_2 + lVar2);
      ((ulong *)(param_1 + lVar2))[1] = ((ulong *)(param_2 + lVar2))[1] & 0x3fffffff3fffffff;
      *(ulong *)(param_1 + lVar2) = uVar3 & 0x3fffffff3fffffff;
      lVar2 = lVar2 + 0x10;
    } while (lVar2 != 0x4000);
  }
  return;
}


