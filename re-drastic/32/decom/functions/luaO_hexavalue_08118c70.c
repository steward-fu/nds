/*
 * Ghidra decompilation
 *
 * Function : luaO_hexavalue
 * Address  : 08118c70
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int luaO_hexavalue(int c)

{
  int iVar1;
  
  if ((""[c + 1] & 2) == 0) {
    iVar1 = (c | 0x20U) - 0x57;
  }
  else {
    iVar1 = c + -0x30;
  }
  return iVar1;
}


