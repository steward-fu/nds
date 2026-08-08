/*
 * Ghidra decompilation
 *
 * Function : FUN_080d57fc
 * Address  : 080d57fc
 * Program  : drastic16
 */


void FUN_080d57fc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_080d5c24(param_1,1);
  iVar1 = FUN_080d57d4(param_1);
  puVar2 = (undefined4 *)FUN_080d586c(param_1,iVar1 + -1);
  *puVar2 = param_2;
  puVar2[1] = param_3;
  puVar2[2] = param_4;
  puVar2[3] = param_5;
  puVar2[4] = param_6;
  puVar2[5] = param_7;
  return;
}


