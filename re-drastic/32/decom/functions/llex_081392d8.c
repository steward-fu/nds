/*
 * Ghidra decompilation
 *
 * Function : llex
 * Address  : 081392d8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int llex(LexState *ls,SemInfo *seminfo)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int sep_1;
  ZIO *pZVar4;
  int r_1;
  int iVar5;
  ulong x;
  ulong r;
  TString *pTVar6;
  TString *ts_2;
  TValue *pTVar7;
  TValue *o_1;
  TValue *io_3;
  int sep;
  Value VVar8;
  TString *ts;
  TValue *o;
  TValue *io_1;
  int n;
  Table *pTVar9;
  size_t sVar10;
  char *pcVar11;
  uint osize;
  StkId pTVar12;
  global_State *pgVar13;
  char *pcVar14;
  uint uVar15;
  byte *pbVar16;
  size_t sVar17;
  byte *pbVar18;
  size_t sVar19;
  StkId pTVar20;
  TValue *io_2;
  TValue *io;
  uint uVar21;
  Mbuffer *b_3;
  lua_State *plVar22;
  lua_State *L_1;
  Mbuffer *b_8;
  Mbuffer *b_5;
  Mbuffer *b_7;
  int c;
  Mbuffer *b_2;
  int r_2;
  Mbuffer *b_4;
  TString *ts_1;
  Mbuffer *b;
  Mbuffer *b_1;
  size_t newsize_5;
  Mbuffer *b_9;
  Mbuffer *pMVar23;
  size_t newsize_2;
  Mbuffer *b_6;
  TString *x__1;
  size_t newsize_9;
  lua_State *L;
  size_t newsize;
  size_t newsize_1;
  size_t newsize_8;
  size_t newsize_6;
  size_t newsize_7;
  TString *x_;
  size_t newsize_4;
  size_t newsize_10;
  size_t newsize_3;
  int i;
  char buff [8];
  
  iVar2 = __stack_chk_guard;
  uVar21 = ls->current;
  uVar15 = uVar21 + 1;
  ls->buff->n = 0;
LAB_08139324:
  switch(uVar15) {
  case 0:
    uVar21 = 0x121;
    break;
  default:
    if ((""[uVar21 + 1] & 1) != 0) goto LAB_08139dc0;
    pZVar4 = ls->z;
    sVar17 = pZVar4->n;
    pZVar4->n = sVar17 - 1;
    if (sVar17 == 0) {
      uVar15 = luaZ_fill(pZVar4);
    }
    else {
      pbVar18 = (byte *)pZVar4->p;
      pZVar4->p = (char *)(pbVar18 + 1);
      uVar15 = (uint)*pbVar18;
    }
    ls->current = uVar15;
    break;
  case 10:
  case 0xc:
  case 0xd:
  case 0x21:
    pZVar4 = ls->z;
    sVar17 = pZVar4->n;
    pZVar4->n = sVar17 - 1;
    if (sVar17 == 0) {
      uVar21 = luaZ_fill(pZVar4);
    }
    else {
      pbVar18 = (byte *)pZVar4->p;
      pZVar4->p = (char *)(pbVar18 + 1);
      uVar21 = (uint)*pbVar18;
    }
    uVar15 = uVar21 + 1;
    ls->current = uVar21;
    goto LAB_08139324;
  case 0xb:
  case 0xe:
    inclinenumber(ls);
    uVar21 = ls->current;
    uVar15 = uVar21 + 1;
    goto LAB_08139324;
  case 0x23:
  case 0x28:
    pMVar23 = ls->buff;
    sVar19 = pMVar23->n;
    sVar10 = pMVar23->buffsize;
    sVar17 = sVar19 + 1;
    if (sVar10 < sVar17) {
      if (0x3ffffffe < sVar10) goto LAB_0813a7d0;
      pcVar11 = (char *)luaM_realloc_(ls->L,pMVar23->buffer,sVar10,sVar10 << 1);
      sVar19 = pMVar23->n;
      pMVar23->buffer = pcVar11;
      pMVar23->buffsize = sVar10 << 1;
      sVar17 = sVar19 + 1;
    }
    else {
      pcVar11 = pMVar23->buffer;
    }
    pMVar23->n = sVar17;
    pcVar11[sVar19] = (char)uVar21;
    pZVar4 = ls->z;
    sVar17 = pZVar4->n;
    pZVar4->n = sVar17 - 1;
    if (sVar17 == 0) {
      uVar15 = luaZ_fill(pZVar4);
    }
    else {
      pbVar18 = (byte *)pZVar4->p;
      pZVar4->p = (char *)(pbVar18 + 1);
      uVar15 = (uint)*pbVar18;
    }
    ls->current = uVar15;
    goto LAB_0813995c;
  case 0x2e:
    pZVar4 = ls->z;
    sVar17 = pZVar4->n;
    pZVar4->n = sVar17 - 1;
    if (sVar17 == 0) {
      uVar15 = luaZ_fill(pZVar4);
    }
    else {
      pbVar18 = (byte *)pZVar4->p;
      pZVar4->p = (char *)(pbVar18 + 1);
      uVar15 = (uint)*pbVar18;
    }
    ls->current = uVar15;
    if (uVar15 != 0x2d) break;
    pZVar4 = ls->z;
    sVar17 = pZVar4->n;
    pZVar4->n = sVar17 - 1;
    if (sVar17 == 0) {
      uVar21 = luaZ_fill(pZVar4);
    }
    else {
      pbVar18 = (byte *)pZVar4->p;
      pZVar4->p = (char *)(pbVar18 + 1);
      uVar21 = (uint)*pbVar18;
    }
    ls->current = uVar21;
    if (uVar21 == 0x5b) {
      iVar3 = skip_sep(ls);
      ls->buff->n = 0;
      if (iVar3 < 0) {
        uVar21 = ls->current;
        goto joined_r0x08139688;
      }
      read_long_string(ls,(SemInfo *)0x0,iVar3);
      uVar21 = ls->current;
      uVar15 = uVar21 + 1;
      ls->buff->n = 0;
    }
    else {
joined_r0x08139688:
      while ((uVar15 = uVar21 + 1, 0xe < uVar15 || ((0x4801U >> (uVar15 & 0xff) & 1) == 0))) {
        pZVar4 = ls->z;
        sVar17 = pZVar4->n;
        pZVar4->n = sVar17 - 1;
        if (sVar17 == 0) {
          uVar21 = luaZ_fill(pZVar4);
        }
        else {
          pbVar18 = (byte *)pZVar4->p;
          pZVar4->p = (char *)(pbVar18 + 1);
          uVar21 = (uint)*pbVar18;
        }
        ls->current = uVar21;
      }
    }
    goto LAB_08139324;
  case 0x2f:
    pMVar23 = ls->buff;
    sVar19 = pMVar23->n;
    sVar10 = pMVar23->buffsize;
    sVar17 = sVar19 + 1;
    if (sVar10 < sVar17) {
      if (0x3ffffffe < sVar10) goto LAB_0813a7d0;
      pcVar11 = (char *)luaM_realloc_(ls->L,pMVar23->buffer,sVar10,sVar10 << 1);
      sVar19 = pMVar23->n;
      pMVar23->buffer = pcVar11;
      pMVar23->buffsize = sVar10 << 1;
      sVar17 = sVar19 + 1;
    }
    else {
      pcVar11 = pMVar23->buffer;
    }
    pMVar23->n = sVar17;
    pcVar11[sVar19] = '.';
    pZVar4 = ls->z;
    sVar17 = pZVar4->n;
    pZVar4->n = sVar17 - 1;
    if (sVar17 == 0) {
      uVar15 = luaZ_fill(pZVar4);
    }
    else {
      pbVar18 = (byte *)pZVar4->p;
      pZVar4->p = (char *)(pbVar18 + 1);
      uVar15 = (uint)*pbVar18;
    }
    ls->current = uVar15;
    if (uVar15 == 0x2e) {
      pZVar4 = ls->z;
      sVar17 = pZVar4->n;
      pZVar4->n = sVar17 - 1;
      if (sVar17 == 0) {
        uVar15 = luaZ_fill(pZVar4);
      }
      else {
        pbVar18 = (byte *)pZVar4->p;
        pZVar4->p = (char *)(pbVar18 + 1);
        uVar15 = (uint)*pbVar18;
      }
      ls->current = uVar15;
      if (uVar15 == 0x2e) {
        pZVar4 = ls->z;
        sVar17 = pZVar4->n;
        pZVar4->n = sVar17 - 1;
        if (sVar17 == 0) {
          uVar15 = luaZ_fill(pZVar4);
        }
        else {
          pbVar18 = (byte *)pZVar4->p;
          pZVar4->p = (char *)(pbVar18 + 1);
          uVar15 = (uint)*pbVar18;
        }
        uVar21 = 0x119;
        ls->current = uVar15;
      }
      else {
        uVar21 = 0x118;
      }
      break;
    }
    if ((""[uVar15 + 1] & 2) == 0) break;
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
    uVar21 = read_numeral(ls,seminfo);
    break;
  case 0x30:
    pZVar4 = ls->z;
    sVar17 = pZVar4->n;
    pZVar4->n = sVar17 - 1;
    if (sVar17 == 0) {
      uVar15 = luaZ_fill(pZVar4);
    }
    else {
      pbVar18 = (byte *)pZVar4->p;
      pZVar4->p = (char *)(pbVar18 + 1);
      uVar15 = (uint)*pbVar18;
    }
    ls->current = uVar15;
    if (uVar15 == 0x2f) {
      pZVar4 = ls->z;
      sVar17 = pZVar4->n;
      pZVar4->n = sVar17 - 1;
      if (sVar17 == 0) {
        uVar15 = luaZ_fill(pZVar4);
      }
      else {
        pbVar18 = (byte *)pZVar4->p;
        pZVar4->p = (char *)(pbVar18 + 1);
        uVar15 = (uint)*pbVar18;
      }
      uVar21 = 0x117;
      ls->current = uVar15;
    }
    break;
  case 0x3b:
    pZVar4 = ls->z;
    sVar17 = pZVar4->n;
    pZVar4->n = sVar17 - 1;
    if (sVar17 == 0) {
      uVar15 = luaZ_fill(pZVar4);
    }
    else {
      pbVar18 = (byte *)pZVar4->p;
      pZVar4->p = (char *)(pbVar18 + 1);
      uVar15 = (uint)*pbVar18;
    }
    ls->current = uVar15;
    if (uVar15 == 0x3a) {
      pZVar4 = ls->z;
      sVar17 = pZVar4->n;
      pZVar4->n = sVar17 - 1;
      if (sVar17 == 0) {
        uVar15 = luaZ_fill(pZVar4);
      }
      else {
        pbVar18 = (byte *)pZVar4->p;
        pZVar4->p = (char *)(pbVar18 + 1);
        uVar15 = (uint)*pbVar18;
      }
      uVar21 = 0x120;
      ls->current = uVar15;
    }
    break;
  case 0x3d:
    pZVar4 = ls->z;
    sVar17 = pZVar4->n;
    pZVar4->n = sVar17 - 1;
    if (sVar17 == 0) {
      uVar15 = luaZ_fill(pZVar4);
    }
    else {
      pbVar18 = (byte *)pZVar4->p;
      pZVar4->p = (char *)(pbVar18 + 1);
      uVar15 = (uint)*pbVar18;
    }
    ls->current = uVar15;
    if (uVar15 == 0x3d) {
      pZVar4 = ls->z;
      sVar17 = pZVar4->n;
      pZVar4->n = sVar17 - 1;
      if (sVar17 == 0) {
        uVar15 = luaZ_fill(pZVar4);
      }
      else {
        pbVar18 = (byte *)pZVar4->p;
        pZVar4->p = (char *)(pbVar18 + 1);
        uVar15 = (uint)*pbVar18;
      }
      uVar21 = 0x11c;
      ls->current = uVar15;
    }
    else if (uVar15 == 0x3c) {
      pZVar4 = ls->z;
      sVar17 = pZVar4->n;
      pZVar4->n = sVar17 - 1;
      if (sVar17 == 0) {
        uVar15 = luaZ_fill(pZVar4);
      }
      else {
        pbVar18 = (byte *)pZVar4->p;
        pZVar4->p = (char *)(pbVar18 + 1);
        uVar15 = (uint)*pbVar18;
      }
      uVar21 = 0x11e;
      ls->current = uVar15;
    }
    break;
  case 0x3e:
    pZVar4 = ls->z;
    sVar17 = pZVar4->n;
    pZVar4->n = sVar17 - 1;
    if (sVar17 == 0) {
      uVar15 = luaZ_fill(pZVar4);
    }
    else {
      pbVar18 = (byte *)pZVar4->p;
      pZVar4->p = (char *)(pbVar18 + 1);
      uVar15 = (uint)*pbVar18;
    }
    ls->current = uVar15;
    if (uVar15 == 0x3d) {
      pZVar4 = ls->z;
      sVar17 = pZVar4->n;
      pZVar4->n = sVar17 - 1;
      if (sVar17 == 0) {
        uVar15 = luaZ_fill(pZVar4);
      }
      else {
        pbVar18 = (byte *)pZVar4->p;
        pZVar4->p = (char *)(pbVar18 + 1);
        uVar15 = (uint)*pbVar18;
      }
      uVar21 = 0x11a;
      ls->current = uVar15;
    }
    break;
  case 0x3f:
    pZVar4 = ls->z;
    sVar17 = pZVar4->n;
    pZVar4->n = sVar17 - 1;
    if (sVar17 == 0) {
      uVar15 = luaZ_fill(pZVar4);
    }
    else {
      pbVar18 = (byte *)pZVar4->p;
      pZVar4->p = (char *)(pbVar18 + 1);
      uVar15 = (uint)*pbVar18;
    }
    ls->current = uVar15;
    if (uVar15 == 0x3d) {
      pZVar4 = ls->z;
      sVar17 = pZVar4->n;
      pZVar4->n = sVar17 - 1;
      if (sVar17 == 0) {
        uVar15 = luaZ_fill(pZVar4);
      }
      else {
        pbVar18 = (byte *)pZVar4->p;
        pZVar4->p = (char *)(pbVar18 + 1);
        uVar15 = (uint)*pbVar18;
      }
      uVar21 = 0x11b;
      ls->current = uVar15;
    }
    else if (uVar15 == 0x3e) {
      pZVar4 = ls->z;
      sVar17 = pZVar4->n;
      pZVar4->n = sVar17 - 1;
      if (sVar17 == 0) {
        uVar15 = luaZ_fill(pZVar4);
      }
      else {
        pbVar18 = (byte *)pZVar4->p;
        pZVar4->p = (char *)(pbVar18 + 1);
        uVar15 = (uint)*pbVar18;
      }
      uVar21 = 0x11f;
      ls->current = uVar15;
    }
    break;
  case 0x5c:
    iVar3 = skip_sep(ls);
    if (iVar3 < 0) {
      if (iVar3 != -1) {
                    /* WARNING: Subroutine does not return */
        lexerror(ls,"invalid long string delimiter",0x125);
      }
    }
    else {
      uVar21 = 0x125;
      read_long_string(ls,seminfo,iVar3);
    }
    break;
  case 0x7f:
    pZVar4 = ls->z;
    sVar17 = pZVar4->n;
    pZVar4->n = sVar17 - 1;
    if (sVar17 == 0) {
      uVar15 = luaZ_fill(pZVar4);
    }
    else {
      pbVar18 = (byte *)pZVar4->p;
      pZVar4->p = (char *)(pbVar18 + 1);
      uVar15 = (uint)*pbVar18;
    }
    ls->current = uVar15;
    if (uVar15 == 0x3d) {
      pZVar4 = ls->z;
      sVar17 = pZVar4->n;
      pZVar4->n = sVar17 - 1;
      if (sVar17 == 0) {
        uVar15 = luaZ_fill(pZVar4);
      }
      else {
        pbVar18 = (byte *)pZVar4->p;
        pZVar4->p = (char *)(pbVar18 + 1);
        uVar15 = (uint)*pbVar18;
      }
      uVar21 = 0x11d;
      ls->current = uVar15;
    }
  }
  goto LAB_081395e0;
