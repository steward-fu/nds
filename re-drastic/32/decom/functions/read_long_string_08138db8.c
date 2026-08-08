/*
 * Ghidra decompilation
 *
 * Function : read_long_string
 * Address  : 08138db8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void read_long_string(LexState *ls,SemInfo *seminfo,int sep)

{
  char *pcVar1;
  ZIO *pZVar2;
  Value VVar3;
  TString *ts;
  TValue *pTVar4;
  TValue *o;
  TValue *io_1;
  char *msg;
  size_t sVar5;
  Table *t;
  size_t sVar6;
  StkId pTVar7;
  global_State *pgVar8;
  size_t sVar9;
  byte *pbVar10;
  StkId pTVar11;
  TValue *io;
  Mbuffer *pMVar12;
  Mbuffer *b;
  uint uVar13;
  Mbuffer *b_2;
  Mbuffer *b_1;
  lua_State *L_00;
  lua_State *L;
  Mbuffer *b_5;
  int iVar14;
  size_t newsize_2;
  uint uVar15;
  Mbuffer *b_3;
  TString *x_;
  Mbuffer *b_4;
  size_t newsize_5;
  size_t newsize;
  size_t newsize_1;
  size_t newsize_3;
  size_t newsize_4;
  int line;
  int iVar16;
  
  pMVar12 = ls->buff;
  sVar9 = pMVar12->n;
  sVar6 = pMVar12->buffsize;
  iVar14 = ls->current;
  iVar16 = ls->linenumber;
  sVar5 = sVar9 + 1;
  if (sVar6 < sVar5) {
    if (0x3ffffffe < sVar6) goto LAB_081392c4;
    pcVar1 = (char *)luaM_realloc_(ls->L,pMVar12->buffer,sVar6,sVar6 << 1);
    sVar9 = pMVar12->n;
    pMVar12->buffer = pcVar1;
    pMVar12->buffsize = sVar6 << 1;
    sVar5 = sVar9 + 1;
  }
  else {
    pcVar1 = pMVar12->buffer;
  }
  pMVar12->n = sVar5;
  pcVar1[sVar9] = (char)iVar14;
  pZVar2 = ls->z;
  sVar5 = pZVar2->n;
  pZVar2->n = sVar5 - 1;
  if (sVar5 == 0) {
    uVar13 = luaZ_fill(pZVar2);
    ls->current = uVar13;
    if (uVar13 == 0xd || uVar13 == 10) goto LAB_08139278;
  }
  else {
    pbVar10 = (byte *)pZVar2->p;
    pZVar2->p = (char *)(pbVar10 + 1);
    uVar13 = (uint)*pbVar10;
    ls->current = uVar13;
    if (uVar13 == 0xd || uVar13 == 10) {
LAB_08139278:
      inclinenumber(ls);
      uVar13 = ls->current;
    }
  }
joined_r0x08138e70:
  while (uVar13 == 10) {
LAB_081391d4:
    pMVar12 = ls->buff;
    sVar9 = pMVar12->n;
    sVar6 = pMVar12->buffsize;
    sVar5 = sVar9 + 1;
    if (sVar6 < sVar5) {
      if (0x3ffffffe < sVar6) goto LAB_081392c4;
      pcVar1 = (char *)luaM_realloc_(ls->L,pMVar12->buffer,sVar6,sVar6 << 1);
      sVar9 = pMVar12->n;
      pMVar12->buffer = pcVar1;
      pMVar12->buffsize = sVar6 << 1;
      sVar5 = sVar9 + 1;
    }
    else {
      pcVar1 = pMVar12->buffer;
    }
    pMVar12->n = sVar5;
    pcVar1[sVar9] = '\n';
    inclinenumber(ls);
    if (seminfo != (SemInfo *)0x0) goto LAB_08139238;
    uVar13 = ls->current;
    ls->buff->n = 0;
  }
  if ((int)uVar13 < 0xb) {
    if (uVar13 == 0xffffffff) {
      pcVar1 = "string";
      if (seminfo == (SemInfo *)0x0) {
        pcVar1 = "comment";
      }
      pcVar1 = luaO_pushfstring(ls->L,"unfinished long %s (starting at line %d)",pcVar1,iVar16);
                    /* WARNING: Subroutine does not return */
      lexerror(ls,pcVar1,0x121);
    }
