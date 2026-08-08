/*
 * Ghidra decompilation
 *
 * Function : luaD_rawrunprotected
 * Address  : 08113044
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int luaD_rawrunprotected(lua_State *L,Pfunc f,void *ud)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  ushort oldnCcalls;
  lua_longjmp lj;
  
  lj.previous = L->errorJmp;
  L->errorJmp = &lj;
  iVar2 = __stack_chk_guard;
  uVar1 = L->nCcalls;
  lj.status = 0;
  iVar3 = _setjmp((__jmp_buf_tag *)lj.b);
  if (iVar3 == 0) {
    (*f)(L,ud);
  }
  L->nCcalls = uVar1;
  bVar4 = iVar2 == __stack_chk_guard;
  L->errorJmp = lj.previous;
  if (bVar4) {
    return lj.status;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


