/*
 * Ghidra decompilation
 *
 * Function : intarith
 * Address  : 08118894
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

lua_Integer intarith(lua_State *L,int op,lua_Integer v1,lua_Integer v2)

{
  lua_Integer lVar1;
  uint uVar2;
  
  switch(op) {
  case 0:
    uVar2 = v1 + v2;
    break;
  case 1:
    uVar2 = v1 - v2;
    break;
  case 2:
    uVar2 = v2 * v1;
    break;
  case 3:
    lVar1 = luaV_mod(L,v1,v2);
    return lVar1;
  default:
    uVar2 = 0;
    break;
  case 6:
    lVar1 = luaV_div(L,v1,v2);
    return lVar1;
  case 7:
    uVar2 = v1 & v2;
    break;
  case 8:
    uVar2 = v1 | v2;
    break;
  case 9:
    uVar2 = v1 ^ v2;
    break;
  case 10:
    lVar1 = luaV_shiftl(v1,v2);
    return lVar1;
  case 0xb:
    lVar1 = luaV_shiftl(v1,-v2);
    return lVar1;
  case 0xc:
    uVar2 = -v1;
    break;
  case 0xd:
    uVar2 = ~v1;
  }
  return uVar2;
}


