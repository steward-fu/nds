/*
 * Ghidra decompilation
 *
 * Function : FUN_080a77d0
 * Address  : 080a77d0
 * Program  : drastic16
 */


undefined4 FUN_080a77d0(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_080a4094(param_1,param_2);
  if (cVar1 == '\x01') {
    cVar1 = FUN_080a79e8(param_1,0);
    if (cVar1 == '\x01') {
      uVar2 = 1;
    }
    else {
      FUN_080a85d8(param_1 + 0x18,&DAT_080ed7c8,param_1 + 0x18);
      FUN_080a42dc(param_1);
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


