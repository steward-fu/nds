/*
 * Ghidra decompilation
 *
 * Function : FUN_0020649c
 * Address  : 0020649c
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0020649c(undefined8 param_1)

{
  FILE *pFVar1;
  undefined8 uVar2;
  
  pFVar1 = _stderr;
  uVar2 = lua_tolstring(param_1,0xffffffff,0);
  __fprintf_chk(pFVar1,1,"PANIC: unprotected error in call to Lua API (%s)\n",uVar2);
  fflush(_stderr);
  return 0;
}


