/*
 * Ghidra decompilation
 *
 * Function : luaK_posfix
 * Address  : 00217ea0
 * Program  : drastic64
 */


void luaK_posfix(long *param_1,uint param_2,undefined8 *param_3,undefined8 *param_4,
                undefined4 param_5)

{
  int iVar1;
  uint *puVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  
  if (param_2 < 0x13) {
    if (0xf < param_2) {
      codecomp(param_1,param_2 + 0xf,0,param_3,param_4);
      return;
    }
    if (param_2 == 0xc) {
      if (*(int *)(param_4 + 1) == *(int *)((long)param_4 + 0xc)) {
        luaK_dischargevars(param_1,param_4);
      }
      else {
        luaK_exp2anyreg();
      }
      if (*(int *)param_4 == 0xc) {
        lVar6 = *(long *)(*param_1 + 0x38);
        uVar4 = *(uint *)(lVar6 + (long)*(int *)((long)param_4 + 4) * 4);
        puVar2 = (uint *)(lVar6 + (long)*(int *)((long)param_4 + 4) * 4);
        if ((uVar4 & 0x3f) == 0x1d) {
          uVar5 = *(uint *)((long)param_3 + 4);
          if (((*(int *)param_3 == 7) && ((uVar5 >> 8 & 1) == 0)) &&
             ((int)(uint)*(byte *)((long)param_1 + 0x3a) <= (int)uVar5)) {
            *(char *)((long)param_1 + 0x3c) = *(char *)((long)param_1 + 0x3c) + -1;
            lVar6 = *(long *)(*param_1 + 0x38);
            uVar5 = *(uint *)((long)param_3 + 4);
            uVar4 = *(uint *)(lVar6 + (long)*(int *)((long)param_4 + 4) * 4);
            puVar2 = (uint *)(lVar6 + (long)*(int *)((long)param_4 + 4) * 4);
          }
          *puVar2 = uVar4 & 0x7fffff | uVar5 << 0x17;
          iVar1 = *(int *)((long)param_4 + 4);
          *(int *)param_3 = 0xc;
          *(int *)((long)param_3 + 4) = iVar1;
          return;
        }
      }
      luaK_dischargevars(param_1,param_4);
      if (*(int *)param_4 == 7) {
        uVar4 = (uint)*(byte *)((long)param_1 + 0x3c);
        if (((*(uint *)((long)param_4 + 4) >> 8 & 1) == 0) &&
           ((int)(uint)*(byte *)((long)param_1 + 0x3a) <= (int)*(uint *)((long)param_4 + 4))) {
          uVar5 = uVar4 - 1;
          uVar4 = uVar5 & 0xff;
          *(char *)((long)param_1 + 0x3c) = (char)uVar5;
        }
      }
      else {
        uVar4 = (uint)*(byte *)((long)param_1 + 0x3c);
      }
      uVar4 = uVar4 + 1;
      if (*(byte *)(*param_1 + 0xc) < uVar4) {
        if (0xf9 < uVar4) {
                    /* WARNING: Subroutine does not return */
          luaX_syntaxerror(param_1[2],"function or expression too complex");
        }
        *(char *)(*param_1 + 0xc) = (char)uVar4;
      }
      *(char *)((long)param_1 + 0x3c) = (char)uVar4;
      exp2reg(param_1,param_4,(uVar4 & 0xff) - 1);
      codeexpval(param_1,0x1d,param_3,param_4,param_5);
      return;
    }
    if (0xc < param_2) {
      codecomp(param_1,param_2 + 0x12,1,param_3,param_4);
      return;
    }
    if (param_2 != 0xc) {
      codeexpval(param_1,param_2 + 0xd);
      return;
    }
  }
  else if (param_2 == 0x13) {
    luaK_dischargevars(param_1,param_4);
    luaK_concat(param_1,(int *)((long)param_4 + 0xc),*(int *)((long)param_3 + 0xc));
    uVar3 = param_4[1];
    *param_3 = *param_4;
    param_3[1] = uVar3;
  }
  else if (param_2 == 0x14) {
    luaK_dischargevars(param_1,param_4);
    luaK_concat(param_1,param_4 + 1,*(int *)(param_3 + 1));
    uVar3 = param_4[1];
    *param_3 = *param_4;
    param_3[1] = uVar3;
  }
  return;
}


