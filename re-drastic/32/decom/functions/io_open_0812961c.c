/*
 * Ghidra decompilation
 *
 * Function : io_open
 * Address  : 0812961c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int io_open(lua_State *L)

{
  byte bVar1;
  char *__filename;
  char *filename;
  byte *__modes;
  char *mode;
  FILE **ppFVar2;
  LStream *p_1;
  char *pcVar3;
  FILE *pFVar4;
  int iVar5;
  byte *pbVar6;
  LStream *p;
  char *md;
  
  __filename = luaL_checklstring(L,1,(size_t *)0x0);
  __modes = (byte *)luaL_optlstring(L,2,"r",(size_t *)0x0);
  ppFVar2 = (FILE **)lua_newuserdata(L,8);
  ppFVar2[1] = (FILE *)0x0;
  luaL_setmetatable(L,"FILE*");
  *ppFVar2 = (FILE *)0x0;
  ppFVar2[1] = (FILE *)io_fclose;
  if ((*__modes != 0) && (pcVar3 = strchr("rwa",(uint)*__modes), pcVar3 != (char *)0x0)) {
    bVar1 = __modes[1];
    if (bVar1 == 0x2b) {
      bVar1 = __modes[2];
      pbVar6 = __modes + 2;
    }
    else {
      pbVar6 = __modes + 1;
    }
    if (bVar1 == 0x62) {
      if (pbVar6 == (byte *)0xffffffff) goto LAB_08129708;
      bVar1 = pbVar6[1];
    }
    if (bVar1 == 0) goto LAB_081296d8;
  }
LAB_08129708:
  luaL_argerror(L,2,"invalid mode");
LAB_081296d8:
  pFVar4 = fopen64(__filename,(char *)__modes);
  *ppFVar2 = pFVar4;
  if (pFVar4 != (FILE *)0x0) {
    return 1;
  }
  iVar5 = luaL_fileresult(L,0,__filename);
  return iVar5;
}


