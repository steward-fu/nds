/*
 * Ghidra decompilation
 *
 * Function : luaZ_init
 * Address  : 08124688
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void luaZ_init(lua_State *L,ZIO *z,lua_Reader reader,void *data)

{
  z->n = 0;
  z->p = (char *)0x0;
  z->reader = reader;
  z->data = data;
  z->L = L;
  return;
}


