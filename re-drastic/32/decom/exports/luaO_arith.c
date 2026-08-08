/*
 * Ghidra decompilation
 *
 * Function : luaO_arith
 * Address  : 081189f0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void luaO_arith(lua_State *L,int op,TValue *p1,TValue *p2,TValue *res)

{
  uint uVar1;
  lua_Number lVar2;
  int iVar3;
  lua_Integer lVar4;
  TValue *io;
  TValue *io_2;
  TValue *io_1;
  lua_Number m;
  GCObject *pGVar5;
  lua_Number n1;
  lua_Number n2;
  int local_2c;
  
  local_2c = __stack_chk_guard;
  if ((uint)op < 0xe) {
    uVar1 = 1 << (op & 0xffU);
    if ((uVar1 & 0x2f80) == 0) {
      if ((uVar1 & 0x30) == 0) goto LAB_08118a50;
      if (p1->tt_ == 3) goto LAB_08118a64;
      goto LAB_08118b20;
    }
    if (p1->tt_ == 0x13) {
      n1 = (p1->value_).n;
LAB_08118ae4:
      if (p2->tt_ == 0x13) {
        n2 = (p2->value_).n;
      }
      else {
        iVar3 = luaV_tointeger_(p2,(lua_Integer *)&n2);
        if (iVar3 == 0) goto LAB_08118b34;
      }
      lVar4 = intarith(L,op,(lua_Integer)n1,(lua_Integer)n2);
      (res->value_).i = lVar4;
      res->tt_ = 0x13;
      goto LAB_08118b50;
    }
    iVar3 = luaV_tointeger_(p1,(lua_Integer *)&n1);
    if (iVar3 != 0) goto LAB_08118ae4;
LAB_08118b34:
    luaT_trybinTM(L,p1,p2,res,op + TM_ADD);
  }
  else {
LAB_08118a50:
    if (p1->tt_ == 0x13) {
      if (p2->tt_ == 0x13) {
        lVar4 = intarith(L,op,(p1->value_).i,(p2->value_).i);
        (res->value_).i = lVar4;
        res->tt_ = 0x13;
        goto LAB_08118b50;
      }
LAB_08118b20:
      iVar3 = luaV_tonumber_(p1,&n1);
      if (iVar3 == 0) goto LAB_08118b34;
    }
    else {
      if (p1->tt_ != 3) goto LAB_08118b20;
LAB_08118a64:
      n1 = (p1->value_).n;
    }
    if (p2->tt_ == 3) {
      n2 = (p2->value_).n;
    }
    else {
      iVar3 = luaV_tonumber_(p2,&n2);
      if (iVar3 == 0) goto LAB_08118b34;
    }
    lVar2 = n2;
    switch(op) {
    case 0:
      pGVar5 = (GCObject *)(n1 + n2);
      break;
    case 1:
      pGVar5 = (GCObject *)(n1 - n2);
      break;
    case 2:
      pGVar5 = (GCObject *)(n1 * n2);
      break;
    case 3:
      pGVar5 = (GCObject *)fmodf(n1,n2);
      if ((float)pGVar5 * lVar2 < 0.0) {
        pGVar5 = (GCObject *)((float)pGVar5 + lVar2);
      }
      break;
    case 4:
      pGVar5 = (GCObject *)powf(n1,n2);
      break;
    case 5:
      pGVar5 = (GCObject *)(n1 / n2);
      break;
    case 6:
      pGVar5 = (GCObject *)floorf(n1 / n2);
      break;
    default:
      pGVar5 = (GCObject *)0x0;
      break;
    case 0xc:
      pGVar5 = (GCObject *)-n1;
    }
    (res->value_).gc = pGVar5;
    res->tt_ = 3;
  }
LAB_08118b50:
  if (local_2c == __stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


