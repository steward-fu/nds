/*
 * Ghidra decompilation
 *
 * Function : reallymarkobject
 * Address  : 08115b40
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void reallymarkobject(global_State *g,GCObject *o)

{
  undefined *puVar1;
  GCObject *o_00;
  int iVar2;
  byte bVar3;
  Udata *iu;
  
  bVar3 = o->marked;
LAB_08115b58:
  bVar3 = bVar3 & 0xfc;
  o->marked = bVar3;
  switch(o->tt) {
  case '\x04':
  case '\x14':
    iVar2 = *(int *)&o[1].tt;
    o->marked = bVar3 | 4;
    g->GCmemtrav = g->GCmemtrav + iVar2 + 0x19;
    return;
  case '\x05':
    *(GCObject **)&o[3].tt = g->gray;
    g->gray = o;
    return;
  case '\x06':
  case '&':
    o[1].next = g->gray;
    g->gray = o;
    return;
  case '\a':
    break;
  case '\b':
    *(GCObject **)&o[4].tt = g->gray;
    g->gray = o;
    return;
  case '\t':
    *(GCObject **)&o[9].tt = g->gray;
    g->gray = o;
  default:
    return;
  }
  o_00 = o[1].next;
  if ((o_00 != (GCObject *)0x0) && ((o_00->marked & 3) != 0)) {
    reallymarkobject(g,o_00);
    bVar3 = o->marked;
  }
  iVar2 = *(int *)&o[1].tt;
  o->marked = bVar3 | 4;
  g->GCmemtrav = g->GCmemtrav + iVar2 + 0x18;
  puVar1 = &o->field_0x6;
  o = o[2].next;
  if ((*puVar1 & 0x40) == 0) {
    return;
  }
  bVar3 = o->marked;
  if ((bVar3 & 3) == 0) {
    return;
  }
  goto LAB_08115b58;
}


