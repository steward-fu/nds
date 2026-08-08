/*
 * Ghidra decompilation
 *
 * Function : FUN_08010328
 * Address  : 08010328
 * Program  : drastic16
 */


undefined8 FUN_08010328(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  
  iVar1 = *(int *)(param_1 + (param_2 >> 0xb) * 4) * 4;
  if (iVar1 == 0) {
    uVar4 = SIMDExpandImmediate(1,0xe,0xf);
    if (param_2 < 0x10000000) {
      uVar2 = FUN_08008500();
      uVar4 = VectorShiftRight(CONCAT44(uVar2,uVar2),0x20);
    }
    if (param_2 + 4 < 0xfffffff || param_2 == 0xffffffb) {
      uVar3 = FUN_08008500(param_1);
    }
    else {
      uVar3 = 0xffffffff;
    }
    return CONCAT44((uint)((ulonglong)uVar4 >> 0x20) | uVar3,(int)uVar4);
  }
  return *(undefined8 *)(iVar1 + param_2);
}