LAB_0813995c:
  if (uVar15 == uVar21) goto LAB_0813a530;
  if (uVar15 == 10) {
LAB_0813a2fc:
                    /* WARNING: Subroutine does not return */
    lexerror(ls,"unfinished string",0x125);
  }
  if (10 < (int)uVar15) {
    if (uVar15 == 0xd) goto LAB_0813a2fc;
    if (uVar15 != 0x5c) goto LAB_08139e14;
    pMVar23 = ls->buff;
    sVar19 = pMVar23->n;
    sVar10 = pMVar23->buffsize;
    sVar17 = sVar19 + 1;
    if (sVar10 < sVar17) {
      if (0x3ffffffe < sVar10) goto LAB_0813a7d0;
      pbVar18 = (byte *)luaM_realloc_(ls->L,pMVar23->buffer,sVar10,sVar10 << 1);
      sVar19 = pMVar23->n;
      pMVar23->buffer = (char *)pbVar18;
      pMVar23->buffsize = sVar10 << 1;
      sVar17 = sVar19 + 1;
    }
    else {
      pbVar18 = (byte *)pMVar23->buffer;
    }
    pMVar23->n = sVar17;
    pbVar18[sVar19] = 0x5c;
    pZVar4 = ls->z;
    sVar17 = pZVar4->n;
    pZVar4->n = sVar17 - 1;
    if (sVar17 == 0) {
      c = luaZ_fill(pZVar4);
    }
    else {
      pbVar16 = (byte *)pZVar4->p;
      pbVar18 = pbVar16 + 1;
      pZVar4->p = (char *)pbVar18;
      c = (int)*pbVar16;
    }
    ls->current = c;
    switch(c) {
    default:
      if ((""[c + 1] & 2) == 0) {
                    /* WARNING: Subroutine does not return */
        esccheck(ls,0x8148098,(char *)pbVar18);
      }
      i = 0;
      r_2 = 0;
      uVar15 = c;
      do {
        pMVar23 = ls->buff;
        sVar19 = pMVar23->n;
        c = uVar15 + r_2 * 10 + -0x30;
        sVar10 = pMVar23->buffsize;
        sVar17 = sVar19 + 1;
        if (sVar10 < sVar17) {
          if (0x3ffffffe < sVar10) goto LAB_0813a7d0;
          pbVar18 = (byte *)luaM_realloc_(ls->L,pMVar23->buffer,sVar10,sVar10 << 1);
          sVar19 = pMVar23->n;
          pMVar23->buffer = (char *)pbVar18;
          pMVar23->buffsize = sVar10 << 1;
          sVar17 = sVar19 + 1;
        }
        else {
          pbVar18 = (byte *)pMVar23->buffer;
        }
        pMVar23->n = sVar17;
        pbVar18[sVar19] = (byte)uVar15;
        pZVar4 = ls->z;
        sVar17 = pZVar4->n;
        pZVar4->n = sVar17 - 1;
        if (sVar17 == 0) {
          uVar15 = luaZ_fill(pZVar4);
        }
        else {
          pbVar16 = (byte *)pZVar4->p;
          pbVar18 = pbVar16 + 1;
          pZVar4->p = (char *)pbVar18;
          uVar15 = (uint)*pbVar16;
        }
        i = i + 1;
        ls->current = uVar15;
      } while ((i != 3) && (r_2 = c, (""[uVar15 + 1] & 2) != 0));
      if (0xff < c) {
                    /* WARNING: Subroutine does not return */
        esccheck(ls,0x81480b0,(char *)pbVar18);
      }
      pMVar23 = ls->buff;
      uVar15 = pMVar23->n - i;
      pMVar23->n = uVar15;
      goto only_save;
    case 10:
    case 0xd:
      c = 10;
      inclinenumber(ls);
      pMVar23 = ls->buff;
      uVar15 = pMVar23->n;
      goto only_save;
    case 0x22:
    case 0x27:
    case 0x5c:
      break;
    case 0x61:
      c = 7;
      break;
    case 0x62:
      c = 8;
      break;
    case 0x66:
      c = 0xc;
      break;
    case 0x6e:
      c = 10;
      break;
    case 0x72:
      c = 0xd;
      break;
    case 0x74:
      c = 9;
      break;
    case 0x75:
      pMVar23 = ls->buff;
      sVar19 = pMVar23->n;
      sVar10 = pMVar23->buffsize;
      sVar17 = sVar19 + 1;
      if (sVar10 < sVar17) {
        if (0x3ffffffe < sVar10) goto LAB_0813a7d0;
        pbVar18 = (byte *)luaM_realloc_(ls->L,pMVar23->buffer,sVar10,sVar10 << 1);
        sVar19 = pMVar23->n;
        pMVar23->buffer = (char *)pbVar18;
        pMVar23->buffsize = sVar10 << 1;
        sVar17 = sVar19 + 1;
      }
      else {
        pbVar18 = (byte *)pMVar23->buffer;
      }
      pMVar23->n = sVar17;
      pbVar18[sVar19] = 0x75;
      pZVar4 = ls->z;
      sVar17 = pZVar4->n;
      pZVar4->n = sVar17 - 1;
      if (sVar17 == 0) {
        uVar15 = luaZ_fill(pZVar4);
      }
      else {
        pbVar16 = (byte *)pZVar4->p;
        pbVar18 = pbVar16 + 1;
        pZVar4->p = (char *)pbVar18;
        uVar15 = (uint)*pbVar16;
      }
      ls->current = uVar15;
      if (uVar15 != 0x7b) {
                    /* WARNING: Subroutine does not return */
        esccheck(ls,0x8148068,(char *)pbVar18);
      }
      iVar3 = 4;
      x = gethexa(ls);
      while( true ) {
        iVar5 = ls->current;
        pMVar23 = ls->buff;
        sVar19 = pMVar23->n;
        sVar10 = pMVar23->buffsize;
        sVar17 = sVar19 + 1;
        if (sVar10 < sVar17) {
          if (0x3ffffffe < sVar10) goto LAB_0813a7d0;
          pbVar18 = (byte *)luaM_realloc_(ls->L,pMVar23->buffer,sVar10,sVar10 << 1);
          sVar19 = pMVar23->n;
          pMVar23->buffer = (char *)pbVar18;
          pMVar23->buffsize = sVar10 << 1;
          sVar17 = sVar19 + 1;
        }
        else {
          pbVar18 = (byte *)pMVar23->buffer;
        }
        pMVar23->n = sVar17;
        pbVar18[sVar19] = (byte)iVar5;
        pZVar4 = ls->z;
        sVar17 = pZVar4->n;
        pZVar4->n = sVar17 - 1;
        if (sVar17 == 0) {
          uVar15 = luaZ_fill(pZVar4);
        }
        else {
          pbVar16 = (byte *)pZVar4->p;
          pbVar18 = pbVar16 + 1;
          pZVar4->p = (char *)pbVar18;
          uVar15 = (uint)*pbVar16;
        }
        ls->current = uVar15;
        if ((""[uVar15 + 1] & 0x10) == 0) break;
        iVar3 = iVar3 + 1;
        iVar5 = luaO_hexavalue(uVar15);
        x = iVar5 + x * 0x10;
        if (0x10ffff < x) {
                    /* WARNING: Subroutine does not return */
          esccheck(ls,0x8148074,(char *)pbVar18);
        }
      }
      if (uVar15 != 0x7d) {
                    /* WARNING: Subroutine does not return */
        esccheck(ls,0x814808c,(char *)pbVar18);
      }
      pZVar4 = ls->z;
      sVar17 = pZVar4->n;
      pZVar4->n = sVar17 - 1;
      if (sVar17 == 0) {
        uVar15 = luaZ_fill(pZVar4);
      }
      else {
        pbVar18 = (byte *)pZVar4->p;
        pZVar4->p = (char *)(pbVar18 + 1);
        uVar15 = (uint)*pbVar18;
      }
      sVar17 = ls->buff->n;
      ls->current = uVar15;
      ls->buff->n = sVar17 - iVar3;
      iVar3 = luaO_utf8esc(buff,x);
      if (0 < iVar3) {
        pcVar11 = buff + (7 - iVar3);
        do {
          pMVar23 = ls->buff;
          pcVar11 = pcVar11 + 1;
          cVar1 = *pcVar11;
          sVar19 = pMVar23->n;
          sVar10 = pMVar23->buffsize;
          sVar17 = sVar19 + 1;
          if (sVar10 < sVar17) {
            if (0x3ffffffe < sVar10) goto LAB_0813a7d0;
            pcVar14 = (char *)luaM_realloc_(ls->L,pMVar23->buffer,sVar10,sVar10 << 1);
            sVar19 = pMVar23->n;
            pMVar23->buffer = pcVar14;
            pMVar23->buffsize = sVar10 << 1;
            sVar17 = sVar19 + 1;
          }
          else {
            pcVar14 = pMVar23->buffer;
          }
          pMVar23->n = sVar17;
          pcVar14[sVar19] = cVar1;
        } while (buff + 7 != pcVar11);
      }
      goto LAB_08139f18;
    case 0x76:
      c = 0xb;
      break;
    case 0x78:
      iVar3 = gethexa(ls);
      iVar5 = gethexa(ls);
      c = iVar5 + iVar3 * 0x10;
      ls->buff->n = ls->buff->n - 2;
      break;
    case 0x7a:
      pZVar4 = ls->z;
      sVar17 = pZVar4->n;
      ls->buff->n = ls->buff->n - 1;
      pZVar4->n = sVar17 - 1;
      if (sVar17 == 0) {
        uVar15 = luaZ_fill(pZVar4);
      }
      else {
        pbVar18 = (byte *)pZVar4->p;
        pZVar4->p = (char *)(pbVar18 + 1);
        uVar15 = (uint)*pbVar18;
      }
      ls->current = uVar15;
      while ((""[uVar15 + 1] & 8) != 0) {
        if (uVar15 == 0xd || uVar15 == 10) {
          inclinenumber(ls);
          uVar15 = ls->current;
        }
        else {
          pZVar4 = ls->z;
          sVar17 = pZVar4->n;
          pZVar4->n = sVar17 - 1;
          if (sVar17 == 0) {
            uVar15 = luaZ_fill(pZVar4);
          }
          else {
            pbVar18 = (byte *)pZVar4->p;
            pZVar4->p = (char *)(pbVar18 + 1);
            uVar15 = (uint)*pbVar18;
          }
          ls->current = uVar15;
        }
      }
      goto LAB_0813995c;
    case -1:
      uVar15 = 0xffffffff;
      goto LAB_0813995c;
    }
    pZVar4 = ls->z;
    sVar17 = pZVar4->n;
    pZVar4->n = sVar17 - 1;
    if (sVar17 == 0) {
      uVar15 = luaZ_fill(pZVar4);
    }
    else {
      pbVar18 = (byte *)pZVar4->p;
      pZVar4->p = (char *)(pbVar18 + 1);
      uVar15 = (uint)*pbVar18;
    }
    pMVar23 = ls->buff;
    ls->current = uVar15;
    uVar15 = pMVar23->n;
only_save:
    osize = pMVar23->buffsize;
    sVar17 = uVar15 - 1;
    pMVar23->n = sVar17;
    if (osize < uVar15) {
      if (0x3ffffffe < osize) goto LAB_0813a7d0;
      pcVar11 = (char *)luaM_realloc_(ls->L,pMVar23->buffer,osize,osize << 1);
      sVar17 = pMVar23->n;
      pMVar23->buffer = pcVar11;
      pMVar23->buffsize = osize << 1;
    }
    else {
      pcVar11 = pMVar23->buffer;
    }
    pMVar23->n = sVar17 + 1;
    pcVar11[sVar17] = (char)c;
LAB_08139f18:
    uVar15 = ls->current;
    goto LAB_0813995c;
  }
  if (uVar15 == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
    lexerror(ls,"unfinished string",0x121);
  }
