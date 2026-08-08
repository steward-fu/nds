/*
 * Ghidra decompilation
 *
 * Function : FUN_001ef96c
 * Address  : 001ef96c
 * Program  : drastic64
 */


void FUN_001ef96c(blake2s_state *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uchar *puVar2;
  ulong uVar3;
  long lVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  
  puVar5 = *(uint **)(param_1 + 0x100);
  uVar3 = *(ulong *)(param_1 + 0x110);
  uVar6 = *puVar5;
  uVar7 = puVar5[1];
  puVar2 = *(uchar **)(param_1 + 0xf0);
  if (0x40 < uVar3) {
    if (uVar6 + 0x40 < 0x40) {
      uVar7 = uVar7 + 1;
    }
    *puVar5 = uVar6 + 0x40;
    puVar5[1] = uVar7;
    blake2s_compress(param_1,puVar2);
    lVar4 = *(long *)(param_1 + 0x110);
    *(size_t *)(param_1 + 0x110) = lVar4 - 0x40U;
    memcpy(*(void **)(param_1 + 0xf0),(void *)((long)*(void **)(param_1 + 0xf0) + 0x40),
           lVar4 - 0x40U);
    puVar5 = *(uint **)(param_1 + 0x100);
    puVar2 = *(uchar **)(param_1 + 0xf0);
    uVar6 = *puVar5;
    uVar7 = puVar5[1];
    uVar3 = *(ulong *)(param_1 + 0x110);
  }
  if (CARRY4((uint)uVar3,uVar6)) {
    uVar7 = uVar7 + 1;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x108);
  *puVar5 = (uint)uVar3 + uVar6;
  puVar5[1] = uVar7;
  if (param_1[0x118] != (blake2s_state)0x0) {
    puVar1[1] = 0xffffffff;
  }
  *puVar1 = 0xffffffff;
  memset(puVar2 + uVar3,0,0x80 - uVar3);
  blake2s_compress(param_1,*(uchar **)(param_1 + 0xf0));
  *param_2 = **(undefined4 **)(param_1 + 0xf8);
  param_2[1] = *(undefined4 *)(*(long *)(param_1 + 0xf8) + 4);
  param_2[2] = *(undefined4 *)(*(long *)(param_1 + 0xf8) + 8);
  param_2[3] = *(undefined4 *)(*(long *)(param_1 + 0xf8) + 0xc);
  param_2[4] = *(undefined4 *)(*(long *)(param_1 + 0xf8) + 0x10);
  param_2[5] = *(undefined4 *)(*(long *)(param_1 + 0xf8) + 0x14);
  param_2[6] = *(undefined4 *)(*(long *)(param_1 + 0xf8) + 0x18);
  param_2[7] = *(undefined4 *)(*(long *)(param_1 + 0xf8) + 0x1c);
  return;
}


