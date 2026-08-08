/*
 * Ghidra decompilation
 *
 * Function : luaC_barrier_
 * Address  : 0811782c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void luaC_barrier_(lua_State *L,GCObject *o,GCObject *v)

{
  global_State *g_00;
  global_State *g;
  
  g_00 = L->l_G;
  if (1 < g_00->gcstate) {
    o->marked = o->marked & 0xf8 | g_00->currentwhite & 3;
    return;
  }
  reallymarkobject(g_00,v);
  return;
}


