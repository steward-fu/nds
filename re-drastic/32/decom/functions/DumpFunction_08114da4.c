/*
 * Ghidra decompilation
 *
 * Function : DumpFunction
 * Address  : 08114da4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void DumpFunction(Proto *f,TString *psource,DumpState *D)

{
  Proto **ppPVar1;
  int iVar2;
  Instruction *pIVar3;
  int *piVar4;
  uint uVar5;
  Upvaldesc *pUVar6;
  int iVar7;
  int iVar8;
  lua_Writer p_Var9;
  lua_Writer p_Var10;
  int n_3;
  int n_2;
  TValue *pTVar11;
  lua_Writer p_Var12;
  int n_1;
  TValue *pTVar13;
  TValue *o;
  int n;
  int local_60;
  int local_5c;
  lua_Writer local_58;
  undefined4 local_54;
  undefined4 local_50;
  lua_Writer local_4c;
  int local_48;
  lu_byte x_6;
  undefined3 uStack_43;
  lu_byte x;
  undefined3 uStack_3f;
  int local_3c;
  Value local_38;
  Value local_34;
  lu_byte x_2;
  undefined3 uStack_2f;
  int local_2c;
  
  local_2c = __stack_chk_guard;
  if ((D->strip == 0) && (f->source != psource)) {
    DumpString(f->source,D);
    iVar2 = D->status;
LAB_08114df8:
    local_5c = f->linedefined;
    if (iVar2 == 0) goto LAB_08114ee8;
LAB_08114e08:
    local_60 = f->lastlinedefined;
LAB_08114e10:
    _x_2 = f->sizecode;
    local_3c = f->sizek;
LAB_08114e20:
    iVar7 = local_3c;
    if (0 < local_3c) {
LAB_08114e28:
      iVar8 = 0;
      do {
        pTVar11 = f->k;
        pTVar13 = pTVar11 + iVar8;
        uVar5 = pTVar13->tt_ & 0x3f;
        _x = (lua_Writer)CONCAT31(uStack_3f,(char)uVar5);
        if (iVar2 == 0) {
          iVar2 = (*D->writer)(D->L,&x,1,D->data);
          uVar5 = pTVar13->tt_;
          D->status = iVar2;
          switch(uVar5 & 0x3f) {
          case 1:
            goto switchD_08114e54_caseD_1;
          case 3:
            goto switchD_08114e54_caseD_3;
          case 4:
          case 0x14:
            goto switchD_08114e54_caseD_4;
          case 0x13:
            local_38 = pTVar11[iVar8].value_;
            if (iVar2 == 0) {
              iVar2 = (*D->writer)(D->L,&local_38,4,D->data);
              D->status = iVar2;
            }
          }
        }
        else {
          switch(uVar5) {
          case 1:
switchD_08114e54_caseD_1:
            _x = (lua_Writer)CONCAT31(uStack_3f,(char)pTVar11[iVar8].value_.b);
            if (iVar2 == 0) {
              iVar2 = (*D->writer)(D->L,&x,1,D->data);
              D->status = iVar2;
            }
            break;
          case 3:
switchD_08114e54_caseD_3:
            local_34 = pTVar13->value_;
            if (iVar2 == 0) {
              iVar2 = (*D->writer)(D->L,&local_34,4,D->data);
              D->status = iVar2;
            }
            break;
          case 4:
          case 0x14:
switchD_08114e54_caseD_4:
            DumpString((TString *)pTVar11[iVar8].value_.gc,D);
            iVar2 = D->status;
            break;
          case 0x13:
            local_38 = pTVar11[iVar8].value_;
          }
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 != iVar7);
      goto LAB_0811501c;
    }
    p_Var12 = (lua_Writer)f->sizeupvalues;
LAB_0811502c:
    _x = p_Var12;
    if (0 < (int)p_Var12) {
LAB_08115034:
      p_Var9 = (lua_Writer)0x0;
      do {
        while( true ) {
          _x_6 = (lua_Writer)CONCAT31(uStack_43,f->upvalues[(int)p_Var9].instack);
          if (iVar2 == 0) break;
LAB_0811503c:
          p_Var9 = p_Var9 + 1;
          if (p_Var9 == p_Var12) goto LAB_081150b8;
        }
        iVar2 = (*D->writer)(D->L,&x_6,1,D->data);
        pUVar6 = f->upvalues;
        D->status = iVar2;
        _x_6 = (lua_Writer)CONCAT31(uStack_43,pUVar6[(int)p_Var9].idx);
        if (iVar2 != 0) goto LAB_0811503c;
        p_Var9 = p_Var9 + 1;
        iVar2 = (*D->writer)(D->L,&x_6,1,D->data);
        D->status = iVar2;
      } while (p_Var9 != p_Var12);
      goto LAB_081150b8;
    }
    p_Var9 = (lua_Writer)f->sizep;
    _x_6 = p_Var9;
  }
  else {
    iVar2 = D->status;
    _x_2 = _x_2 & 0xffffff00;
    if (iVar2 != 0) goto LAB_08114df8;
    iVar2 = (*D->writer)(D->L,&x_2,1,D->data);
    local_5c = f->linedefined;
    D->status = iVar2;
    if (iVar2 != 0) goto LAB_08114e08;
LAB_08114ee8:
    iVar2 = (*D->writer)(D->L,&local_5c,4,D->data);
    local_60 = f->lastlinedefined;
    D->status = iVar2;
    if (iVar2 != 0) {
LAB_0811546c:
      _x_2 = f->sizecode;
      goto LAB_08115474;
    }
    iVar2 = (*D->writer)(D->L,&local_60,4,D->data);
    D->status = iVar2;
    if (iVar2 != 0) goto LAB_08114e10;
    x_2 = f->numparams;
    iVar2 = (*D->writer)(D->L,&x_2,1,D->data);
    D->status = iVar2;
    x_2 = f->is_vararg;
    if (iVar2 != 0) goto LAB_0811546c;
    iVar2 = (*D->writer)(D->L,&x_2,1,D->data);
    D->status = iVar2;
    _x_2 = CONCAT31(uStack_2f,f->maxstacksize);
    if (iVar2 != 0) goto LAB_08114e10;
    iVar2 = (*D->writer)(D->L,&x_2,1,D->data);
    D->status = iVar2;
    _x_2 = f->sizecode;
    if (iVar2 != 0) {
LAB_08115474:
      local_3c = f->sizek;
      goto LAB_08114e20;
    }
    iVar2 = (*D->writer)(D->L,&x_2,4,D->data);
    pIVar3 = f->code;
    D->status = iVar2;
    if (iVar2 != 0) goto LAB_08115474;
    iVar2 = (*D->writer)(D->L,pIVar3,f->sizecode << 2,D->data);
    D->status = iVar2;
    iVar7 = f->sizek;
    local_3c = iVar7;
    if (iVar2 != 0) goto LAB_08114e20;
    iVar2 = (*D->writer)(D->L,&local_3c,4,D->data);
    D->status = iVar2;
    if (0 < iVar7) goto LAB_08114e28;
LAB_0811501c:
    p_Var12 = (lua_Writer)f->sizeupvalues;
    if (iVar2 != 0) goto LAB_0811502c;
    _x = p_Var12;
    iVar2 = (*D->writer)(D->L,&x,4,D->data);
    D->status = iVar2;
    if (0 < (int)p_Var12) goto LAB_08115034;
LAB_081150b8:
    p_Var9 = (lua_Writer)f->sizep;
    _x_6 = p_Var9;
    if (iVar2 == 0) {
      iVar2 = (*D->writer)(D->L,&x_6,4,D->data);
      D->status = iVar2;
    }
  }
  if (0 < (int)p_Var9) {
    p_Var10 = (lua_Writer)0x0;
    do {
      ppPVar1 = f->p + (int)p_Var10;
      p_Var10 = p_Var10 + 1;
      DumpFunction(*ppPVar1,f->source,D);
    } while (p_Var10 != p_Var9);
    iVar2 = D->status;
  }
  iVar7 = D->strip;
  if (iVar7 == 0) {
    n_3 = f->sizelineinfo;
  }
  else {
    n_3 = 0;
  }
  local_48 = n_3;
  if (iVar2 == 0) {
    p_Var9 = D->writer;
    iVar2 = (*p_Var9)(D->L,&local_48,4,D->data);
    piVar4 = f->lineinfo;
    D->status = iVar2;
    if (iVar2 != 0) {
      iVar7 = D->strip;
      goto LAB_08115114;
    }
    iVar2 = (*D->writer)(D->L,piVar4,n_3 << 2,D->data);
    D->status = iVar2;
    if (D->strip == 0) {
      p_Var12 = (lua_Writer)f->sizelocvars;
      local_4c = p_Var12;
      if (iVar2 == 0) goto LAB_081153fc;
    }
    else {
      if (iVar2 == 0) {
        p_Var12 = (lua_Writer)0x0;
      }
      local_4c = (lua_Writer)0x0;
      if (iVar2 != 0) goto LAB_08115218;
LAB_081153fc:
      iVar2 = (*D->writer)(D->L,&local_4c,4,D->data);
      D->status = iVar2;
    }
  }
  else {
LAB_08115114:
    if (iVar7 != 0) goto LAB_08115218;
    p_Var12 = (lua_Writer)f->sizelocvars;
    local_4c = p_Var12;
  }
  if (0 < (int)p_Var12) {
    iVar7 = 0;
    p_Var9 = (lua_Writer)0x0;
    do {
      while( true ) {
        DumpString(*(TString **)((int)&f->locvars->varname + iVar7),D);
        iVar2 = D->status;
        local_54 = *(undefined4 *)((int)&f->locvars->startpc + iVar7);
        if (iVar2 == 0) break;
        local_50 = *(undefined4 *)((int)&f->locvars->endpc + iVar7);
LAB_08115140:
        p_Var9 = p_Var9 + 1;
        iVar7 = iVar7 + 0xc;
        if (p_Var9 == p_Var12) goto LAB_081151d4;
      }
      iVar2 = (*D->writer)(D->L,&local_54,4,D->data);
      local_50 = *(undefined4 *)((int)&f->locvars->endpc + iVar7);
      D->status = iVar2;
      if (iVar2 != 0) goto LAB_08115140;
      p_Var9 = p_Var9 + 1;
      iVar7 = iVar7 + 0xc;
      iVar2 = (*D->writer)(D->L,&local_50,4,D->data);
      D->status = iVar2;
    } while (p_Var9 != p_Var12);
  }
LAB_081151d4:
  if (D->strip == 0) {
    p_Var9 = (lua_Writer)f->sizeupvalues;
    local_58 = p_Var9;
    if (iVar2 == 0) goto LAB_08115388;
  }
  else {
    if (iVar2 == 0) {
      p_Var9 = (lua_Writer)0x0;
    }
    local_58 = (lua_Writer)0x0;
    if (iVar2 != 0) goto LAB_08115218;
LAB_08115388:
    iVar2 = (*D->writer)(D->L,&local_58,4,D->data);
    D->status = iVar2;
  }
  if (0 < (int)p_Var9) {
    p_Var12 = (lua_Writer)0x0;
    do {
      pUVar6 = f->upvalues + (int)p_Var12;
      p_Var12 = p_Var12 + 1;
      DumpString(pUVar6->name,D);
    } while (p_Var12 != p_Var9);
  }
LAB_08115218:
  if (local_2c != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


