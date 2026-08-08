/*
 * Ghidra decompilation
 *
 * Function : luaV_shiftl
 * Address  : 08121dac
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

lua_Integer luaV_shiftl(lua_Integer x,lua_Integer y)

{
  if (y < 0) {
    if (y + 0x1f < 0 == SCARRY4(y,0x1f)) {
      return (uint)x >> (-y & 0xffU);
    }
  }
  else if (y < 0x20) {
    return x << (y & 0xffU);
  }
  return 0;
}


