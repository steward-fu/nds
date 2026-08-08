/*
 * Ghidra decompilation
 *
 * Function : FUN_0012636c
 * Address  : 0012636c
 * Program  : drastic64
 */


void FUN_0012636c(long param_1,ulong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)(param_1 + (((param_2 & 0xffffffff) >> 0x10 & 0xf) + 0x8dc) * 4);
  uVar2 = *(undefined4 *)(param_1 + ((param_2 & 0xf) + 0x8dc) * 4);
  uVar3 = load_memory32(param_1 + 0x23d0,uVar1);
  *(undefined4 *)(param_1 + (((param_2 & 0xffffffff) >> 0xc & 0xf) + 0x8dc) * 4) = uVar3;
  store_memory32(param_1 + 0x23d0,uVar1,uVar2);
  return;
}


