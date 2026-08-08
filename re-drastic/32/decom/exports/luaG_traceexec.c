/*
 * Ghidra decompilation
 *
 * Function : luaG_traceexec
 * Address  : 08112cd8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void luaG_traceexec(lua_State *L)

{
  byte bVar1;
  Instruction *pIVar2;
  int newline;
  byte bVar3;
  int iVar4;
  Proto *p;
  int iVar5;
  int npc;
  CallInfo *ci;
  CallInfo *pCVar6;
  lu_byte mask;
  byte bVar7;
  int iVar8;
  
  pCVar6 = L->ci;
  bVar1 = L->hookmask;
  if (((bVar1 & 8) == 0) || (L->hookcount != 0)) {
    bVar3 = pCVar6->callstatus;
    bVar7 = bVar3 & 0x40;
    if ((bVar3 & 0x40) != 0) goto LAB_08112d68;
  }
  else {
    L->hookcount = L->basehookcount;
    bVar3 = pCVar6->callstatus;
    if ((bVar3 & 0x40) != 0) {
LAB_08112d68:
      pCVar6->callstatus = bVar3 & 0xbf;
      return;
    }
    newline = -1;
    bVar7 = 1;
    luaD_hook(L,3,-1);
  }
  if ((bVar1 & 4) != 0) {
    pIVar2 = (pCVar6->u).l.savedpc;
    iVar4 = *(int *)((pCVar6->func->value_).f + 0xc);
    iVar8 = *(int *)(iVar4 + 0x30);
    iVar4 = *(int *)(iVar4 + 0x38);
    if (iVar4 == 0) {
      newline = -1;
    }
    iVar5 = ((int)pIVar2 - iVar8 >> 2) + -1;
    if (iVar4 != 0) {
      newline = *(int *)(iVar4 + iVar5 * 4);
    }
    if ((iVar5 != 0) && (L->oldpc < pIVar2)) {
      if (iVar4 == 0) {
        iVar4 = -1;
      }
      else {
        iVar4 = *(int *)((int)L->oldpc + (iVar4 - iVar8) + -4);
      }
      if (newline == iVar4) goto LAB_08112d38;
    }
    luaD_hook(L,2,newline);
  }
  pIVar2 = (pCVar6->u).l.savedpc;
LAB_08112d38:
  L->oldpc = pIVar2;
  if (L->status != '\x01') {
    return;
  }
  if (bVar7 != 0) {
    L->hookcount = 1;
  }
  bVar1 = pCVar6->callstatus;
  (pCVar6->u).l.savedpc = (Instruction *)((pCVar6->u).c.old_errfunc + -4);
  pCVar6->callstatus = bVar1 | 0x40;
  pCVar6->func = L->top + -1;
                    /* WARNING: Subroutine does not return */
  luaD_throw(L,1);
}


