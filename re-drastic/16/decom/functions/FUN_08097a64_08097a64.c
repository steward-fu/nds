/*
 * Ghidra decompilation
 *
 * Function : FUN_08097a64
 * Address  : 08097a64
 * Program  : drastic16
 */


undefined8 FUN_08097a64(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = (uint *)(*(int *)(param_1 + 0x34) +
                   (param_3 + *(int *)(*(int *)(param_1 + 0x30) + param_2 * 4)) * 8);
  uVar1 = *puVar2;
  return CONCAT44(puVar2[1] + *(int *)(param_1 + 0x2c) +
                  (uint)CARRY4(uVar1,*(uint *)(param_1 + 0x28)),uVar1 + *(uint *)(param_1 + 0x28));
}


