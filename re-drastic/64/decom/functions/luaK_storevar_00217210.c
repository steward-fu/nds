/*
 * Ghidra decompilation
 *
 * Function : luaK_storevar
 * Address  : 00217210
 * Program  : drastic64
 */


void luaK_storevar(long param_1,int *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *param_2;
  if (iVar2 == 9) {
    iVar2 = luaK_exp2anyreg(param_1,param_3);
    luaK_code(param_1,iVar2 << 6 | param_2[1] << 0x17 | 9);
  }
  else if (iVar2 == 10) {
    uVar1 = 10;
    if (*(char *)((long)param_2 + 7) != '\b') {
      uVar1 = 8;
    }
    iVar2 = luaK_exp2RK(param_1,param_3);
    luaK_code(param_1,(int)*(short *)(param_2 + 1) << 0x17 | (uint)*(byte *)((long)param_2 + 6) << 6
                      | uVar1 | iVar2 << 0xe);
  }
  else if (iVar2 == 8) {
    if (((*param_3 == 7) && (((uint)param_3[1] >> 8 & 1) == 0)) &&
       ((int)(uint)*(byte *)(param_1 + 0x3a) <= param_3[1])) {
      *(char *)(param_1 + 0x3c) = *(char *)(param_1 + 0x3c) + -1;
    }
    exp2reg(param_1,param_3,param_2[1]);
    return;
  }
  if (((*param_3 == 7) && (((uint)param_3[1] >> 8 & 1) == 0)) &&
     ((int)(uint)*(byte *)(param_1 + 0x3a) <= param_3[1])) {
    *(char *)(param_1 + 0x3c) = *(char *)(param_1 + 0x3c) + -1;
  }
  return;
}


