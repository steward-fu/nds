/*
 * Ghidra decompilation
 *
 * Function : FUN_080b4914
 * Address  : 080b4914
 * Program  : drastic16
 */


undefined8 FUN_080b4914(undefined4 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_080b4810(param_1);
  uVar2 = FUN_080b4810(param_1);
  uVar3 = VectorShiftRight(CONCAT44(uVar2,uVar2),0x20);
  uVar3 = VectorShiftLeft(uVar3,0x20,0x40,0);
  return CONCAT44((int)((ulonglong)uVar3 >> 0x20) + (uint)CARRY4(uVar1,(uint)uVar3),
                  uVar1 + (uint)uVar3);
}


