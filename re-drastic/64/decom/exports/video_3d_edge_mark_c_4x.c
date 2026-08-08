/*
 * Ghidra decompilation
 *
 * Function : video_3d_edge_mark_c_4x
 * Address  : 00156340
 * Program  : drastic64
 */


void video_3d_edge_mark_c_4x(long param_1,long param_2,long param_3,long param_4)

{
  byte bVar1;
  long lVar2;
  uint *puVar3;
  
  lVar2 = 0;
  do {
    while( true ) {
      bVar1 = *(byte *)(param_3 + lVar2);
      if (bVar1 < 8) break;
      *(uint *)(param_1 + lVar2 * 2) = *(uint *)(param_2 + lVar2 * 4) & 0x1fffffff;
      lVar2 = lVar2 + 2;
      if (lVar2 == 0x200) goto LAB_0015637c;
    }
    *(uint *)(param_1 + lVar2 * 2) =
         (uint)*(byte *)(param_4 + (ulong)(bVar1 + 0x10)) << 0x10 |
         (uint)*(byte *)(param_4 + (ulong)(bVar1 + 8)) << 8 |
         *(byte *)(param_4 + (ulong)bVar1) | 0x1f000000;
    lVar2 = lVar2 + 2;
  } while (lVar2 != 0x200);
LAB_0015637c:
  lVar2 = 1;
  puVar3 = (uint *)(param_1 + 0x400);
  do {
    while( true ) {
      bVar1 = *(byte *)(param_3 + lVar2);
      if (bVar1 < 8) break;
      *puVar3 = *(uint *)(param_2 + lVar2 * 4) & 0x1fffffff;
      lVar2 = lVar2 + 2;
      puVar3 = puVar3 + 1;
      if (lVar2 == 0x201) {
        return;
      }
    }
    *puVar3 = (uint)*(byte *)(param_4 + (ulong)(bVar1 + 0x10)) << 0x10 |
              (uint)*(byte *)(param_4 + (ulong)(bVar1 + 8)) << 8 |
              *(byte *)(param_4 + (ulong)bVar1) | 0x1f000000;
    lVar2 = lVar2 + 2;
    puVar3 = puVar3 + 1;
  } while (lVar2 != 0x201);
  return;
}


