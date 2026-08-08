/*
 * Ghidra decompilation
 *
 * Function : luaO_ceillog2
 * Address  : 081189bc
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int luaO_ceillog2(uint x)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  for (uVar1 = x - 1; 0xff < uVar1; uVar1 = uVar1 >> 8) {
    iVar2 = iVar2 + 8;
  }
  return (uint)""[uVar1] + iVar2;
}


