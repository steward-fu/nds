/*
 * Ghidra decompilation
 *
 * Function : FUN_0021660c
 * Address  : 0021660c
 * Program  : drastic64
 */


void FUN_0021660c(long *param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  
  uVar1 = *param_2;
  if (uVar1 == 9) {
    if (param_2[2] == param_2[3]) {
      return;
    }
    uVar1 = param_2[1] << 0x17 | 5;
LAB_00216648:
    uVar1 = luaK_code(param_1,uVar1);
    *param_2 = 0xc;
    param_2[1] = uVar1;
    lVar2 = *param_1;
    uVar1 = (uint)*(byte *)((long)param_1 + 0x3c);
  }
  else {
    if (uVar1 == 10) {
      if ((((uint)(int)*(short *)(param_2 + 1) >> 8 & 1) == 0) &&
         ((int)(uint)*(byte *)((long)param_1 + 0x3a) <= (int)*(short *)(param_2 + 1))) {
        *(char *)((long)param_1 + 0x3c) = *(char *)((long)param_1 + 0x3c) + -1;
      }
      uVar5 = (uint)*(byte *)((long)param_2 + 6);
      uVar1 = 6;
      if ((*(char *)((long)param_2 + 7) == '\b') &&
         (uVar1 = 7, *(byte *)((long)param_1 + 0x3a) <= *(byte *)((long)param_2 + 6))) {
        *(char *)((long)param_1 + 0x3c) = *(char *)((long)param_1 + 0x3c) + -1;
        uVar5 = (uint)*(byte *)((long)param_2 + 6);
      }
      uVar1 = uVar1 | (int)*(short *)(param_2 + 1) << 0xe | uVar5 << 0x17;
      goto LAB_00216648;
    }
    if (uVar1 < 0xb) {
      if (uVar1 != 8) goto LAB_00216720;
      *param_2 = 7;
LAB_002166bc:
      if (param_2[2] == param_2[3]) {
        return;
      }
      uVar5 = param_2[1];
      if ((int)(uint)*(byte *)((long)param_1 + 0x3a) <= (int)uVar5) goto LAB_0021670c;
      uVar1 = (uint)*(byte *)((long)param_1 + 0x3c);
      lVar2 = *param_1;
      if (*param_2 == 7) goto LAB_00216788;
    }
    else if (uVar1 - 0xd < 2) {
      lVar2 = *param_1;
      lVar4 = (long)(int)param_2[1];
      lVar3 = *(long *)(lVar2 + 0x38);
      if (uVar1 == 0xd) {
        *param_2 = 7;
        param_2[1] = *(uint *)(lVar3 + lVar4 * 4) >> 6 & 0xff;
        goto LAB_002166bc;
      }
      *(uint *)(lVar3 + lVar4 * 4) = *(uint *)(lVar3 + lVar4 * 4) & 0x7fffff | 0x1000000;
      *param_2 = 0xc;
      uVar1 = (uint)*(byte *)((long)param_1 + 0x3c);
    }
    else {
LAB_00216720:
      if (uVar1 == 7) goto LAB_002166bc;
      if (uVar1 < 10) {
        if (uVar1 != 8) goto LAB_00216880;
        *param_2 = 7;
        lVar2 = *param_1;
        uVar1 = (uint)*(byte *)((long)param_1 + 0x3c);
      }
      else {
        if (1 < uVar1 - 0xd) {
LAB_00216880:
          uVar1 = (uint)*(byte *)((long)param_1 + 0x3c);
          lVar2 = *param_1;
          goto LAB_002166ec;
        }
        lVar2 = *param_1;
        lVar4 = (long)(int)param_2[1];
        lVar3 = *(long *)(lVar2 + 0x38);
        if (uVar1 != 0xd) {
          *(uint *)(lVar3 + lVar4 * 4) = *(uint *)(lVar3 + lVar4 * 4) & 0x7fffff | 0x1000000;
          *param_2 = 0xc;
          uVar1 = (uint)*(byte *)((long)param_1 + 0x3c);
          goto LAB_002166ec;
        }
        *param_2 = 7;
        param_2[1] = *(uint *)(lVar3 + lVar4 * 4) >> 6 & 0xff;
        uVar1 = (uint)*(byte *)((long)param_1 + 0x3c);
      }
LAB_00216788:
      if (((param_2[1] >> 8 & 1) == 0) &&
         ((int)(uint)*(byte *)((long)param_1 + 0x3a) <= (int)param_2[1])) {
        uVar5 = uVar1 - 1;
        uVar1 = uVar5 & 0xff;
        *(char *)((long)param_1 + 0x3c) = (char)uVar5;
      }
    }
  }
LAB_002166ec:
  uVar1 = uVar1 + 1;
  if (*(byte *)(lVar2 + 0xc) < uVar1) {
    if (0xf9 < uVar1) {
                    /* WARNING: Subroutine does not return */
      luaX_syntaxerror(param_1[2],"function or expression too complex");
    }
    *(char *)(lVar2 + 0xc) = (char)uVar1;
  }
  uVar5 = (uVar1 & 0xff) - 1;
  *(char *)((long)param_1 + 0x3c) = (char)uVar1;
LAB_0021670c:
  exp2reg(param_1,param_2,uVar5);
  return;
}


