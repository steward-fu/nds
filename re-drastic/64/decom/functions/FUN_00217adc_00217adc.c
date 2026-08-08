/*
 * Ghidra decompilation
 *
 * Function : FUN_00217adc
 * Address  : 00217adc
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00217adc(long *param_1,uint param_2,uint *param_3,undefined4 param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  undefined8 uStack_18;
  undefined8 uStack_10;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  uStack_18 = 6;
  uStack_10 = 0xffffffffffffffff;
  if (param_2 != 2) {
    if ((param_2 < 3) || (param_2 == 3)) {
      codeexpval(param_1,param_2 + 0x19,param_3,&uStack_18,param_4);
    }
    goto LAB_00217b44;
  }
  luaK_dischargevars(param_1,param_3);
  uVar3 = *param_3;
  if (uVar3 == 7) {
    uVar3 = param_3[1];
LAB_00217cac:
    if (((uVar3 >> 8 & 1) == 0) && ((int)(uint)*(byte *)((long)param_1 + 0x3a) <= (int)uVar3)) {
      *(char *)((long)param_1 + 0x3c) = *(char *)((long)param_1 + 0x3c) + -1;
      uVar3 = param_3[1];
    }
LAB_00217c24:
    uVar3 = luaK_code(param_1,uVar3 << 0x17 | 0x1b);
    *param_3 = 0xc;
    param_3[1] = uVar3;
  }
  else if (uVar3 < 8) {
    if (uVar3 == 3) {
LAB_00217c94:
      *param_3 = 2;
    }
    else {
      if (uVar3 < 4) {
        if (uVar3 == 1) goto LAB_00217c94;
        if (uVar3 != 2) goto LAB_00217ba8;
      }
      *param_3 = 3;
    }
  }
  else if (uVar3 == 0xb) {
    puVar1 = (uint *)(*(long *)(*param_1 + 0x38) + (long)(int)param_3[1] * 4);
    puVar4 = puVar1;
    if ((0 < (int)param_3[1]) &&
       (puVar4 = puVar1 + -1, -1 < (char)(&luaP_opmodes)[puVar1[-1] & 0x3f])) {
      puVar4 = puVar1;
    }
    uVar3 = *puVar4 & 0xffffc03f;
    uVar2 = uVar3 | 0x40;
    if ((*puVar4 & 0x3fc0) != 0) {
      uVar2 = uVar3;
    }
    *puVar4 = uVar2;
  }
  else if (uVar3 == 0xc) {
    uVar3 = *(byte *)((long)param_1 + 0x3c) + 1;
    if (*(byte *)(*param_1 + 0xc) < uVar3) {
      if (0xf9 < uVar3) {
                    /* WARNING: Subroutine does not return */
        luaX_syntaxerror(param_1[2],"function or expression too complex");
      }
      *(char *)(*param_1 + 0xc) = (char)uVar3;
    }
    *(char *)((long)param_1 + 0x3c) = (char)uVar3;
    discharge2reg(param_1,param_3,(uVar3 & 0xff) - 1);
    uVar3 = param_3[1];
    if (*param_3 == 7) goto LAB_00217cac;
    goto LAB_00217c24;
  }
LAB_00217ba8:
  uVar3 = param_3[2];
  param_3[2] = param_3[3];
  param_3[3] = uVar3;
  removevalues(param_1);
  removevalues(param_1,param_3[2]);
LAB_00217b44:
  if (lStack_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(&__stack_chk_guard,lStack_8 - ___stack_chk_guard,0);
  }
  return;
}


