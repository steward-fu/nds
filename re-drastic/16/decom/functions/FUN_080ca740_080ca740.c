/*
 * Ghidra decompilation
 *
 * Function : FUN_080ca740
 * Address  : 080ca740
 * Program  : drastic16
 */


void FUN_080ca740(int param_1,int param_2)

{
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x9750) = 0;
    *(undefined4 *)(param_1 + 0x9754) = *(undefined4 *)(param_1 + 0x9750);
    *(undefined4 *)(param_1 + 0x9748) = *(undefined4 *)(param_1 + 0x9754);
    *(undefined4 *)(param_1 + 0x974c) = 1;
    memset((void *)(param_1 + 0x9758),0,0x170);
    memset((void *)(param_1 + 0x9344),0,0x404);
    memset((void *)(param_1 + 0x5794),0,0x3bb0);
  }
  return;
}


