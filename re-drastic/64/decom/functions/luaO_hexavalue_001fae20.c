/*
 * Ghidra decompilation
 *
 * Function : luaO_hexavalue
 * Address  : 001fae20
 * Program  : drastic64
 */


int luaO_hexavalue(uint param_1)

{
  int iVar1;
  
  iVar1 = (param_1 | 0x20) - 0x57;
  if (((&luai_ctype_)[(int)(param_1 + 1)] & 2) != 0) {
    iVar1 = param_1 - 0x30;
  }
  return iVar1;
}


