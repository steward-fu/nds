/*
 * Ghidra decompilation
 *
 * Function : video_3d_edge_mark_c_1x
 * Address  : 00150cf0
 * Program  : drastic64
 */


void video_3d_edge_mark_c_1x(long param_1,long param_2,long param_3,long param_4)

{
  byte bVar1;
  long lVar2;
  
  lVar2 = 0;
  do {
    while( true ) {
      bVar1 = *(byte *)(param_3 + lVar2);
      if (7 < bVar1) break;
      *(uint *)(param_1 + lVar2 * 4) =
           (uint)*(byte *)(param_4 + (ulong)(bVar1 + 0x10)) << 0x10 |
           (uint)*(byte *)(param_4 + (ulong)(bVar1 + 8)) << 8 |
           *(byte *)(param_4 + (ulong)bVar1) | 0x1f000000;
      lVar2 = lVar2 + 1;
      if (lVar2 == 0x100) {
        return;
      }
    }
    *(uint *)(param_1 + lVar2 * 4) = *(uint *)(param_2 + lVar2 * 4) & 0x1fffffff;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x100);
  return;
}


