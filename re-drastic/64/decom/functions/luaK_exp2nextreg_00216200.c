/*
 * Ghidra decompilation
 *
 * Function : luaK_exp2nextreg
 * Address  : 00216200
 * Program  : drastic64
 */


void luaK_exp2nextreg(long *param_1,uint *param_2)

{
  undefined uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  
  uVar2 = *param_2;
  if (uVar2 == 10) {
    if ((((uint)(int)*(short *)(param_2 + 1) >> 8 & 1) == 0) &&
       ((int)(uint)*(byte *)((long)param_1 + 0x3a) <= (int)*(short *)(param_2 + 1))) {
      *(char *)((long)param_1 + 0x3c) = *(char *)((long)param_1 + 0x3c) + -1;
    }
    uVar5 = (uint)*(byte *)((long)param_2 + 6);
    uVar2 = 6;
    if ((*(char *)((long)param_2 + 7) == '\b') &&
       (uVar2 = 7, *(byte *)((long)param_1 + 0x3a) <= *(byte *)((long)param_2 + 6))) {
      *(char *)((long)param_1 + 0x3c) = *(char *)((long)param_1 + 0x3c) + -1;
      uVar5 = (uint)*(byte *)((long)param_2 + 6);
    }
    uVar2 = uVar2 | (int)*(short *)(param_2 + 1) << 0xe | uVar5 << 0x17;
LAB_00216240:
    uVar2 = luaK_code(param_1,uVar2);
    *param_2 = 0xc;
    param_2[1] = uVar2;
    lVar3 = *param_1;
    uVar5 = (uint)*(byte *)((long)param_1 + 0x3c);
  }
  else {
    if (uVar2 < 0xb) {
      if (uVar2 == 8) {
        *param_2 = 7;
        lVar3 = *param_1;
        uVar5 = (uint)*(byte *)((long)param_1 + 0x3c);
      }
      else {
        if (uVar2 == 9) {
          uVar2 = param_2[1] << 0x17 | 5;
          goto LAB_00216240;
        }
        uVar5 = (uint)*(byte *)((long)param_1 + 0x3c);
        lVar3 = *param_1;
        if (uVar2 != 7) goto LAB_00216254;
      }
    }
    else {
      if (1 < uVar2 - 0xd) {
        uVar5 = (uint)*(byte *)((long)param_1 + 0x3c);
        lVar3 = *param_1;
        goto LAB_00216254;
      }
      lVar3 = *param_1;
      lVar6 = (long)(int)param_2[1];
      lVar4 = *(long *)(lVar3 + 0x38);
      if (uVar2 != 0xd) {
        *(uint *)(lVar4 + lVar6 * 4) = *(uint *)(lVar4 + lVar6 * 4) & 0x7fffff | 0x1000000;
        *param_2 = 0xc;
        uVar5 = (uint)*(byte *)((long)param_1 + 0x3c);
        goto LAB_00216254;
      }
      *param_2 = 7;
      param_2[1] = *(uint *)(lVar4 + lVar6 * 4) >> 6 & 0xff;
      uVar5 = (uint)*(byte *)((long)param_1 + 0x3c);
    }
    if (((param_2[1] >> 8 & 1) == 0) &&
       ((int)(uint)*(byte *)((long)param_1 + 0x3a) <= (int)param_2[1])) {
      uVar2 = uVar5 - 1;
      uVar5 = uVar2 & 0xff;
      *(char *)((long)param_1 + 0x3c) = (char)uVar2;
    }
  }
LAB_00216254:
  uVar5 = uVar5 + 1;
  uVar1 = (undefined)uVar5;
  if (uVar5 <= *(byte *)(lVar3 + 0xc)) {
    *(undefined *)((long)param_1 + 0x3c) = uVar1;
    exp2reg(param_1,param_2,(uVar5 & 0xff) - 1);
    return;
  }
  if (0xf9 < uVar5) {
                    /* WARNING: Subroutine does not return */
    luaX_syntaxerror(param_1[2],"function or expression too complex");
  }
  *(undefined *)(lVar3 + 0xc) = uVar1;
  *(undefined *)((long)param_1 + 0x3c) = uVar1;
  exp2reg(param_1,param_2,(uVar5 & 0xff) - 1);
  return;
}


