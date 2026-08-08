/*
 * Ghidra decompilation
 *
 * Function : remap_vram
 * Address  : 001307d0
 * Program  : drastic64
 */


void remap_vram(long param_1,undefined8 param_2,ulong param_3,int param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + (param_3 & 0xffffffff) * 0x10 + 0x14) != param_4) {
    *(undefined2 *)(param_1 + 0x2e70) = 0;
    remap_vram_body();
    uVar2 = (uint)*(ushort *)(param_1 + 0x2e70);
    if (*(ushort *)(param_1 + 0x2e70) != 0) {
      uVar3 = 0;
      do {
        if ((uVar2 & 1) != 0) {
          lVar1 = param_1 + (ulong)uVar3 * 8;
          *(undefined4 *)(param_1 + (ulong)uVar3 * 0x10 + 0x14) = 0xffffffff;
          remap_vram_body(param_1,*(undefined8 *)(lVar1 + 0x20a0),uVar3,
                          **(undefined **)(lVar1 + 0x20e8),0);
        }
        uVar2 = uVar2 >> 1;
        uVar3 = uVar3 + 1;
      } while (uVar2 != 0);
    }
    return;
  }
  return;
}


