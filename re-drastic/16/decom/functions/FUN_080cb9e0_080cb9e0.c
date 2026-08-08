/*
 * Ghidra decompilation
 *
 * Function : FUN_080cb9e0
 * Address  : 080cb9e0
 * Program  : drastic16
 */


undefined4 FUN_080cb9e0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  bool bVar3;
  bool local_9;
  
  uVar1 = FUN_080d229c(param_1 + 4);
  bVar3 = (uVar1 & 0x8000) == 0;
  if (bVar3) {
    local_9 = (uVar1 & 0x4000) != 0;
    FUN_080d2234(param_1 + 4,2);
  }
  else {
    local_9 = true;
    FUN_080d2234(param_1 + 4,1);
  }
  *(byte *)(param_1 + 0xe674) = local_9 ^ 1;
  if (bVar3) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_080cd648(param_1);
  }
  return uVar2;
}


