/*
 * Ghidra decompilation
 *
 * Function : luaK_exp2val
 * Address  : 00216890
 * Program  : drastic64
 */


void luaK_exp2val(long *param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  if (param_2[2] == param_2[3]) {
    luaK_dischargevars();
    return;
  }
  uVar1 = *param_2;
  if (uVar1 == 10) {
    if ((((uint)(int)*(short *)(param_2 + 1) >> 8 & 1) == 0) &&
       ((int)(uint)*(byte *)((long)param_1 + 0x3a) <= (int)*(short *)(param_2 + 1))) {
      *(char *)((long)param_1 + 0x3c) = *(char *)((long)param_1 + 0x3c) + -1;
    }
    uVar4 = (uint)*(byte *)((long)param_2 + 6);
    uVar1 = 6;
    if ((*(char *)((long)param_2 + 7) == '\b') &&
       (uVar1 = 7, *(byte *)((long)param_1 + 0x3a) <= *(byte *)((long)param_2 + 6))) {
      *(char *)((long)param_1 + 0x3c) = *(char *)((long)param_1 + 0x3c) + -1;
      uVar4 = (uint)*(byte *)((long)param_2 + 6);
    }
    uVar1 = luaK_code(param_1,uVar1 | (int)*(short *)(param_2 + 1) << 0xe | uVar4 << 0x17);
    *param_2 = 0xc;
    param_2[1] = uVar1;
    luaK_dischargevars(param_1,param_2);
    uVar1 = *param_2;
joined_r0x00216a4c:
    if (uVar1 == 7) goto LAB_002169c0;
LAB_00216900:
    uVar4 = (uint)*(byte *)((long)param_1 + 0x3c);
  }
  else {
    if (uVar1 < 0xb) {
      if (uVar1 == 8) {
        *param_2 = 7;
LAB_00216998:
        uVar1 = param_2[1];
        if ((int)(uint)*(byte *)((long)param_1 + 0x3a) <= (int)uVar1) goto LAB_00216928;
        luaK_dischargevars(param_1,param_2);
        uVar1 = *param_2;
        goto joined_r0x00216a4c;
      }
      if (uVar1 == 9) {
        uVar1 = luaK_code(param_1,param_2[1] << 0x17 | 5);
        *param_2 = 0xc;
        param_2[1] = uVar1;
      }
      else if (uVar1 == 7) goto LAB_00216998;
    }
    else if (uVar1 - 0xd < 2) {
      lVar3 = (long)(int)param_2[1];
      lVar2 = *(long *)(*param_1 + 0x38);
      if (uVar1 == 0xd) {
        *param_2 = 7;
        param_2[1] = *(uint *)(lVar2 + lVar3 * 4) >> 6 & 0xff;
        goto LAB_00216998;
      }
      *(uint *)(lVar2 + lVar3 * 4) = *(uint *)(lVar2 + lVar3 * 4) & 0x7fffff | 0x1000000;
      *param_2 = 0xc;
    }
    luaK_dischargevars(param_1,param_2);
    if (*param_2 != 7) goto LAB_00216900;
LAB_002169c0:
    uVar4 = (uint)*(byte *)((long)param_1 + 0x3c);
    if (((param_2[1] >> 8 & 1) == 0) &&
       ((int)(uint)*(byte *)((long)param_1 + 0x3a) <= (int)param_2[1])) {
      uVar1 = uVar4 - 1;
      uVar4 = uVar1 & 0xff;
      *(char *)((long)param_1 + 0x3c) = (char)uVar1;
    }
  }
  uVar4 = uVar4 + 1;
  if (*(byte *)(*param_1 + 0xc) < uVar4) {
    if (0xf9 < uVar4) {
                    /* WARNING: Subroutine does not return */
      luaX_syntaxerror(param_1[2],"function or expression too complex");
    }
    *(char *)(*param_1 + 0xc) = (char)uVar4;
  }
  uVar1 = (uVar4 & 0xff) - 1;
  *(char *)((long)param_1 + 0x3c) = (char)uVar4;
LAB_00216928:
  exp2reg(param_1,param_2,uVar1);
  return;
}


