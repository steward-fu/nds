/*
 * Ghidra decompilation
 *
 * Function : memory_sqrt
 * Address  : 00117e40
 * Program  : drastic64
 */


void memory_sqrt(long param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  
  *(undefined *)(param_1 + 0xfd511) = 1;
  if ((*(ushort *)(param_1 + 0x1b320) & 1) == 0) {
    uVar4 = *(uint *)(param_1 + 0x1b328);
    uVar5 = (ulong)uVar4;
    if (uVar4 != 0) {
      uVar1 = 0;
      if (0x3fffffff < uVar4) {
        uVar4 = uVar4 + 0xc0000000;
        uVar1 = 0x40000000;
      }
      uVar2 = uVar1 >> 1;
      if ((uVar1 | 0x10000000) <= uVar4) {
        uVar4 = uVar4 - (uVar1 | 0x10000000);
        uVar2 = uVar2 | 0x10000000;
      }
      uVar1 = uVar2 >> 1;
      if ((uVar2 | 0x4000000) <= uVar4) {
        uVar4 = uVar4 - (uVar2 | 0x4000000);
        uVar1 = uVar1 | 0x4000000;
      }
      uVar2 = uVar1 >> 1;
      if ((uVar1 | 0x1000000) <= uVar4) {
        uVar4 = uVar4 - (uVar1 | 0x1000000);
        uVar2 = uVar2 | 0x1000000;
      }
      uVar1 = uVar2 >> 1;
      if ((uVar2 | 0x400000) <= uVar4) {
        uVar4 = uVar4 - (uVar2 | 0x400000);
        uVar1 = uVar1 | 0x400000;
      }
      uVar2 = uVar1 >> 1;
      if ((uVar1 | 0x100000) <= uVar4) {
        uVar4 = uVar4 - (uVar1 | 0x100000);
        uVar2 = uVar2 | 0x100000;
      }
      uVar1 = uVar2 >> 1;
      if ((uVar2 | 0x40000) <= uVar4) {
        uVar4 = uVar4 - (uVar2 | 0x40000);
        uVar1 = uVar1 | 0x40000;
      }
      uVar2 = uVar1 >> 1;
      if ((uVar1 | 0x10000) <= uVar4) {
        uVar4 = uVar4 - (uVar1 | 0x10000);
        uVar2 = uVar2 | 0x10000;
      }
      uVar1 = uVar2 >> 1;
      if ((uVar2 | 0x4000) <= uVar4) {
        uVar4 = uVar4 - (uVar2 | 0x4000);
        uVar1 = uVar1 | 0x4000;
      }
      uVar2 = uVar1 >> 1;
      if ((uVar1 | 0x1000) <= uVar4) {
        uVar4 = uVar4 - (uVar1 | 0x1000);
        uVar2 = uVar2 | 0x1000;
      }
      uVar1 = uVar2 >> 1;
      if ((uVar2 | 0x400) <= uVar4) {
        uVar4 = uVar4 - (uVar2 | 0x400);
        uVar1 = uVar1 | 0x400;
      }
      uVar2 = uVar1 >> 1;
      if ((uVar1 | 0x100) <= uVar4) {
        uVar4 = uVar4 - (uVar1 | 0x100);
        uVar2 = uVar2 | 0x100;
      }
      uVar1 = uVar2 >> 1;
      if ((uVar2 | 0x40) <= uVar4) {
        uVar4 = uVar4 - (uVar2 | 0x40);
        uVar1 = uVar1 | 0x40;
      }
      uVar2 = uVar1 >> 1;
      if ((uVar1 | 0x10) <= uVar4) {
        uVar4 = uVar4 - (uVar1 | 0x10);
        uVar2 = uVar2 | 0x10;
      }
      uVar1 = uVar2 >> 1;
      if ((uVar2 | 4) <= uVar4) {
        uVar4 = uVar4 - (uVar2 | 4);
        uVar1 = uVar1 | 4;
      }
      uVar2 = uVar1 >> 1 | 1;
      if (uVar4 < (uVar1 | 1)) {
        uVar2 = uVar1 >> 1;
      }
      *(uint *)(param_1 + 0x1b324) = uVar2;
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(param_1 + 0x1b328);
    uVar5 = 0;
    if (uVar6 != 0) {
      iVar7 = 0x1f;
      uVar5 = 0;
      uVar3 = 0x1000000000000000;
      do {
        uVar8 = uVar5 | uVar3;
        uVar5 = uVar5 >> 1;
        if (uVar8 <= uVar6) {
          uVar6 = uVar6 - uVar8;
          uVar5 = uVar5 | uVar3;
        }
        uVar3 = uVar3 >> 2;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
  }
  *(int *)(param_1 + 0x1b324) = (int)uVar5;
  return;
}


