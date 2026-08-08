/*
 * Ghidra decompilation
 *
 * Function : luaL_buffinitsize
 * Address  : 081262b0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

char * luaL_buffinitsize(lua_State *L,luaL_Buffer *B,size_t sz)

{
  lua_State *L_1;
  char *__dest;
  char *newbuff;
  char *pcVar1;
  size_t sVar2;
  
  sVar2 = 0;
  pcVar1 = B->initb;
  B->b = pcVar1;
  B->size = 0x800;
  B->n = 0;
  B->L = L;
  if (0x800 < sz) {
    if (sz < 0x1000) {
      sz = 0x1000;
    }
    __dest = (char *)lua_newuserdata(L,sz);
    memcpy(__dest,B->b,B->n);
    if (pcVar1 != B->b) {
      lua_rotate(L,-2,-1);
      lua_settop(L,-2);
    }
    sVar2 = B->n;
    B->b = __dest;
    B->size = sz;
    pcVar1 = __dest;
  }
  return pcVar1 + sVar2;
}


