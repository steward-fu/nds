/*
 * Ghidra decompilation
 *
 * Function : error_expected
 * Address  : 001fb980
 * Program  : drastic64
 */


void error_expected(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uVar1 = luaX_token2str();
  uVar1 = luaO_pushfstring(uVar2,"%s expected",uVar1);
                    /* WARNING: Subroutine does not return */
  luaX_syntaxerror(param_1,uVar1);
}


