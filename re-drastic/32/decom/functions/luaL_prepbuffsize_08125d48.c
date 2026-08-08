/*
 * Ghidra decompilation
 *
 * Function : luaL_prepbuffsize
 * Address  : 08125d48
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

char * luaL_prepbuffsize(luaL_Buffer *B,size_t sz)

{
  char *__dest;
  char *newbuff;
  size_t sVar1;
  size_t newsize;
  uint size;
  lua_State *L;
  
  sVar1 = B->n;
  if (sz <= B->size - sVar1) {
    __dest = B->b;
    goto LAB_08125de4;
  }
  size = B->size * 2;
  L = B->L;
  if (size - sVar1 < sz) {
    size = sVar1 + sz;
    if (CARRY4(sVar1,sz)) goto LAB_08125e04;
  }
  else if (size < sVar1) {
LAB_08125e04:
    luaL_error(L,"buffer too large");
  }
  __dest = (char *)lua_newuserdata(L,size);
  memcpy(__dest,B->b,B->n);
  if (B->b != B->initb) {
    lua_rotate(L,-2,-1);
    lua_settop(L,-2);
  }
  sVar1 = B->n;
  B->b = __dest;
  B->size = size;
LAB_08125de4:
  return __dest + sVar1;
}


