/*
 * Ghidra decompilation
 *
 * Function : etoupperw
 * Address  : 001b4a30
 * Program  : drastic64
 */


/* etoupperw(wchar_t) */

undefined8 etoupperw(wchar_t param_1)

{
  undefined8 uVar1;
  
  if (param_1 != L'i') {
    uVar1 = toupperw(param_1);
    return uVar1;
  }
  return 0x49;
}


