/*
 * Ghidra decompilation
 *
 * Function : numarith.isra.0
 * Address  : 001faab0
 * Program  : drastic64
 */


undefined  [16] numarith_isra_0(undefined param_1 [16],float param_2,int param_3)

{
  float fVar1;
  ulong uVar2;
  undefined4 extraout_var;
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined8 uVar5;
  undefined4 extraout_var_00;
  
  uVar5 = param_1._8_8_;
  fVar1 = param_1._0_4_;
  if (param_3 == 4) {
    auVar4._0_4_ = powf(fVar1,param_2);
    auVar4._4_4_ = extraout_var_00;
    auVar4._8_8_ = uVar5;
    return auVar4;
  }
  if (param_3 < 5) {
    if (param_3 == 2) {
      return ZEXT416((uint)(fVar1 * param_2));
    }
    if (param_3 == 3) {
      fVar1 = fmodf(fVar1,param_2);
      uVar2 = CONCAT44(extraout_var,fVar1);
      if (param_2 * fVar1 < 0.0) {
        uVar2 = (ulong)(uint)(fVar1 + param_2);
        uVar5 = 0;
      }
      goto LAB_001faaec;
    }
    if (param_3 == 0) {
      return ZEXT416((uint)(fVar1 + param_2));
    }
    if (param_3 == 1) {
      return ZEXT416((uint)(fVar1 - param_2));
    }
  }
  else {
    if (param_3 == 6) {
      return ZEXT416((uint)(int)(fVar1 / param_2));
    }
    if (param_3 == 0xc) {
      return ZEXT416((uint)-fVar1);
    }
    if (param_3 == 5) {
      return ZEXT416((uint)(fVar1 / param_2));
    }
  }
  uVar2 = 0;
  uVar5 = 0;
LAB_001faaec:
  auVar3._8_8_ = uVar5;
  auVar3._0_8_ = uVar2;
  return auVar3;
}


