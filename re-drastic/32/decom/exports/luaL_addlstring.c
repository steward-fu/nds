/*
 * Ghidra decompilation
 *
 * Function : luaL_addlstring
 * Address  : 08125e20
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void luaL_addlstring(luaL_Buffer *B,char *s,size_t l)

{
  char *__dest;
  char *newbuff;
  size_t sVar1;
  size_t newsize;
  uint size;
  lua_State *L;
  
  sVar1 = B->n;
  if (l <= B->size - sVar1) {
    __dest = B->b;
    goto LAB_08125ec8;
  }
  size = B->size * 2;
  L = B->L;
  if (size - sVar1 < l) {
    size = l + sVar1;
    if (CARRY4(l,sVar1)) goto LAB_08125f04;
  }
  else if (size < sVar1) {
LAB_08125f04:
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
LAB_08125ec8:
  memcpy(__dest + sVar1,s,l);
  B->n = B->n + l;
  return;
}


