/*
 * Ghidra decompilation
 *
 * Function : luaF_initupvals
 * Address  : 081157d0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */
/* Local variable uv:UpVal *[r0:4] conflicts with parameter, skipped. */

void luaF_initupvals(lua_State *L,LClosure *cl)

{
  Proto *pPVar1;
  int iVar2;
  Proto **ppPVar3;
  
  if (cl->nupvalues == '\0') {
    return;
  }
  iVar2 = 0;
  ppPVar3 = &cl->p;
  do {
    pPVar1 = (Proto *)luaM_realloc_(L,(void *)0x0,0,0x10);
    iVar2 = iVar2 + 1;
    pPVar1->next = (GCObject *)&pPVar1->maxstacksize;
    *(lu_mem *)&pPVar1->tt = 1;
    pPVar1->sizeupvalues = 0;
    ppPVar3 = ppPVar3 + 1;
    *ppPVar3 = pPVar1;
  } while (iVar2 < (int)(uint)cl->nupvalues);
  return;
}


