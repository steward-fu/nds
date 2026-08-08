/*
 * Ghidra decompilation
 *
 * Function : FUN_080b3764
 * Address  : 080b3764
 * Program  : drastic16
 */


int FUN_080b3764(int param_1)

{
  int iVar1;
  
  FUN_080b7588(param_1,0x9e0);
  if (param_1 != 0) {
    iVar1 = param_1 + 0x9e0;
    while (iVar1 != param_1) {
      iVar1 = iVar1 + -0x278;
      FUN_080b3ea0(iVar1);
    }
  }
  return param_1;
}


