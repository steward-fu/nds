/*
 * Ghidra decompilation
 *
 * Function : cpu_translate_raise_exception
 * Address  : 00192ef0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cpu_translate_raise_exception(long param_1,int param_2,uint param_3)

{
  long lVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  long lVar5;
  uint extraout_w8;
  undefined8 extraout_x8;
  uint uVar6;
  ulong uVar7;
  undefined8 extraout_x9;
  ulong extraout_x9_00;
  undefined *puVar8;
  undefined *extraout_x10;
  undefined *extraout_x10_00;
  int extraout_w11;
  int extraout_w11_00;
  long lVar9;
  long extraout_x12;
  long extraout_x12_00;
  int local_10;
  int local_c;
  long local_8;
  
  puVar8 = &DAT_0025f000;
  uVar7 = (ulong)*(uint *)(param_1 + 0x448);
  local_8 = ___stack_chk_guard;
  param_2 = param_2 << 2;
  lVar9 = *(long *)(*(long *)(param_1 + 0x468) + 0x2250);
  if ((param_3 & 0xffff) == 0) {
    puVar4 = *(uint **)(param_1 + 0x408) + 1;
    **(uint **)(param_1 + 0x408) = (param_3 >> 0x10) << 5 | 0x52a00001;
  }
  else if ((param_3 & 0xffff0000) == 0) {
    puVar4 = *(uint **)(param_1 + 0x408) + 1;
    **(uint **)(param_1 + 0x408) = param_3 << 5 | 0x52800001;
  }
  else if ((param_3 & 0xffff) == 0xffff) {
    puVar4 = *(uint **)(param_1 + 0x408) + 1;
    **(uint **)(param_1 + 0x408) = (~param_3 >> 0x10) << 5 | 0x12a00001;
  }
  else if ((param_3 & 0xffff0000) == 0xffff0000) {
    puVar4 = *(uint **)(param_1 + 0x408) + 1;
    **(uint **)(param_1 + 0x408) = ~param_3 << 5 | 0x12800001;
  }
  else {
    iVar2 = cpu_translate_imm_map_to_logical_isra_0_part_0
                      (param_3,&local_10,&local_c,&__stack_chk_guard,0);
    param_3 = (uint)extraout_x8;
    uVar7 = extraout_x9_00;
    puVar8 = extraout_x10_00;
    lVar9 = extraout_x12_00;
    param_2 = extraout_w11_00;
    if (iVar2 == 0) {
      puVar3 = *(uint **)(param_1 + 0x408);
      puVar4 = puVar3 + 2;
      *puVar3 = (param_3 & 0xffff) << 5 | 0x52800001;
      puVar3[1] = ((uint)((ulong)extraout_x8 >> 0x10) & 0xffff) << 5 | 0x72a00001;
    }
    else {
      puVar4 = *(uint **)(param_1 + 0x408) + 1;
      **(uint **)(param_1 + 0x408) = local_c << 10 | local_10 << 0x10 | 0x320003e1;
    }
  }
  lVar1 = (long)arm64_set_cpu_mode + -(long)puVar4;
  lVar5 = -(long)puVar4 + 0x18f7f7;
  if (-1 < lVar1) {
    lVar5 = lVar1;
  }
  uVar6 = (uint)uVar7;
  *puVar4 = (uint)lVar5 >> 2 & 0x3ffffff | 0x94000000;
  *(uint **)(param_1 + 0x408) = puVar4 + 1;
  if ((uVar7 & 0xffff) == 0) {
    puVar3 = puVar4 + 2;
    puVar4[1] = ((uint)(uVar7 >> 0x10) & 0xffff) << 5 | 0x52a0001b;
  }
  else if ((uVar7 & 0xffff0000) == 0) {
    puVar3 = puVar4 + 2;
    puVar4[1] = uVar6 << 5 | 0x5280001b;
  }
  else if ((uVar6 & 0xffff) == 0xffff) {
    puVar3 = puVar4 + 2;
    puVar4[1] = (~uVar6 >> 0x10) << 5 | 0x12a0001b;
  }
  else if ((uVar6 & 0xffff0000) == 0xffff0000) {
    puVar3 = puVar4 + 2;
    puVar4[1] = ~uVar6 << 5 | 0x1280001b;
  }
  else {
    iVar2 = cpu_translate_imm_map_to_logical_isra_0_part_0(uVar7 & 0xffffffff,&local_10,&local_c);
    puVar8 = extraout_x10;
    lVar9 = extraout_x12;
    param_3 = extraout_w8;
    param_2 = extraout_w11;
    if (iVar2 == 0) {
      puVar4 = *(uint **)(param_1 + 0x408);
      puVar3 = puVar4 + 2;
      *puVar4 = ((uint)extraout_x9 & 0xffff) << 5 | 0x5280001b;
      puVar4[1] = ((uint)((ulong)extraout_x9 >> 0x10) & 0xffff) << 5 | 0x72a0001b;
    }
    else {
      puVar3 = *(uint **)(param_1 + 0x408) + 1;
      **(uint **)(param_1 + 0x408) = local_c << 10 | local_10 << 0x10 | 0x320003fb;
    }
  }
  puVar4 = puVar3 + 1;
  *puVar3 = 0xb963c380;
  *(uint **)(param_1 + 0x408) = puVar4;
  if (*(char *)(param_1 + 0x479) != '\0') {
    puVar4 = puVar3 + 2;
    puVar3[1] = 0x323b0000;
  }
  iVar2 = *(int *)(cpu_modes_cpsr + (ulong)param_3 * 4);
  *puVar4 = (param_3 + 0x83a & 0xfff) << 10 | 0xb9000380;
  puVar4[1] = 0x123a6400;
  puVar4[2] = iVar2 << 10 | 0x11000000;
  *(undefined8 *)(puVar4 + 3) = 0xb923c38032390000;
  *(uint **)(param_1 + 0x408) = puVar4 + 5;
  if (lVar9 == 0) {
    puVar3 = puVar4 + 6;
    puVar4[5] = param_2 << 5 | 0x52800000;
  }
  else {
    puVar3 = puVar4 + 8;
    puVar4[7] = param_2 << 10 | 0x11000000;
    *(undefined8 *)(puVar4 + 5) = 0xb9401000f9512b80;
  }
  lVar5 = (long)block_indirect_branch + -(long)puVar3;
  lVar9 = -(long)puVar3 + 0x18cb3f;
  if (-1 < lVar5) {
    lVar9 = lVar5;
  }
  lVar5 = **(long **)(puVar8 + 0xdc0);
  uVar6 = (uint)lVar9 >> 2 & 0x3ffffff | 0x14000000;
  *puVar3 = uVar6;
  *(uint **)(param_1 + 0x408) = puVar3 + 1;
  if (local_8 - lVar5 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6,local_8 - lVar5,puVar3 + 1,0x14000000,0);
}


