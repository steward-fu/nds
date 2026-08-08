/*
 * Ghidra decompilation
 *
 * Function : luaT_init
 * Address  : 0811fc30
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void luaT_init(lua_State *L)

{
  TString *pTVar1;
  global_State *pgVar2;
  int iVar3;
  int iVar4;
  char **ppcVar5;
  global_State *pgVar6;
  
  ppcVar5 = (char **)&UNK_081462e4;
  iVar3 = 0;
  do {
    ppcVar5 = ppcVar5 + 1;
    pgVar6 = L->l_G;
    pTVar1 = luaS_new(L,*ppcVar5);
    pgVar2 = L->l_G;
    iVar4 = iVar3 + 1;
    pgVar6->tmname[iVar3] = pTVar1;
    luaC_fix(L,(GCObject *)pgVar2->tmname[iVar3]);
    iVar3 = iVar4;
  } while (iVar4 != 0x18);
  return;
}


