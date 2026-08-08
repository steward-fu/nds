/*
 * Ghidra decompilation
 *
 * Function : LoadFunction
 * Address  : 081204f8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void LoadFunction(LoadState *S,Proto *f,TString *psource)

{
  TString *pTVar1;
  ZIO *pZVar2;
  size_t sVar3;
  Instruction *b;
  TValue *pTVar4;
  Upvaldesc *pUVar5;
  Proto **ppPVar6;
  Proto *pPVar7;
  int *b_00;
  LocVar *pLVar8;
  size_t sVar9;
  TString *x_;
  void *extraout_r1;
  void *extraout_r1_00;
  void *extraout_r1_01;
  void *extraout_r1_02;
  void *extraout_r1_03;
  void *extraout_r1_04;
  void *extraout_r1_05;
  void *extraout_r1_06;
  void *extraout_r1_07;
  void *extraout_r1_08;
  void *extraout_r1_09;
  void *extraout_r1_10;
  void *extraout_r1_11;
  void *extraout_r1_12;
  void *extraout_r1_13;
  void *extraout_r1_14;
  void *extraout_r1_15;
  void *extraout_r1_16;
  void *extraout_r1_17;
  void *extraout_r1_18;
  void *extraout_r1_19;
  void *extraout_r1_20;
  void *b_01;
  size_t nsize;
  TValue *pTVar10;
  TString *pTVar11;
  Value VVar12;
  TValue *o;
  TValue *io;
  TValue *io_1;
  int iVar13;
  TValue *io_2;
  TValue *io_3;
  int iVar14;
  LocVar *pLVar15;
  lu_byte x_4;
  lu_byte x_3;
  lu_byte x_2;
  lu_byte x_12;
  lu_byte x_13;
  lu_byte x_7;
  lu_byte x_9;
  int x_1;
  int x;
  int x_19;
  int x_17;
  int x_18;
  int x_16;
  int x_15;
  int x_14;
  int x_11;
  int x_6;
  lua_Number x_10;
  lua_Integer x_8;
  int x_5;
  int local_24;
  
  local_24 = __stack_chk_guard;
  pTVar1 = LoadString(S);
  nsize = 4;
  if (pTVar1 == (TString *)0x0) {
    pTVar1 = psource;
  }
  pZVar2 = S->Z;
  f->source = pTVar1;
  sVar3 = luaZ_read(pZVar2,&x,4);
  b_01 = extraout_r1;
  if (sVar3 == 0) {
    nsize = 4;
    pZVar2 = S->Z;
    f->linedefined = x;
    sVar3 = luaZ_read(pZVar2,&x_1,4);
    b_01 = extraout_r1_00;
    if (sVar3 == 0) {
      nsize = 1;
      pZVar2 = S->Z;
      f->lastlinedefined = x_1;
      sVar3 = luaZ_read(pZVar2,&x_2,1);
      b_01 = extraout_r1_01;
      if (sVar3 == 0) {
        nsize = 1;
        f->numparams = x_2;
        sVar3 = luaZ_read(S->Z,&x_3,1);
        b_01 = extraout_r1_02;
        if (sVar3 == 0) {
          nsize = 1;
          f->is_vararg = x_3;
          sVar3 = luaZ_read(S->Z,&x_4,1);
          b_01 = extraout_r1_03;
          if (sVar3 == 0) {
            f->maxstacksize = x_4;
            nsize = luaZ_read(S->Z,&x_5,4);
            b_01 = extraout_r1_04;
            if (nsize == 0) {
              if (0x3ffffffe < x_5 + 1U && x_5 != 0x3ffffffe) goto LAB_08120b14;
              nsize = x_5 << 2;
              b = (Instruction *)luaM_realloc_(S->L,(void *)0x0,0,nsize);
              f->sizecode = x_5;
              f->code = b;
              sVar3 = luaZ_read(S->Z,b,nsize);
              b_01 = extraout_r1_05;
              if (sVar3 == 0) {
                nsize = 4;
                sVar3 = luaZ_read(S->Z,&x_6,4);
                b_01 = extraout_r1_06;
                if (sVar3 == 0) {
                  if (0x1ffffffe < x_6 + 1U && x_6 != 0x1ffffffe) goto LAB_08120b14;
                  pTVar4 = (TValue *)luaM_realloc_(S->L,(void *)0x0,0,x_6 * 8);
                  f->sizek = x_6;
                  f->k = pTVar4;
                  if (x_6 < 1) {
LAB_0812079c:
                    nsize = 4;
                    pTVar1 = (TString *)luaZ_read(S->Z,&x_11,4);
                    b_01 = extraout_r1_10;
                    if (pTVar1 == (TString *)0x0) {
                      if (0x1ffffffe < x_11 + 1U && x_11 != 0x1ffffffe) {
LAB_08120b14:
                    /* WARNING: Subroutine does not return */
                        luaM_toobig(S->L);
                      }
                      pTVar11 = pTVar1;
                      pUVar5 = (Upvaldesc *)luaM_realloc_(S->L,(void *)0x0,0,x_11 << 3);
                      f->sizeupvalues = x_11;
                      if (0 < x_11) {
                        pTVar11 = pTVar1;
                      }
                      f->upvalues = pUVar5;
                      pTVar1 = pTVar11;
                      if (0 < x_11) {
                        do {
                          pUVar5[(int)pTVar1].name = pTVar11;
                          pTVar1 = (TString *)((int)&pTVar1->next + 1);
                        } while ((TString *)x_11 != pTVar1);
                        iVar14 = 0;
                        do {
                          pUVar5 = f->upvalues;
                          nsize = 1;
                          sVar3 = luaZ_read(S->Z,&x_12,1);
                          b_01 = extraout_r1_11;
                          if (sVar3 != 0) goto LAB_08120b08;
                          nsize = 1;
                          pUVar5[iVar14].instack = x_12;
                          pUVar5 = f->upvalues;
                          sVar3 = luaZ_read(S->Z,&x_13,1);
                          b_01 = extraout_r1_12;
                          if (sVar3 != 0) goto LAB_08120b08;
                          iVar13 = iVar14 + 1;
                          pUVar5[iVar14].idx = x_13;
                          iVar14 = iVar13;
                        } while (x_11 != iVar13);
                      }
                      nsize = 4;
                      sVar3 = luaZ_read(S->Z,&x_14,4);
                      b_01 = extraout_r1_13;
                      if (sVar3 == 0) {
                        if (0x3ffffffe < x_14 + 1U && x_14 != 0x3ffffffe) goto LAB_08120b14;
                        ppPVar6 = (Proto **)luaM_realloc_(S->L,(void *)0x0,0,x_14 << 2);
                        f->sizep = x_14;
                        f->p = ppPVar6;
                        if (0 < x_14) {
                          iVar14 = 0;
                          while( true ) {
                            ppPVar6[iVar14] = (Proto *)0x0;
                            iVar14 = iVar14 + 1;
                            if (x_14 == iVar14) break;
                            ppPVar6 = f->p;
                          }
                          iVar14 = 0;
                          do {
                            ppPVar6 = f->p;
                            pPVar7 = luaF_newproto(S->L);
                            ppPVar6[iVar14] = pPVar7;
                            ppPVar6 = f->p + iVar14;
                            iVar14 = iVar14 + 1;
                            LoadFunction(S,*ppPVar6,f->source);
                          } while (x_14 != iVar14);
                        }
                        nsize = luaZ_read(S->Z,&x_15,4);
                        b_01 = extraout_r1_14;
                        if (nsize == 0) {
                          if (0x3ffffffe < x_15 + 1U && x_15 != 0x3ffffffe) goto LAB_08120b14;
                          nsize = x_15 << 2;
                          b_00 = (int *)luaM_realloc_(S->L,(void *)0x0,0,nsize);
                          pZVar2 = S->Z;
                          f->sizelineinfo = x_15;
                          f->lineinfo = b_00;
                          sVar3 = luaZ_read(pZVar2,b_00,nsize);
                          b_01 = extraout_r1_15;
                          if (sVar3 == 0) {
                            nsize = 4;
                            sVar3 = luaZ_read(S->Z,&x_16,4);
                            b_01 = extraout_r1_16;
                            if (sVar3 == 0) {
                              if (0x15555555 < x_16 + 1U) goto LAB_08120b14;
                              sVar3 = x_16 * 0xc;
                              pLVar8 = (LocVar *)luaM_realloc_(S->L,(void *)0x0,0,sVar3);
                              f->sizelocvars = x_16;
                              f->locvars = pLVar8;
                              if (0 < x_16) {
                                iVar14 = 0;
                                do {
                                  *(undefined4 *)((int)&pLVar8->varname + iVar14) = 0;
                                  iVar14 = iVar14 + 0xc;
                                  iVar13 = 0;
                                } while (sVar3 - iVar14 != 0);
                                do {
                                  pLVar15 = f->locvars;
                                  pTVar1 = LoadString(S);
                                  pLVar8 = f->locvars;
                                  nsize = 4;
                                  *(TString **)((int)&pLVar15->varname + iVar13) = pTVar1;
                                  sVar9 = luaZ_read(S->Z,&x_17,4);
                                  b_01 = extraout_r1_17;
                                  if (sVar9 != 0) goto LAB_08120b08;
                                  nsize = 4;
                                  pLVar15 = f->locvars;
                                  pZVar2 = S->Z;
                                  *(int *)((int)&pLVar8->startpc + iVar13) = x_17;
                                  sVar9 = luaZ_read(pZVar2,&x_18,4);
                                  b_01 = extraout_r1_18;
                                  if (sVar9 != 0) goto LAB_08120b08;
                                  iVar14 = iVar13 + 0xc;
                                  *(int *)((int)&pLVar15->endpc + iVar13) = x_18;
                                  iVar13 = iVar14;
                                } while (sVar3 - iVar14 != 0);
                              }
                              nsize = 4;
                              sVar3 = luaZ_read(S->Z,&x_19,4);
                              b_01 = extraout_r1_19;
                              if (sVar3 == 0) {
                                if (0 < x_19) {
                                  iVar14 = 0;
                                  do {
                                    pUVar5 = f->upvalues;
                                    pTVar1 = LoadString(S);
                                    pUVar5[iVar14].name = pTVar1;
                                    iVar14 = iVar14 + 1;
                                  } while (x_19 != iVar14);
                                }
                                if (local_24 == __stack_chk_guard) {
                                  return;
                                }
                                goto LAB_08120b10;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  else {
                    pTVar10 = pTVar4;
                    do {
                      pTVar10->tt_ = 0;
                      pTVar10 = pTVar10 + 1;
                    } while (pTVar10 != pTVar4 + x_6);
                    iVar14 = 0;
                    while( true ) {
                      nsize = 1;
                      sVar3 = luaZ_read(S->Z,&x_7,1);
                      pTVar4 = pTVar4 + iVar14;
                      b_01 = extraout_r1_07;
                      if (sVar3 != 0) break;
                      switch(x_7) {
                      case '\0':
                        pTVar4->tt_ = 0;
                        break;
                      case '\x01':
                        nsize = 1;
                        sVar3 = luaZ_read(S->Z,&x_9,1);
                        b_01 = extraout_r1_09;
                        if (sVar3 == 0) {
                          VVar12.b._1_3_ = 0;
                          VVar12.b._0_1_ = x_9;
                          pTVar4->value_ = VVar12;
                          pTVar4->tt_ = 1;
                          if (x_6 != iVar14 + 1) goto LAB_08120768;
                          goto LAB_0812079c;
                        }
                        goto LAB_08120b08;
                      case '\x03':
                        nsize = 4;
                        sVar3 = luaZ_read(S->Z,&x_10,4);
                        b_01 = extraout_r1_20;
                        if (sVar3 != 0) goto LAB_08120b08;
                        (pTVar4->value_).n = x_10;
                        pTVar4->tt_ = 3;
                        break;
                      case '\x04':
                      case '\x14':
                        pTVar1 = LoadString(S);
                        (pTVar4->value_).gc = (GCObject *)pTVar1;
                        pTVar4->tt_ = pTVar1->tt | 0x40;
                        break;
                      case '\x13':
                        nsize = 4;
                        sVar3 = luaZ_read(S->Z,&x_8,4);
                        b_01 = extraout_r1_08;
                        if (sVar3 != 0) goto LAB_08120b08;
                        (pTVar4->value_).i = x_8;
                        pTVar4->tt_ = 0x13;
                      }
                      if (x_6 == iVar14 + 1) goto LAB_0812079c;
LAB_08120768:
                      iVar14 = iVar14 + 1;
                      pTVar4 = f->k;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_08120b08:
  LoadBlock(S,b_01,nsize);
LAB_08120b10:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


