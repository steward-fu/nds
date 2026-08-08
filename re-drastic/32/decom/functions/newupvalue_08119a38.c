/*
 * Ghidra decompilation
 *
 * Function : newupvalue
 * Address  : 08119a38
 * Program  : drastic
 */


/* DWARF original prototype: int newupvalue(FuncState * fs, TString * name, expdesc * v, expdesc *
   v) */

int newupvalue(FuncState *fs,TString *name,expdesc *v,expdesc *v_1)

{
  byte bVar1;
  Upvaldesc *pUVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int oldsize;
  Proto *o;
  Proto *f;
  
  o = fs->f;
  uVar3 = (uint)fs->nups;
  iVar5 = o->sizeupvalues;
  if (uVar3 == 0xff) {
                    /* WARNING: Subroutine does not return */
    checklimit(fs,0xff,0x814606c,(char *)v_1);
  }
  if ((int)uVar3 < iVar5) {
    pUVar2 = o->upvalues;
  }
  else {
    pUVar2 = (Upvaldesc *)luaM_growaux_(fs->ls->L,o->upvalues,&o->sizeupvalues,8,0xff,"upvalues");
    iVar4 = o->sizeupvalues;
    o->upvalues = pUVar2;
    if (iVar5 < iVar4) {
      do {
        pUVar2[iVar5].name = (TString *)0x0;
        iVar5 = iVar5 + 1;
      } while (iVar5 != iVar4);
      pUVar2 = o->upvalues;
    }
    uVar3 = (uint)fs->nups;
  }
  pUVar2[uVar3].instack = v->k == VLOCAL;
  o->upvalues[fs->nups].idx = (lu_byte)v_1->k;
  o->upvalues[fs->nups].name = name;
  if (((o->marked & 4) != 0) && ((name->marked & 3) != 0)) {
    luaC_barrier_(fs->ls->L,(GCObject *)o,(GCObject *)name);
  }
  bVar1 = fs->nups;
  fs->nups = bVar1 + 1;
  return (uint)bVar1;
}


