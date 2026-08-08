/*
 * Ghidra decompilation
 *
 * Function : geometry_perspective_reciprocals_c
 * Address  : 0015ea80
 * Program  : drastic64
 */


void geometry_perspective_reciprocals_c(long param_1,long param_2,long param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = 0;
  if (param_4 != 0) {
    do {
      while( true ) {
        iVar1 = *(int *)(param_3 + lVar3 * 4);
        uVar4 = (ulong)(uint)(iVar1 << (ulong)((uint)LZCOUNT(iVar1) & 0x1f));
        if (iVar1 == 0) break;
        uVar2 = 0;
        if (uVar4 != 0) {
          uVar2 = (undefined4)((uVar4 + 0x3fffffffffffffff) / uVar4);
        }
        *(undefined4 *)(param_1 + lVar3 * 4) = uVar2;
        *(uint *)(param_2 + lVar3 * 4) = (uint)LZCOUNT(iVar1);
        lVar3 = lVar3 + 1;
        if (param_4 <= (uint)lVar3) {
          return;
        }
      }
      *(undefined4 *)(param_1 + lVar3 * 4) = 1;
      *(undefined4 *)(param_2 + lVar3 * 4) = 0x20;
      lVar3 = lVar3 + 1;
    } while ((uint)lVar3 < param_4);
  }
  return;
}


