/*
 * Ghidra decompilation
 *
 * Function : luaL_addvalue
 * Address  : 08126114
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void luaL_addvalue(luaL_Buffer *B)

{
  char *__src;
  char *s;
  size_t sVar1;
  char *__dest;
  char *newbuff;
  int idx;
  size_t newsize;
  uint size;
  lua_State *L;
  lua_State *L_00;
  char *pcVar2;
  lua_State *L_01;
  size_t l;
  int local_2c;
  
  L_00 = B->L;
  pcVar2 = B->initb;
  local_2c = __stack_chk_guard;
  __src = lua_tolstring(L_00,-1,&l);
  if (B->b != pcVar2) {
    lua_rotate(L_00,-2,1);
  }
  sVar1 = B->n;
  if (l <= B->size - sVar1) {
    __dest = B->b;
    goto LAB_081261fc;
  }
  size = B->size * 2;
  L_01 = B->L;
  if (size - sVar1 < l) {
    size = l + sVar1;
    if (CARRY4(l,sVar1)) goto LAB_08126274;
  }
  else if (size < sVar1) {
LAB_08126274:
    luaL_error(L_01,"buffer too large");
  }
  __dest = (char *)lua_newuserdata(L_01,size);
  memcpy(__dest,B->b,B->n);
  if (pcVar2 != B->b) {
    lua_rotate(L_01,-2,-1);
    lua_settop(L_01,-2);
  }
  sVar1 = B->n;
  B->b = __dest;
  B->size = size;
LAB_081261fc:
  memcpy(__dest + sVar1,__src,l);
  if (pcVar2 == B->b) {
    idx = -1;
  }
  else {
    idx = -2;
  }
  B->n = B->n + l;
  lua_rotate(L_00,idx,-1);
  lua_settop(L_00,-2);
  if (local_2c != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