LAB_08139e14:
  pMVar23 = ls->buff;
  sVar19 = pMVar23->n;
  sVar10 = pMVar23->buffsize;
  sVar17 = sVar19 + 1;
  if (sVar10 < sVar17) {
    if (sVar10 < 0x3fffffff) {
      pcVar11 = (char *)luaM_realloc_(ls->L,pMVar23->buffer,sVar10,sVar10 << 1);
      sVar19 = pMVar23->n;
      pMVar23->buffer = pcVar11;
      pMVar23->buffsize = sVar10 << 1;
      sVar17 = sVar19 + 1;
      goto LAB_08139e5c;
    }
    goto LAB_0813a7d0;
  }
  pcVar11 = pMVar23->buffer;
LAB_08139e5c:
  pMVar23->n = sVar17;
  pcVar11[sVar19] = (char)uVar15;
  pZVar4 = ls->z;
  sVar17 = pZVar4->n;
  pZVar4->n = sVar17 - 1;
  if (sVar17 == 0) {
    uVar15 = luaZ_fill(pZVar4);
  }
  else {
    pbVar18 = (byte *)pZVar4->p;
    pZVar4->p = (char *)(pbVar18 + 1);
    uVar15 = (uint)*pbVar18;
  }
  ls->current = uVar15;
  goto LAB_0813995c;
  while( true ) {
    pMVar23->n = sVar17;
    pcVar11[sVar19] = (char)uVar21;
    pZVar4 = ls->z;
    sVar17 = pZVar4->n;
    pZVar4->n = sVar17 - 1;
    if (sVar17 == 0) {
      uVar21 = luaZ_fill(pZVar4);
    }
    else {
      pbVar18 = (byte *)pZVar4->p;
      pZVar4->p = (char *)(pbVar18 + 1);
      uVar21 = (uint)*pbVar18;
    }
    ls->current = uVar21;
    if ((""[uVar21 + 1] & 3) == 0) break;
LAB_08139dc0:
    pMVar23 = ls->buff;
    sVar19 = pMVar23->n;
    sVar10 = pMVar23->buffsize;
    sVar17 = sVar19 + 1;
    if (sVar10 < sVar17) {
      if (0x3ffffffe < sVar10) goto LAB_0813a7d0;
      pcVar11 = (char *)luaM_realloc_(ls->L,pMVar23->buffer,sVar10,sVar10 << 1);
      sVar19 = pMVar23->n;
      pMVar23->buffer = pcVar11;
      pMVar23->buffsize = sVar10 << 1;
      sVar17 = sVar19 + 1;
    }
    else {
      pcVar11 = pMVar23->buffer;
    }
  }
  plVar22 = ls->L;
  pTVar6 = luaS_newlstr(plVar22,ls->buff->buffer,ls->buff->n);
  pTVar20 = plVar22->top;
  plVar22->top = pTVar20 + 1;
  (pTVar20->value_).gc = (GCObject *)pTVar6;
  pTVar12 = plVar22->top;
  pTVar9 = ls->h;
  pTVar20->tt_ = pTVar6->tt | 0x40;
  pTVar7 = luaH_set(plVar22,pTVar9,pTVar12 + -1);
  if (pTVar7->tt_ == 0) {
    (pTVar7->value_).b = 1;
    pgVar13 = plVar22->l_G;
    pTVar7->tt_ = 1;
    if (0 < pgVar13->GCdebt) {
      luaC_step(plVar22);
    }
  }
  else {
    pTVar6 = (TString *)pTVar7[1].value_.f;
  }
  plVar22->top = plVar22->top + -1;
  seminfo->ts = pTVar6;
  if ((pTVar6->tt == '\x04') && (pTVar6->extra != 0)) {
    uVar21 = pTVar6->extra + 0x100;
  }
  else {
    uVar21 = 0x124;
  }
  goto LAB_081395e0;
