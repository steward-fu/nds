/*
 * Ghidra decompilation
 *
 * Function : cpu_translate_map_src_reg.part.0
 * Address  : 00190470
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong cpu_translate_map_src_reg_part_0(long param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong extraout_x8;
  long extraout_x9;
  undefined *puVar7;
  undefined *extraout_x10;
  uint extraout_w11;
  int local_10;
  int local_c;
  long local_8;
  
  puVar7 = &DAT_0025f000;
  uVar6 = (ulong)param_2;
  local_8 = ___stack_chk_guard;
  uVar4 = 0;
  uVar1 = *(uint *)(*(long *)(param_1 + 0x458) + 4);
  uVar5 = (ulong)uVar1;
  if ((uVar1 & 0xffff) == 0) {
    puVar3 = *(uint **)(param_1 + 0x408);
    *puVar3 = param_2 | (uVar1 >> 0x10) << 5 | 0x52a00000;
    *(uint **)(param_1 + 0x408) = puVar3 + 1;
  }
  else if ((uVar1 & 0xffff0000) == 0) {
    puVar3 = *(uint **)(param_1 + 0x408);
    *puVar3 = param_2 | uVar1 << 5 | 0x52800000;
    *(uint **)(param_1 + 0x408) = puVar3 + 1;
  }
  else if ((uVar1 & 0xffff) == 0xffff) {
    puVar3 = *(uint **)(param_1 + 0x408);
    uVar4 = param_2 | (~uVar1 >> 0x10) << 5 | 0x12a00000;
    *puVar3 = uVar4;
    *(uint **)(param_1 + 0x408) = puVar3 + 1;
  }
  else if ((uVar1 & 0xffff0000) == 0xffff0000) {
    puVar3 = *(uint **)(param_1 + 0x408);
    uVar4 = param_2 | ~uVar1 << 5 | 0x12800000;
    *puVar3 = uVar4;
    *(uint **)(param_1 + 0x408) = puVar3 + 1;
  }
  else {
    iVar2 = cpu_translate_imm_map_to_logical_isra_0_part_0(uVar1,&local_10,&local_c);
    uVar6 = extraout_x8;
    puVar7 = extraout_x10;
    if (iVar2 == 0) {
      puVar3 = *(uint **)(extraout_x9 + 0x408);
      uVar4 = ((uint)uVar5 & 0xffff) << 5 | (uint)extraout_x8 | 0x52800000;
      *puVar3 = uVar4;
      puVar3[1] = (uint)extraout_x8 | ((uint)(uVar5 >> 0x10) & 0xffff) << 5 | 0x72a00000;
      *(uint **)(extraout_x9 + 0x408) = puVar3 + 2;
    }
    else {
      puVar3 = *(uint **)(extraout_x9 + 0x408);
      uVar4 = local_c << 10;
      *puVar3 = uVar4 | local_10 << 0x10 | extraout_w11;
      *(uint **)(extraout_x9 + 0x408) = puVar3 + 1;
    }
  }
  if (local_8 - **(long **)(puVar7 + 0xdc0) == 0) {
    return uVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - **(long **)(puVar7 + 0xdc0),0,uVar4);
}


