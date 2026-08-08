/*
 * Ghidra decompilation
 *
 * Function : SzArEx_GetFolderStreamPos
 * Address  : 001ad410
 * Program  : drastic64
 */


long SzArEx_GetFolderStreamPos(long param_1,ulong param_2,int param_3)

{
  return *(long *)(*(long *)(param_1 + 0x50) +
                  (ulong)(uint)(param_3 +
                               *(int *)(*(long *)(param_1 + 0x48) + (param_2 & 0xffffffff) * 4)) * 8
                  ) + *(long *)(param_1 + 0x40);
}


