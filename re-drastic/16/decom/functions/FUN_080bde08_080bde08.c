/*
 * Ghidra decompilation
 *
 * Function : FUN_080bde08
 * Address  : 080bde08
 * Program  : drastic16
 */


uint FUN_080bde08(int *param_1)

{
  uint uVar1;
  
  if (*param_1 == 2) {
    uVar1 = ~param_1[1];
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


