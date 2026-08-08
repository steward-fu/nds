/*
 * Ghidra decompilation
 *
 * Function : lua_stringtonumber
 * Address  : 0810e948
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */
/* Local variable sz:size_t[r0:4] conflicts with parameter, skipped. */

size_t lua_stringtonumber(lua_State *L,char *s)

{
  size_t sVar1;
  
  sVar1 = luaO_str2num(s,L->top);
  if (sVar1 != 0) {
    L->top = L->top + 1;
  }
  return sVar1;
}


