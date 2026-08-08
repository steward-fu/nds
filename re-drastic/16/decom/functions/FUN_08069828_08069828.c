/*
 * Ghidra decompilation
 *
 * Function : FUN_08069828
 * Address  : 08069828
 * Program  : drastic16
 */


void FUN_08069828(int param_1)

{
  uint uVar1;
  uint *puVar2;
  ushort uVar3;
  int iVar4;
  ushort uVar5;
  byte bVar6;
  byte bVar7;
  
  puVar2 = (uint *)(*(int *)(param_1 + 4) + (uint)*(ushort *)(param_1 + 0x14) * 0x1c + -0x1c);
  uVar5 = *(ushort *)((int)puVar2 + 0xe);
  bVar7 = *(byte *)(puVar2 + 5) & 0xf;
  if (*(ushort *)(param_1 + 0x14) != 0) {
    uVar1 = 0;
    do {
      uVar3 = *(ushort *)((int)puVar2 + 0x12);
      bVar6 = *(byte *)((int)puVar2 + 0x15);
      if (*(ushort *)(puVar2 + 3) != 0) {
        iVar4 = *(int *)(param_1 + 4) + (uint)*(ushort *)(puVar2 + 3) * 0x1c;
        bVar6 = bVar6 | *(byte *)(iVar4 + 0x14) & 0xf & ~(*(byte *)(iVar4 + 0x14) >> 4) |
                        *(byte *)(iVar4 + 0x15);
        uVar3 = uVar3 | *(ushort *)(iVar4 + 0xe) & ~*(ushort *)(iVar4 + 0x10) |
                        *(ushort *)(iVar4 + 0x12);
      }
      uVar5 = uVar3 | uVar5;
      bVar6 = bVar6 | bVar7;
      *(byte *)((int)puVar2 + 0x15) = bVar6;
      *(ushort *)((int)puVar2 + 0x12) = uVar5;
      uVar1 = uVar1 + 1;
      if (0xdfffffff < *puVar2) {
        uVar3 = *(ushort *)(puVar2 + 4);
        bVar6 = bVar6 & ~(*(byte *)(puVar2 + 5) >> 4);
      }
      if (0xdfffffff < *puVar2) {
        uVar5 = uVar5 & ~uVar3;
      }
      bVar7 = *(byte *)(puVar2 + 5) & 0xf | bVar6;
      uVar5 = uVar5 | *(ushort *)((int)puVar2 + 0xe);
      puVar2 = puVar2 + -7;
    } while (uVar1 < *(ushort *)(param_1 + 0x14));
  }
  *(ushort *)(param_1 + 0x1a) = uVar5;
  *(byte *)(param_1 + 0x1c) = bVar7;
  return;
}


