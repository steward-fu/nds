/*
 * Ghidra decompilation
 *
 * Function : reset_gamecard
 * Address  : 00170ac0
 * Program  : drastic64
 */


void reset_gamecard(long param_1)

{
  *(undefined8 *)(param_1 + 0x910) = 0;
  *(undefined8 *)(param_1 + 0x958) = 0;
  *(undefined4 *)(param_1 + 0x960) = 0;
  *(undefined *)(param_1 + 0x2da5) = 0;
  *(undefined *)(param_1 + 0x8e8) = 0;
  *(undefined2 *)(param_1 + 0x8ea) = 0x8080;
  *(undefined *)(param_1 + 0x8ec) = 0x80;
  *(undefined2 *)(param_1 + 0x8ee) = 0;
  *(undefined8 *)(param_1 + 0x8f0) = 0x6900800080008000;
  *(undefined2 *)(param_1 + 0x908) = 0;
  return;
}


