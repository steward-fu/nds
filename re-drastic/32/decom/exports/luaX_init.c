/*
 * Ghidra decompilation
 *
 * Function : luaX_init
 * Address  : 081381f0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void luaX_init(lua_State *L)

{
  TString *pTVar1;
  TString *e;
  TString *ts;
  int iVar2;
  char **ppcVar3;
  
  iVar2 = 1;
  ppcVar3 = (char **)&UNK_08147edc;
  pTVar1 = luaS_new(L,"_ENV");
  luaC_fix(L,(GCObject *)pTVar1);
  do {
    ppcVar3 = ppcVar3 + 1;
    pTVar1 = luaS_new(L,*ppcVar3);
    luaC_fix(L,(GCObject *)pTVar1);
    pTVar1->extra = (lu_byte)iVar2;
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0x17);
  return;
}


