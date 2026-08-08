/*
 * Ghidra decompilation
 *
 * Function : FUN_080b8458
 * Address  : 080b8458
 * Program  : drastic16
 */


void FUN_080b8458(int *param_1)

{
  int iVar1;
  int iVar2;
  int local_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int local_14;
  int local_10;
  int local_c;
  
  for (local_c = 1; local_c < *param_1; local_c = local_c + 1) {
    for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
      for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
        iVar2 = local_c * 4 + local_14;
        iVar1 = iVar2 + 4;
        *(undefined *)((int)&local_28 + local_10 + local_14 * 4) =
             (&DAT_081d3bb0)[(uint)*(byte *)(param_1 + iVar2 + 5) * 4 + local_10] ^
             (&DAT_081d3fb0)[(uint)*(byte *)((int)param_1 + iVar1 * 4 + 5) * 4 + local_10] ^
             (&DAT_081d43b0)[(uint)*(byte *)((int)param_1 + iVar1 * 4 + 6) * 4 + local_10] ^
             (&DAT_081d47b0)[(uint)*(byte *)((int)param_1 + iVar1 * 4 + 7) * 4 + local_10];
      }
    }
    iVar2 = local_c + 1;
    param_1[iVar2 * 4 + 1] = local_28;
    param_1[iVar2 * 4 + 2] = iStack_24;
    param_1[iVar2 * 4 + 3] = iStack_20;
    param_1[iVar2 * 4 + 4] = iStack_1c;
  }
  return;
}


