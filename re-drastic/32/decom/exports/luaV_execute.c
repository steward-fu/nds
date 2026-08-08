/*
 * Ghidra decompilation
 *
 * Function : luaV_execute
 * Address  : 08121fe8
 * Program  : drastic
 */


/* WARNING: Removing unreachable block (ram,0x081222b8) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Unknown calling convention */

void luaV_execute(lua_State *L)

{
  byte bVar1;
  int iVar2;
  TMS event;
  Table *t;
  Proto **ppPVar3;
  LClosure *ncl;
  UpVal *pUVar4;
  size_t sVar5;
  lua_Integer q;
  TValue *rb_2;
  TValue *pTVar6;
  int c_1;
  UpVal *uv_2;
  StkId rb_13;
  uint extraout_r1;
  lua_Integer r;
  int extraout_r1_00;
  TValue *rc_1;
  TValue *pTVar7;
  TValue *pTVar8;
  int iVar9;
  lua_Integer ic_8;
  TValue *v_7;
  GCObject *pGVar10;
  lua_Integer limit_1;
  lua_Integer initv;
  GCObject *pGVar11;
  lua_CFunction p_Var12;
  LClosure *cl;
  int iVar13;
  int iVar14;
  int a;
  int a_2;
  int res;
  lua_Integer ib_1;
  TValue *io1_3;
  Value *pVVar15;
  lua_Integer ic_2;
  lua_Integer ic_4;
  lua_Integer ic_5;
  lua_Integer ic_6;
  Upvaldesc *pUVar16;
  lua_Integer step_1;
  lua_Integer idx_1;
  uint uVar17;
  lua_Integer ilimit;
  StkId ra;
  TValue *io1_1;
  TValue *init;
  TValue *io;
  TValue *io_1;
  TValue *io1;
  TValue *io_6;
  TValue *io_7;
  TValue *io_10;
  TValue *io_11;
  TValue *io_13;
  TValue *io1_4;
  TValue *io_14;
  TValue *io_16;
  TValue *io_17;
  TValue *io_18;
  TValue *io_19;
  TValue *io_21;
  TValue *io_22;
  TValue *io1_5;
  TValue *io_23;
  TValue *io_2;
  TValue *io1_6;
  TValue *io1_7;
  TValue *io_4;
  UpVal **ppUVar18;
  TValue *val;
  TValue *io_25;
  TValue *io_5;
  TValue *io_8;
  TValue *io_26;
  TValue *io_9;
  TValue *io_20;
  TValue *io_24;
  TValue *io_3;
  TValue *io_15;
  TValue *io_12;
  StkId pTVar19;
  StkId nfunc;
  uint uVar20;
  int a_1;
  TValue *rb_5;
  TValue *rb_6;
  TValue *rc_2;
  TValue *rb_8;
  TValue *rb_10;
  TValue *rb_11;
  TValue *rb_12;
  TValue *rc_8;
  int iVar21;
  TValue *rb_15;
  TValue *rc_10;
  TValue *rc_4;
  TValue *rc_11;
  TValue *rc;
  int nup;
  int nup_1;
  uint last;
  TValue *rc_12;
  lua_Integer *ic_7;
  lua_Integer *ic_9;
  lua_Integer *ic;
  lua_Integer ic_3;
  CallInfo *pCVar22;
  CallInfo *nci;
  Value VVar23;
  TValue *io1_2;
  int b_1;
  TValue *rb_7;
  TValue *rc_3;
  TValue *rc_5;
  TValue *rc_6;
  TValue *rc_7;
  TValue *rb_14;
  TValue *rc_9;
  TValue *rb_16;
  TValue *rb_9;
  TValue *rb_17;
  TValue *rb_1;
  Table *pTVar24;
  Table *h;
  TValue *rb_18;
  lua_Integer *ib_8;
  lua_Integer *ib_10;
  lua_Integer *ib;
  lua_Integer ib_4;
  lua_Integer ib_2;
  StkId pTVar25;
  StkId ofunc;
  Instruction *pIVar26;
  uint uVar27;
  Instruction i;
  TValue *rb;
  int nresults;
  int b;
  StkId rb_3;
  TValue *rb_4;
  int c_2;
  lua_Integer ib_3;
  lua_Integer ib_5;
  lua_Integer ib_6;
  lua_Integer ib_7;
  int b_2;
  lua_Integer ib_9;
  int b_3;
  Upvaldesc *pUVar28;
  Upvaldesc *uv;
  Upvaldesc *uv_1;
  int c_3;
  uint uVar29;
  lua_Integer ic_1;
  StkId pTVar30;
  StkId lim;
  Value VVar31;
  int iVar32;
  int n_11;
  Proto *pPVar33;
  Proto *p;
  StkId base;
  CallInfo *pCVar34;
  CallInfo *ci;
  CallInfo *oci;
  LClosure *pLVar35;
  LClosure *c;
  bool bVar36;
  lua_Number f_1;
  lua_Number f_2;
  lua_Number f_3;
  lua_Number f_4;
  lua_Number f_5;
  lua_Number f_6;
  lua_Number f_7;
  lua_Number f_8;
  lua_Number f_9;
  lua_Number f_10;
  lua_Number f_11;
  lua_Number nb_5;
  lua_Number lVar37;
  lua_Number nb_3;
  lua_Number m;
  float fVar38;
  lua_Number f;
  lua_Number nc_4;
  lua_Number limit;
  lua_Number nlimit;
  lua_Number ninit;
  lua_Number step;
  lua_Number idx;
  lua_Number nc_1;
  lua_Number nc_3;
  lua_Number nc_5;
  lua_Number nc;
  lua_Number nc_6;
  lua_Number nb_1;
  lua_Number n_1;
  lua_Number nstep;
  lua_Number n_2;
  lua_Number nb_2;
  lua_Number n_3;
  lua_Number n_4;
  lua_Number n_5;
  lua_Number n_6;
  lua_Number n_7;
  lua_Number n_8;
  lua_Number n_9;
  lua_Number n_10;
  lua_Number nb_4;
  lua_Number n_12;
  lua_Number n_13;
  lua_Number nc_2;
  lua_Number nb_6;
  lua_Number nb;
  lua_Number nb_7;
  float fVar39;
  lua_Number n;
  LClosure *local_58;
  TValue v;
  
  iVar2 = __stack_chk_guard;
  pCVar34 = L->ci;
LAB_08122038:
  base = (pCVar34->u).l.base;
  pIVar26 = (pCVar34->u).l.savedpc;
  p_Var12 = (pCVar34->func->value_).f;
  cl = *(LClosure **)(p_Var12 + 0xc);
  iVar13 = *(int *)&cl[2].tt;
LAB_08122070:
  (pCVar34->u).l.savedpc = pIVar26 + 1;
  uVar27 = *pIVar26;
  if (((L->hookmask & 0xc) != 0) &&
     ((iVar14 = L->hookcount + -1, L->hookcount = iVar14, iVar14 == 0 || ((L->hookmask & 4) != 0))))
  {
    luaG_traceexec(L);
    base = (pCVar34->u).l.base;
  }
  uVar20 = (uVar27 << 0x12) >> 0x18;
  pTVar6 = base + uVar20;
  switch(uVar27 & 0x3f) {
  case 0:
    iVar14 = base[uVar27 >> 0x17].tt_;
    pTVar6->value_ = base[uVar27 >> 0x17].value_;
    pTVar6->tt_ = iVar14;
    pIVar26 = (pCVar34->u).l.savedpc;
    goto LAB_08122070;
  case 1:
    pVVar15 = (Value *)(iVar13 + (uVar27 >> 0xe) * 8);
    VVar23 = pVVar15[1];
    pTVar6->value_ = *pVVar15;
    pTVar6->tt_ = (int)VVar23;
    pIVar26 = (pCVar34->u).l.savedpc;
    goto LAB_08122070;
  case 2:
    pIVar26 = (pCVar34->u).l.savedpc;
    (pCVar34->u).l.savedpc = pIVar26 + 1;
    pVVar15 = (Value *)(iVar13 + (*pIVar26 >> 6) * 8);
    VVar23 = pVVar15[1];
    pTVar6->value_ = *pVVar15;
    pTVar6->tt_ = (int)VVar23;
    pIVar26 = (pCVar34->u).l.savedpc;
    goto LAB_08122070;
  case 3:
    base[uVar20].value_.b = uVar27 >> 0x17;
    pTVar6->tt_ = 1;
    if ((uVar27 << 9) >> 0x17 != 0) goto LAB_081228f8;
  default:
switchD_081220c4_caseD_2e:
    pIVar26 = (pCVar34->u).l.savedpc;
    goto LAB_08122070;
  case 4:
    uVar27 = uVar27 >> 0x17;
    do {
      uVar27 = uVar27 - 1;
      pTVar6->tt_ = 0;
      pTVar6 = pTVar6 + 1;
    } while (uVar27 != 0xffffffff);
    goto switchD_081220c4_caseD_2e;
  case 5:
    VVar23 = (**(Value ***)(p_Var12 + ((uVar27 >> 0x17) + 4) * 4))[1];
    pTVar6->value_ = ***(Value ***)(p_Var12 + ((uVar27 >> 0x17) + 4) * 4);
    pTVar6->tt_ = (int)VVar23;
    pIVar26 = (pCVar34->u).l.savedpc;
    goto LAB_08122070;
  case 6:
    pTVar7 = **(TValue ***)(p_Var12 + ((uVar27 >> 0x17) + 4) * 4);
    if ((uVar27 >> 0xe & 0x100) == 0) goto LAB_0812340c;
LAB_08122f88:
    pTVar8 = (TValue *)(iVar13 + (uVar27 >> 0xe & 0xff) * 8);
    goto LAB_08122f50;
  case 7:
    uVar20 = uVar27 >> 0xe;
    pTVar7 = base + (uVar27 >> 0x17);
    if ((uVar20 & 0x100) == 0) {
      pTVar8 = base + (uVar20 & 0x1ff);
    }
    else {
      pTVar8 = (TValue *)(iVar13 + (uVar20 & 0xff) * 8);
    }
    goto LAB_08122f50;
  case 8:
    uVar29 = uVar27 >> 0x17;
    uVar27 = uVar27 >> 0xe;
    bVar36 = (uVar29 & 0x100) != 0;
    if (bVar36) {
      uVar29 = uVar29 & 0xfffffeff;
    }
    pTVar6 = **(TValue ***)(p_Var12 + (uVar20 + 4) * 4);
    if (bVar36) {
      pTVar7 = (TValue *)(iVar13 + uVar29 * 8);
    }
    else {
      pTVar7 = base + uVar29;
    }
    if ((uVar27 & 0x100) == 0) {
      pTVar19 = base + (uVar27 & 0x1ff);
    }
    else {
      pTVar19 = (StkId)(iVar13 + (uVar27 & 0xff) * 8);
    }
    goto LAB_0812285c;
  case 9:
    iVar14 = pTVar6->tt_;
    pUVar4 = *(UpVal **)(p_Var12 + ((uVar27 >> 0x17) + 4) * 4);
    pTVar7 = pUVar4->v;
    pTVar7->value_ = pTVar6->value_;
    pTVar7->tt_ = iVar14;
    if (((pTVar7->tt_ & 0x40U) == 0) || (pTVar7 != (TValue *)&pUVar4->u))
    goto switchD_081220c4_caseD_2e;
    luaC_upvalbarrier_(L,pUVar4);
    pIVar26 = (pCVar34->u).l.savedpc;
    goto LAB_08122070;
  case 10:
    uVar20 = uVar27 >> 0x17;
    uVar27 = uVar27 >> 0xe;
    if ((uVar20 & 0x100) == 0) {
      pTVar7 = base + uVar20;
    }
    else {
      pTVar7 = (TValue *)(iVar13 + (uVar20 & 0xfffffeff) * 8);
    }
    if ((uVar27 & 0x100) == 0) {
      pTVar19 = base + (uVar27 & 0x1ff);
    }
    else {
      pTVar19 = (StkId)(iVar13 + (uVar27 & 0xff) * 8);
    }
LAB_0812285c:
    luaV_settable(L,pTVar6,pTVar7,pTVar19);
    goto LAB_0812237c;
  case 0xb:
    pTVar24 = luaH_new(L);
    base[uVar20].value_.gc = (GCObject *)pTVar24;
    pTVar6->tt_ = 0x45;
    if ((uVar27 | uVar27 << 9) >> 0x17 != 0) {
      uVar20 = luaO_fb2int(uVar27 >> 0x17);
      uVar27 = luaO_fb2int((uVar27 << 9) >> 0x17);
      luaH_resize(L,pTVar24,uVar20,uVar27);
    }
    goto LAB_081227bc;
  case 0xc:
    pTVar7 = base + (uVar27 >> 0x17);
    iVar14 = pTVar7->tt_;
    pTVar6[1].value_ = pTVar7->value_;
    pTVar6[1].tt_ = iVar14;
    if ((uVar27 >> 0xe & 0x100) != 0) goto LAB_08122f88;
LAB_0812340c:
    pTVar8 = base + (uVar27 >> 0xe & 0x1ff);
LAB_08122f50:
    luaV_gettable(L,pTVar7,pTVar8,pTVar6);
    base = (pCVar34->u).l.base;
    pIVar26 = (pCVar34->u).l.savedpc;
    goto LAB_08122070;
  case 0xd:
    uVar20 = uVar27 >> 0x17;
    uVar27 = uVar27 >> 0xe;
    if ((uVar20 & 0x100) == 0) {
      rb_17 = base + uVar20;
    }
    else {
      rb_17 = (TValue *)(iVar13 + (uVar20 & 0xfffffeff) * 8);
    }
    if ((uVar27 & 0x100) == 0) {
      uVar20 = rb_17->tt_;
      rc_9 = base + (uVar27 & 0x1ff);
      if (uVar20 != 0x13) goto LAB_081233bc;
LAB_081237f8:
      uVar27 = rc_9->tt_;
      if (uVar27 == 0x13) {
        pGVar10 = (rc_9->value_).gc;
        pGVar11 = (rb_17->value_).gc;
        pTVar6->tt_ = 0x13;
        (pTVar6->value_).gc = (GCObject *)((int)&pGVar10->next + (int)&pGVar11->next);
        pIVar26 = (pCVar34->u).l.savedpc;
        goto LAB_08122070;
      }
      VVar23.n = (lua_Number)(longlong)(rb_17->value_).b;
      if (uVar27 == 3) {
LAB_081233d4:
        nc_5 = (rc_9->value_).n;
LAB_081233d8:
        (pTVar6->value_).n = VVar23.n + nc_5;
        pTVar6->tt_ = 3;
        pIVar26 = (pCVar34->u).l.savedpc;
        goto LAB_08122070;
      }
      if ((uVar27 & 0xf) == 4) {
LAB_08123820:
        sVar5 = luaO_str2num((char *)((rc_9->value_).f + 0x18),&v);
        if (sVar5 == *(int *)((rc_9->value_).f + 0xc) + 1U) {
          nc_5 = v.value_.n;
          if (v.tt_ == 0x13) {
            nc_5 = (lua_Number)(longlong)v.value_.b;
          }
          goto LAB_081233d8;
        }
      }
    }
    else {
      rc_9 = (TValue *)(iVar13 + (uVar27 & 0xff) * 8);
      uVar20 = rb_17->tt_;
      if (uVar20 == 0x13) goto LAB_081237f8;
LAB_081233bc:
      if (uVar20 == 3) {
        uVar27 = rc_9->tt_;
        VVar23.n = (rb_17->value_).n;
LAB_081233cc:
        if (uVar27 == 3) goto LAB_081233d4;
        if (uVar27 != 0x13) {
          if ((uVar27 & 0xf) != 4) goto LAB_08123c88;
          goto LAB_08123820;
        }
        nc_5 = (lua_Number)(longlong)(rc_9->value_).b;
        goto LAB_081233d8;
      }
      if (((uVar20 & 0xf) == 4) &&
         (sVar5 = luaO_str2num((char *)((rb_17->value_).f + 0x18),&v),
         sVar5 == *(int *)((rb_17->value_).f + 0xc) + 1U)) {
        uVar27 = rc_9->tt_;
        VVar23 = v.value_;
        if (v.tt_ == 0x13) {
          VVar23.n = (float)(longlong)v.value_.b;
        }
        goto LAB_081233cc;
      }
    }
LAB_08123c88:
    event = TM_ADD;
    rb_15 = rb_17;
    break;
  case 0xe:
    uVar20 = uVar27 >> 0x17;
    uVar27 = uVar27 >> 0xe;
    if ((uVar20 & 0x100) == 0) {
      rb_1 = base + uVar20;
    }
    else {
      rb_1 = (TValue *)(iVar13 + (uVar20 & 0xfffffeff) * 8);
    }
    if ((uVar27 & 0x100) == 0) {
      uVar20 = rb_1->tt_;
      rc_9 = base + (uVar27 & 0x1ff);
      if (uVar20 != 0x13) goto LAB_08123454;
LAB_08123a40:
      uVar27 = rc_9->tt_;
      if (uVar27 == 0x13) {
        iVar14 = (rc_9->value_).b;
        pGVar10 = (rb_1->value_).gc;
        pTVar6->tt_ = 0x13;
        (pTVar6->value_).gc = (GCObject *)((int)pGVar10 - iVar14);
        pIVar26 = (pCVar34->u).l.savedpc;
        goto LAB_08122070;
      }
      VVar23.n = (lua_Number)(longlong)(rb_1->value_).b;
      if (uVar27 == 3) {
LAB_0812346c:
        nc = (rc_9->value_).n;
LAB_08123470:
        (pTVar6->value_).n = VVar23.n - nc;
        pTVar6->tt_ = 3;
        pIVar26 = (pCVar34->u).l.savedpc;
        goto LAB_08122070;
      }
      if ((uVar27 & 0xf) == 4) {
LAB_08123a68:
        sVar5 = luaO_str2num((char *)((rc_9->value_).f + 0x18),&v);
        if (sVar5 == *(int *)((rc_9->value_).f + 0xc) + 1U) {
          nc = v.value_.n;
          if (v.tt_ == 0x13) {
            nc = (lua_Number)(longlong)v.value_.b;
          }
          goto LAB_08123470;
        }
      }
    }
    else {
      rc_9 = (TValue *)(iVar13 + (uVar27 & 0xff) * 8);
      uVar20 = rb_1->tt_;
      if (uVar20 == 0x13) goto LAB_08123a40;
LAB_08123454:
      if (uVar20 == 3) {
        uVar27 = rc_9->tt_;
        VVar23.n = (rb_1->value_).n;
LAB_08123464:
        if (uVar27 == 3) goto LAB_0812346c;
        if (uVar27 != 0x13) {
          if ((uVar27 & 0xf) != 4) goto LAB_08123bb8;
          goto LAB_08123a68;
        }
        nc = (lua_Number)(longlong)(rc_9->value_).b;
        goto LAB_08123470;
      }
      if (((uVar20 & 0xf) == 4) &&
         (sVar5 = luaO_str2num((char *)((rb_1->value_).f + 0x18),&v),
         sVar5 == *(int *)((rb_1->value_).f + 0xc) + 1U)) {
        uVar27 = rc_9->tt_;
        VVar23 = v.value_;
        if (v.tt_ == 0x13) {
          VVar23.n = (float)(longlong)v.value_.b;
        }
        goto LAB_08123464;
      }
    }
LAB_08123bb8:
    event = TM_SUB;
    rb_15 = rb_1;
    break;
  case 0xf:
    uVar20 = uVar27 >> 0x17;
    uVar27 = uVar27 >> 0xe;
    if ((uVar20 & 0x100) == 0) {
      rb_14 = base + uVar20;
    }
    else {
      rb_14 = (TValue *)(iVar13 + (uVar20 & 0xfffffeff) * 8);
    }
    if ((uVar27 & 0x100) == 0) {
      uVar20 = rb_14->tt_;
      rc_9 = base + (uVar27 & 0x1ff);
      if (uVar20 != 0x13) goto LAB_08122fd4;
LAB_081239c8:
      uVar27 = rc_9->tt_;
      if (uVar27 == 0x13) {
        iVar21 = (rc_9->value_).b;
        iVar14 = (rb_14->value_).b;
        pTVar6->tt_ = 0x13;
        (pTVar6->value_).b = iVar21 * iVar14;
        pIVar26 = (pCVar34->u).l.savedpc;
        goto LAB_08122070;
      }
      VVar23.n = (lua_Number)(longlong)(rb_14->value_).b;
      if (uVar27 == 3) {
LAB_08122fec:
        nc_3 = (rc_9->value_).n;
LAB_08122ff0:
        (pTVar6->value_).n = nc_3 * VVar23.n;
        pTVar6->tt_ = 3;
        pIVar26 = (pCVar34->u).l.savedpc;
        goto LAB_08122070;
      }
      if ((uVar27 & 0xf) == 4) {
LAB_081239f0:
        sVar5 = luaO_str2num((char *)((rc_9->value_).f + 0x18),&v);
        if (sVar5 == *(int *)((rc_9->value_).f + 0xc) + 1U) {
          nc_3 = v.value_.n;
          if (v.tt_ == 0x13) {
            nc_3 = (lua_Number)(longlong)v.value_.b;
          }
          goto LAB_08122ff0;
        }
      }
    }
    else {
      rc_9 = (TValue *)(iVar13 + (uVar27 & 0xff) * 8);
      uVar20 = rb_14->tt_;
      if (uVar20 == 0x13) goto LAB_081239c8;
LAB_08122fd4:
      if (uVar20 == 3) {
        uVar27 = rc_9->tt_;
        VVar23.n = (rb_14->value_).n;
LAB_08122fe4:
        if (uVar27 == 3) goto LAB_08122fec;
        if (uVar27 != 0x13) {
          if ((uVar27 & 0xf) != 4) goto LAB_08123c24;
          goto LAB_081239f0;
        }
        nc_3 = (lua_Number)(longlong)(rc_9->value_).b;
        goto LAB_08122ff0;
      }
      if (((uVar20 & 0xf) == 4) &&
         (sVar5 = luaO_str2num((char *)((rb_14->value_).f + 0x18),&v),
         sVar5 == *(int *)((rb_14->value_).f + 0xc) + 1U)) {
        uVar27 = rc_9->tt_;
        VVar23 = v.value_;
        if (v.tt_ == 0x13) {
          VVar23.n = (float)(longlong)v.value_.b;
        }
        goto LAB_08122fe4;
      }
    }
LAB_08123c24:
    event = TM_MUL;
    rb_15 = rb_14;
    break;
  case 0x10:
    uVar20 = uVar27 >> 0x17;
    uVar27 = uVar27 >> 0xe;
    if ((uVar20 & 0x100) == 0) {
      rb_9 = base + uVar20;
    }
    else {
      rb_9 = (TValue *)(iVar13 + (uVar20 & 0xfffffeff) * 8);
    }
    if ((uVar27 & 0x100) == 0) {
      uVar20 = rb_9->tt_;
      rc_9 = base + (uVar27 & 0x1ff);
      if (uVar20 != 0x13) goto LAB_081232cc;
LAB_08123948:
      uVar27 = rc_9->tt_;
      if (uVar27 == 0x13) {
        pGVar10 = (rc_9->value_).gc;
        uVar27 = (rb_9->value_).b;
        if ((undefined *)((int)&pGVar10->next + 1) < (undefined *)0x2) {
          if (pGVar10 == (GCObject *)0x0) {
                    /* WARNING: Subroutine does not return */
            luaG_runerror(L,"attempt to perform \'n%%0\'");
          }
          goto LAB_081229a0;
        }
        __aeabi_idivmod(uVar27,pGVar10);
        ib_1 = extraout_r1;
        if ((extraout_r1 != 0) && ((int)(uVar27 ^ (uint)pGVar10) < 0)) {
          ib_1 = (int)&pGVar10->next + extraout_r1;
        }
        goto LAB_081226b4;
      }
      VVar23.n = (lua_Number)(longlong)(rb_9->value_).b;
      if (uVar27 == 3) {
LAB_081232e4:
        nc_2 = (rc_9->value_).n;
LAB_081232e8:
        lVar37 = fmodf(VVar23.n,nc_2);
        if (lVar37 * nc_2 < 0.0) {
          lVar37 = lVar37 + nc_2;
        }
        goto LAB_0812327c;
      }
      if ((uVar27 & 0xf) == 4) {
LAB_08123970:
        sVar5 = luaO_str2num((char *)((rc_9->value_).f + 0x18),&v);
        if (sVar5 == *(int *)((rc_9->value_).f + 0xc) + 1U) {
          nc_2 = v.value_.n;
          if (v.tt_ == 0x13) {
            nc_2 = (lua_Number)(longlong)v.value_.b;
          }
          goto LAB_081232e8;
        }
      }
    }
    else {
      rc_9 = (TValue *)(iVar13 + (uVar27 & 0xff) * 8);
      uVar20 = rb_9->tt_;
      if (uVar20 == 0x13) goto LAB_08123948;
LAB_081232cc:
      if (uVar20 == 3) {
        uVar27 = rc_9->tt_;
        VVar23.n = (rb_9->value_).n;
LAB_081232dc:
        if (uVar27 == 3) goto LAB_081232e4;
        if (uVar27 != 0x13) {
          if ((uVar27 & 0xf) != 4) goto LAB_08123ba4;
          goto LAB_08123970;
        }
        nc_2 = (lua_Number)(longlong)(rc_9->value_).b;
        goto LAB_081232e8;
      }
      if (((uVar20 & 0xf) == 4) &&
         (sVar5 = luaO_str2num((char *)((rb_9->value_).f + 0x18),&v),
         sVar5 == *(int *)((rb_9->value_).f + 0xc) + 1U)) {
        uVar27 = rc_9->tt_;
        VVar23 = v.value_;
        if (v.tt_ == 0x13) {
          VVar23.n = (float)(longlong)v.value_.b;
        }
        goto LAB_081232dc;
      }
    }
LAB_08123ba4:
    event = TM_MOD;
    rb_15 = rb_9;
    break;
  case 0x11:
    uVar20 = uVar27 >> 0x17;
    uVar27 = uVar27 >> 0xe;
    if ((uVar20 & 0x100) == 0) {
      rb_16 = base + uVar20;
    }
    else {
      rb_16 = (TValue *)(iVar13 + (uVar20 & 0xfffffeff) * 8);
    }
    if ((uVar27 & 0x100) == 0) {
      rc_10 = base + (uVar27 & 0x1ff);
    }
    else {
      rc_10 = (TValue *)(iVar13 + (uVar27 & 0xff) * 8);
    }
    uVar27 = rb_16->tt_;
    if (uVar27 == 3) {
      nb_5 = (rb_16->value_).n;
LAB_08123268:
      uVar27 = rc_10->tt_;
      if (uVar27 == 3) {
        nc_4 = (rc_10->value_).n;
      }
      else if (uVar27 == 0x13) {
        nc_4 = (lua_Number)(longlong)(rc_10->value_).b;
      }
      else {
        if (((uVar27 & 0xf) != 4) ||
           (sVar5 = luaO_str2num((char *)((rc_10->value_).f + 0x18),&v),
           sVar5 != *(int *)((rc_10->value_).f + 0xc) + 1U)) goto LAB_08123770;
        nc_4 = v.value_.n;
        if (v.tt_ == 0x13) {
          nc_4 = (lua_Number)(longlong)v.value_.b;
        }
      }
      lVar37 = powf(nb_5,nc_4);
LAB_0812327c:
      (pTVar6->value_).n = lVar37;
      pTVar6->tt_ = 3;
      pIVar26 = (pCVar34->u).l.savedpc;
      goto LAB_08122070;
    }
    if (uVar27 == 0x13) {
      nb_5 = (lua_Number)(longlong)(rb_16->value_).b;
      goto LAB_08123268;
    }
    if (((uVar27 & 0xf) == 4) &&
       (sVar5 = luaO_str2num((char *)((rb_16->value_).f + 0x18),&v),
       sVar5 == *(int *)((rb_16->value_).f + 0xc) + 1U)) {
      nb_5 = v.value_.n;
      if (v.tt_ == 0x13) {
        nb_5 = (lua_Number)(longlong)v.value_.b;
      }
      goto LAB_08123268;
    }
LAB_08123770:
    event = TM_POW;
    rb_15 = rb_16;
    rc_9 = rc_10;
    break;
  case 0x12:
    uVar20 = uVar27 >> 0x17;
    uVar27 = uVar27 >> 0xe;
    if ((uVar20 & 0x100) == 0) {
      rb_18 = base + uVar20;
    }
    else {
      rb_18 = (TValue *)(iVar13 + (uVar20 & 0xfffffeff) * 8);
    }
    if ((uVar27 & 0x100) == 0) {
      rc_12 = base + (uVar27 & 0x1ff);
    }
    else {
      rc_12 = (TValue *)(iVar13 + (uVar27 & 0xff) * 8);
    }
    uVar27 = rb_18->tt_;
    if (uVar27 == 3) {
      nb_7 = (rb_18->value_).n;
LAB_081236ec:
      uVar27 = rc_12->tt_;
      if (uVar27 == 3) {
        nc_6 = (rc_12->value_).n;
      }
      else if (uVar27 == 0x13) {
        nc_6 = (lua_Number)(longlong)(rc_12->value_).b;
      }
      else {
        if (((uVar27 & 0xf) != 4) ||
           (sVar5 = luaO_str2num((char *)((rc_12->value_).f + 0x18),&v),
           sVar5 != *(int *)((rc_12->value_).f + 0xc) + 1U)) goto LAB_08123748;
        nc_6 = v.value_.n;
        if (v.tt_ == 0x13) {
          nc_6 = (lua_Number)(longlong)v.value_.b;
        }
      }
      (pTVar6->value_).n = nb_7 / nc_6;
      pTVar6->tt_ = 3;
      pIVar26 = (pCVar34->u).l.savedpc;
      goto LAB_08122070;
    }
    if (uVar27 == 0x13) {
      nb_7 = (lua_Number)(longlong)(rb_18->value_).b;
      goto LAB_081236ec;
    }
    if (((uVar27 & 0xf) == 4) &&
       (sVar5 = luaO_str2num((char *)((rb_18->value_).f + 0x18),&v),
       sVar5 == *(int *)((rb_18->value_).f + 0xc) + 1U)) {
      nb_7 = v.value_.n;
      if (v.tt_ == 0x13) {
        nb_7 = (lua_Number)(longlong)v.value_.b;
      }
      goto LAB_081236ec;
    }
LAB_08123748:
    event = TM_DIV;
    rb_15 = rb_18;
    rc_9 = rc_12;
    break;
  case 0x13:
    uVar20 = uVar27 >> 0x17;
    uVar27 = uVar27 >> 0xe;
    if ((uVar20 & 0x100) == 0) {
      rb_7 = base + uVar20;
    }
    else {
      rb_7 = (TValue *)(iVar13 + (uVar20 & 0xfffffeff) * 8);
    }
    if ((uVar27 & 0x100) == 0) {
      uVar20 = rb_7->tt_;
      rc_9 = base + (uVar27 & 0x1ff);
      if (uVar20 != 0x13) goto LAB_081228a4;
LAB_081238ac:
      uVar27 = rc_9->tt_;
      if (uVar27 == 0x13) {
        pGVar10 = (rc_9->value_).gc;
        uVar27 = (rb_7->value_).b;
        if ((undefined *)((int)&pGVar10->next + 1) < (undefined *)0x2) {
          if (pGVar10 == (GCObject *)0x0) {
                    /* WARNING: Subroutine does not return */
            luaG_runerror(L,"attempt to divide by zero");
          }
          ib_1 = -uVar27;
        }
        else {
          ib_1 = __aeabi_idiv(uVar27,pGVar10);
          if (((int)(uVar27 ^ (uint)pGVar10) < 0) &&
             (__aeabi_idivmod(uVar27,pGVar10), extraout_r1_00 != 0)) {
            ib_1 = ib_1 - 1;
          }
        }
LAB_081226b4:
        (pTVar6->value_).i = ib_1;
        pTVar6->tt_ = 0x13;
        pIVar26 = (pCVar34->u).l.savedpc;
      }
      else {
        VVar23.n = (lua_Number)(longlong)(rb_7->value_).b;
        if (uVar27 != 3) {
          if ((uVar27 & 0xf) == 4) {
LAB_081238d4:
            sVar5 = luaO_str2num((char *)((rc_9->value_).f + 0x18),&v);
            if (sVar5 == *(int *)((rc_9->value_).f + 0xc) + 1U) {
              nc_1 = v.value_.n;
              if (v.tt_ == 0x13) {
                nc_1 = (lua_Number)(longlong)v.value_.b;
              }
              goto LAB_081228c0;
            }
          }
          goto LAB_08123b90;
        }
LAB_081228bc:
        nc_1 = (rc_9->value_).n;
LAB_081228c0:
        fVar38 = floorf(VVar23.n / nc_1);
        (pTVar6->value_).n = fVar38;
        pTVar6->tt_ = 3;
        pIVar26 = (pCVar34->u).l.savedpc;
      }
      goto LAB_08122070;
    }
    rc_9 = (TValue *)(iVar13 + (uVar27 & 0xff) * 8);
    uVar20 = rb_7->tt_;
    if (uVar20 == 0x13) goto LAB_081238ac;
LAB_081228a4:
    if (uVar20 == 3) {
      uVar27 = rc_9->tt_;
      VVar23.n = (rb_7->value_).n;
LAB_081228b4:
      if (uVar27 == 3) goto LAB_081228bc;
      if (uVar27 != 0x13) {
        if ((uVar27 & 0xf) != 4) goto LAB_08123b90;
        goto LAB_081238d4;
      }
      nc_1 = (lua_Number)(longlong)(rc_9->value_).b;
      goto LAB_081228c0;
    }
    if (((uVar20 & 0xf) == 4) &&
       (sVar5 = luaO_str2num((char *)((rb_7->value_).f + 0x18),&v),
       sVar5 == *(int *)((rb_7->value_).f + 0xc) + 1U)) {
      uVar27 = rc_9->tt_;
      VVar23 = v.value_;
      if (v.tt_ == 0x13) {
        VVar23.n = (float)(longlong)v.value_.b;
      }
      goto LAB_081228b4;
    }
LAB_08123b90:
    event = TM_IDIV;
    rb_15 = rb_7;
    break;
  case 0x14:
    uVar20 = uVar27 >> 0x17;
    uVar27 = uVar27 >> 0xe;
    if ((uVar20 & 0x100) == 0) {
      rb_12 = base + uVar20;
    }
    else {
      rb_12 = (TValue *)(iVar13 + (uVar20 & 0xfffffeff) * 8);
    }
    if ((uVar27 & 0x100) == 0) {
      rc_7 = base + (uVar27 & 0x1ff);
    }
    else {
      rc_7 = (TValue *)(iVar13 + (uVar27 & 0xff) * 8);
    }
    uVar27 = rb_12->tt_;
    pTVar7 = rb_12;
    if (uVar27 == 0x13) {
      ib_7 = (rb_12->value_).i;
LAB_08122dfc:
      uVar27 = rc_7->tt_;
      pTVar7 = rc_7;
      if (uVar27 == 0x13) {
        ic_6 = (rc_7->value_).i;
      }
      else {
        while (uVar27 != 3) {
          if (uVar27 == 0x13) {
            ic_6 = (pTVar7->value_).i;
            goto LAB_08122e10;
          }
          if (((uVar27 & 0xf) != 4) ||
             (sVar5 = luaO_str2num((char *)((pTVar7->value_).f + 0x18),&v),
             sVar5 != *(int *)((pTVar7->value_).f + 0xc) + 1U)) goto LAB_08123b48;
          uVar27 = v.tt_;
          pTVar7 = &v;
        }
        fVar39 = (pTVar7->value_).n;
        fVar38 = floorf(fVar39);
        if (((fVar39 != fVar38) || (fVar38 < -2.147484e+09 != NAN(fVar38))) ||
           (2.147484e+09 <= fVar38)) goto LAB_08123b48;
        ic_6 = (lua_Integer)fVar38;
      }
LAB_08122e10:
      (pTVar6->value_).b = ib_7 & ic_6;
      pTVar6->tt_ = 0x13;
      pIVar26 = (pCVar34->u).l.savedpc;
      goto LAB_08122070;
    }
    while (uVar27 != 3) {
      if (uVar27 == 0x13) {
        ib_7 = (pTVar7->value_).i;
        goto LAB_08122dfc;
      }
      if (((uVar27 & 0xf) != 4) ||
         (sVar5 = luaO_str2num((char *)((pTVar7->value_).f + 0x18),&v),
         sVar5 != *(int *)((pTVar7->value_).f + 0xc) + 1U)) goto LAB_08123b48;
      uVar27 = v.tt_;
      pTVar7 = &v;
    }
    fVar39 = (pTVar7->value_).n;
    fVar38 = floorf(fVar39);
    if (((fVar39 == fVar38) && (fVar38 < -2.147484e+09 == NAN(fVar38))) && (fVar38 < 2.147484e+09))
    {
      ib_7 = (lua_Integer)fVar38;
      goto LAB_08122dfc;
    }
LAB_08123b48:
    event = TM_BAND;
    rb_15 = rb_12;
    rc_9 = rc_7;
    break;
  case 0x15:
    uVar20 = uVar27 >> 0x17;
    uVar27 = uVar27 >> 0xe;
    if ((uVar20 & 0x100) == 0) {
      rb_11 = base + uVar20;
    }
    else {
      rb_11 = (TValue *)(iVar13 + (uVar20 & 0xfffffeff) * 8);
    }
    if ((uVar27 & 0x100) == 0) {
      rc_6 = base + (uVar27 & 0x1ff);
    }
    else {
      rc_6 = (TValue *)(iVar13 + (uVar27 & 0xff) * 8);
    }
    uVar27 = rb_11->tt_;
    pTVar7 = rb_11;
    if (uVar27 == 0x13) {
      ib_6 = (rb_11->value_).i;
LAB_08122c84:
      uVar27 = rc_6->tt_;
      pTVar7 = rc_6;
      if (uVar27 == 0x13) {
        ic_5 = (rc_6->value_).i;
      }
      else {
        while (uVar27 != 3) {
          if (uVar27 == 0x13) {
            ic_5 = (pTVar7->value_).i;
            goto LAB_08122c98;
          }
          if (((uVar27 & 0xf) != 4) ||
             (sVar5 = luaO_str2num((char *)((pTVar7->value_).f + 0x18),&v),
             sVar5 != *(int *)((pTVar7->value_).f + 0xc) + 1U)) goto LAB_08123b5c;
          uVar27 = v.tt_;
          pTVar7 = &v;
        }
        fVar39 = (pTVar7->value_).n;
        fVar38 = floorf(fVar39);
        if (((fVar39 != fVar38) || (fVar38 < -2.147484e+09 != NAN(fVar38))) ||
           (2.147484e+09 <= fVar38)) goto LAB_08123b5c;
        ic_5 = (lua_Integer)fVar38;
      }
LAB_08122c98:
      (pTVar6->value_).b = ib_6 | ic_5;
      pTVar6->tt_ = 0x13;
      pIVar26 = (pCVar34->u).l.savedpc;
      goto LAB_08122070;
    }
    while (uVar27 != 3) {
      if (uVar27 == 0x13) {
        ib_6 = (pTVar7->value_).i;
        goto LAB_08122c84;
      }
      if (((uVar27 & 0xf) != 4) ||
         (sVar5 = luaO_str2num((char *)((pTVar7->value_).f + 0x18),&v),
         sVar5 != *(int *)((pTVar7->value_).f + 0xc) + 1U)) goto LAB_08123b5c;
      uVar27 = v.tt_;
      pTVar7 = &v;
    }
    fVar39 = (pTVar7->value_).n;
    fVar38 = floorf(fVar39);
    if (((fVar39 == fVar38) && (fVar38 < -2.147484e+09 == NAN(fVar38))) && (fVar38 < 2.147484e+09))
    {
      ib_6 = (lua_Integer)fVar38;
      goto LAB_08122c84;
    }
LAB_08123b5c:
    event = TM_BOR;
    rb_15 = rb_11;
    rc_9 = rc_6;
    break;
  case 0x16:
    uVar20 = uVar27 >> 0x17;
    uVar27 = uVar27 >> 0xe;
    if ((uVar20 & 0x100) == 0) {
      rb_10 = base + uVar20;
    }
    else {
      rb_10 = (TValue *)(iVar13 + (uVar20 & 0xfffffeff) * 8);
    }
    if ((uVar27 & 0x100) == 0) {
      rc_5 = base + (uVar27 & 0x1ff);
    }
    else {
      rc_5 = (TValue *)(iVar13 + (uVar27 & 0xff) * 8);
    }
    uVar27 = rb_10->tt_;
    pTVar7 = rb_10;
    if (uVar27 == 0x13) {
      ib_5 = (rb_10->value_).i;
LAB_08122b0c:
      uVar27 = rc_5->tt_;
      pTVar7 = rc_5;
      if (uVar27 == 0x13) {
        ic_4 = (rc_5->value_).i;
      }
      else {
        while (uVar27 != 3) {
          if (uVar27 == 0x13) {
            ic_4 = (pTVar7->value_).i;
            goto LAB_08122b20;
          }
          if (((uVar27 & 0xf) != 4) ||
             (sVar5 = luaO_str2num((char *)((pTVar7->value_).f + 0x18),&v),
             sVar5 != *(int *)((pTVar7->value_).f + 0xc) + 1U)) goto LAB_08123b34;
          uVar27 = v.tt_;
          pTVar7 = &v;
        }
        fVar39 = (pTVar7->value_).n;
        fVar38 = floorf(fVar39);
        if (((fVar39 != fVar38) || (fVar38 < -2.147484e+09 != NAN(fVar38))) ||
           (2.147484e+09 <= fVar38)) goto LAB_08123b34;
        ic_4 = (lua_Integer)fVar38;
      }
LAB_08122b20:
      (pTVar6->value_).b = ib_5 ^ ic_4;
      pTVar6->tt_ = 0x13;
      pIVar26 = (pCVar34->u).l.savedpc;
      goto LAB_08122070;
    }
    while (uVar27 != 3) {
      if (uVar27 == 0x13) {
        ib_5 = (pTVar7->value_).i;
        goto LAB_08122b0c;
      }
      if (((uVar27 & 0xf) != 4) ||
         (sVar5 = luaO_str2num((char *)((pTVar7->value_).f + 0x18),&v),
         sVar5 != *(int *)((pTVar7->value_).f + 0xc) + 1U)) goto LAB_08123b34;
      uVar27 = v.tt_;
      pTVar7 = &v;
    }
    fVar39 = (pTVar7->value_).n;
    fVar38 = floorf(fVar39);
    if (((fVar39 == fVar38) && (fVar38 < -2.147484e+09 == NAN(fVar38))) && (fVar38 < 2.147484e+09))
    {
      ib_5 = (lua_Integer)fVar38;
      goto LAB_08122b0c;
    }
LAB_08123b34:
    event = TM_BXOR;
    rb_15 = rb_10;
    rc_9 = rc_5;
    break;
  case 0x17:
    uVar20 = uVar27 >> 0x17;
    uVar27 = uVar27 >> 0xe;
    if ((uVar20 & 0x100) == 0) {
      rb_8 = base + uVar20;
    }
    else {
      rb_8 = (TValue *)(iVar13 + (uVar20 & 0xfffffeff) * 8);
    }
    if ((uVar27 & 0x100) == 0) {
      rc_3 = base + (uVar27 & 0x1ff);
    }
    else {
      rc_3 = (TValue *)(iVar13 + (uVar27 & 0xff) * 8);
    }
    uVar27 = rb_8->tt_;
    pTVar7 = rb_8;
    if (uVar27 == 0x13) {
      ib_3 = (rb_8->value_).i;
LAB_08122978:
      uVar27 = rc_3->tt_;
      pTVar7 = rc_3;
      if (uVar27 == 0x13) {
        uVar27 = (rc_3->value_).b;
      }
      else {
        while (uVar27 != 3) {
          if (uVar27 == 0x13) {
            uVar27 = (pTVar7->value_).b;
            goto joined_r0x08122ab0;
          }
          if (((uVar27 & 0xf) != 4) ||
             (sVar5 = luaO_str2num((char *)((pTVar7->value_).f + 0x18),&v),
             sVar5 != *(int *)((pTVar7->value_).f + 0xc) + 1U)) goto LAB_08123b20;
          uVar27 = v.tt_;
          pTVar7 = &v;
        }
        fVar39 = (pTVar7->value_).n;
        fVar38 = floorf(fVar39);
        if (((fVar39 != fVar38) || (fVar38 < -2.147484e+09 != NAN(fVar38))) ||
           (2.147484e+09 <= fVar38)) goto LAB_08123b20;
        uVar27 = (uint)fVar38;
      }
joined_r0x08122ab0:
      if (-1 < (int)uVar27) {
        if (0x1f < (int)uVar27) goto LAB_081229a0;
        ib_1 = ib_3 << (uVar27 & 0xff);
        goto LAB_081226b4;
      }
      if ((int)(uVar27 + 0x1f) < 0 == SCARRY4(uVar27,0x1f)) {
        ib_1 = (uint)ib_3 >> (-uVar27 & 0xff);
        goto LAB_081226b4;
      }
LAB_081229a0:
      ib_1 = 0;
      goto LAB_081226b4;
    }
    while (uVar27 != 3) {
      if (uVar27 == 0x13) {
        ib_3 = (pTVar7->value_).i;
        goto LAB_08122978;
      }
      if (((uVar27 & 0xf) != 4) ||
         (sVar5 = luaO_str2num((char *)((pTVar7->value_).f + 0x18),&v),
         sVar5 != *(int *)((pTVar7->value_).f + 0xc) + 1U)) goto LAB_08123b20;
      uVar27 = v.tt_;
      pTVar7 = &v;
    }
    fVar39 = (pTVar7->value_).n;
    fVar38 = floorf(fVar39);
    if (((fVar39 == fVar38) && (fVar38 < -2.147484e+09 == NAN(fVar38))) && (fVar38 < 2.147484e+09))
    {
      ib_3 = (lua_Integer)fVar38;
      goto LAB_08122978;
    }
LAB_08123b20:
    event = TM_SHL;
    rb_15 = rb_8;
    rc_9 = rc_3;
    break;
  case 0x18:
    uVar20 = uVar27 >> 0x17;
    uVar27 = uVar27 >> 0xe;
    if ((uVar20 & 0x100) == 0) {
      rb_15 = base + uVar20;
    }
    else {
      rb_15 = (TValue *)(iVar13 + (uVar20 & 0xfffffeff) * 8);
    }
    if ((uVar27 & 0x100) == 0) {
      rc_9 = base + (uVar27 & 0x1ff);
    }
    else {
      rc_9 = (TValue *)(iVar13 + (uVar27 & 0xff) * 8);
    }
    uVar27 = rb_15->tt_;
    pTVar7 = rb_15;
    if (uVar27 == 0x13) {
      ib_9 = (rb_15->value_).i;
LAB_081230c4:
      uVar27 = rc_9->tt_;
      pTVar7 = rc_9;
      if (uVar27 == 0x13) {
        uVar27 = (rc_9->value_).i;
      }
      else {
        while (uVar27 != 3) {
          if (uVar27 == 0x13) {
            uVar27 = (pTVar7->value_).i;
            goto joined_r0x081230e0;
          }
          if (((uVar27 & 0xf) != 4) ||
             (sVar5 = luaO_str2num((char *)((pTVar7->value_).f + 0x18),&v),
             sVar5 != *(int *)((pTVar7->value_).f + 0xc) + 1U)) goto LAB_08123b70;
          uVar27 = v.tt_;
          pTVar7 = &v;
        }
        fVar39 = (pTVar7->value_).n;
        fVar38 = floorf(fVar39);
        if (((fVar39 != fVar38) || (fVar38 < -2.147484e+09 != NAN(fVar38))) ||
           (2.147484e+09 <= fVar38)) goto LAB_08123b70;
        uVar27 = (uint)fVar38;
      }
joined_r0x081230e0:
      uVar20 = -uVar27;
      if ((int)uVar27 < 1) {
        if (0x1f < (int)uVar20) goto LAB_081230f0;
        uVar27 = ib_9 << (uVar20 & 0xff);
      }
      else if ((int)(uVar20 + 0x1f) < 0 == SCARRY4(uVar20,0x1f)) {
        uVar27 = (uint)ib_9 >> (uVar27 & 0xff);
      }
      else {
LAB_081230f0:
        uVar27 = 0;
      }
      (pTVar6->value_).b = uVar27;
      pTVar6->tt_ = 0x13;
      pIVar26 = (pCVar34->u).l.savedpc;
      goto LAB_08122070;
    }
    while (uVar27 != 3) {
      if (uVar27 == 0x13) {
        ib_9 = (pTVar7->value_).i;
        goto LAB_081230c4;
      }
      if (((uVar27 & 0xf) != 4) ||
         (sVar5 = luaO_str2num((char *)((pTVar7->value_).f + 0x18),&v),
         sVar5 != *(int *)((pTVar7->value_).f + 0xc) + 1U)) goto LAB_08123b70;
      uVar27 = v.tt_;
      pTVar7 = &v;
    }
    fVar39 = (pTVar7->value_).n;
    fVar38 = floorf(fVar39);
    if (((fVar39 == fVar38) && (fVar38 < -2.147484e+09 == NAN(fVar38))) && (fVar38 < 2.147484e+09))
    {
      ib_9 = (lua_Integer)fVar38;
      goto LAB_081230c4;
    }
LAB_08123b70:
    event = TM_SHR;
    break;
  case 0x19:
    rb_15 = base + (uVar27 >> 0x17);
    uVar20 = rb_15->tt_;
    if (uVar20 == 0x13) {
      iVar14 = base[uVar27 >> 0x17].value_.b;
      pTVar6->tt_ = 0x13;
      (pTVar6->value_).b = -iVar14;
      pIVar26 = (pCVar34->u).l.savedpc;
      goto LAB_08122070;
    }
    if (uVar20 == 3) {
      nb_1 = (rb_15->value_).n;
LAB_08123cb4:
      nb_1 = -nb_1;
      (pTVar6->value_).n = nb_1;
      pTVar6->tt_ = 3;
      pIVar26 = (pCVar34->u).l.savedpc;
      goto LAB_08122070;
    }
    if (((uVar20 & 0xf) == 4) &&
       (sVar5 = luaO_str2num((char *)((rb_15->value_).f + 0x18),&v),
       sVar5 == *(int *)((rb_15->value_).f + 0xc) + 1U)) {
      nb_1 = v.value_.n;
      if (v.tt_ == 0x13) {
        nb_1 = (lua_Number)(longlong)v.value_.b;
      }
      goto LAB_08123cb4;
    }
    event = TM_UNM;
    rc_9 = rb_15;
    break;
  case 0x1a:
    pTVar8 = base + (uVar27 >> 0x17);
    uVar20 = pTVar8->tt_;
    pTVar7 = pTVar8;
    if (uVar20 == 0x13) {
      ib_1 = base[uVar27 >> 0x17].value_.i;
    }
    else {
      while (uVar20 != 3) {
        if (uVar20 == 0x13) {
          ib_1 = (pTVar7->value_).i;
          goto LAB_081226b0;
        }
        if (((uVar20 & 0xf) != 4) ||
           (sVar5 = luaO_str2num((char *)((pTVar7->value_).f + 0x18),&v),
           sVar5 != *(int *)((pTVar7->value_).f + 0xc) + 1U)) goto LAB_08123c90;
        uVar20 = v.tt_;
        pTVar7 = &v;
      }
      fVar39 = (pTVar7->value_).n;
      fVar38 = floorf(fVar39);
      if (((fVar39 != fVar38) || (fVar38 < -2.147484e+09 != NAN(fVar38))) ||
         (2.147484e+09 <= fVar38)) {
LAB_08123c90:
        luaT_trybinTM(L,pTVar8,pTVar8,pTVar6,TM_BNOT);
        goto LAB_0812237c;
      }
      ib_1 = (lua_Integer)fVar38;
    }
LAB_081226b0:
    ib_1 = ~ib_1;
    goto LAB_081226b4;
  case 0x1b:
    iVar14 = base[uVar27 >> 0x17].tt_;
    if (iVar14 == 0) {
      res = 1;
    }
    else if (iVar14 == 1) {
      res = (int)(base[uVar27 >> 0x17].value_.gc == (GCObject *)0x0);
    }
    else {
      res = 0;
    }
    (pTVar6->value_).b = res;
    pTVar6->tt_ = 1;
    pIVar26 = (pCVar34->u).l.savedpc;
    goto LAB_08122070;
  case 0x1c:
    luaV_objlen(L,pTVar6,base + (uVar27 >> 0x17));
    base = (pCVar34->u).l.base;
    pIVar26 = (pCVar34->u).l.savedpc;
    goto LAB_08122070;
  case 0x1d:
    uVar29 = (uVar27 << 9) >> 0x17;
    L->top = base + uVar29 + 1;
    luaV_concat(L,(uVar29 - (uVar27 >> 0x17)) + 1);
    pTVar19 = (pCVar34->u).l.base;
    pTVar25 = pTVar19 + (uVar27 >> 0x17);
    pTVar19 = pTVar19 + uVar20;
    iVar14 = L->l_G->GCdebt;
    iVar21 = pTVar25->tt_;
    pTVar19->value_ = pTVar25->value_;
    pTVar19->tt_ = iVar21;
    if (iVar14 < 1) {
      pTVar19 = pCVar34->top;
    }
    else {
      if (pTVar25 <= pTVar19) {
        pTVar25 = pTVar19 + 1;
      }
      L->top = pTVar25;
      luaC_step(L);
      pTVar19 = pCVar34->top;
      L->top = pTVar19;
    }
    base = (pCVar34->u).l.base;
    L->top = pTVar19;
    pIVar26 = (pCVar34->u).l.savedpc;
    goto LAB_08122070;
  case 0x1e:
    if (uVar20 != 0) {
      luaF_close(L,(pCVar34->u).l.base + uVar20 + 0x1fffffff);
    }
    pIVar26 = (pCVar34->u).l.savedpc + ((uVar27 >> 0xe) - 0x1ffff);
    (pCVar34->u).l.savedpc = pIVar26;
    goto LAB_08122070;
  case 0x1f:
    uVar29 = uVar27 >> 0x17;
    uVar27 = uVar27 >> 0xe;
    if ((uVar29 & 0x100) == 0) {
      rb_2 = base + uVar29;
    }
    else {
      rb_2 = (TValue *)(iVar13 + (uVar29 & 0xfffffeff) * 8);
    }
    if ((uVar27 & 0x100) == 0) {
      rc_1 = base + (uVar27 & 0x1ff);
    }
    else {
      rc_1 = (TValue *)(iVar13 + (uVar27 & 0xff) * 8);
    }
    uVar27 = luaV_equalobj(L,rb_2,rc_1);
    pIVar26 = (pCVar34->u).l.savedpc;
    if (uVar27 == uVar20) goto LAB_081224d8;
    goto LAB_08122484;
  case 0x20:
    uVar29 = uVar27 >> 0x17;
    uVar27 = uVar27 >> 0xe;
    if ((uVar29 & 0x100) == 0) {
      pTVar6 = base + uVar29;
    }
    else {
      pTVar6 = (TValue *)(iVar13 + (uVar29 & 0xfffffeff) * 8);
    }
    if ((uVar27 & 0x100) == 0) {
      pTVar7 = base + (uVar27 & 0x1ff);
    }
    else {
      pTVar7 = (TValue *)(iVar13 + (uVar27 & 0xff) * 8);
    }
    uVar27 = luaV_lessthan(L,pTVar6,pTVar7);
    pIVar26 = (pCVar34->u).l.savedpc;
    goto joined_r0x081224d4;
  case 0x21:
    uVar29 = uVar27 >> 0x17;
    uVar27 = uVar27 >> 0xe;
    if ((uVar29 & 0x100) == 0) {
      pTVar6 = base + uVar29;
    }
    else {
      pTVar6 = (TValue *)(iVar13 + (uVar29 & 0xfffffeff) * 8);
    }
    if ((uVar27 & 0x100) == 0) {
      pTVar7 = base + (uVar27 & 0x1ff);
    }
    else {
      pTVar7 = (TValue *)(iVar13 + (uVar27 & 0xff) * 8);
    }
    uVar27 = luaV_lessequal(L,pTVar6,pTVar7);
    pIVar26 = (pCVar34->u).l.savedpc;
joined_r0x081224d4:
    if (uVar27 == uVar20) {
LAB_081224d8:
      uVar20 = *pIVar26;
      uVar27 = (uVar20 << 0x12) >> 0x18;
      if (uVar27 != 0) {
        luaF_close(L,(pCVar34->u).l.base + uVar27 + 0x1fffffff);
        pIVar26 = (pCVar34->u).l.savedpc;
      }
      pIVar26 = pIVar26 + (uVar20 >> 0xe) + 0x3ffe0002;
      (pCVar34->u).l.savedpc = pIVar26;
    }
    else {
LAB_08122484:
      pIVar26 = pIVar26 + 1;
      (pCVar34->u).l.savedpc = pIVar26;
    }
    base = (pCVar34->u).l.base;
    goto LAB_08122070;
  case 0x22:
    iVar14 = pTVar6->tt_;
    if ((uVar27 << 9) >> 0x17 == 0) {
      if (iVar14 != 0) {
        if (iVar14 == 1) {
          pGVar10 = (pTVar6->value_).gc;
joined_r0x08123abc:
          if (pGVar10 == (GCObject *)0x0) goto LAB_081223c0;
        }
        goto LAB_081228f8;
      }
    }
    else {
      if (iVar14 == 0) goto LAB_081228f8;
      if (iVar14 == 1) {
        pGVar10 = (pTVar6->value_).gc;
        goto joined_r0x08123abc;
      }
    }
LAB_081223c0:
    pIVar26 = (pCVar34->u).l.savedpc;
    uVar20 = *pIVar26;
    uVar27 = (uVar20 << 0x12) >> 0x18;
    if (uVar27 != 0) {
      luaF_close(L,(pCVar34->u).l.base + uVar27 + 0x1fffffff);
      pIVar26 = (pCVar34->u).l.savedpc;
    }
    pIVar26 = pIVar26 + (uVar20 >> 0xe) + 0x3ffe0002;
    (pCVar34->u).l.savedpc = pIVar26;
    goto LAB_08122070;
  case 0x23:
    pTVar19 = base + (uVar27 >> 0x17);
    iVar14 = pTVar19->tt_;
    if ((uVar27 << 9) >> 0x17 == 0) {
      if ((iVar14 == 0) || ((iVar14 == 1 && ((pTVar19->value_).gc == (GCObject *)0x0))))
      goto LAB_081223b8;
    }
    else if ((iVar14 != 0) && ((iVar14 != 1 || ((pTVar19->value_).gc != (GCObject *)0x0)))) {
LAB_081223b8:
      iVar14 = pTVar19->tt_;
      pTVar6->value_ = pTVar19->value_;
      pTVar6->tt_ = iVar14;
      goto LAB_081223c0;
    }
LAB_081228f8:
    pIVar26 = (Instruction *)((pCVar34->u).c.old_errfunc + 4);
    (pCVar34->u).l.savedpc = pIVar26;
    goto LAB_08122070;
  case 0x24:
    iVar14 = ((uVar27 << 9) >> 0x17) - 1;
    if (uVar27 >> 0x17 != 0) {
      L->top = pTVar6 + (uVar27 >> 0x17);
    }
    iVar21 = luaD_precall(L,pTVar6,iVar14);
    if (iVar21 != 0) {
      if (iVar14 == -1) goto LAB_0812237c;
      goto LAB_08122434;
    }
    pCVar34 = L->ci;
    pCVar34->callstatus = pCVar34->callstatus | 8;
    goto LAB_08122038;
  case 0x25:
    if (uVar27 >> 0x17 != 0) {
      L->top = pTVar6 + (uVar27 >> 0x17);
    }
    iVar14 = luaD_precall(L,pTVar6,-1);
    if (iVar14 != 0) goto LAB_0812237c;
    pCVar22 = L->ci;
    pTVar19 = pCVar22->func;
    pCVar34 = pCVar22->previous;
    pTVar25 = pCVar34->func;
    pTVar30 = (pCVar22->u).l.base + *(byte *)(*(int *)((pTVar19->value_).f + 0xc) + 6);
    if (0 < *(int *)(*(int *)(p_Var12 + 0xc) + 0x1c)) {
      luaF_close(L,(pCVar34->u).l.base);
    }
    if (pTVar19 < pTVar30) {
      iVar13 = 0;
      do {
        iVar21 = iVar13 + 1;
        iVar14 = pTVar19[iVar13].tt_;
        pTVar25[iVar13].value_ = pTVar19[iVar13].value_;
        pTVar25[iVar13].tt_ = iVar14;
        iVar13 = iVar21;
      } while (iVar21 != ((int)&pTVar30->value_ + ~(uint)pTVar19 >> 3) + 1);
    }
    (pCVar34->u).l.base = (StkId)((int)pTVar25 + ((int)(pCVar22->u).l.base - (int)pTVar19));
    pTVar19 = (StkId)((int)L->top + ((int)pTVar25 - (int)pTVar19));
    L->top = pTVar19;
    bVar1 = pCVar34->callstatus;
    pCVar34->top = pTVar19;
    (pCVar34->u).l.savedpc = (pCVar22->u).l.savedpc;
    pCVar34->callstatus = bVar1 | 0x20;
    L->ci = pCVar34;
    goto LAB_08122038;
  case 0x26:
    goto switchD_081220c4_caseD_26;
  case 0x27:
    if (pTVar6->tt_ == 0x13) {
      iVar14 = (int)&((pTVar6->value_).gc)->next + pTVar6[2].value_.b;
      if (pTVar6[2].value_.b < 1) {
        bVar36 = pTVar6[1].value_.b <= iVar14;
      }
      else if (pTVar6[1].value_.b < iVar14) {
        bVar36 = false;
      }
      else {
        bVar36 = true;
      }
      if (!bVar36) goto switchD_081220c4_caseD_2e;
      (pCVar34->u).l.savedpc = (pCVar34->u).l.savedpc + (uVar27 >> 0xe) + 0x3ffe0001;
      (pTVar6->value_).b = iVar14;
      pTVar6->tt_ = 0x13;
      pTVar6[3].value_.b = iVar14;
      pTVar6[3].tt_ = 0x13;
      pIVar26 = (pCVar34->u).l.savedpc;
      goto LAB_08122070;
    }
    fVar38 = pTVar6[2].value_.n;
    fVar39 = fVar38 + (pTVar6->value_).n;
    if (fVar38 == 0.0 || fVar38 < 0.0 != NAN(fVar38)) {
      bVar36 = !NAN(fVar39) && !NAN(pTVar6[1].value_.n);
    }
    else {
      bVar36 = true;
    }
    if (bVar36) {
      (pCVar34->u).l.savedpc = (pCVar34->u).l.savedpc + (uVar27 >> 0xe) + 0x3ffe0001;
      (pTVar6->value_).n = fVar39;
      pTVar6->tt_ = 3;
      pTVar6[3].value_.n = fVar39;
      pTVar6[3].tt_ = 3;
      pIVar26 = (pCVar34->u).l.savedpc;
      goto LAB_08122070;
    }
    goto switchD_081220c4_caseD_2e;
  case 0x28:
    if ((pTVar6->tt_ == 0x13) && (pTVar6[2].tt_ == 0x13)) {
      uVar29 = pTVar6[2].value_.b;
      pTVar19 = pTVar6 + 1;
      uVar20 = uVar29 >> 0x1f;
      do {
        uVar17 = pTVar19->tt_;
        if (uVar17 == 3) {
          fVar39 = (pTVar19->value_).n;
          fVar38 = floorf(fVar39);
          if (fVar39 == fVar38) {
            uVar20 = 0;
          }
          if (uVar20 != 0) {
            fVar38 = fVar38 + 1.0;
          }
          if ((fVar38 < -2.147484e+09 == NAN(fVar38)) && (fVar38 < 2.147484e+09)) {
            ilimit = (lua_Integer)fVar38;
            goto LAB_08123e88;
          }
          break;
        }
        if (uVar17 == 0x13) {
          ilimit = (pTVar19->value_).i;
          goto LAB_08123e88;
        }
        if ((uVar17 & 0xf) != 4) break;
        sVar5 = luaO_str2num((char *)((pTVar19->value_).f + 0x18),&v);
        pVVar15 = &pTVar19->value_;
        pTVar19 = &v;
      } while (sVar5 == *(int *)(pVVar15->f + 0xc) + 1U);
      uVar20 = pTVar6[1].tt_;
      if (uVar20 == 3) {
        n_1 = pTVar6[1].value_.n;
LAB_081243fc:
        if (n_1 == 0.0 || n_1 < 0.0 != NAN(n_1)) goto LAB_08124580;
LAB_08124408:
        ilimit = 0x7fffffff;
        if (-1 < (int)uVar29) goto LAB_08123e88;
        initv = 0;
      }
      else {
        if (uVar20 == 0x13) {
          n_1 = (lua_Number)(longlong)pTVar6[1].value_.b;
          goto LAB_081243fc;
        }
        uVar20 = uVar20 & 0xf;
        if (uVar20 != 4) goto LAB_08123b08;
        sVar5 = luaO_str2num((char *)(pTVar6[1].value_.f + 0x18),&v);
        if (sVar5 != *(int *)(pTVar6[1].value_.f + 0xc) + 1U) goto LAB_08122214;
        VVar23 = v.value_;
        if (v.tt_ == 0x13) {
          VVar23.n = (float)(longlong)v.value_.b;
        }
        if (VVar23.n != 0.0 && VVar23.n < 0.0 == NAN(VVar23.n)) goto LAB_08124408;
LAB_08124580:
        ilimit = -0x80000000;
        if ((int)uVar29 < 0) {
LAB_08123e88:
          initv = (pTVar6->value_).i;
        }
        else {
          initv = 0;
        }
      }
      iVar14 = pTVar6[2].value_.b;
      pTVar6[1].value_.i = ilimit;
      pTVar6->tt_ = 0x13;
      pTVar6[1].tt_ = 0x13;
      (pTVar6->value_).gc = (GCObject *)(initv - iVar14);
    }
    else {
LAB_08122214:
      uVar20 = pTVar6[1].tt_;
      if (uVar20 == 3) {
        nlimit = pTVar6[1].value_.n;
      }
      else if (uVar20 == 0x13) {
        nlimit = (lua_Number)(longlong)pTVar6[1].value_.b;
      }
      else {
        uVar20 = uVar20 & 0xf;
LAB_08123b08:
        if ((uVar20 != 4) ||
           (sVar5 = luaO_str2num((char *)(pTVar6[1].value_.f + 0x18),&v),
           sVar5 != *(int *)(pTVar6[1].value_.f + 0xc) + 1U)) {
                    /* WARNING: Subroutine does not return */
          luaG_runerror(L,"\'for\' limit must be a number");
        }
        nlimit = v.value_.n;
        if (v.tt_ == 0x13) {
          nlimit = (lua_Number)(longlong)v.value_.b;
        }
      }
      uVar20 = pTVar6[2].tt_;
      pTVar6[1].value_.n = nlimit;
      pTVar6[1].tt_ = 3;
      if (uVar20 == 3) {
        nstep = pTVar6[2].value_.n;
      }
      else if (uVar20 == 0x13) {
        nstep = (lua_Number)(longlong)pTVar6[2].value_.b;
      }
      else {
        if (((uVar20 & 0xf) != 4) ||
           (sVar5 = luaO_str2num((char *)(pTVar6[2].value_.f + 0x18),&v),
           sVar5 != *(int *)(pTVar6[2].value_.f + 0xc) + 1U)) {
                    /* WARNING: Subroutine does not return */
          luaG_runerror(L,"\'for\' step must be a number");
        }
        nstep = v.value_.n;
        if (v.tt_ == 0x13) {
          nstep = (lua_Number)(longlong)v.value_.b;
        }
      }
      uVar20 = pTVar6->tt_;
      pTVar6[2].value_.n = nstep;
      pTVar6[2].tt_ = 3;
      if (uVar20 == 3) {
        ninit = (pTVar6->value_).n;
      }
      else if (uVar20 == 0x13) {
        ninit = (lua_Number)(longlong)(pTVar6->value_).b;
      }
      else {
        if (((uVar20 & 0xf) != 4) ||
           (sVar5 = luaO_str2num((char *)((pTVar6->value_).f + 0x18),&v),
           sVar5 != *(int *)((pTVar6->value_).f + 0xc) + 1U)) {
                    /* WARNING: Subroutine does not return */
          luaG_runerror(L,"\'for\' initial value must be a number");
        }
        ninit = v.value_.n;
        if (v.tt_ == 0x13) {
          ninit = (lua_Number)(longlong)v.value_.b;
        }
      }
      (pTVar6->value_).n = ninit - nstep;
      pTVar6->tt_ = 3;
    }
    pIVar26 = (pCVar34->u).l.savedpc + (uVar27 >> 0xe) + 0x3ffe0001;
    (pCVar34->u).l.savedpc = pIVar26;
    goto LAB_08122070;
  case 0x29:
    iVar14 = pTVar6->tt_;
    VVar23 = pTVar6[1].value_;
    iVar21 = pTVar6[1].tt_;
    VVar31 = pTVar6[2].value_;
    iVar32 = pTVar6[2].tt_;
    pTVar6[3].value_ = pTVar6->value_;
    pTVar6[3].tt_ = iVar14;
    pTVar6[4].value_ = VVar23;
    pTVar6[4].tt_ = iVar21;
    pTVar6[5].value_ = VVar31;
    pTVar6[5].tt_ = iVar32;
    L->top = pTVar6 + 6;
    luaD_call(L,pTVar6 + 3,(uVar27 << 9) >> 0x17,1);
    base = (pCVar34->u).l.base;
    L->top = pCVar34->top;
    pIVar26 = (pCVar34->u).l.savedpc;
    (pCVar34->u).l.savedpc = pIVar26 + 1;
    uVar27 = *pIVar26;
    pTVar6 = base + ((uVar27 << 0x12) >> 0x18);
  case 0x2a:
    if (pTVar6[1].tt_ == 0) goto switchD_081220c4_caseD_2e;
    iVar14 = pTVar6[1].tt_;
    pTVar6->value_ = pTVar6[1].value_;
    pTVar6->tt_ = iVar14;
    pIVar26 = (pCVar34->u).l.savedpc + (uVar27 >> 0xe) + 0x3ffe0001;
    (pCVar34->u).l.savedpc = pIVar26;
    goto LAB_08122070;
  case 0x2b:
    goto switchD_081220c4_caseD_2b;
  case 0x2c:
    pPVar33 = *(Proto **)(*(int *)(*(int *)(p_Var12 + 0xc) + 0x34) + (uVar27 >> 0xe) * 4);
    iVar14 = pPVar33->sizeupvalues;
    pLVar35 = pPVar33->cache;
    if (pLVar35 == (LClosure *)0x0) {
      pUVar28 = pPVar33->upvalues;
      local_58 = luaF_newLclosure(L,iVar14);
      local_58->p = pPVar33;
      (pTVar6->value_).gc = (GCObject *)local_58;
      pTVar6->tt_ = 0x46;
      if (0 < iVar14) {
LAB_08123558:
        ppUVar18 = local_58->upvals;
        iVar21 = 0;
        do {
          if (pUVar28->instack == '\0') {
            pUVar4 = *(UpVal **)(p_Var12 + (uint)pUVar28->idx * 4 + 0x10);
            *ppUVar18 = pUVar4;
          }
          else {
            pUVar4 = luaF_findupval(L,base + pUVar28->idx);
            *ppUVar18 = pUVar4;
          }
          iVar21 = iVar21 + 1;
          pUVar28 = pUVar28 + 1;
          ppUVar18 = ppUVar18 + 1;
          pUVar4->refcount = pUVar4->refcount + 1;
        } while (iVar21 < iVar14);
      }
      if ((pPVar33->marked & 4) == 0) {
        pPVar33->cache = local_58;
      }
    }
    else {
      pUVar28 = pPVar33->upvalues;
      if (0 < iVar14) {
        ppPVar3 = &pLVar35->p;
        iVar21 = 0;
        pUVar16 = pUVar28;
        do {
          ppPVar3 = ppPVar3 + 1;
          if (pUVar16->instack == '\0') {
            pGVar10 = **(GCObject ***)(p_Var12 + (uint)pUVar16->idx * 4 + 0x10);
          }
          else {
            pGVar10 = (GCObject *)(base + pUVar16->idx);
          }
          if ((*ppPVar3)->next != pGVar10) {
            local_58 = luaF_newLclosure(L,iVar14);
            local_58->p = pPVar33;
            (pTVar6->value_).gc = (GCObject *)local_58;
            pTVar6->tt_ = 0x46;
            goto LAB_08123558;
          }
          iVar21 = iVar21 + 1;
          pUVar16 = pUVar16 + 1;
        } while (iVar14 != iVar21);
      }
      (pTVar6->value_).f = (lua_CFunction)pLVar35;
      pTVar6->tt_ = 0x46;
    }
LAB_081227bc:
    if (0 < L->l_G->GCdebt) {
      L->top = pTVar6 + 1;
      luaC_step(L);
LAB_08122434:
      L->top = pCVar34->top;
    }
    goto LAB_0812237c;
  case 0x2d:
    iVar14 = (uVar27 >> 0x17) - 1;
    iVar21 = ((int)base - (int)pCVar34->func >> 3) - (uint)*(byte *)(*(int *)(p_Var12 + 0xc) + 6);
    iVar32 = iVar21 + -1;
    if (iVar14 == -1) {
      if ((int)L->stack_last - (int)L->top >> 3 <= iVar32) {
        luaD_growstack(L,iVar32);
      }
      base = (pCVar34->u).l.base;
      pTVar6 = base + uVar20;
      L->top = pTVar6 + iVar32;
      iVar14 = iVar32;
    }
    if (0 < iVar14) {
      iVar9 = 0;
      pTVar25 = base + -iVar21;
      pTVar19 = pTVar6;
      do {
        if (iVar9 < iVar32) {
          pTVar6[iVar9] = pTVar25[1];
        }
        else {
          pTVar19->tt_ = 0;
        }
        pTVar25 = pTVar25 + 1;
        iVar9 = iVar9 + 1;
        pTVar19 = pTVar19 + 1;
      } while (iVar14 != iVar9);
    }
    goto switchD_081220c4_caseD_2e;
  }
  luaT_trybinTM(L,rb_15,rc_9,pTVar6,event);
LAB_0812237c:
  base = (pCVar34->u).l.base;
  pIVar26 = (pCVar34->u).l.savedpc;
  goto LAB_08122070;
switchD_081220c4_caseD_2b:
  uVar20 = uVar27 >> 0x17;
  uVar27 = (uVar27 << 9) >> 0x17;
  if (uVar20 == 0) {
    uVar20 = ((int)L->top - (int)pTVar6 >> 3) - 1;
  }
  if (uVar27 == 0) {
    pIVar26 = (pCVar34->u).l.savedpc;
    (pCVar34->u).l.savedpc = pIVar26 + 1;
    uVar27 = *pIVar26 >> 6;
  }
  pTVar24 = (Table *)(pTVar6->value_).gc;
  uVar29 = (uVar27 - 1) * 0x32;
  uVar27 = uVar20 + uVar29;
  if (pTVar24->sizearray < uVar27) {
    luaH_resizearray(L,pTVar24,uVar27);
  }
  if (0 < (int)uVar20) {
    val = pTVar6 + uVar20;
    do {
      luaH_setint(L,pTVar24,uVar27,val);
      if ((((val->tt_ & 0x40U) != 0) && ((pTVar24->marked & 4) != 0)) &&
         ((((val->value_).gc)->marked & 3) != 0)) {
        luaC_barrierback_(L,pTVar24);
      }
      uVar27 = uVar27 - 1;
      val = val + -1;
    } while (uVar27 != uVar29);
  }
  L->top = pCVar34->top;
  pIVar26 = (pCVar34->u).l.savedpc;
  goto LAB_08122070;
switchD_081220c4_caseD_26:
  if (uVar27 >> 0x17 != 0) {
    L->top = pTVar6 + (uVar27 >> 0x17) + 0x1fffffff;
  }
  if (0 < *(int *)(*(int *)(p_Var12 + 0xc) + 0x1c)) {
    luaF_close(L,base);
  }
  iVar13 = luaD_poscall(L,pTVar6);
  if ((pCVar34->callstatus & 8) == 0) {
    if (iVar2 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  pCVar34 = L->ci;
  if (iVar13 != 0) {
    L->top = pCVar34->top;
  }
  goto LAB_08122038;
}


