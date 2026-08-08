/*
 * Ghidra decompilation
 *
 * Function : varinfo
 * Address  : 08111fd8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

char * varinfo(lua_State *L,TValue *o)

{
  int **ppiVar1;
  char *pcVar2;
  uint uVar3;
  StkId pTVar4;
  int iVar5;
  TString *s;
  lua_CFunction p_Var6;
  LClosure *c;
  CallInfo *pCVar7;
  CallInfo *ci;
  char *name;
  int local_14;
  
  pCVar7 = L->ci;
  uVar3 = 0;
  name = (char *)0x0;
  local_14 = __stack_chk_guard;
  if ((pCVar7->callstatus & 2) == 0) {
LAB_0811207c:
    pcVar2 = "";
  }
  else {
    p_Var6 = (pCVar7->func->value_).f;
    if ((byte)p_Var6[6] == 0) {
LAB_0811205c:
      pTVar4 = (pCVar7->u).l.base;
      iVar5 = (int)o - (int)pTVar4 >> 3;
      if (((iVar5 < 0) || ((int)pCVar7->top - (int)pTVar4 >> 3 <= iVar5)) ||
         (pcVar2 = getobjname(*(Proto **)(p_Var6 + 0xc),
                              ((int)(pCVar7->u).l.savedpc - (int)(*(Proto **)(p_Var6 + 0xc))->code
                              >> 2) + -1,iVar5,&name), pcVar2 == (char *)0x0)) goto LAB_0811207c;
    }
    else {
      if (o != **(TValue ***)(p_Var6 + 0x10)) {
        ppiVar1 = (int **)(p_Var6 + 0x10);
        do {
          uVar3 = uVar3 + 1;
          if (uVar3 == (byte)p_Var6[6]) goto LAB_0811205c;
          ppiVar1 = ppiVar1 + 1;
        } while (o != (TValue *)**ppiVar1);
      }
      iVar5 = *(int *)(*(int *)(*(int *)(p_Var6 + 0xc) + 0x40) + uVar3 * 8);
      pcVar2 = "upvalue";
      if (iVar5 == 0) {
        name = "?";
      }
      else {
        name = (char *)(iVar5 + 0x18);
      }
    }
    pcVar2 = luaO_pushfstring(L," (%s \'%s\')",pcVar2,name);
  }
  if (local_14 == __stack_chk_guard) {
    return pcVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


