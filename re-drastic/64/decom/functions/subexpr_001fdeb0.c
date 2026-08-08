/*
 * Ghidra decompilation
 *
 * Function : subexpr
 * Address  : 001fdeb0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong subexpr(long param_1,undefined8 *param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined auStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  plVar8 = *(long **)(param_1 + 0x30);
  lVar7 = *(long *)(param_1 + 0x38);
  uVar1 = *(short *)(lVar7 + 0xc6) + 1;
  *(ushort *)(lVar7 + 0xc6) = uVar1;
  if (200 < uVar1) {
                    /* WARNING: Subroutine does not return */
    checklimit_part_0(plVar8,200,"C levels",lVar7,plVar8,0);
  }
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar2 == 0x7e) {
    uVar9 = 1;
LAB_001fdf28:
    uVar4 = *(undefined4 *)(param_1 + 4);
    luaX_next(param_1);
    subexpr(param_1,param_2,0xc);
    luaK_prefix(*(undefined8 *)(param_1 + 0x30),uVar9,param_2,uVar4);
  }
  else {
    if (iVar2 < 0x7f) {
      if (iVar2 == 0x23) {
        uVar9 = 3;
      }
      else {
        uVar9 = 0;
        if (iVar2 != 0x2d) {
LAB_001fe280:
          if (iVar2 != 0x7b) {
            if (iVar2 != 0x107) goto LAB_001fe334;
            *param_2 = 3;
            param_2[1] = 0xffffffffffffffff;
            goto LAB_001fe0c8;
          }
          constructor(param_1,param_2);
          goto LAB_001fdf58;
        }
      }
      goto LAB_001fdf28;
    }
    uVar9 = 2;
    if (iVar2 == 0x10f) goto LAB_001fdf28;
    if (iVar2 == 0x114) {
      *param_2 = 2;
      param_2[1] = 0xffffffffffffffff;
    }
    else if (iVar2 < 0x115) {
      if (iVar2 == 0x109) {
        luaX_next();
        body(param_1,param_2,0,*(undefined4 *)(param_1 + 4));
        goto LAB_001fdf58;
      }
      if (iVar2 < 0x10a) goto LAB_001fe280;
      if (iVar2 != 0x10e) goto LAB_001fe334;
      *param_2 = 1;
      param_2[1] = 0xffffffffffffffff;
    }
    else if (iVar2 == 0x123) {
      param_2[1] = 0xffffffffffffffff;
      uVar4 = *(undefined4 *)(param_1 + 0x18);
      *(undefined4 *)param_2 = 6;
      *(undefined4 *)((long)param_2 + 4) = uVar4;
    }
    else if (iVar2 < 0x124) {
      if (iVar2 == 0x119) {
        if (*(char *)(*plVar8 + 0xb) == '\0') {
                    /* WARNING: Subroutine does not return */
          luaX_syntaxerror(param_1,"cannot use \'...\' outside a vararg function");
        }
        uVar4 = luaK_codeABC(plVar8,0x2d,0,1,0);
        *(undefined4 *)param_2 = 0xe;
        *(undefined4 *)((long)param_2 + 4) = uVar4;
        param_2[1] = 0xffffffffffffffff;
      }
      else {
        if (iVar2 != 0x122) goto LAB_001fe334;
        *(undefined4 *)param_2 = 5;
        param_2[1] = 0xffffffffffffffff;
        *(undefined4 *)((long)param_2 + 4) = *(undefined4 *)(param_1 + 0x18);
      }
    }
    else {
      if (iVar2 != 0x125) {
LAB_001fe334:
        suffixedexp(param_1,param_2);
        goto LAB_001fdf58;
      }
      uVar4 = luaK_stringK(plVar8,*(undefined8 *)(param_1 + 0x18));
      *(undefined4 *)param_2 = 4;
      *(undefined4 *)((long)param_2 + 4) = uVar4;
      param_2[1] = 0xffffffffffffffff;
    }
LAB_001fe0c8:
    luaX_next(param_1);
  }
