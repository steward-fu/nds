/*
 * Ghidra decompilation
 *
 * Function : luaO_arith
 * Address  : 001fac50
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void luaO_arith(undefined8 param_1,int param_2,undefined4 *param_3,undefined4 *param_4,
               undefined4 *param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = param_3[2];
  if (param_2 < 0xc) {
    if (param_2 < 7) {
      if (1 < param_2 - 4U) goto LAB_001fad7c;
LAB_001facb0:
      if (iVar1 != 3) goto LAB_001fad90;
      local_10 = *param_3;
      if (param_4[2] == 3) goto LAB_001fadac;
LAB_001faccc:
      iVar1 = luaV_tonumber_(param_4,&local_c);
      if (iVar1 == 0) goto LAB_001facdc;
LAB_001fadb4:
      uVar2 = numarith_isra_0(local_10,local_c,param_2);
      *param_5 = uVar2;
      param_5[2] = 3;
      goto LAB_001facf4;
    }
LAB_001fad2c:
    if (iVar1 == 0x13) {
      local_10 = *param_3;
    }
    else {
      iVar1 = luaV_tointeger_(param_3,&local_10,0);
      if (iVar1 == 0) goto LAB_001facdc;
    }
    if (param_4[2] == 0x13) {
      local_c = *param_4;
    }
    else {
      iVar1 = luaV_tointeger_(param_4,&local_c);
      if (iVar1 == 0) goto LAB_001facdc;
    }
    uVar2 = intarith(param_1,param_2,local_10,local_c);
    *param_5 = uVar2;
    param_5[2] = 0x13;
  }
  else {
    if (param_2 == 0xd) goto LAB_001fad2c;
LAB_001fad7c:
    if (iVar1 != 0x13) goto LAB_001facb0;
    if (param_4[2] == 0x13) {
      uVar2 = intarith(param_1,param_2,*param_3,*param_4);
      *param_5 = uVar2;
      param_5[2] = 0x13;
      goto LAB_001facf4;
    }
LAB_001fad90:
    iVar1 = luaV_tonumber_(param_3,&local_10);
    if (iVar1 != 0) {
      if (param_4[2] != 3) goto LAB_001faccc;
LAB_001fadac:
      local_c = *param_4;
      goto LAB_001fadb4;
    }
LAB_001facdc:
    luaT_trybinTM(param_1,param_3,param_4,param_5,param_2 + 6);
  }
LAB_001facf4:
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(&__stack_chk_guard,local_8 - ___stack_chk_guard,0);
  }
  return;
}


