/*
 * Ghidra decompilation
 *
 * Function : read_numeral
 * Address  : 08138818
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */
/* Local variable p:char *[r1:4] conflicts with parameter, skipped.
   Local variable p_1:char *[r1:4] conflicts with parameter, skipped. */

int read_numeral(LexState *ls,SemInfo *seminfo)

{
  char *pcVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  int *first;
  char *pcVar6;
  ZIO *pZVar7;
  lconv *plVar8;
  char old;
  size_t sVar9;
  char *p_2;
  size_t sVar10;
  size_t sVar11;
  byte *pbVar12;
  byte *pbVar13;
  char *pcVar14;
  Mbuffer *b_5;
  Mbuffer *pMVar15;
  Mbuffer *b;
  uint uVar16;
  Mbuffer *b_1;
  int iVar17;
  size_t newsize_1;
  Mbuffer *b_2;
  Mbuffer *b_3;
  Mbuffer *b_4;
  size_t newsize_5;
  Mbuffer *b_6;
  size_t newsize;
  size_t newsize_6;
  size_t newsize_2;
  size_t newsize_3;
  size_t newsize_4;
  TValue obj;
  
  iVar5 = __stack_chk_guard;
  pMVar15 = ls->buff;
  sVar10 = pMVar15->buffsize;
  iVar17 = ls->current;
  sVar11 = pMVar15->n;
  sVar9 = sVar11 + 1;
  if (sVar10 < sVar9) {
    if (0x3ffffffe < sVar10) goto LAB_08138da0;
    pcVar6 = (char *)luaM_realloc_(ls->L,pMVar15->buffer,sVar10,sVar10 << 1);
    sVar11 = pMVar15->n;
    pMVar15->buffer = pcVar6;
    pMVar15->buffsize = sVar10 << 1;
    sVar9 = sVar11 + 1;
  }
  else {
    pcVar6 = pMVar15->buffer;
  }
  pMVar15->n = sVar9;
  pcVar6[sVar11] = (char)iVar17;
  pZVar7 = ls->z;
  sVar9 = pZVar7->n;
  pZVar7->n = sVar9 - 1;
  if (sVar9 == 0) {
    uVar16 = luaZ_fill(pZVar7);
    ls->current = uVar16;
  }
  else {
    pbVar12 = (byte *)pZVar7->p;
    pZVar7->p = (char *)(pbVar12 + 1);
    uVar16 = (uint)*pbVar12;
    ls->current = uVar16;
  }
  if ((iVar17 == 0x30) && ((uVar16 & 0xffffffdf) == 0x58)) {
    pMVar15 = ls->buff;
    sVar10 = pMVar15->n;
    sVar9 = pMVar15->buffsize;
    if (sVar9 < sVar10 + 1) {
      if (0x3ffffffe < sVar9) {
LAB_08138da0:
                    /* WARNING: Subroutine does not return */
        lexerror(ls,"lexical element too long",0);
      }
      pcVar6 = (char *)luaM_realloc_(ls->L,pMVar15->buffer,sVar9,sVar9 << 1);
      sVar10 = pMVar15->n;
      pMVar15->buffer = pcVar6;
      pMVar15->buffsize = sVar9 << 1;
    }
    else {
      pcVar6 = pMVar15->buffer;
    }
    pMVar15->n = sVar10 + 1;
    pcVar6[sVar10] = (char)uVar16;
    pZVar7 = ls->z;
    sVar9 = pZVar7->n;
    pZVar7->n = sVar9 - 1;
    if (sVar9 == 0) {
      uVar16 = luaZ_fill(pZVar7);
    }
    else {
      pbVar12 = (byte *)pZVar7->p;
      pZVar7->p = (char *)(pbVar12 + 1);
      uVar16 = (uint)*pbVar12;
    }
    ls->current = uVar16;
    pbVar12 = &DAT_08147fe8;
  }
  else {
    pbVar12 = &DAT_08147fe4;
  }
  bVar2 = *pbVar12;
  do {
    if ((bVar2 == uVar16) || (pbVar12[1] == uVar16)) {
      pMVar15 = ls->buff;
      sVar11 = pMVar15->n;
      sVar10 = pMVar15->buffsize;
      sVar9 = sVar11 + 1;
      if (sVar10 < sVar9) {
        if (0x3ffffffe < sVar10) goto LAB_08138da0;
        pcVar6 = (char *)luaM_realloc_(ls->L,pMVar15->buffer,sVar10,sVar10 << 1);
        sVar11 = pMVar15->n;
        pMVar15->buffer = pcVar6;
        pMVar15->buffsize = sVar10 << 1;
        sVar9 = sVar11 + 1;
      }
      else {
        pcVar6 = pMVar15->buffer;
      }
      pMVar15->n = sVar9;
      pcVar6[sVar11] = (char)uVar16;
      pZVar7 = ls->z;
      sVar9 = pZVar7->n;
      pZVar7->n = sVar9 - 1;
      if (sVar9 == 0) {
        uVar16 = luaZ_fill(pZVar7);
      }
      else {
        pbVar13 = (byte *)pZVar7->p;
        pZVar7->p = (char *)(pbVar13 + 1);
        uVar16 = (uint)*pbVar13;
      }
      ls->current = uVar16;
      if ((uVar16 - 0x2b & 0xfffffffd) != 0) goto LAB_081388ec;
      pMVar15 = ls->buff;
      sVar10 = pMVar15->n;
      sVar9 = pMVar15->buffsize;
      if (sVar9 < sVar10 + 1) {
        if (0x3ffffffe < sVar9) goto LAB_08138da0;
        pcVar6 = (char *)luaM_realloc_(ls->L,pMVar15->buffer,sVar9,sVar9 << 1);
        sVar10 = pMVar15->n;
        pMVar15->buffer = pcVar6;
        pMVar15->buffsize = sVar9 << 1;
      }
      else {
        pcVar6 = pMVar15->buffer;
      }
      pMVar15->n = sVar10 + 1;
      pcVar6[sVar10] = (char)uVar16;
      pZVar7 = ls->z;
      sVar9 = pZVar7->n;
      pZVar7->n = sVar9 - 1;
      if (sVar9 == 0) {
        uVar16 = luaZ_fill(pZVar7);
      }
      else {
        pbVar13 = (byte *)pZVar7->p;
        pZVar7->p = (char *)(pbVar13 + 1);
        uVar16 = (uint)*pbVar13;
      }
      ls->current = uVar16;
      if ((""[uVar16 + 1] & 0x10) != 0) goto LAB_08138aa8;
LAB_081388fc:
      pMVar15 = ls->buff;
      sVar11 = pMVar15->n;
      sVar10 = pMVar15->buffsize;
      sVar9 = sVar11 + 1;
      if (uVar16 != 0x2e) {
        if (sVar10 < sVar9) {
          if (0x3ffffffe < sVar10) goto LAB_08138da0;
          pcVar6 = (char *)luaM_realloc_(ls->L,pMVar15->buffer,sVar10,sVar10 << 1);
          sVar11 = pMVar15->n;
          pMVar15->buffer = pcVar6;
          pMVar15->buffsize = sVar10 << 1;
          sVar9 = sVar11 + 1;
        }
        else {
          pcVar6 = pMVar15->buffer;
        }
        pMVar15->n = sVar9;
        pcVar6[sVar11] = '\0';
        cVar3 = ls->decpoint;
        if (cVar3 != '.') {
          pcVar6 = ls->buff->buffer;
          pcVar14 = pcVar6 + ls->buff->n;
          while (pcVar14 != pcVar6) {
            pcVar14 = pcVar14 + -1;
            if (*pcVar14 == '.') {
              *pcVar14 = cVar3;
            }
          }
        }
        sVar9 = luaO_str2num(ls->buff->buffer,&obj);
        if (sVar9 == 0) {
          cVar3 = ls->decpoint;
          plVar8 = localeconv();
          cVar4 = *plVar8->decimal_point;
          ls->decpoint = cVar4;
          if (cVar3 != cVar4) {
            pcVar6 = ls->buff->buffer;
            pcVar14 = pcVar6 + ls->buff->n;
            while (pcVar14 != pcVar6) {
              pcVar1 = pcVar14 + -1;
              pcVar14 = pcVar14 + -1;
              if (*pcVar1 == cVar3) {
                *pcVar14 = cVar4;
              }
            }
          }
          sVar9 = luaO_str2num(ls->buff->buffer,&obj);
          if (sVar9 == 0) {
            cVar3 = ls->decpoint;
            if (cVar3 != '.') {
              pcVar6 = ls->buff->buffer;
              pcVar14 = pcVar6 + ls->buff->n;
              while (pcVar6 != pcVar14) {
                pcVar1 = pcVar14 + -1;
                pcVar14 = pcVar14 + -1;
                if (*pcVar1 == cVar3) {
                  *pcVar14 = '.';
                }
              }
            }
                    /* WARNING: Subroutine does not return */
            lexerror(ls,"malformed number",0x122);
          }
        }
        if (obj.tt_ == 0x13) {
          iVar17 = 0x123;
          *seminfo = (SemInfo)obj.value_;
        }
        else {
          iVar17 = 0x122;
          *seminfo = (SemInfo)obj.value_;
        }
        if (iVar5 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return iVar17;
      }
      if (sVar10 < sVar9) {
        if (0x3ffffffe < sVar10) goto LAB_08138da0;
        pcVar6 = (char *)luaM_realloc_(ls->L,pMVar15->buffer,sVar10,sVar10 << 1);
        sVar11 = pMVar15->n;
        pMVar15->buffer = pcVar6;
        pMVar15->buffsize = sVar10 << 1;
        sVar9 = sVar11 + 1;
      }
      else {
        pcVar6 = pMVar15->buffer;
      }
      pMVar15->n = sVar9;
      pcVar6[sVar11] = '.';
    }
    else {
LAB_081388ec:
      if ((""[uVar16 + 1] & 0x10) == 0) goto LAB_081388fc;
LAB_08138aa8:
      pMVar15 = ls->buff;
      sVar11 = pMVar15->n;
      sVar10 = pMVar15->buffsize;
      sVar9 = sVar11 + 1;
      if (sVar10 < sVar9) {
        if (0x3ffffffe < sVar10) goto LAB_08138da0;
        pcVar6 = (char *)luaM_realloc_(ls->L,pMVar15->buffer,sVar10,sVar10 << 1);
        sVar11 = pMVar15->n;
        pMVar15->buffer = pcVar6;
        pMVar15->buffsize = sVar10 << 1;
        sVar9 = sVar11 + 1;
      }
      else {
        pcVar6 = pMVar15->buffer;
      }
      pMVar15->n = sVar9;
      pcVar6[sVar11] = (char)uVar16;
    }
    pZVar7 = ls->z;
    sVar9 = pZVar7->n;
    pZVar7->n = sVar9 - 1;
    if (sVar9 == 0) {
      uVar16 = luaZ_fill(pZVar7);
    }
    else {
      pbVar13 = (byte *)pZVar7->p;
      pZVar7->p = (char *)(pbVar13 + 1);
      uVar16 = (uint)*pbVar13;
    }
    ls->current = uVar16;
  } while( true );
}


