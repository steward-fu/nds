/*
 * Ghidra decompilation
 *
 * Function : FUN_080a5994
 * Address  : 080a5994
 * Program  : drastic16
 */


void FUN_080a5994(int param_1)

{
  char acStack_808 [2048];
  
  if (param_1 != 0) {
    FUN_080afbc8(param_1,acStack_808,0x800);
    chmod(acStack_808,0x1c0);
  }
  return;
}


