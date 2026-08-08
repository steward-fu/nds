/*
 * Ghidra decompilation
 *
 * Function : luaL_addstring
 * Address  : 08125f20
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void luaL_addstring(luaL_Buffer *B,char *s)

{
  size_t __n;
  char *__dest;
  char *newbuff;
  size_t sVar1;
  size_t newsize;
  uint size;
  lua_State *L;
  
  __n = strlen(s);
  sVar1 = B->n;
  if (__n <= B->size - sVar1) {
    __dest = B->b;
    goto LAB_08125fd0;
  }
  size = B->size * 2;
  L = B->L;
  if (size - sVar1 < __n) {
    size = __n + sVar1;
    if (CARRY4(__n,sVar1)) goto LAB_0812600c;
  }
  else if (size < sVar1) {
LAB_0812600c:
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
LAB_08125fd0:
  memcpy(__dest + sVar1,s,__n);
  B->n = B->n + __n;
  return;
}


