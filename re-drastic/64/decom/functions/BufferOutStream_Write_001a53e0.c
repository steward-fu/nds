/*
 * Ghidra decompilation
 *
 * Function : BufferOutStream_Write
 * Address  : 001a53e0
 * Program  : drastic64
 */


ulong BufferOutStream_Write(long param_1,long param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  iVar3 = *(int *)(param_1 + 0x14);
  uVar4 = *(uint *)(param_1 + 0x1c);
  uVar1 = iVar3 + param_3;
  *(uint *)(param_1 + 0x14) = uVar1;
  if (uVar1 < uVar4) {
    return 0;
  }
  uVar1 = uVar1 - uVar4;
  uVar5 = *(uint *)(param_1 + 0x18);
  uVar2 = uVar5;
  if (uVar1 < uVar5) {
    uVar2 = uVar1;
  }
  if (uVar1 < uVar5) {
    uVar5 = uVar1;
  }
  memcpy((void *)(*(long *)(param_1 + 8) + (ulong)*(uint *)(param_1 + 0x10)),
         (void *)(param_2 + (ulong)(uVar4 - iVar3)),(ulong)uVar2);
  *(uint *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + uVar5;
  *(uint *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - uVar5;
  *(uint *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + uVar5;
  return (ulong)uVar2;
}


