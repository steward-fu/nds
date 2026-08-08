/*
 * Ghidra decompilation
 *
 * Function : event_dma_complete_function
 * Address  : 0011d250
 * Program  : drastic64
 */


void event_dma_complete_function(undefined8 param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = *(uint *)(param_2 + 0x20);
  if ((uVar1 >> 0x19 & 1) == 0) {
    uVar1 = uVar1 & 0x7fffffff;
    *(uint *)(param_2 + 0x20) = uVar1;
    *(uint *)(*(long *)(param_2 + 0x10) + 8) = uVar1;
  }
  if ((uVar1 >> 0x1e & 1) != 0) {
    lVar2 = *(long *)(*(long *)(param_2 + 8) + 0x2080);
    uVar1 = 0x100 << (ulong)(*(byte *)(param_2 + 0x25) & 0x1f) | *(uint *)(lVar2 + 0x214);
    *(uint *)(lVar2 + 0x214) = uVar1;
    if ((*(uint *)(*(long *)(param_2 + 8) + 0x2110) & 6) == 0) {
      *(uint *)(*(long *)(param_2 + 8) + 0x2108) =
           -*(int *)(lVar2 + 0x208) & *(uint *)(lVar2 + 0x210) & uVar1;
    }
  }
  *(undefined *)(param_2 + 0x26) = 0;
  return;
}


