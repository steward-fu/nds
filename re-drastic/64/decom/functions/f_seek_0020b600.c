/*
 * Ghidra decompilation
 *
 * Function : f_seek
 * Address  : 0020b600
 * Program  : drastic64
 */


undefined8 f_seek(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  FILE **ppFVar3;
  undefined8 uVar4;
  ulong uVar5;
  FILE *__stream;
  
  ppFVar3 = (FILE **)luaL_checkudata(param_1,1,"FILE*");
  if (ppFVar3[1] == (FILE *)0x0) {
    luaL_error(param_1,"attempt to use a closed file");
  }
  __stream = *ppFVar3;
  iVar1 = luaL_checkoption(param_1,2,&DAT_0022ad50,modenames_5351);
  iVar2 = luaL_optinteger(param_1,3,0);
  iVar1 = fseeko64(__stream,(long)iVar2,*(int *)(mode_5350 + (long)iVar1 * 4));
  if (iVar1 != 0) {
    uVar4 = luaL_fileresult(param_1,0,0);
    return uVar4;
  }
  uVar5 = ftello64(__stream);
  lua_pushinteger(param_1,uVar5 & 0xffffffff);
  return 1;
}


