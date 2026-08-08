/*
 * Ghidra decompilation
 *
 * Function : luaK_infix
 * Address  : 00217cf0
 * Program  : drastic64
 */


void luaK_infix(long *param_1,uint param_2,int *param_3)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  
  if (param_2 == 0x13) {
    luaK_goiftrue(param_1,param_3);
    return;
  }
  if (param_2 < 0x14) {
    if (param_2 < 0xc) {
      if (((param_3[2] == -1) && (param_3[3] == -1)) && (*param_3 - 5U < 2)) {
        return;
      }
    }
    else if (param_2 == 0xc) {
      luaK_dischargevars(param_1,param_3);
      if (((*param_3 == 7) && (((uint)param_3[1] >> 8 & 1) == 0)) &&
         ((int)(uint)*(byte *)((long)param_1 + 0x3a) <= param_3[1])) {
        bVar2 = *(char *)((long)param_1 + 0x3c) - 1;
        *(byte *)((long)param_1 + 0x3c) = bVar2;
      }
      else {
        bVar2 = *(byte *)((long)param_1 + 0x3c);
      }
      uVar1 = bVar2 + 1;
      if (*(byte *)(*param_1 + 0xc) < uVar1) {
        if (0xf9 < uVar1) {
                    /* WARNING: Subroutine does not return */
          luaX_syntaxerror(param_1[2],"function or expression too complex");
        }
        *(char *)(*param_1 + 0xc) = (char)uVar1;
      }
      *(char *)((long)param_1 + 0x3c) = (char)uVar1;
      exp2reg(param_1,param_3,(uVar1 & 0xff) - 1);
      return;
    }
LAB_00217df4:
    luaK_exp2RK(param_1,param_3);
    return;
  }
  if (param_2 != 0x14) goto LAB_00217df4;
  luaK_dischargevars(param_1,param_3);
  iVar3 = *param_3;
  if (iVar3 != 3) {
    if (iVar3 == 0xb) {
      iVar3 = param_3[1];
      goto LAB_00217db0;
    }
    if (iVar3 != 1) {
      iVar3 = jumponcond(param_1,param_3,1);
      goto LAB_00217db0;
    }
  }
  iVar3 = -1;
LAB_00217db0:
  luaK_concat(param_1,param_3 + 2,iVar3);
  iVar3 = param_3[3];
  *(undefined4 *)((long)param_1 + 0x24) = *(undefined4 *)(param_1 + 4);
  luaK_concat(param_1,param_1 + 5,iVar3);
  param_3[3] = -1;
  return;
}


