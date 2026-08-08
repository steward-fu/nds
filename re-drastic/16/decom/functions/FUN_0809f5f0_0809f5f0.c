/*
 * Ghidra decompilation
 *
 * Function : FUN_0809f5f0
 * Address  : 0809f5f0
 * Program  : drastic16
 */


bool FUN_0809f5f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined auStack_20 [20];
  
  FUN_0809fb14(auStack_20,param_3);
  uVar2 = FUN_0809f21c(auStack_20,0);
  uVar3 = FUN_0809f0b8(auStack_20);
  cVar1 = FUN_0809f6c4(param_1,uVar2,uVar3);
  if (cVar1 == '\x01') {
    uVar2 = FUN_0809f21c(auStack_20,0);
    FUN_080afbc8(uVar2,param_2,param_3);
  }
  FUN_0809f0e0(auStack_20);
  return cVar1 == '\x01';
}


