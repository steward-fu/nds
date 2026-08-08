/*
 * Ghidra decompilation
 *
 * Function : luaO_ceillog2
 * Address  : 001fac10
 * Program  : drastic64
 */


int luaO_ceillog2(int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  for (uVar1 = param_1 - 1; 0xff < uVar1; uVar1 = uVar1 >> 8) {
    iVar2 = iVar2 + 8;
  }
  return (uint)(byte)(&log_2_6309)[uVar1] + iVar2;
}