LAB_0813a530:
  pMVar23 = ls->buff;
  sVar19 = pMVar23->n;
  sVar10 = pMVar23->buffsize;
  sVar17 = sVar19 + 1;
  if (sVar10 < sVar17) {
    if (0x3ffffffe < sVar10) {
LAB_0813a7d0:
                    /* WARNING: Subroutine does not return */
      lexerror(ls,"lexical element too long",0);
    }
    pcVar11 = (char *)luaM_realloc_(ls->L,pMVar23->buffer,sVar10,sVar10 << 1);
    sVar19 = pMVar23->n;
    pMVar23->buffer = pcVar11;
    pMVar23->buffsize = sVar10 << 1;
    sVar17 = sVar19 + 1;
  }
  else {
    pcVar11 = pMVar23->buffer;
  }
  pMVar23->n = sVar17;
  pcVar11[sVar19] = (char)uVar21;
  pZVar4 = ls->z;
  sVar17 = pZVar4->n;
  pZVar4->n = sVar17 - 1;
  if (sVar17 == 0) {
    uVar15 = luaZ_fill(pZVar4);
  }
  else {
    pbVar18 = (byte *)pZVar4->p;
    pZVar4->p = (char *)(pbVar18 + 1);
    uVar15 = (uint)*pbVar18;
  }
  plVar22 = ls->L;
  pcVar11 = ls->buff->buffer;
  sVar17 = ls->buff->n;
  ls->current = uVar15;
  VVar8.gc = (GCObject *)luaS_newlstr(plVar22,pcVar11 + 1,sVar17 - 2);
  pTVar20 = plVar22->top;
  plVar22->top = pTVar20 + 1;
  (pTVar20->value_).gc = (GCObject *)VVar8;
  pTVar12 = plVar22->top;
  pTVar9 = ls->h;
  pTVar20->tt_ = (VVar8.gc)->tt | 0x40;
  pTVar7 = luaH_set(plVar22,pTVar9,pTVar12 + -1);
  if (pTVar7->tt_ == 0) {
    (pTVar7->value_).b = 1;
    pgVar13 = plVar22->l_G;
    pTVar7->tt_ = 1;
    if (0 < pgVar13->GCdebt) {
      luaC_step(plVar22);
    }
  }
  else {
    VVar8 = pTVar7[1].value_;
  }
  uVar21 = 0x125;
  plVar22->top = plVar22->top + -1;
  seminfo->ts = (TString *)VVar8;
LAB_081395e0:
  if (iVar2 == __stack_chk_guard) {
    return uVar21;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


