/*
 * Ghidra decompilation
 *
 * Function : reset_ipc
 * Address  : 00129e10
 * Program  : drastic64
 */


void reset_ipc(long param_1)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined2 *)(param_1 + 0x58) = 0;
  *(undefined *)(param_1 + 0x5a) = 1;
  return;
}


