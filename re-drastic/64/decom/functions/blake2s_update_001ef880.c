/*
 * Ghidra decompilation
 *
 * Function : blake2s_update
 * Address  : 001ef880
 * Program  : drastic64
 */


/* blake2s_update(blake2s_state*, unsigned char const*, unsigned long) */

void blake2s_update(blake2s_state *param_1,uchar *param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  uchar *puVar4;
  uint *puVar5;
  long lVar6;
  ulong __n;
  
  if (param_3 == 0) {
    return;
  }
  lVar6 = *(long *)(param_1 + 0x110);
  do {
    __n = 0x80 - lVar6;
    if (param_3 <= __n) {
      memcpy((void *)(*(long *)(param_1 + 0xf0) + lVar6),param_2,param_3);
      *(ulong *)(param_1 + 0x110) = *(long *)(param_1 + 0x110) + param_3;
      return;
    }
    memcpy((void *)(*(long *)(param_1 + 0xf0) + lVar6),param_2,__n);
    puVar5 = *(uint **)(param_1 + 0x100);
    param_2 = param_2 + __n;
    uVar1 = *puVar5;
    uVar2 = puVar5[1];
    puVar4 = *(uchar **)(param_1 + 0xf0);
    if (uVar1 + 0x40 < 0x40) {
      uVar2 = uVar2 + 1;
    }
    *(ulong *)(param_1 + 0x110) = *(long *)(param_1 + 0x110) + __n;
    *puVar5 = uVar1 + 0x40;
    puVar5[1] = uVar2;
    blake2s_compress(param_1,puVar4);
    puVar3 = *(undefined8 **)(param_1 + 0xf0);
    param_3 = (lVar6 + param_3) - 0x80;
    *puVar3 = puVar3[8];
    puVar3[1] = puVar3[9];
    puVar3[2] = puVar3[10];
    puVar3[3] = puVar3[0xb];
    puVar3[4] = puVar3[0xc];
    puVar3[5] = puVar3[0xd];
    puVar3[6] = puVar3[0xe];
    puVar3[7] = puVar3[0xf];
    lVar6 = *(long *)(param_1 + 0x110) + -0x40;
    *(long *)(param_1 + 0x110) = lVar6;
  } while (param_3 != 0);
  return;
}


