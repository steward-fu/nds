/*
 * Ghidra decompilation
 *
 * Function : FUN_080dfd00
 * Address  : 080dfd00
 * Program  : drastic16
 */


bool FUN_080dfd00(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined auStack_44 [32];
  undefined4 local_24;
  undefined8 local_20;
  undefined4 local_14;
  
  FUN_080b43e4(auStack_44,0);
  cVar1 = FUN_080dfa28(param_1,auStack_44);
  if (cVar1 == '\x01') {
    local_14 = FUN_080b497c(auStack_44);
    local_20 = FUN_080b497c(auStack_44);
    local_24 = FUN_080b497c(auStack_44);
    FUN_080afadc(param_1 + 0x1050,local_24);
    uVar2 = FUN_080a609c(param_1 + 0x1050,0);
    FUN_080b4af8(auStack_44,uVar2,local_24);
    *(uint *)(param_1 + 0x1060) = *(uint *)(param_1 + 0x1028) - (uint)local_20;
    *(uint *)(param_1 + 0x1064) =
         *(int *)(param_1 + 0x102c) -
         (local_20._4_4_ + (uint)(*(uint *)(param_1 + 0x1028) < (uint)local_20));
  }
  FUN_080afab0(auStack_44);
  return cVar1 == '\x01';
}


