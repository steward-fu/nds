/*
 * Ghidra decompilation
 *
 * Function : FUN_080b5be4
 * Address  : 080b5be4
 * Program  : drastic16
 */


undefined4 FUN_080b5be4(uint param_1)

{
  undefined4 uVar1;
  
  if (((param_1 & 3) == 0) && (((int)param_1 % 100 != 0 || ((int)param_1 % 400 == 0)))) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


