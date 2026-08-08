/*
 * Ghidra decompilation
 *
 * Function : io_open
 * Address  : 0020ac80
 * Program  : drastic64
 */


undefined8 io_open(undefined8 param_1)

{
  byte bVar1;
  char *__filename;
  byte *__modes;
  FILE **ppFVar2;
  char *pcVar3;
  FILE *pFVar4;
  undefined8 uVar5;
  byte *pbVar6;
  
  __filename = (char *)luaL_checklstring(param_1,1,0);
  __modes = (byte *)luaL_optlstring(param_1,2,"r",0);
  ppFVar2 = (FILE **)lua_newuserdata(param_1,0x10);
  ppFVar2[1] = (FILE *)0x0;
  luaL_setmetatable(param_1,"FILE*");
  *ppFVar2 = (FILE *)0x0;
  ppFVar2[1] = (FILE *)io_fclose;
  if ((*__modes != 0) && (pcVar3 = strchr("rwa",(uint)*__modes), pcVar3 != (char *)0x0)) {
    bVar1 = __modes[1];
    pbVar6 = __modes + 1;
    if (bVar1 == 0x2b) {
      bVar1 = __modes[2];
      pbVar6 = __modes + 2;
    }
    if (bVar1 == 0x62) {
      bVar1 = pbVar6[1];
    }
    if (bVar1 == 0) goto LAB_0020ad40;
  }
  luaL_argerror(param_1,2,"invalid mode");
LAB_0020ad40:
  pFVar4 = fopen64(__filename,(char *)__modes);
  *ppFVar2 = pFVar4;
  if (pFVar4 == (FILE *)0x0) {
    uVar5 = luaL_fileresult(param_1,0,__filename);
    return uVar5;
  }
  return 1;
}


