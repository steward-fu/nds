/*
 * Ghidra decompilation
 *
 * Function : str_byte
 * Address  : 0812c428
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int str_byte(lua_State *L)

{
  char *pcVar1;
  char *s;
  lua_Integer def;
  lua_Integer pose;
  int space;
  byte *pbVar2;
  int n;
  size_t l;
  int local_24;
  byte *pbVar3;
  
  local_24 = __stack_chk_guard;
  pcVar1 = luaL_checklstring(L,1,&l);
  def = luaL_optinteger(L,2,1);
  if (def < 0) {
    if ((uint)-def <= l) {
      def = l + def + 1;
      goto LAB_0812c478;
    }
    pose = luaL_optinteger(L,3,0);
    if (-1 < pose) {
      def = 1;
      goto LAB_0812c49c;
    }
    def = 0;
LAB_0812c570:
    if ((uint)-pose < l || -l == pose) {
      pose = l + pose + 1;
    }
    else {
      pose = 0;
    }
  }
  else {
LAB_0812c478:
    pose = luaL_optinteger(L,3,def);
    if (pose < 0) goto LAB_0812c570;
  }
  if (def < 1) {
    def = 1;
  }
LAB_0812c49c:
  if ((int)l <= pose) {
    pose = l;
  }
  if (pose < def) {
    space = 0;
  }
  else {
    space = (pose - def) + 1;
    if (pose < def + space) {
      luaL_checkstack(L,space,"string slice too long");
      pbVar3 = (byte *)(pcVar1 + def + -1);
      do {
        pbVar2 = pbVar3 + 1;
        lua_pushinteger(L,(uint)*pbVar3);
        pbVar3 = pbVar2;
      } while (pbVar2 != (byte *)(pcVar1 + (pose - def) + def));
    }
    else {
      space = luaL_error(L,"string slice too long");
    }
  }
  if (local_24 == __stack_chk_guard) {
    return space;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


