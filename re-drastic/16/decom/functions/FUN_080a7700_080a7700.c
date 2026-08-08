/*
 * Ghidra decompilation
 *
 * Function : FUN_080a7700
 * Address  : 080a7700
 * Program  : drastic16
 */


void FUN_080a7700(int param_1,undefined param_2)

{
  char cVar1;
  
  cVar1 = FUN_080a79e8(param_1,param_2);
  if (cVar1 != '\x01') {
    if (*(char *)(param_1 + 0x10ead) != '\x01') {
      FUN_080a85d8(param_1 + 0x18,&DAT_080ed7c8,param_1 + 0x18);
    }
    FUN_080b71f4(&DAT_081cd0a0,2);
  }
  return;
}


