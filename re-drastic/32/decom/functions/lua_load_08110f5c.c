/*
 * Ghidra decompilation
 *
 * Function : lua_load
 * Address  : 08110f5c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int lua_load(lua_State *L,lua_Reader reader,void *data,char *chunkname,char *mode)

{
  int iVar1;
  int iVar2;
  int status;
  TValue *pTVar3;
  TValue *gt;
  UpVal *uv;
  TValue *pTVar4;
  TValue *io1;
  char *unaff_r4;
  lua_CFunction p_Var5;
  LClosure *f;
  int iVar6;
  ZIO z;
  
  iVar1 = __stack_chk_guard;
  if (chunkname != (char *)0x0) {
    unaff_r4 = chunkname;
  }
  if (chunkname == (char *)0x0) {
    unaff_r4 = "?";
  }
  luaZ_init(L,&z,reader,data);
  iVar2 = luaD_protectedparser(L,&z,unaff_r4,mode);
  if ((iVar2 == 0) && (p_Var5 = L->top[-1].value_.f, p_Var5[6] != (_func_int_lua_State_ptr)0x0)) {
    pTVar3 = luaH_getint((Table *)(L->l_G->l_registry).value_.gc,2);
    uv = *(UpVal **)(p_Var5 + 0x10);
    iVar6 = pTVar3->tt_;
    pTVar4 = uv->v;
    pTVar4->value_ = pTVar3->value_;
    pTVar4->tt_ = iVar6;
    if (((pTVar4->tt_ & 0x40U) != 0) && (pTVar4 == (TValue *)&uv->u)) {
      luaC_upvalbarrier_(L,uv);
    }
  }
  if (iVar1 == __stack_chk_guard) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


