/*
 * Ghidra decompilation
 *
 * Function : resume_error
 * Address  : 080061ec
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void resume_error(lua_State *L,char *msg,StkId firstArg)

{
  TString *pTVar1;
  TString *x_;
  TValue *io;
  StkId pTVar2;
  
  L->top = firstArg;
  pTVar1 = luaS_new(L,msg);
  (firstArg->value_).gc = (GCObject *)pTVar1;
  pTVar2 = L->top;
  firstArg->tt_ = pTVar1->tt | 0x40;
  L->top = pTVar2 + 1;
                    /* WARNING: Subroutine does not return */
  luaD_throw(L,-1);
}


