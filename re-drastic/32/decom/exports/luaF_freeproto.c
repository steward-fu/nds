/*
 * Ghidra decompilation
 *
 * Function : luaF_freeproto
 * Address  : 08115a0c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void luaF_freeproto(lua_State *L,Proto *f)

{
  luaM_realloc_(L,f->code,f->sizecode << 2,0);
  luaM_realloc_(L,f->p,f->sizep << 2,0);
  luaM_realloc_(L,f->k,f->sizek << 3,0);
  luaM_realloc_(L,f->lineinfo,f->sizelineinfo << 2,0);
  luaM_realloc_(L,f->locvars,f->sizelocvars * 0xc,0);
  luaM_realloc_(L,f->upvalues,f->sizeupvalues << 3,0);
  luaM_realloc_(L,f,0x50,0);
  return;
}


