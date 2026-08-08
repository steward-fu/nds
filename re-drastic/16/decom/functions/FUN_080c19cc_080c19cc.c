/*
 * Ghidra decompilation
 *
 * Function : FUN_080c19cc
 * Address  : 080c19cc
 * Program  : drastic16
 */


undefined4
FUN_080c19cc(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined auStack_2048 [8220];
  undefined auStack_2c [16];
  uint local_1c;
  undefined8 local_18;
  
  FUN_080a2134(param_6,param_6,param_7);
  FUN_080a3c04(auStack_2048);
  cVar1 = FUN_080a3dec(auStack_2048,param_6,0);
  if (cVar1 == '\x01') {
    FUN_0809f148(auStack_2c,0x100000);
    local_18 = 0;
    while( true ) {
      FUN_080b0edc();
      uVar3 = FUN_0809f1c0(auStack_2c,0);
      uVar2 = FUN_0809f1f4(auStack_2c);
      local_1c = FUN_080a46cc(auStack_2048,uVar3,uVar2);
      if (local_1c == 0) break;
      uVar3 = FUN_0809f1c0(auStack_2c,0);
      FUN_080a44e8(param_3,uVar3,local_1c);
      local_18 = CONCAT44(((int)local_1c >> 0x1f) + local_18._4_4_ +
                          (uint)CARRY4(local_1c,(uint)local_18),local_1c + (uint)local_18);
    }
    uVar3 = 1;
    FUN_0809f180(auStack_2c);
  }
  else {
    FUN_080b70ec(&DAT_081cd0a0,param_4,param_6);
    FUN_080a85d8(param_4,&DAT_080ee230,param_6,param_5);
    FUN_080a85d8(param_4,&DAT_080ee230);
    *(undefined4 *)(param_2 + 0x125a8) = 0x17;
    uVar3 = 0;
  }
  FUN_080a3cc0(auStack_2048);
  return uVar3;
}


