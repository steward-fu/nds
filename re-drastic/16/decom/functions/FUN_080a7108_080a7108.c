/*
 * Ghidra decompilation
 *
 * Function : FUN_080a7108
 * Address  : 080a7108
 * Program  : drastic16
 */


undefined4 * FUN_080a7108(undefined4 *param_1,void *param_2)

{
  undefined8 uVar1;
  undefined uVar2;
  void *pvVar3;
  
  FUN_080a3c04(param_1);
  *param_1 = &PTR_FUN_080ed890;
  FUN_080b3654(param_1 + 0x807);
  FUN_080b5c80(param_1 + 0xc0a);
  FUN_080b525c(param_1 + 0x1cc2);
  FUN_080ded50(param_1 + 0x1cc8);
  FUN_080a8770(param_1 + 0x210c);
  FUN_080a8770(param_1 + 0x31dc);
  param_1[0x1cbd] = 0;
  pvVar3 = param_2;
  if (param_2 != (void *)0x0) {
    pvVar3 = (void *)0x0;
  }
  uVar2 = SUB41(pvVar3,0);
  if (param_2 == (void *)0x0) {
    uVar2 = 1;
  }
  *(undefined *)(param_1 + 0x1cbc) = uVar2;
  if (*(char *)(param_1 + 0x1cbc) != '\0') {
    param_2 = operator_new(0x125c0);
    FUN_080b6bb0(param_2);
  }
  param_1[0x1cbd] = param_2;
  *(undefined *)((int)param_1 + 0x15) = *(undefined *)(param_1[0x1cbd] + 0xc29d);
  param_1[0x43a6] = 2;
  *(undefined *)(param_1 + 0x43a7) = 0;
  *(undefined *)((int)param_1 + 0x10e9d) = 0;
  *(undefined *)((int)param_1 + 0x10e9e) = 0;
  *(undefined *)((int)param_1 + 0x10e9f) = 0;
  *(undefined *)(param_1 + 0x43a8) = 0;
  *(undefined *)((int)param_1 + 0x10ea1) = 0;
  *(undefined *)((int)param_1 + 0x10ea2) = 0;
  param_1[0x43aa] = 0;
  FUN_080a84f8(param_1 + 0x1cc2);
  *(undefined *)((int)param_1 + 0x10ea3) = 0;
  *(undefined *)(param_1 + 0x43a9) = 0;
  *(undefined *)((int)param_1 + 0x10ead) = 0;
  *(undefined *)(param_1 + 0x43ab) = 0;
  param_1[0x1cc4] = 0;
  *(undefined8 *)(param_1 + 0x43a2) = 0;
  *(undefined8 *)(param_1 + 0x43a4) = 0;
  uVar1 = SIMDExpandImmediate(0,0xe,0xff);
  *(undefined8 *)(param_1 + 0x1cbe) = uVar1;
  param_1[0x1cc0] = 0xffffffff;
  memset(param_1 + 0x20ee,0,0x40);
  memset(param_1 + 0x20fe,0,0x34);
  memset(param_1 + 0x31cc,0,0x20);
  param_1[0x43b0] = 0;
  *(undefined8 *)(param_1 + 0x43b2) = 0;
  *(undefined8 *)(param_1 + 0x43b4) = 0;
  *(undefined8 *)(param_1 + 0x43b6) = 0;
  param_1[0x43b9] = 0;
  *(undefined *)((int)param_1 + 0x10ebe) = 0;
  *(undefined *)(param_1 + 0x43b8) = 0;
  *(undefined *)(param_1 + 0x1cc6) = 0;
  return param_1;
}


