/*
 * Ghidra decompilation
 *
 * Function : luaC_upvalbarrier_
 * Address  : 08117880
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void luaC_upvalbarrier_(lua_State *L,UpVal *uv)

{
  undefined *puVar1;
  int iVar2;
  GCObject *o;
  GCObject *pGVar3;
  byte bVar4;
  global_State *g_00;
  global_State *g;
  Udata *iu;
  
  g_00 = L->l_G;
  pGVar3 = (uv->v->value_).gc;
  if ((pGVar3 != (GCObject *)0x0 && g_00->gcstate < 2) && (bVar4 = pGVar3->marked, (bVar4 & 3) != 0)
     ) {
    do {
      bVar4 = bVar4 & 0xfc;
      pGVar3->marked = bVar4;
      switch(pGVar3->tt) {
      case '\x04':
      case '\x14':
        iVar2 = *(int *)&pGVar3[1].tt;
        pGVar3->marked = bVar4 | 4;
        g_00->GCmemtrav = g_00->GCmemtrav + iVar2 + 0x19;
        return;
      case '\x05':
        *(GCObject **)&pGVar3[3].tt = g_00->gray;
        g_00->gray = pGVar3;
        return;
      case '\x06':
      case '&':
        pGVar3[1].next = g_00->gray;
        g_00->gray = pGVar3;
        return;
      case '\a':
        o = pGVar3[1].next;
        if ((o != (GCObject *)0x0) && ((o->marked & 3) != 0)) {
          reallymarkobject(g_00,o);
          bVar4 = pGVar3->marked;
        }
        iVar2 = *(int *)&pGVar3[1].tt;
        pGVar3->marked = bVar4 | 4;
        g_00->GCmemtrav = g_00->GCmemtrav + iVar2 + 0x18;
        puVar1 = &pGVar3->field_0x6;
        pGVar3 = pGVar3[2].next;
        if ((*puVar1 & 0x40) == 0) {
          return;
        }
        bVar4 = pGVar3->marked;
        if ((bVar4 & 3) == 0) {
          return;
        }
        break;
      case '\b':
        *(GCObject **)&pGVar3[4].tt = g_00->gray;
        g_00->gray = pGVar3;
        return;
      case '\t':
        *(GCObject **)&pGVar3[9].tt = g_00->gray;
        g_00->gray = pGVar3;
      default:
        goto switchD_081178ec_caseD_a;
      }
    } while( true );
  }
switchD_081178ec_caseD_a:
  return;
}


