/*
 * Ghidra decompilation
 *
 * Function : lua_gc
 * Address  : 081110a0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int lua_gc(lua_State *L,int what,int data)

{
  lu_byte lVar1;
  uint uVar2;
  global_State *g_00;
  global_State *g;
  int debt;
  
  g_00 = L->l_G;
  switch(what) {
  case 0:
    uVar2 = 0;
    g_00->gcrunning = '\0';
    break;
  case 1:
    luaE_setdebt(g_00,0);
    uVar2 = 0;
    g_00->gcrunning = '\x01';
    break;
  case 2:
    luaC_fullgc(L,0);
    uVar2 = 0;
    break;
  case 3:
    uVar2 = g_00->totalbytes + g_00->GCdebt >> 10;
    break;
  case 4:
    uVar2 = g_00->totalbytes + g_00->GCdebt & 0x3ff;
    break;
  case 5:
    lVar1 = g_00->gcrunning;
    g_00->gcrunning = '\x01';
    if (data == 0) {
      luaE_setdebt(g_00,-2000);
      luaC_step(L);
      g_00->gcrunning = lVar1;
    }
    else {
      debt = g_00->GCdebt + data * 0x400;
      luaE_setdebt(g_00,debt);
      if (0 < L->l_G->GCdebt) {
        luaC_step(L);
      }
      g_00->gcrunning = lVar1;
      if (debt < 1) {
        return 0;
      }
    }
    uVar2 = (uint)(g_00->gcstate == '\a');
    break;
  case 6:
    uVar2 = g_00->gcpause;
    g_00->gcpause = data;
    break;
  case 7:
    uVar2 = g_00->gcstepmul;
    if (data < 0x28) {
      data = 0x28;
    }
    g_00->gcstepmul = data;
    break;
  default:
    uVar2 = 0xffffffff;
    break;
  case 9:
    uVar2 = (uint)g_00->gcrunning;
  }
  return uVar2;
}


