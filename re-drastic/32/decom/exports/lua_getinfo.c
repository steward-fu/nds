/*
 * Ghidra decompilation
 *
 * Function : lua_getinfo
 * Address  : 08112418
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int lua_getinfo(lua_State *L,char *what,lua_Debug *ar)

{
  int iVar1;
  char *pcVar2;
  Table *t_00;
  Table *t;
  Proto *pPVar3;
  int iVar4;
  TValue *io;
  lu_byte *source;
  uint uVar5;
  char *pcVar6;
  char cVar7;
  byte bVar8;
  int iVar9;
  StkId pTVar10;
  StkId pTVar11;
  Proto *p;
  CallInfo *pCVar12;
  Instruction *pIVar13;
  uint uVar14;
  Closure *cl;
  int *piVar15;
  int *lineinfo;
  lua_Integer *plVar16;
  CallInfo *pCVar17;
  CallInfo *ci;
  StkId func;
  int local_4c;
  lu_byte *local_48;
  char *local_40;
  char *local_3c;
  TValue v;
  
  iVar1 = __stack_chk_guard;
  cVar7 = *what;
  if (cVar7 == '>') {
    pCVar17 = (CallInfo *)0x0;
    what = what + 1;
    func = L->top + -1;
    L->top = func;
    cVar7 = *what;
  }
  else {
    pCVar17 = ar->i_ci;
    func = pCVar17->func;
  }
  if ((func->tt_ & 0x1fU) == 6) {
    cl = (Closure *)(func->value_).gc;
  }
  else {
    cl = (Closure *)0x0;
  }
  if (cVar7 == '\0') {
    local_4c = 1;
  }
  else {
    local_4c = 1;
    local_48 = "=[C]";
    local_40 = "metamethod";
    local_3c = "for iterator";
    pcVar2 = what;
    do {
      switch(cVar7) {
      default:
        local_4c = 0;
        cVar7 = pcVar2[1];
        break;
      case 'S':
        if ((cl == (Closure *)0x0) || ((cl->c).tt == '&')) {
          ar->what = "C";
          ar->source = "=[C]";
          ar->linedefined = -1;
          ar->lastlinedefined = -1;
          source = local_48;
        }
        else {
          pPVar3 = (cl->l).p;
          iVar4 = pPVar3->linedefined;
          iVar9 = pPVar3->lastlinedefined;
          if (pPVar3->source == (TString *)0x0) {
            source = "=?";
          }
          else {
            source = &pPVar3->source[1].tt;
          }
          pcVar6 = "Lua";
          if (pPVar3->linedefined == 0) {
            pcVar6 = "main";
          }
          ar->source = (char *)source;
          ar->linedefined = iVar4;
          ar->lastlinedefined = iVar9;
          ar->what = pcVar6;
        }
        luaO_chunkid(ar->short_src,(char *)source,0x3c);
        cVar7 = pcVar2[1];
        break;
      case 'l':
        if ((pCVar17 == (CallInfo *)0x0) || ((pCVar17->callstatus & 2) == 0)) {
LAB_081127ec:
          iVar4 = -1;
        }
        else {
          iVar9 = *(int *)((pCVar17->func->value_).f + 0xc);
          iVar4 = *(int *)(iVar9 + 0x38);
          if (iVar4 == 0) goto LAB_081127ec;
          iVar4 = *(int *)(iVar4 + (((int)(pCVar17->u).l.savedpc - *(int *)(iVar9 + 0x30) >> 2) + -1
                                   ) * 4);
        }
        ar->currentline = iVar4;
      case 'L':
      case 'f':
switchD_081124c0_caseD_4c:
        cVar7 = pcVar2[1];
        break;
      case 'n':
        if ((pCVar17 != (CallInfo *)0x0) && ((pCVar17->callstatus & 0x20) == 0)) {
          pCVar12 = pCVar17->previous;
          if ((pCVar12->callstatus & 2) != 0) {
            if ((pCVar12->callstatus & 4) == 0) {
              pPVar3 = *(Proto **)((pCVar12->func->value_).f + 0xc);
              pIVar13 = pPVar3->code;
              iVar4 = ((int)(pCVar12->u).l.savedpc - (int)pIVar13 >> 2) + -1;
              uVar5 = pIVar13[iVar4];
              uVar14 = uVar5 & 0x3f;
              switch(uVar14) {
              case 8:
              case 10:
                iVar4 = 1;
                break;
              default:
                iVar4 = 0;
                break;
              case 0xd:
              case 0xe:
              case 0xf:
              case 0x10:
              case 0x11:
              case 0x12:
              case 0x13:
              case 0x14:
              case 0x15:
              case 0x16:
              case 0x17:
              case 0x18:
                iVar4 = uVar14 - 7;
                break;
              case 0x19:
                iVar4 = 0x12;
                break;
              case 0x1a:
                iVar4 = 0x13;
                break;
              case 0x1c:
                iVar4 = 4;
                break;
              case 0x1d:
                iVar4 = 0x16;
                break;
              case 0x1f:
                iVar4 = 5;
                break;
              case 0x20:
                iVar4 = 0x14;
                break;
              case 0x21:
                iVar4 = 0x15;
                break;
              case 0x24:
              case 0x25:
                pcVar6 = getobjname(pPVar3,iVar4,(uVar5 << 0x12) >> 0x18,&ar->name);
                ar->namewhat = pcVar6;
                if (pcVar6 != (char *)0x0) goto switchD_081124c0_caseD_4c;
                goto LAB_081127b4;
              case 0x29:
                ar->name = "for iterator";
                pcVar6 = local_3c;
                goto LAB_08112968;
              }
              ar->name = (char *)&L->l_G->tmname[iVar4][1].tt;
              pcVar6 = local_40;
            }
            else {
              pcVar6 = "hook";
              ar->name = "?";
            }
LAB_08112968:
            ar->namewhat = pcVar6;
            cVar7 = pcVar2[1];
            break;
          }
        }
LAB_081127b4:
        ar->name = (char *)0x0;
        ar->namewhat = "";
        cVar7 = pcVar2[1];
        break;
      case 't':
        if (pCVar17 == (CallInfo *)0x0) {
          bVar8 = 0;
        }
        else {
          bVar8 = pCVar17->callstatus & 0x20;
        }
        ar->istailcall = bVar8;
        cVar7 = pcVar2[1];
        break;
      case 'u':
        if (cl == (Closure *)0x0) {
          ar->nups = '\0';
        }
        else {
          ar->nups = (cl->c).nupvalues;
          if ((cl->c).tt != '&') {
            ar->isvararg = ((cl->l).p)->is_vararg;
            ar->nparams = ((cl->l).p)->numparams;
            cVar7 = pcVar2[1];
            break;
          }
        }
        ar->nparams = '\0';
        ar->isvararg = '\x01';
        cVar7 = pcVar2[1];
      }
      pcVar2 = pcVar2 + 1;
    } while (cVar7 != '\0');
  }
  pcVar2 = strchr(what,0x66);
  if (pcVar2 != (char *)0x0) {
    pTVar10 = L->top;
    iVar4 = func->tt_;
    pTVar10->value_ = func->value_;
    pTVar10->tt_ = iVar4;
    L->top = pTVar10 + 1;
  }
  pcVar2 = strchr(what,0x4c);
  if (pcVar2 != (char *)0x0) {
    if ((cl == (Closure *)0x0) || ((cl->c).tt == '&')) {
      pTVar10 = L->top;
      pTVar10->tt_ = 0;
      L->top = pTVar10 + 1;
    }
    else {
      piVar15 = ((cl->l).p)->lineinfo;
      t_00 = luaH_new(L);
      pTVar10 = L->top;
      (pTVar10->value_).gc = (GCObject *)t_00;
      pTVar11 = L->top;
      pTVar10->tt_ = 0x45;
      v.value_.b = 1;
      v.tt_ = 1;
      L->top = pTVar11 + 1;
      if (0 < ((cl->l).p)->sizelineinfo) {
        plVar16 = piVar15 + -1;
        iVar4 = 0;
        do {
          plVar16 = plVar16 + 1;
          iVar4 = iVar4 + 1;
          luaH_setint(L,t_00,*plVar16,&v);
        } while (iVar4 < ((cl->l).p)->sizelineinfo);
      }
    }
  }
  if (iVar1 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_4c;
}


