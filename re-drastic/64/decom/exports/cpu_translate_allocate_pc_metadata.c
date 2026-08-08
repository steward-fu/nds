/*
 * Ghidra decompilation
 *
 * Function : cpu_translate_allocate_pc_metadata
 * Address  : 00195db0
 * Program  : drastic64
 */


void cpu_translate_allocate_pc_metadata(long param_1,long param_2)

{
  ushort uVar1;
  byte *pbVar2;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  byte *pbVar3;
  
  uVar1 = *(ushort *)(param_2 + 0x20);
  uVar5 = (uint)uVar1;
  if (uVar1 == 0) {
    lVar4 = 0;
  }
  else {
    uVar6 = 0;
    pbVar3 = (byte *)(*(long *)(param_2 + 8) + 0x1a);
    do {
      pbVar2 = pbVar3 + 0x20;
      uVar5 = (int)uVar6 + (*pbVar3 >> 2 & 1);
      uVar6 = (ulong)uVar5;
      pbVar3 = pbVar2;
    } while (pbVar2 != (byte *)(*(long *)(param_2 + 8) + 0x3a + (ulong)(uVar1 - 1) * 0x20));
    lVar4 = uVar6 * -4;
  }
  lVar4 = *(long *)(param_1 + 0x410) + lVar4;
  *(long *)(param_1 + 0x410) = lVar4;
  *(long *)(param_1 + 0x430) = lVar4;
  *(long *)(param_1 + 0x428) = lVar4;
  *(uint *)(param_1 + 0x420) = uVar5;
  return;
}


