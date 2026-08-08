/*
 * Ghidra decompilation
 *
 * Function : FUN_08071870
 * Address  : 08071870
 * Program  : drastic16
 */


void FUN_08071870(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined auStack_110 [260];
  
  iVar2 = param_1[0x48];
  uVar1 = FUN_080101a4(*param_1 + 0x2380,iVar2);
  FUN_08075790(uVar1,auStack_110,iVar2,0,0);
  printf("ARM op: %08x  %s\n",uVar1,auStack_110);
  return;
}