LAB_08139148:
    if (seminfo != (SemInfo *)0x0) {
      pMVar12 = ls->buff;
      sVar9 = pMVar12->n;
      sVar6 = pMVar12->buffsize;
      sVar5 = sVar9 + 1;
      if (sVar6 < sVar5) {
        if (0x3ffffffe < sVar6) goto LAB_081392c4;
        pcVar1 = (char *)luaM_realloc_(ls->L,pMVar12->buffer,sVar6,sVar6 << 1);
        sVar9 = pMVar12->n;
        pMVar12->buffer = pcVar1;
        pMVar12->buffsize = sVar6 << 1;
        sVar5 = sVar9 + 1;
      }
      else {
        pcVar1 = pMVar12->buffer;
      }
      pMVar12->n = sVar5;
      pcVar1[sVar9] = (char)uVar13;
    }
    pZVar2 = ls->z;
    sVar5 = pZVar2->n;
    pZVar2->n = sVar5 - 1;
    if (sVar5 == 0) {
      uVar13 = luaZ_fill(pZVar2);
    }
    else {
      pbVar10 = (byte *)pZVar2->p;
      pZVar2->p = (char *)(pbVar10 + 1);
      uVar13 = (uint)*pbVar10;
    }
    ls->current = uVar13;
    goto joined_r0x08138e70;
  }
  if (uVar13 == 0xd) goto LAB_081391d4;
  if (uVar13 != 0x5d) goto LAB_08139148;
  pMVar12 = ls->buff;
  sVar9 = pMVar12->n;
  sVar6 = pMVar12->buffsize;
  sVar5 = sVar9 + 1;
  if (sVar6 < sVar5) {
    if (0x3ffffffe < sVar6) goto LAB_081392c4;
    pcVar1 = (char *)luaM_realloc_(ls->L,pMVar12->buffer,sVar6,sVar6 << 1);
    sVar9 = pMVar12->n;
    pMVar12->buffer = pcVar1;
    pMVar12->buffsize = sVar6 << 1;
    sVar5 = sVar9 + 1;
  }
  else {
    pcVar1 = pMVar12->buffer;
  }
  pMVar12->n = sVar5;
  pcVar1[sVar9] = ']';
  pZVar2 = ls->z;
  sVar5 = pZVar2->n;
  pZVar2->n = sVar5 - 1;
  if (sVar5 == 0) {
    uVar13 = luaZ_fill(pZVar2);
  }
  else {
    pbVar10 = (byte *)pZVar2->p;
    pZVar2->p = (char *)(pbVar10 + 1);
    uVar13 = (uint)*pbVar10;
  }
  uVar15 = 0;
  ls->current = uVar13;
  while (uVar13 == 0x3d) {
    pMVar12 = ls->buff;
    sVar9 = pMVar12->n;
    sVar6 = pMVar12->buffsize;
    sVar5 = sVar9 + 1;
    if (sVar6 < sVar5) {
      if (0x3ffffffe < sVar6) goto LAB_081392c4;
      pcVar1 = (char *)luaM_realloc_(ls->L,pMVar12->buffer,sVar6,sVar6 << 1);
      sVar9 = pMVar12->n;
      pMVar12->buffer = pcVar1;
      pMVar12->buffsize = sVar6 << 1;
      sVar5 = sVar9 + 1;
    }
    else {
      pcVar1 = pMVar12->buffer;
    }
    pMVar12->n = sVar5;
    pcVar1[sVar9] = '=';
    pZVar2 = ls->z;
    sVar5 = pZVar2->n;
    pZVar2->n = sVar5 - 1;
    if (sVar5 == 0) {
      uVar13 = luaZ_fill(pZVar2);
      ls->current = uVar13;
    }
    else {
      pbVar10 = (byte *)pZVar2->p;
      pZVar2->p = (char *)(pbVar10 + 1);
      uVar13 = (uint)*pbVar10;
      ls->current = uVar13;
    }
    uVar15 = uVar15 + 1;
  }
  if (uVar13 != 0x5d) {
    uVar15 = ~uVar15;
  }
  if (sep != uVar15) {
LAB_08139238:
    uVar13 = ls->current;
    goto joined_r0x08138e70;
  }
  pMVar12 = ls->buff;
  sVar9 = pMVar12->n;
  sVar6 = pMVar12->buffsize;
  sVar5 = sVar9 + 1;
  if (sVar6 < sVar5) {
    if (0x3ffffffe < sVar6) {
LAB_081392c4:
                    /* WARNING: Subroutine does not return */
      lexerror(ls,"lexical element too long",0);
    }
    pcVar1 = (char *)luaM_realloc_(ls->L,pMVar12->buffer,sVar6,sVar6 << 1);
    sVar9 = pMVar12->n;
    pMVar12->buffer = pcVar1;
    pMVar12->buffsize = sVar6 << 1;
    sVar5 = sVar9 + 1;
  }
  else {
    pcVar1 = pMVar12->buffer;
  }
  pMVar12->n = sVar5;
  pcVar1[sVar9] = (char)uVar13;
  pZVar2 = ls->z;
  sVar5 = pZVar2->n;
  pZVar2->n = sVar5 - 1;
  if (sVar5 == 0) {
    uVar13 = luaZ_fill(pZVar2);
  }
  else {
    pbVar10 = (byte *)pZVar2->p;
    pZVar2->p = (char *)(pbVar10 + 1);
    uVar13 = (uint)*pbVar10;
  }
  ls->current = uVar13;
  if (seminfo != (SemInfo *)0x0) {
    L_00 = ls->L;
    VVar3.gc = (GCObject *)
               luaS_newlstr(L_00,ls->buff->buffer + sep + 2,ls->buff->n + (sep + 2) * -2);
    pTVar11 = L_00->top;
    L_00->top = pTVar11 + 1;
    (pTVar11->value_).gc = (GCObject *)VVar3;
    pTVar7 = L_00->top;
    t = ls->h;
    pTVar11->tt_ = (VVar3.gc)->tt | 0x40;
    pTVar4 = luaH_set(L_00,t,pTVar7 + -1);
    if (pTVar4->tt_ == 0) {
      (pTVar4->value_).b = 1;
      pgVar8 = L_00->l_G;
      pTVar4->tt_ = 1;
      if (0 < pgVar8->GCdebt) {
        luaC_step(L_00);
      }
    }
    else {
      VVar3 = pTVar4[1].value_;
    }
    L_00->top = L_00->top + -1;
    seminfo->ts = (TString *)VVar3;
  }
  return;
}


