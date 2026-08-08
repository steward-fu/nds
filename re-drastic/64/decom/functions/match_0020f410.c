/*
 * Ghidra decompilation
 *
 * Function : match
 * Address  : 0020f410
 * Program  : drastic64
 */


byte * match(int *param_1,byte *param_2,byte *param_3)

{
  long lVar1;
  byte bVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  ulong __n;
  byte *pbVar13;
  
  iVar5 = *param_1;
  *param_1 = iVar5 + -1;
  if (iVar5 == 0) {
    luaL_error(*(undefined8 *)(param_1 + 8),"pattern too complex");
  }
  pbVar7 = *(byte **)(param_1 + 6);
  pbVar9 = param_2;
  if (param_3 != pbVar7) {
LAB_0020f464:
    bVar4 = *param_3;
    if (bVar4 == 0x28) {
      iVar5 = param_1[10];
      if (param_3[1] == 0x29) {
        param_3 = param_3 + 2;
        if (0x1f < iVar5) {
          luaL_error(*(undefined8 *)(param_1 + 8),"too many captures");
        }
        lVar12 = (long)iVar5 << 4;
        uVar11 = 0xfffffffffffffffe;
      }
      else {
        param_3 = param_3 + 1;
        if (0x1f < iVar5) {
          luaL_error(*(undefined8 *)(param_1 + 8),"too many captures");
        }
        lVar12 = (long)iVar5 * 0x10;
        uVar11 = 0xffffffffffffffff;
      }
      *(byte **)((long)param_1 + lVar12 + 0x30) = param_2;
      *(undefined8 *)((long)param_1 + lVar12 + 0x38) = uVar11;
      param_1[10] = iVar5 + 1;
      pbVar9 = (byte *)match(param_1,param_2,param_3);
      if (pbVar9 == (byte *)0x0) {
        param_1[10] = param_1[10] + -1;
        *param_1 = *param_1 + 1;
        return (byte *)0x0;
      }
      goto LAB_0020f570;
    }
    if (bVar4 < 0x29) {
      if (bVar4 == 0x24) {
        pbVar8 = param_3 + 1;
        pbVar13 = *(byte **)(param_1 + 4);
        if (pbVar8 != pbVar7) {
          if (param_2 < pbVar13) {
            bVar2 = *param_2;
            bVar4 = 0x24;
LAB_0020f8a8:
            if (bVar4 == bVar2) goto LAB_0020f7c0;
          }
          goto LAB_0020f704;
        }
        pbVar9 = param_2;
        if (pbVar13 != param_2) goto LAB_0020f710;
        goto LAB_0020f570;
      }
      if (bVar4 != 0x25) {
        pbVar8 = param_3 + 1;
        goto LAB_0020f788;
      }
      bVar4 = param_3[1];
      if (bVar4 == 0x62) {
        if (pbVar7 + -1 <= param_3 + 2) {
          luaL_error(*(undefined8 *)(param_1 + 8),"malformed pattern (missing arguments to \'%%b\')"
                    );
        }
        if (*param_2 == param_3[2]) {
          if (param_2 + 1 < *(byte **)(param_1 + 4)) {
            iVar5 = 1;
            pbVar9 = param_2 + 1;
            do {
              pbVar7 = pbVar9;
              if (param_3[3] == *pbVar7) {
                iVar5 = iVar5 + -1;
                if (iVar5 == 0) goto code_r0x0020f924;
              }
              else if (param_3[2] == *pbVar7) {
                iVar5 = iVar5 + 1;
              }
              pbVar9 = pbVar7 + 1;
              param_2 = pbVar7;
              if (*(byte **)(param_1 + 4) == pbVar7 + 1) break;
            } while( true );
          }
        }
        goto LAB_0020f710;
      }
      uVar6 = (uint)bVar4;
      if (0x62 < bVar4) {
        if (uVar6 != 0x66) {
LAB_0020f778:
          if (pbVar7 == param_3 + 1) {
            luaL_error(*(undefined8 *)(param_1 + 8),"malformed pattern (ends with \'%%\')");
          }
          pbVar8 = param_3 + 2;
          goto LAB_0020f788;
        }
        pbVar9 = param_3 + 2;
        pbVar8 = param_3 + 3;
        if (param_3[2] == 0x5b) {
LAB_0020f620:
          pbVar13 = param_3 + 4;
          if (param_3[3] != 0x5e) {
            pbVar13 = pbVar8;
          }
          do {
            if (*(byte **)(param_1 + 6) == pbVar13) {
              luaL_error(*(undefined8 *)(param_1 + 8),"malformed pattern (missing \']\')");
            }
            pbVar8 = pbVar13 + 1;
            pbVar7 = pbVar8;
            if ((*pbVar13 == 0x25) && (pbVar7 = pbVar13 + 2, *(byte **)(param_1 + 6) <= pbVar8)) {
              pbVar7 = pbVar8;
            }
            pbVar13 = pbVar7;
          } while (*pbVar7 != 0x5d);
          pbVar8 = pbVar7 + 1;
        }
        else {
          luaL_error(*(undefined8 *)(param_1 + 8),"missing \'[\' after \'%%f\' in pattern");
          if (param_3[2] == 0x25) {
            pbVar7 = pbVar8;
            if (*(byte **)(param_1 + 6) == pbVar8) {
              luaL_error(*(undefined8 *)(param_1 + 8),"malformed pattern (ends with \'%%\')");
              pbVar8 = param_3 + 4;
            }
            else {
              pbVar8 = param_3 + 4;
            }
          }
          else {
            pbVar7 = pbVar9;
            if (param_3[2] == 0x5b) goto LAB_0020f620;
          }
        }
        bVar4 = 0;
        if (*(byte **)(param_1 + 2) != param_2) {
          bVar4 = param_2[-1];
        }
        iVar5 = matchbracketclass(bVar4,pbVar9,pbVar7);
        if ((iVar5 == 0) && (iVar5 = matchbracketclass(*param_2,pbVar9,pbVar7), iVar5 != 0))
        goto LAB_0020f75c;
        goto LAB_0020f710;
      }
      if (9 < (uVar6 - 0x30 & 0xff)) goto LAB_0020f778;
      iVar5 = uVar6 - 0x31;
      if (((uVar6 == 0x30) || (param_1[10] <= iVar5)) ||
         (__n = *(ulong *)(param_1 + (long)iVar5 * 4 + 0xe), __n == 0xffffffffffffffff)) {
        iVar5 = luaL_error(*(undefined8 *)(param_1 + 8),"invalid capture index %%%d");
        __n = *(ulong *)(param_1 + (long)iVar5 * 4 + 0xe);
      }
      if (((ulong)(*(long *)(param_1 + 4) - (long)param_2) < __n) ||
         (iVar5 = memcmp(*(void **)(param_1 + (long)iVar5 * 4 + 0xc),param_2,__n), iVar5 != 0))
      goto LAB_0020f710;
      pbVar8 = param_3 + 2;
      param_2 = param_2 + __n;
    }
    else {
      if (bVar4 == 0x29) {
        iVar5 = param_1[10] + -1;
        if (iVar5 < 0) goto LAB_0020f9cc;
        plVar10 = (long *)(param_1 + (long)param_1[10] * 4 + 10);
        goto LAB_0020f534;
      }
      pbVar8 = param_3 + 1;
      if (bVar4 == 0x5b) {
        pbVar9 = param_3 + 2;
        if (param_3[1] != 0x5e) {
          pbVar9 = pbVar8;
        }
        if (*(byte **)(param_1 + 6) == pbVar9) goto LAB_0020f5f4;
        while( true ) {
          pbVar7 = pbVar9 + 1;
          pbVar8 = pbVar7;
          if ((*pbVar9 == 0x25) && (pbVar8 = pbVar9 + 2, *(byte **)(param_1 + 6) <= pbVar7)) {
            pbVar8 = pbVar7;
          }
          if (*pbVar8 == 0x5d) break;
          pbVar9 = pbVar8;
          if (*(byte **)(param_1 + 6) == pbVar8) {
LAB_0020f5f4:
            luaL_error(*(undefined8 *)(param_1 + 8),"malformed pattern (missing \']\')");
          }
        }
        pbVar8 = pbVar8 + 1;
      }
LAB_0020f788:
      pbVar13 = *(byte **)(param_1 + 4);
      if (param_2 < pbVar13) {
        bVar4 = *param_3;
        bVar2 = *param_2;
        if (bVar4 != 0x2e) {
          if (bVar4 == 0x5b) {
            iVar5 = matchbracketclass(bVar2,param_3,pbVar8 + -1);
          }
          else {
            if (bVar4 != 0x25) goto LAB_0020f8a8;
            iVar5 = match_class(bVar2,param_3[1]);
          }
          if (iVar5 == 0) goto LAB_0020f704;
        }
LAB_0020f7c0:
        bVar2 = *pbVar8;
        if (bVar2 == 0x2d) {
          goto LAB_0020fa54;
        }
        if (bVar2 < 0x2e) {
          if (bVar2 != 0x2a) {
            if (bVar2 != 0x2b) goto LAB_0020f930;
            param_2 = param_2 + 1;
          }
          lVar12 = 0;
          if (pbVar13 <= param_2) goto LAB_0020f830;
          lVar1 = 0;
          goto LAB_0020f7fc;
        }
        if (bVar2 == 0x3f) {
          pbVar8 = pbVar8 + 1;
          pbVar9 = (byte *)match(param_1,param_2 + 1,pbVar8);
          if (pbVar9 == (byte *)0x0) goto LAB_0020f75c;
          goto LAB_0020f570;
        }
LAB_0020f930:
        param_2 = param_2 + 1;
      }
      else {
LAB_0020f704:
        if ((0x3f < *pbVar8) || ((0x8000240000000000U >> ((ulong)*pbVar8 & 0x3f) & 1) == 0))
        goto LAB_0020f710;
        pbVar8 = pbVar8 + 1;
      }
    }
    goto LAB_0020f75c;
  }
  goto LAB_0020f570;
  while (iVar5 = iVar5 + -1, iVar5 != -1) {
LAB_0020f534:
    lVar12 = *plVar10;
    plVar10 = plVar10 + -2;
    if (lVar12 == -1) goto LAB_0020f544;
  }
LAB_0020f9cc:
  iVar5 = luaL_error(*(undefined8 *)(param_1 + 8),"invalid pattern capture");
LAB_0020f544:
  *(long *)(param_1 + (long)iVar5 * 4 + 0xe) =
       (long)param_2 - *(long *)(param_1 + (long)iVar5 * 4 + 0xc);
  pbVar9 = (byte *)match(param_1,param_2,param_3 + 1);
  if (pbVar9 == (byte *)0x0) {
    *(undefined8 *)(param_1 + (long)iVar5 * 4 + 0xe) = 0xffffffffffffffff;
    *param_1 = *param_1 + 1;
    return (byte *)0x0;
  }
  goto LAB_0020f570;
code_r0x0020f924:
  pbVar8 = param_3 + 4;
  param_2 = param_2 + 2;
LAB_0020f75c:
  pbVar9 = param_2;
  pbVar7 = *(byte **)(param_1 + 6);
  param_2 = pbVar9;
  param_3 = pbVar8;
  if (pbVar7 == pbVar8) goto LAB_0020f570;
  goto LAB_0020f464;
LAB_0020fa54:
  pbVar9 = (byte *)match(param_1,param_2,pbVar8 + 1);
  if (pbVar9 != (byte *)0x0) goto LAB_0020f570;
  if (*(byte **)(param_1 + 4) <= param_2) goto LAB_0020f710;
  bVar4 = *param_3;
  bVar2 = *param_2;
  if (bVar4 != 0x2e) {
    if (bVar4 == 0x5b) {
      if (param_3[1] == 0x5e) {
        bVar3 = false;
        pbVar9 = param_3 + 2;
        pbVar7 = param_3 + 1;
      }
      else {
        bVar3 = true;
        pbVar9 = param_3 + 1;
        pbVar7 = param_3;
      }
      while (pbVar13 = pbVar9, pbVar13 < pbVar8 + -1) {
        bVar4 = pbVar7[1];
        if (bVar4 == 0x25) {
          iVar5 = match_class(bVar2);
          if (iVar5 != 0) goto joined_r0x0020fbf4;
          pbVar9 = pbVar7 + 3;
          pbVar7 = pbVar7 + 2;
        }
        else if ((pbVar7[2] == 0x2d) && (pbVar7 + 3 < pbVar8 + -1)) {
          if ((bVar4 <= bVar2) && (bVar2 <= pbVar7[3])) goto joined_r0x0020fbf4;
          pbVar9 = pbVar7 + 4;
          pbVar7 = pbVar7 + 3;
        }
        else {
          if (bVar2 == bVar4) goto joined_r0x0020fbf4;
          pbVar9 = pbVar13 + 1;
          pbVar7 = pbVar13;
        }
      }
      bVar3 = (bool)(bVar3 ^ 1);
    }
    else {
      bVar3 = bVar2 == bVar4;
      if (bVar4 == 0x25) {
        iVar5 = match_class(bVar2,param_3[1]);
        if (iVar5 != 0) goto LAB_0020faa0;
        goto LAB_0020f710;
      }
    }
joined_r0x0020fbf4:
    if (!bVar3) goto LAB_0020f710;
  }
LAB_0020faa0:
  param_2 = param_2 + 1;
  goto LAB_0020fa54;
LAB_0020f7fc:
  do {
    lVar12 = lVar1;
    bVar2 = param_2[lVar12];
    if (bVar4 != 0x2e) {
      if (bVar4 == 0x5b) {
        uVar6 = matchbracketclass(bVar2,param_3,pbVar8 + -1);
      }
      else {
        uVar6 = (uint)(bVar2 == bVar4);
        if (bVar4 == 0x25) {
          uVar6 = match_class(bVar2,param_3[1]);
        }
      }
      if (uVar6 == 0) break;
    }
    lVar1 = lVar12 + 1;
    lVar12 = (long)pbVar13 - (long)param_2;
  } while (lVar1 != (long)pbVar13 - (long)param_2);
LAB_0020f830:
  pbVar7 = param_2 + lVar12;
  while (pbVar9 = (byte *)match(param_1,pbVar7,pbVar8 + 1), pbVar9 == (byte *)0x0) {
    bVar3 = param_2 == pbVar7;
    pbVar7 = pbVar7 + -1;
    if (bVar3) {
LAB_0020f710:
      *param_1 = *param_1 + 1;
      return (byte *)0x0;
    }
  }
LAB_0020f570:
  *param_1 = *param_1 + 1;
  return pbVar9;
}