LAB_001fdf58:
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar2 == 0x7e) {
    uVar3 = 5;
    uVar10 = 9;
  }
  else if (iVar2 < 0x7f) {
    if (iVar2 == 0x2f) {
      uVar3 = 0xb;
      uVar10 = 5;
    }
    else if (iVar2 < 0x30) {
      if (iVar2 == 0x2a) {
        uVar3 = 0xb;
        uVar10 = 2;
      }
      else if (iVar2 < 0x2b) {
        if (iVar2 == 0x25) {
          uVar3 = 0xb;
          uVar10 = 3;
        }
        else {
          if (iVar2 != 0x26) goto LAB_001fe23c;
          uVar3 = 6;
          uVar10 = 7;
        }
      }
      else if (iVar2 == 0x2b) {
        uVar3 = 10;
        uVar10 = 0;
      }
      else {
        if (iVar2 != 0x2d) goto LAB_001fe23c;
        uVar3 = 10;
        uVar10 = 1;
      }
    }
    else if (iVar2 == 0x5e) {
      uVar3 = 0xe;
      uVar10 = 4;
    }
    else if (iVar2 < 0x5f) {
      if (iVar2 == 0x3c) {
        uVar3 = 3;
        uVar10 = 0xe;
      }
      else {
        if (iVar2 != 0x3e) goto LAB_001fe23c;
        uVar3 = 3;
        uVar10 = 0x11;
      }
    }
    else {
      uVar10 = 8;
      uVar3 = 4;
      if (iVar2 != 0x7c) goto LAB_001fe23c;
    }
  }
  else if (iVar2 == 0x11b) {
    uVar3 = 3;
    uVar10 = 0x12;
  }
  else if (iVar2 < 0x11c) {
    if (iVar2 == 0x117) {
      uVar3 = 0xb;
      uVar10 = 6;
    }
    else if (iVar2 < 0x118) {
      if (iVar2 == 0x101) {
        uVar3 = 2;
        uVar10 = 0x13;
      }
      else {
        if (iVar2 != 0x110) goto LAB_001fe23c;
        uVar3 = 1;
        uVar10 = 0x14;
      }
    }
    else if (iVar2 == 0x118) {
      uVar3 = 9;
      uVar10 = 0xc;
    }
    else {
      if (iVar2 != 0x11a) goto LAB_001fe23c;
      uVar3 = 3;
      uVar10 = 0xd;
    }
  }
  else if (iVar2 == 0x11e) {
    uVar3 = 7;
    uVar10 = 10;
  }
  else if (iVar2 < 0x11f) {
    if (iVar2 == 0x11c) {
      uVar3 = 3;
      uVar10 = 0xf;
    }
    else {
      if (iVar2 != 0x11d) goto LAB_001fe23c;
      uVar3 = 3;
      uVar10 = 0x10;
    }
  }
  else {
    if (iVar2 != 0x11f) {
LAB_001fe23c:
      uVar10 = 0x15;
      goto LAB_001fe018;
    }
    uVar3 = 7;
    uVar10 = 0xb;
  }
  while (param_3 < (int)uVar3) {
    uVar4 = *(undefined4 *)(param_1 + 4);
    luaX_next(param_1);
    luaK_infix(*(undefined8 *)(param_1 + 0x30),uVar10,param_2);
    uVar5 = subexpr(param_1,auStack_18,(&UNK_0022a0c1)[uVar10 * 2]);
    luaK_posfix(*(undefined8 *)(param_1 + 0x30),uVar10,param_2,auStack_18,uVar4);
    if ((int)uVar5 == 0x15) {
      uVar10 = uVar5 & 0xffffffff;
      break;
    }
    uVar10 = uVar5 & 0xffffffff;
    uVar3 = (uint)(byte)(&priority)[(uVar5 & 0xffffffff) * 2];
  }
LAB_001fe018:
  lVar6 = *(long *)(param_1 + 0x38);
  lVar7 = local_8 - ___stack_chk_guard;
  iVar2 = *(ushort *)(lVar6 + 0xc6) - 1;
  *(short *)(lVar6 + 0xc6) = (short)iVar2;
  if (lVar7 == 0) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2,lVar6,lVar7,0);
}


