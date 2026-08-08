/*
 * Ghidra decompilation
 *
 * Function : FUN_0802a9ac
 * Address  : 0802a9ac
 * Program  : drastic16
 */


void FUN_0802a9ac(uint *param_1,uint *param_2,uint param_3,uint param_4)

{
  ushort uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint *in_r12;
  
  uVar4 = in_r12[0x29];
  uVar1 = *(ushort *)((int)in_r12 + 0xaa);
  uVar3 = param_3 & uVar4;
  puVar2 = in_r12;
  if ((param_3 & 0x20) != 0) {
    *(uint *)in_r12[0x28] = *(uint *)in_r12[0x28] | *param_1;
    *(uint *)(in_r12[0x28] + 4) = *(uint *)(in_r12[0x28] + 4) | param_1[1];
    *(uint *)(in_r12[0x28] + 8) = *(uint *)(in_r12[0x28] + 8) | param_1[2];
    *(uint *)(in_r12[0x28] + 0xc) = *(uint *)(in_r12[0x28] + 0xc) | param_1[3];
    *(uint *)(in_r12[0x28] + 0x10) = *(uint *)(in_r12[0x28] + 0x10) | param_1[4];
    *(uint *)(in_r12[0x28] + 0x14) = *(uint *)(in_r12[0x28] + 0x14) | param_1[5];
    *(uint *)(in_r12[0x28] + 0x18) = *(uint *)(in_r12[0x28] + 0x18) | param_1[6];
    *(uint *)(in_r12[0x28] + 0x1c) = *(uint *)(in_r12[0x28] + 0x1c) | param_1[7];
    uVar4 = in_r12[0x29];
  }
  for (; uVar3 != 0; uVar3 = uVar3 >> 1) {
    if ((uVar3 & 1) != 0) {
      *puVar2 = *puVar2 | *param_1;
      puVar2[1] = puVar2[1] | param_1[1];
      puVar2[2] = puVar2[2] | param_1[2];
      puVar2[3] = puVar2[3] | param_1[3];
      puVar2[4] = puVar2[4] | param_1[4];
      puVar2[5] = puVar2[5] | param_1[5];
      puVar2[6] = puVar2[6] | param_1[6];
      puVar2[7] = puVar2[7] | param_1[7];
    }
    puVar2 = puVar2 + 8;
  }
  uVar3 = uVar4 & param_4;
  puVar2 = in_r12;
  if ((param_4 & 0x20) != 0) {
    *(uint *)in_r12[0x28] = *(uint *)in_r12[0x28] | *param_2 & ~*param_1;
    *(uint *)(in_r12[0x28] + 4) = *(uint *)(in_r12[0x28] + 4) | param_2[1] & ~param_1[1];
    *(uint *)(in_r12[0x28] + 8) = *(uint *)(in_r12[0x28] + 8) | param_2[2] & ~param_1[2];
    *(uint *)(in_r12[0x28] + 0xc) = *(uint *)(in_r12[0x28] + 0xc) | param_2[3] & ~param_1[3];
    *(uint *)(in_r12[0x28] + 0x10) = *(uint *)(in_r12[0x28] + 0x10) | param_2[4] & ~param_1[4];
    *(uint *)(in_r12[0x28] + 0x14) = *(uint *)(in_r12[0x28] + 0x14) | param_2[5] & ~param_1[5];
    *(uint *)(in_r12[0x28] + 0x18) = *(uint *)(in_r12[0x28] + 0x18) | param_2[6] & ~param_1[6];
    *(uint *)(in_r12[0x28] + 0x1c) = *(uint *)(in_r12[0x28] + 0x1c) | param_2[7] & ~param_1[7];
    uVar4 = in_r12[0x29];
  }
  for (; uVar3 != 0; uVar3 = uVar3 >> 1) {
    if ((uVar3 & 1) != 0) {
      *puVar2 = *puVar2 | *param_2 & ~*param_1;
      puVar2[1] = puVar2[1] | param_2[1] & ~param_1[1];
      puVar2[2] = puVar2[2] | param_2[2] & ~param_1[2];
      puVar2[3] = puVar2[3] | param_2[3] & ~param_1[3];
      puVar2[4] = puVar2[4] | param_2[4] & ~param_1[4];
      puVar2[5] = puVar2[5] | param_2[5] & ~param_1[5];
      puVar2[6] = puVar2[6] | param_2[6] & ~param_1[6];
      puVar2[7] = puVar2[7] | param_2[7] & ~param_1[7];
    }
    puVar2 = puVar2 + 8;
  }
  uVar4 = uVar4 & uVar1;
  if ((uVar1 & 0x20) != 0) {
    *(uint *)in_r12[0x28] = *(uint *)in_r12[0x28] | ~(*param_1 | *param_2);
    *(uint *)(in_r12[0x28] + 4) = *(uint *)(in_r12[0x28] + 4) | ~(param_1[1] | param_2[1]);
    *(uint *)(in_r12[0x28] + 8) = *(uint *)(in_r12[0x28] + 8) | ~(param_1[2] | param_2[2]);
    *(uint *)(in_r12[0x28] + 0xc) = *(uint *)(in_r12[0x28] + 0xc) | ~(param_1[3] | param_2[3]);
    *(uint *)(in_r12[0x28] + 0x10) = *(uint *)(in_r12[0x28] + 0x10) | ~(param_1[4] | param_2[4]);
    *(uint *)(in_r12[0x28] + 0x14) = *(uint *)(in_r12[0x28] + 0x14) | ~(param_1[5] | param_2[5]);
    *(uint *)(in_r12[0x28] + 0x18) = *(uint *)(in_r12[0x28] + 0x18) | ~(param_1[6] | param_2[6]);
    *(uint *)(in_r12[0x28] + 0x1c) = *(uint *)(in_r12[0x28] + 0x1c) | ~(param_2[7] | param_1[7]);
  }
  for (; uVar4 != 0; uVar4 = uVar4 >> 1) {
    if ((uVar4 & 1) != 0) {
      *in_r12 = *in_r12 | ~(*param_1 | *param_2);
      in_r12[1] = in_r12[1] | ~(param_1[1] | param_2[1]);
      in_r12[2] = in_r12[2] | ~(param_1[2] | param_2[2]);
      in_r12[3] = in_r12[3] | ~(param_1[3] | param_2[3]);
      in_r12[4] = in_r12[4] | ~(param_1[4] | param_2[4]);
      in_r12[5] = in_r12[5] | ~(param_1[5] | param_2[5]);
      in_r12[6] = in_r12[6] | ~(param_1[6] | param_2[6]);
      in_r12[7] = in_r12[7] | ~(param_1[7] | param_2[7]);
    }
    in_r12 = in_r12 + 8;
  }
  return;
}


