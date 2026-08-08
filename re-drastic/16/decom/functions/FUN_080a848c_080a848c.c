/*
 * Ghidra decompilation
 *
 * Function : FUN_080a848c
 * Address  : 080a848c
 * Program  : drastic16
 */


undefined8 FUN_080a848c(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 local_10;
  undefined4 uStack_c;
  
  iVar1 = FUN_080df798(param_1 + 0x7320,&local_10);
  uVar2 = CONCAT44(uStack_c,local_10);
  if (iVar1 == 0) {
    uVar2 = FUN_080a4b08(param_1);
  }
  return uVar2;
}


