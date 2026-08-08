/*
 * Ghidra decompilation
 *
 * Function : FUN_080a5770
 * Address  : 080a5770
 * Program  : drastic16
 */


undefined4 FUN_080a5770(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined auStack_4048 [8200];
  undefined auStack_2040 [8244];
  
  iVar1 = FUN_080a1270(param_1);
  if (iVar1 == 0) {
    uVar2 = FUN_080a5704(param_1);
  }
  else {
    FUN_080c3a24(auStack_4048);
    FUN_080c3abc(auStack_4048,param_1);
    FUN_080a3b4c(auStack_2040);
    uVar2 = FUN_080c3af8(auStack_4048,auStack_2040,0);
    FUN_080c3a74(auStack_4048);
  }
  return uVar2;
}


