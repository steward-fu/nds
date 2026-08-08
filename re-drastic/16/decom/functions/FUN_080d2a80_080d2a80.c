/*
 * Ghidra decompilation
 *
 * Function : FUN_080d2a80
 * Address  : 080d2a80
 * Program  : drastic16
 */


undefined4 * FUN_080d2a80(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + (param_2 + 0x2e) * 4);
  *(undefined4 *)(param_1 + (param_2 + 0x2e) * 4) = *puVar1;
  return puVar1;
}


