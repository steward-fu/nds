/*
 * Ghidra decompilation
 *
 * Function : io_close
 * Address  : 0020b490
 * Program  : drastic64
 */


void io_close(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar1 = lua_type(param_1,1);
  if (iVar1 == -1) {
    lua_getfield(param_1,0xfff0b9d8,"_IO_output");
    lVar2 = luaL_checkudata(param_1,1,"FILE*");
    lVar2 = *(long *)(lVar2 + 8);
  }
  else {
    lVar2 = luaL_checkudata(param_1,1,"FILE*");
    lVar2 = *(long *)(lVar2 + 8);
  }
  if (lVar2 == 0) {
    luaL_error(param_1,"attempt to use a closed file");
  }
  lVar2 = luaL_checkudata(param_1,1,"FILE*");
  UNRECOVERED_JUMPTABLE = *(code **)(lVar2 + 8);
  *(undefined8 *)(lVar2 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x0020b500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1);
  return;
}


