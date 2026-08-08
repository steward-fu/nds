/*
 * Ghidra decompilation
 *
 * Function : codeexpval
 * Address  : 00216dd0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void codeexpval(long *param_1,uint param_2,int *param_3,int *param_4,undefined4 param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  float local_38 [2];
  undefined4 local_30;
  float local_28 [2];
  int local_20;
  float local_18 [2];
  int local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((param_2 < 0x1b) && (param_3[2] == -1)) && (param_3[3] == -1)) {
    if (*param_3 == 5) {
      local_38[0] = (float)param_3[1];
      iVar3 = 3;
      local_30 = 3;
    }
    else {
      if (*param_3 != 6) goto LAB_00216e18;
      local_38[0] = (float)param_3[1];
      iVar3 = 0x13;
      local_30 = 0x13;
    }
    if ((param_4[2] == -1) && (param_4[3] == -1)) {
      uVar4 = param_2 - 0xd;
      if (*param_4 == 5) {
        fVar8 = (float)param_4[1];
        local_20 = 3;
        local_28[0] = fVar8;
        if (uVar4 < 7) {
          if ((4 < uVar4) || (uVar4 == 3)) {
LAB_00217020:
            if (fVar8 == 0.0) goto LAB_00216e18;
          }
        }
        else {
LAB_00217154:
          if ((uVar4 < 0xc) || (uVar4 == 0xd)) {
            if (iVar3 == 0x13) {
              local_18[0] = local_38[0];
            }
            else {
              iVar3 = luaV_tointeger_(local_38,local_18);
              if (iVar3 == 0) goto LAB_00216e18;
            }
            if ((local_20 != 0x13) && (iVar3 = luaV_tointeger_(local_28,local_18), iVar3 == 0))
            goto LAB_00216e18;
          }
        }
      }
      else {
        if (*param_4 != 6) goto LAB_00216e18;
        local_28[0] = (float)param_4[1];
        local_20 = 0x13;
        if (6 < uVar4) goto LAB_00217154;
        if ((4 < uVar4) || (uVar4 == 3)) {
          fVar8 = (float)(int)local_28[0];
          goto LAB_00217020;
        }
      }
      luaO_arith(*(undefined8 *)(param_1[2] + 0x38),uVar4,local_38,local_28,local_18);
      if (local_10 == 0x13) {
        *param_3 = 6;
        param_3[1] = (int)local_18[0];
        goto LAB_00216ef4;
      }
      if (local_18[0] != 0.0) {
        *param_3 = 5;
        param_3[1] = (int)local_18[0];
        goto LAB_00216ef4;
      }
    }
  }
LAB_00216e18:
  if (param_2 - 0x19 < 2 || param_2 == 0x1c) {
    iVar3 = luaK_exp2anyreg(param_1,param_3);
    uVar4 = 0;
    if (0 < iVar3) goto LAB_00216e50;
LAB_00216f40:
    if (((*param_4 == 7) && (((uint)param_4[1] >> 8 & 1) == 0)) &&
       ((int)(uint)*(byte *)((long)param_1 + 0x3a) <= param_4[1])) {
      *(char *)((long)param_1 + 0x3c) = *(char *)((long)param_1 + 0x3c) + -1;
    }
    if (*param_3 == 7) {
      uVar1 = param_3[1];
joined_r0x00216f5c:
      if (((uVar1 >> 8 & 1) == 0) && ((int)(uint)*(byte *)((long)param_1 + 0x3a) <= (int)uVar1)) {
        *(char *)((long)param_1 + 0x3c) = *(char *)((long)param_1 + 0x3c) + -1;
      }
    }
  }
  else {
    iVar2 = luaK_exp2RK(param_1,param_4);
    iVar3 = luaK_exp2RK(param_1,param_3);
    uVar4 = iVar2 << 0xe;
    if (iVar3 <= iVar2) goto LAB_00216f40;
LAB_00216e50:
    if (((*param_3 == 7) && (((uint)param_3[1] >> 8 & 1) == 0)) &&
       ((int)(uint)*(byte *)((long)param_1 + 0x3a) <= param_3[1])) {
      *(char *)((long)param_1 + 0x3c) = *(char *)((long)param_1 + 0x3c) + -1;
    }
    if (*param_4 == 7) {
      uVar1 = param_4[1];
      goto joined_r0x00216f5c;
    }
  }
  lVar7 = *param_1;
  uVar4 = param_2 | uVar4 | iVar3 << 0x17;
  patchlistaux(param_1,*(undefined4 *)(param_1 + 5),*(undefined4 *)(param_1 + 4),0xff);
  *(undefined4 *)(param_1 + 5) = 0xffffffff;
  if (*(int *)(param_1 + 4) < *(int *)(lVar7 + 0x18)) {
    lVar6 = param_1[2];
    *(uint *)(*(long *)(lVar7 + 0x38) + (long)*(int *)(param_1 + 4) * 4) = uVar4;
    lVar5 = *(long *)(lVar7 + 0x48);
    iVar3 = *(int *)(param_1 + 4);
    if (*(int *)(lVar7 + 0x1c) <= iVar3) {
LAB_002170b8:
      lVar5 = luaM_growaux_(*(undefined8 *)(lVar6 + 0x38),lVar5,lVar7 + 0x1c,4,0x7fffffff,"opcodes")
      ;
      iVar3 = *(int *)(param_1 + 4);
      lVar6 = param_1[2];
      *(long *)(lVar7 + 0x48) = lVar5;
    }
  }
  else {
    lVar5 = luaM_growaux_(*(undefined8 *)(param_1[2] + 0x38),*(undefined8 *)(lVar7 + 0x38),
                          lVar7 + 0x18,4,0x7fffffff,"opcodes");
    iVar3 = *(int *)(param_1 + 4);
    *(long *)(lVar7 + 0x38) = lVar5;
    lVar6 = param_1[2];
    *(uint *)(lVar5 + (long)iVar3 * 4) = uVar4;
    lVar5 = *(long *)(lVar7 + 0x48);
    iVar3 = *(int *)(param_1 + 4);
    if (*(int *)(lVar7 + 0x1c) <= iVar3) goto LAB_002170b8;
  }
  *(undefined4 *)(lVar5 + (long)iVar3 * 4) = *(undefined4 *)(lVar6 + 8);
  iVar2 = *(int *)(param_1 + 4);
  iVar3 = iVar2 + 1;
  lVar7 = *(long *)(*param_1 + 0x48);
  *(int *)(param_1 + 4) = iVar3;
  *param_3 = 0xc;
  param_3[1] = iVar2;
  *(undefined4 *)(lVar7 + (long)iVar3 * 4 + -4) = param_5;
LAB_00216ef4:
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(&__stack_chk_guard,local_8 - ___stack_chk_guard,0);
  }
  return;
}


