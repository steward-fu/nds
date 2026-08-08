/*
 * Ghidra decompilation
 *
 * Function : FUN_080bdf94
 * Address  : 080bdf94
 * Program  : drastic16
 */


int FUN_080bdf94(int param_1,int param_2)

{
  if (param_1 != param_2) {
    memcpy(*(void **)(param_1 + 0xf0),*(void **)(param_2 + 0xf0),0xb0);
    *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_2 + 0x100);
    *(undefined *)(param_1 + 0x104) = *(undefined *)(param_2 + 0x104);
  }
  return param_1;
}


