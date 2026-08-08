/*
 * Ghidra decompilation
 *
 * Function : match
 * Address  : 0812f240
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

char * match(MatchState *ms,char *s,char *p)

{
  byte bVar1;
  anon_struct_8_2_626aeb0c *paVar2;
  char *res_3;
  char *res_4;
  uint uVar3;
  int c;
  char *res_1;
  char *res_2;
  int c_2;
  char *res;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  anon_struct_8_2_626aeb0c *paVar8;
  uint uVar9;
  uint uVar10;
  int level_1;
  size_t len;
  byte *pbVar11;
  int level;
  int c_1;
  byte *pbVar12;
  ptrdiff_t pVar13;
  byte *pbVar14;
  bool bVar15;
  uint local_3c;
  
  iVar6 = ms->matchdepth;
  ms->matchdepth = iVar6 + -1;
  if (iVar6 == 0) {
    luaL_error(ms->L,"pattern too complex");
  }
LAB_0812f298:
  do {
    pbVar4 = (byte *)ms->p_end;
    pbVar12 = (byte *)s;
    if ((byte *)p == pbVar4) goto LAB_0812f5b8;
    local_3c = (uint)(byte)*p;
    switch(local_3c) {
    case 0x24:
      pbVar11 = (byte *)p + 1;
      if (pbVar4 == pbVar11) {
        pbVar12 = (byte *)ms->src_end;
        if (s == ms->src_end) goto LAB_0812f5b8;
        goto LAB_0812f5b4;
      }
      pbVar12 = (byte *)ms->src_end;
      if (s < pbVar12) {
        uVar3 = (uint)(byte)*s;
LAB_0812f528:
        uVar3 = (uint)(local_3c == uVar3);
LAB_0812f534:
        if (uVar3 != 0) {
LAB_0812f53c:
          switch(*pbVar11) {
          case 0x2a:
            break;
          case 0x2b:
            s = (char *)((byte *)s + 1);
            if (pbVar12 <= s) {
              iVar6 = 0;
              goto LAB_0812f8ec;
            }
            break;
          default:
            s = (char *)((byte *)s + 1);
            p = (char *)pbVar11;
            goto LAB_0812f298;
          case 0x2d:
            goto LAB_0812f7dc;
          case 0x3f:
            p = (char *)(pbVar11 + 1);
            pbVar12 = (byte *)match(ms,(char *)((byte *)s + 1),p);
            if (pbVar12 != (byte *)0x0) goto LAB_0812f5b8;
            goto LAB_0812f298;
          }
          pbVar4 = (byte *)s + -1;
          iVar6 = 0;
          goto LAB_0812f728;
        }
      }
LAB_0812f45c:
      uVar3 = *pbVar11 - 0x2a & 0xff;
      if ((0x15 < uVar3) || ((0x200009U >> uVar3 & 1) == 0)) goto LAB_0812f5b4;
      p = (char *)(pbVar11 + 1);
      break;
    case 0x25:
      uVar3 = (uint)((byte *)p)[1];
      if (uVar3 == 0x62) {
        if (pbVar4 + -1 <= (byte *)p + 2) {
          luaL_error(ms->L,"malformed pattern (missing arguments to \'%%b\')");
        }
        if (((byte *)p)[2] != *s) goto LAB_0812f5b4;
        pbVar12 = (byte *)s + 1;
        iVar6 = 1;
        do {
          if (ms->src_end <= pbVar12) goto LAB_0812f5b4;
          bVar1 = *pbVar12;
          pbVar4 = pbVar12;
          while (pbVar12 = pbVar4 + 1, ((byte *)p)[3] != bVar1) {
            if (*s == bVar1) {
              iVar6 = iVar6 + 1;
            }
            if (ms->src_end <= pbVar12) goto LAB_0812f5b4;
            pbVar4 = pbVar12;
            bVar1 = *pbVar12;
          }
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        s = (char *)(pbVar4 + 1);
        if ((byte *)s == (byte *)0x0) goto LAB_0812f5b4;
        p = (char *)((byte *)p + 4);
      }
      else if (uVar3 < 99) {
        if (9 < uVar3 - 0x30) {
dflt:
          pbVar11 = (byte *)p + 1;
          if (local_3c == 0x25) {
            if (pbVar4 == pbVar11) {
              luaL_error(ms->L,"malformed pattern (ends with \'%%\')");
            }
            pbVar11 = (byte *)p + 2;
LAB_0812f600:
            pbVar12 = (byte *)ms->src_end;
          }
          else {
            if (local_3c != 0x5b) goto LAB_0812f600;
            if (((byte *)p)[1] == 0x5e) {
              pbVar11 = (byte *)p + 2;
            }
            while( true ) {
              if (pbVar11 == pbVar4) {
                luaL_error(ms->L,"malformed pattern (missing \']\')");
              }
              pbVar12 = pbVar11 + 1;
              if (*pbVar11 == 0x25) {
                if (pbVar12 < ms->p_end) {
                  pbVar12 = pbVar11 + 2;
                }
                bVar1 = *pbVar12;
                pbVar11 = pbVar12;
              }
              else {
                bVar1 = *pbVar12;
                pbVar11 = pbVar12;
              }
              if (bVar1 == 0x5d) break;
              pbVar4 = (byte *)ms->p_end;
            }
            pbVar12 = (byte *)ms->src_end;
            pbVar11 = pbVar11 + 1;
          }
          if (s < pbVar12) {
            local_3c = (uint)(byte)*p;
            uVar3 = (uint)(byte)*s;
            if (local_3c != 0x2e) {
              if (local_3c == 0x5b) {
                uVar3 = matchbracketclass(uVar3,p,(char *)(pbVar11 + -1));
              }
              else {
                if (local_3c != 0x25) goto LAB_0812f528;
                uVar3 = match_class(uVar3,(uint)((byte *)p)[1]);
              }
              goto LAB_0812f534;
            }
            goto LAB_0812f53c;
          }
          goto LAB_0812f45c;
        }
        iVar6 = uVar3 - 0x31;
        if (((iVar6 == -1) || (ms->level <= iVar6)) ||
           (uVar3 = *(uint *)((int)ms + uVar3 * 8 + -0x16c), uVar3 == 0xffffffff)) {
          iVar6 = luaL_error(ms->L,"invalid capture index %%%d");
          uVar3 = ms->capture[iVar6].len;
        }
        if ((((uint)((int)ms->src_end - (int)s) < uVar3) ||
            (iVar6 = memcmp(ms->capture[iVar6].init,s,uVar3), iVar6 != 0)) ||
           (s = (char *)((byte *)s + uVar3), (byte *)s == (byte *)0x0)) goto LAB_0812f5b4;
        p = (char *)((byte *)p + 2);
      }
      else {
        if (uVar3 != 0x66) goto dflt;
        if (((byte *)p)[2] == 0x5b) {
LAB_0812f9e4:
          pbVar11 = (byte *)p + 3;
          if (((byte *)p)[3] == 0x5e) {
            pbVar11 = (byte *)p + 4;
          }
          while( true ) {
            if (pbVar11 == pbVar4) {
              luaL_error(ms->L,"malformed pattern (missing \']\')");
            }
            pbVar12 = pbVar11 + 1;
            if ((*pbVar11 == 0x25) && (pbVar12 < ms->p_end)) {
              pbVar12 = pbVar11 + 2;
            }
            if (*pbVar12 == 0x5d) break;
            pbVar4 = (byte *)ms->p_end;
            pbVar11 = pbVar12;
          }
          pbVar12 = pbVar12 + 1;
        }
        else {
          pbVar12 = (byte *)p + 3;
          luaL_error(ms->L,"missing \'[\' after \'%%f\' in pattern");
          if (((byte *)p)[2] == 0x25) {
            if (pbVar12 == (byte *)ms->p_end) {
              luaL_error(ms->L,"malformed pattern (ends with \'%%\')");
            }
            pbVar12 = (byte *)p + 4;
          }
          else if (((byte *)p)[2] == 0x5b) {
            pbVar4 = (byte *)ms->p_end;
            goto LAB_0812f9e4;
          }
        }
        if (s == ms->src_init) {
          uVar3 = 0;
        }
        else {
          uVar3 = (uint)((byte *)s)[-1];
        }
        iVar6 = matchbracketclass(uVar3,(char *)((byte *)p + 2),(char *)(pbVar12 + -1));
        if ((iVar6 != 0) ||
           (iVar6 = matchbracketclass((uint)(byte)*s,(char *)((byte *)p + 2),(char *)(pbVar12 + -1))
           , p = (char *)pbVar12, iVar6 == 0)) goto LAB_0812f5b4;
      }
      break;
    default:
      goto dflt;
    case 0x28:
      iVar6 = ms->level;
      if (((byte *)p)[1] == 0x29) {
        pbVar12 = (byte *)p + 2;
        if (0x1f < iVar6) {
          luaL_error(ms->L,"too many captures");
        }
        pVar13 = -2;
      }
      else {
        pbVar12 = (byte *)p + 1;
        if (0x1f < iVar6) {
          luaL_error(ms->L,"too many captures");
        }
        pVar13 = -1;
      }
      ms->capture[iVar6].init = s;
      ms->capture[iVar6].len = pVar13;
      ms->level = iVar6 + 1;
      pbVar12 = (byte *)match(ms,s,(char *)pbVar12);
      if (pbVar12 == (byte *)0x0) {
        ms->level = ms->level + -1;
      }
      goto LAB_0812f5b8;
    case 0x29:
      iVar7 = ms->level;
      iVar6 = iVar7 + -1;
      if (iVar6 < 0) goto LAB_0812f310;
      if (ms->capture[iVar7 + -1].len == -1) goto LAB_0812f320;
      paVar8 = ms->capture + iVar7 + -3;
      goto LAB_0812f304;
    }
  } while( true );
  while (paVar2 = paVar8 + 1, paVar8 = paVar8 + -1, paVar2->len != -1) {
LAB_0812f304:
    bVar15 = iVar6 == 0;
    iVar6 = iVar6 + -1;
    if (bVar15) goto LAB_0812f310;
  }
LAB_0812f320:
  ms->capture[iVar6].len = (int)s - (int)ms->capture[iVar6].init;
  pbVar12 = (byte *)match(ms,s,(char *)((byte *)p + 1));
  if (pbVar12 == (byte *)0x0) {
    ms->capture[iVar6].len = -1;
  }
  goto LAB_0812f5b8;
LAB_0812f310:
  iVar6 = luaL_error(ms->L,"invalid pattern capture");
  goto LAB_0812f320;
  while( true ) {
    if (uVar10 == 0x5b) {
      uVar3 = matchbracketclass(uVar3,p,(char *)(pbVar11 + -1));
    }
    else if (uVar10 == 0x25) {
      uVar3 = match_class(uVar3,(uint)((byte *)p)[1]);
    }
    else {
      uVar3 = (uint)(uVar10 == uVar3);
    }
    if (uVar3 == 0) break;
LAB_0812f7dc:
    do {
      pbVar12 = (byte *)match(ms,s,(char *)(pbVar11 + 1));
      if (pbVar12 != (byte *)0x0) goto LAB_0812f5b8;
      pbVar12 = (byte *)s + 1;
      if (ms->src_end <= s) goto LAB_0812f5b4;
      uVar10 = (uint)(byte)*p;
      uVar3 = (uint)(byte)*s;
      s = (char *)pbVar12;
    } while (uVar10 == 0x2e);
  }
  goto LAB_0812f5b4;
LAB_0812f728:
  do {
    pbVar4 = pbVar4 + 1;
    uVar3 = (uint)*pbVar4;
    if (local_3c != 0x2e) {
      if (local_3c == 0x5b) {
        pbVar5 = (byte *)p;
        if (((byte *)p)[1] == 0x5e) {
          pbVar5 = (byte *)p + 1;
        }
        uVar10 = (uint)(((byte *)p)[1] != 0x5e);
        do {
          while( true ) {
            pbVar14 = pbVar5;
            if (pbVar11 + -1 <= pbVar14 + 1) {
              uVar10 = uVar10 ^ 1;
              goto LAB_0812f714;
            }
            uVar9 = (uint)pbVar14[1];
            if (uVar9 == 0x25) break;
            if ((pbVar14[2] == 0x2d) && (pbVar5 = pbVar14 + 3, pbVar5 < pbVar11 + -1)) {
              if ((uVar9 <= uVar3) && (uVar3 <= pbVar14[3])) goto LAB_0812f714;
            }
            else {
              pbVar5 = pbVar14 + 1;
              if (uVar3 == uVar9) goto LAB_0812f714;
            }
          }
          iVar7 = match_class(uVar3,(uint)pbVar14[2]);
          pbVar5 = pbVar14 + 2;
        } while (iVar7 == 0);
      }
      else if (local_3c == 0x25) {
        uVar10 = match_class(uVar3,(uint)((byte *)p)[1]);
      }
      else {
        uVar10 = (uint)(local_3c == uVar3);
      }
LAB_0812f714:
      if (uVar10 == 0) break;
    }
    iVar6 = iVar6 + 1;
  } while (pbVar4 != pbVar12 + -1);
LAB_0812f8ec:
  do {
    pbVar12 = (byte *)s + iVar6;
    iVar6 = iVar6 + -1;
    pbVar12 = (byte *)match(ms,(char *)pbVar12,(char *)(pbVar11 + 1));
    if (pbVar12 != (byte *)0x0) goto LAB_0812f5b8;
  } while (iVar6 != -1);
LAB_0812f5b4:
  pbVar12 = (byte *)0x0;
LAB_0812f5b8:
  ms->matchdepth = ms->matchdepth + 1;
  return (char *)pbVar12;
}


