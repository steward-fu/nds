/*
 * Ghidra decompilation
 *
 * Function : FUN_0809ad80
 * Address  : 0809ad80
 * Program  : drastic16
 */


void FUN_0809ad80(int param_1,int param_2,int param_3)

{
  if (param_2 != 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x50) = 1;
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 1;
  if (param_3 != 0) {
    *(uint *)(param_1 + 0x50) = (uint)(param_3 != 0);
  }
  return;
}


