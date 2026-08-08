/*
 * Ghidra decompilation
 *
 * Function : spu_get_microphone_sample
 * Address  : 0016c7a0
 * Program  : drastic64
 */


ulong spu_get_microphone_sample(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  
  if (*(char *)(param_1 + 0x40d40) == '\0') {
    if (*(char *)(param_1 + 0x40023) != '\0') {
      uVar1 = *(uint *)(param_1 + 0x40d24);
      if (uVar1 == 0) {
        uVar1 = SUB164((ZEXT416(*(uint *)(param_1 + 0x40014)) * (undefined  [16])0x400000) /
                       (undefined  [16])0x401bd0e,0);
        *(uint *)(param_1 + 0x40d24) = uVar1;
      }
      uVar4 = param_2 - *(long *)(param_1 + 0x40d08);
      iVar2 = (int)uVar4 * 0x400;
      if ((uVar4 & 0x200000) != 0) {
        iVar2 = 0;
      }
      return (long)*(short *)(param_1 +
                             ((ulong)((uint)*(byte *)(param_1 + 0x40022) *
                                     (int)((long)iVar2 * (ulong)uVar1 >> 0x20)) + 0x10000) * 2);
    }
  }
  else {
    if (*(long *)(param_1 + 0x40d30) == 0) {
      uVar1 = rand();
      return (ulong)(uVar1 & 0x1fff);
    }
    uVar1 = *(uint *)(param_1 + 0x40d28);
    lVar3 = (param_2 - *(long *)(param_1 + 0x40d10)) * 0x400;
    if (lVar3 < 0) {
      lVar3 = 0;
    }
    if (uVar1 == 0) {
      uVar1 = SUB164((ZEXT416(*(uint *)(param_1 + 0x40d38)) * (undefined  [16])0x400000) /
                     (undefined  [16])0x401bd0e,0);
      *(uint *)(param_1 + 0x40d28) = uVar1;
    }
    if ((uint)((ulong)uVar1 * lVar3 >> 0x20) < *(uint *)(param_1 + 0x40d3c)) {
      return (long)*(short *)(*(long *)(param_1 + 0x40d30) + ((ulong)uVar1 * lVar3 >> 0x20) * 2);
    }
  }
  return 0;
}


