/*
 * Ghidra decompilation
 *
 * Function : luaX_token2str
 * Address  : 00218320
 * Program  : drastic64
 */


undefined * luaX_token2str(long param_1,int param_2)

{
  undefined *puVar1;
  
  if (param_2 < 0x101) {
    puVar1 = (undefined *)luaO_pushfstring(*(undefined8 *)(param_1 + 0x38),&DAT_0022bd48,param_2);
    return puVar1;
  }
  if (0x120 < param_2) {
    return (&luaX_tokens)[param_2 + -0x101];
  }
  puVar1 = (undefined *)luaO_pushfstring(*(undefined8 *)(param_1 + 0x38),&DAT_0022bd50);
  return puVar1;
}


