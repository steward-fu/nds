/*
 * Ghidra decompilation
 *
 * Function : luaC_upvdeccount
 * Address  : 08117ac0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void luaC_upvdeccount(lua_State *L,UpVal *uv)

{
  lu_mem lVar1;
  
  lVar1 = uv->refcount - 1;
  uv->refcount = lVar1;
  if ((lVar1 == 0) && (uv->v == (TValue *)&uv->u)) {
    luaM_realloc_(L,uv,0x10,0);
    return;
  }
  return;
}


