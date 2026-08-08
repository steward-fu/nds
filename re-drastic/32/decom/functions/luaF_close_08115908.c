/*
 * Ghidra decompilation
 *
 * Function : luaF_close
 * Address  : 08115908
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void luaF_close(lua_State *L,StkId level)

{
  UpVal *uv_00;
  UpVal *uv;
  TValue *pTVar1;
  Value VVar2;
  lu_mem lVar3;
  int iVar4;
  
LAB_0811591c:
  do {
    uv_00 = L->openupval;
    while( true ) {
      if (uv_00 == (UpVal *)0x0) {
        return;
      }
      pTVar1 = uv_00->v;
      if (pTVar1 < level) {
        return;
      }
      lVar3 = uv_00->refcount;
      L->openupval = (uv_00->u).open.next;
      if (lVar3 == 0) break;
      VVar2 = pTVar1->value_;
      iVar4 = pTVar1->tt_;
      uv_00->v = (TValue *)&uv_00->u;
      (uv_00->u).open.next = (UpVal *)VVar2;
      (uv_00->u).open.touched = iVar4;
      if (((uv_00->u).open.touched & 0x40U) == 0) goto LAB_0811591c;
      luaC_upvalbarrier_(L,uv_00);
      uv_00 = L->openupval;
    }
    luaM_realloc_(L,uv_00,0x10,0);
  } while( true );
}


