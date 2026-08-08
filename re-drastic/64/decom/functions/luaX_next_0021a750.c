/*
 * Ghidra decompilation
 *
 * Function : luaX_next
 * Address  : 0021a750
 * Program  : drastic64
 */


void luaX_next(long param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 4);
  if (*(int *)(param_1 + 0x20) != 0x121) {
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x20) = 0x121;
    return;
  }
  uVar1 = llex(param_1,param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  return;
}


