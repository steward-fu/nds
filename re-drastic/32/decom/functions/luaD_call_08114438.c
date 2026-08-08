/*
 * Ghidra decompilation
 *
 * Function : luaD_call
 * Address  : 08114438
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void luaD_call(lua_State *L,StkId func,int nResults,int allowyield)

{
  int iVar1;
  ushort uVar2;
  
  uVar2 = L->nCcalls + 1;
  L->nCcalls = uVar2;
  if (199 < uVar2) {
    if (uVar2 == 200) {
                    /* WARNING: Subroutine does not return */
      luaG_runerror(L,"C stack overflow");
    }
    if (0xe0 < uVar2) {
                    /* WARNING: Subroutine does not return */
      luaD_throw(L,6);
    }
  }
  if (allowyield == 0) {
    L->nny = L->nny + 1;
    iVar1 = luaD_precall(L,func,nResults);
    if (iVar1 == 0) {
      luaV_execute(L);
    }
    L->nny = L->nny - 1;
  }
  else {
    iVar1 = luaD_precall(L,func,nResults);
    if (iVar1 == 0) {
      luaV_execute(L);
    }
  }
  L->nCcalls = L->nCcalls - 1;
  return;
}


