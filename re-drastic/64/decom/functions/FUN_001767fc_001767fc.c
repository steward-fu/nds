/*
 * Ghidra decompilation
 *
 * Function : FUN_001767fc
 * Address  : 001767fc
 * Program  : drastic64
 */


void FUN_001767fc(long param_1)

{
  uint uVar1;
  ushort uVar2;
  void *pvVar3;
  ulong uVar4;
  ushort *puVar5;
  ulong uVar6;
  
  pvVar3 = memset((void *)(param_1 + 0xd70),0,0x4000);
  puVar5 = (ushort *)(param_1 + 0xd1e);
  uVar4 = 0;
  do {
    uVar2 = puVar5[-0x29];
    uVar6 = 1L << (uVar4 & 0x3f);
    uVar1 = (int)uVar4 + 1;
    uVar4 = (ulong)uVar1;
    if (uVar2 != 0xffff) {
      *(ulong *)((long)pvVar3 + (ulong)uVar2 * 8) =
           *(ulong *)((long)pvVar3 + (ulong)uVar2 * 8) | uVar6;
    }
    uVar2 = *puVar5;
    puVar5 = puVar5 + 1;
    if (uVar2 != 0xffff) {
      *(ulong *)((long)pvVar3 + (ulong)uVar2 * 8) =
           *(ulong *)((long)pvVar3 + (ulong)uVar2 * 8) | uVar6;
    }
  } while (uVar1 != 0x29);
  return;
}


