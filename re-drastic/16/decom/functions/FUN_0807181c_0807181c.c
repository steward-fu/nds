/*
 * Ghidra decompilation
 *
 * Function : FUN_0807181c
 * Address  : 0807181c
 * Program  : drastic16
 */


void FUN_0807181c(int *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined auStack_110 [260];
  
  uVar2 = param_1[0x48];
  uVar1 = FUN_0801001c(*param_1 + 0x2380,uVar2 & 0xfffffffe);
  FUN_080761f0(uVar1,auStack_110,uVar2 & 0xfffffffe,0,0);
  printf("Thumb op: %04x  %s\n",uVar1,auStack_110);
  return;
}


