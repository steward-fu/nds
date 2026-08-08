/*
 * Ghidra decompilation
 *
 * Function : FUN_0806f3f0
 * Address  : 0806f3f0
 * Program  : drastic16
 */


void FUN_0806f3f0(int param_1)

{
  if (*(int *)(param_1 + 0x2370) != 0) {
    *(undefined4 *)(param_1 + 0x2324) =
         *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x2370) + -0xc) + 4);
  }
  return;
}


