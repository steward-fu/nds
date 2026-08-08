/*
 * Ghidra decompilation
 *
 * Function : luaX_lookahead
 * Address  : 0021a7b0
 * Program  : drastic64
 */


void luaX_lookahead(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = llex((int)param_1,param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  return;
}


