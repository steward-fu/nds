/*
 * Ghidra decompilation
 *
 * Function : dma_transfer_display
 * Address  : 0011f190
 * Program  : drastic64
 */


long dma_transfer_display(undefined8 *param_1,long param_2,int param_3)

{
  char cVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  
  uVar6 = *(uint *)(param_2 + 0x20);
  uVar3 = *(int *)(param_2 + 0x18) + param_3 * 0x200;
  if (uVar3 < 0x10000000) {
    lVar5 = param_1[1];
    lVar4 = (ulong)(uVar3 >> 0x17) * 0x60;
    lVar2 = lVar5 + lVar4;
    cVar1 = *(char *)(lVar2 + 0x58);
  }
  else {
    lVar5 = param_1[1];
    lVar4 = 0;
    uVar3 = 0;
    cVar1 = *(char *)(lVar5 + 0x58);
    lVar2 = lVar5;
  }
  if (cVar1 == '\0') {
    lVar2 = *(long *)(lVar2 + 8) + (ulong)(uVar3 & *(uint *)(lVar5 + lVar4));
  }
  else if (cVar1 == '\x01') {
    lVar2 = (**(code **)(lVar2 + 8))(*param_1);
  }
  else {
    lVar2 = 0;
  }
  if ((uVar6 >> 0x19 & 1) == 0) {
    uVar6 = uVar6 & 0x7fffffff;
    *(uint *)(param_2 + 0x20) = uVar6;
    *(uint *)(*(long *)(param_2 + 0x10) + 8) = uVar6;
  }
  if ((uVar6 >> 0x1e & 1) != 0) {
    lVar4 = *(long *)(*(long *)(param_2 + 8) + 0x2080);
    uVar3 = 0x100 << (ulong)(*(byte *)(param_2 + 0x25) & 0x1f) | *(uint *)(lVar4 + 0x214);
    *(uint *)(lVar4 + 0x214) = uVar3;
    lVar5 = *(long *)(param_2 + 8);
    if ((*(uint *)(lVar5 + 0x2110) & 6) == 0) {
      uVar3 = -*(int *)(lVar4 + 0x208) & *(uint *)(lVar4 + 0x210) & uVar3;
      *(uint *)(lVar5 + 0x2108) = uVar3;
    }
    else {
      uVar3 = *(uint *)(lVar5 + 0x2108);
    }
    if (uVar3 != 0) {
      *(uint *)(lVar5 + 0x22a8) = *(uint *)(lVar5 + 0x22a8) | 2;
    }
  }
  return lVar2;
}


