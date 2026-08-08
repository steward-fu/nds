/*
 * Ghidra decompilation
 *
 * Function : luaL_gsub
 * Address  : 08127050
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

char * luaL_gsub(lua_State *L,char *s,char *p,char *r)

{
  size_t sVar1;
  size_t l;
  char *wild;
  char *newbuff;
  size_t __n;
  char *pcVar2;
  char *newbuff_1;
  char *pcVar3;
  char *newbuff_2;
  lua_State *L_4;
  size_t newsize;
  size_t newsize_2;
  lua_State *size;
  size_t newsize_1;
  uint __n_00;
  bool bVar4;
  char *local_83c;
  lua_State *L_3;
  lua_State *local_834;
  char acStack_82c [2048];
  int local_2c;
  
  local_2c = __stack_chk_guard;
  sVar1 = strlen(p);
  L_3 = (lua_State *)0x800;
  local_834 = (lua_State *)0x0;
  local_83c = acStack_82c;
  while (pcVar3 = strstr(s,p), pcVar3 != (char *)0x0) {
    __n_00 = (int)pcVar3 - (int)s;
    if ((uint)((int)L_3 - (int)local_834) < __n_00) {
      L_3 = (lua_State *)((int)L_3 * 2);
      if ((uint)((int)L_3 - (int)local_834) < __n_00) {
        L_3 = (lua_State *)(__n_00 + (int)local_834);
        if (CARRY4(__n_00,(uint)local_834)) {
LAB_08127250:
          luaL_error(L,"buffer too large");
        }
      }
      else if (L_3 < local_834) goto LAB_08127250;
      pcVar2 = (char *)lua_newuserdata(L,(size_t)L_3);
      memcpy(pcVar2,local_83c,(size_t)local_834);
      bVar4 = local_83c != acStack_82c;
      local_83c = pcVar2;
      if (bVar4) {
        lua_rotate(L,-2,-1);
        lua_settop(L,-2);
      }
    }
    memcpy(local_83c + (int)local_834,s,__n_00);
    local_834 = (lua_State *)(__n_00 + (int)local_834);
    __n = strlen(r);
    if ((uint)((int)L_3 - (int)local_834) < __n) {
      L_3 = (lua_State *)((int)L_3 * 2);
      if ((uint)((int)L_3 - (int)local_834) < __n) {
        L_3 = (lua_State *)((int)&local_834->next + __n);
        if (CARRY4(__n,(uint)local_834)) {
LAB_08127268:
          luaL_error(L,"buffer too large");
        }
      }
      else if (L_3 < local_834) goto LAB_08127268;
      pcVar2 = (char *)lua_newuserdata(L,(size_t)L_3);
      memcpy(pcVar2,local_83c,(size_t)local_834);
      bVar4 = local_83c != acStack_82c;
      local_83c = pcVar2;
      if (bVar4) {
        lua_rotate(L,-2,-1);
        lua_settop(L,-2);
      }
    }
    s = pcVar3 + sVar1;
    memcpy(local_83c + (int)local_834,r,__n);
    local_834 = (lua_State *)((int)&local_834->next + __n);
  }
  sVar1 = strlen(s);
  if (sVar1 <= (uint)((int)L_3 - (int)local_834)) goto LAB_08127308;
  size = (lua_State *)((int)L_3 * 2);
  if ((uint)((int)size - (int)local_834) < sVar1) {
    size = (lua_State *)((int)&local_834->next + sVar1);
    if (CARRY4(sVar1,(uint)local_834)) goto LAB_081273b0;
  }
  else if (size < local_834) {
LAB_081273b0:
    luaL_error(L,"buffer too large");
  }
  pcVar3 = (char *)lua_newuserdata(L,(size_t)size);
  memcpy(pcVar3,local_83c,(size_t)local_834);
  bVar4 = local_83c != acStack_82c;
  local_83c = pcVar3;
  if (bVar4) {
    lua_rotate(L,-2,-1);
    lua_settop(L,-2);
  }
LAB_08127308:
  memcpy(local_83c + (int)local_834,s,sVar1);
  lua_pushlstring(L,local_83c,(int)&local_834->next + sVar1);
  if (local_83c != acStack_82c) {
    lua_rotate(L,-2,-1);
    lua_settop(L,-2);
  }
  pcVar3 = lua_tolstring(L,-1,(size_t *)0x0);
  if (local_2c != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pcVar3;
}


