/*
 * Ghidra decompilation
 *
 * Function : cpu_translate_link_stub
 * Address  : 00196370
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cpu_translate_link_stub(long param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long *plVar5;
  uint *puVar6;
  ulong uVar7;
  long extraout_x8;
  uint extraout_w9;
  undefined *puVar8;
  undefined *extraout_x10;
  int local_10;
  int iStack_c;
  long local_8;
  
  puVar8 = &DAT_0025f000;
  uVar7 = (ulong)param_2;
  local_8 = ___stack_chk_guard;
  uVar1 = param_2 & 0xfffffffe;
  if ((param_2 & 0xfffe) == 0) {
    puVar6 = *(uint **)(param_1 + 0x408) + 1;
    **(uint **)(param_1 + 0x408) = (param_2 >> 0x10) << 5 | 0x52a00000;
    *(uint **)(param_1 + 0x408) = puVar6;
  }
  else if ((param_2 & 0xffff0000) == 0) {
    puVar6 = *(uint **)(param_1 + 0x408) + 1;
    **(uint **)(param_1 + 0x408) = uVar1 << 5 | 0x52800000;
    *(uint **)(param_1 + 0x408) = puVar6;
  }
  else if ((param_2 & 0xffff0000) == 0xffff0000) {
    puVar6 = *(uint **)(param_1 + 0x408) + 1;
    **(uint **)(param_1 + 0x408) = ~uVar1 << 5 | 0x12800000;
    *(uint **)(param_1 + 0x408) = puVar6;
  }
  else {
    iVar4 = cpu_translate_imm_map_to_logical_isra_0_part_0(uVar1,&local_10,&iStack_c);
    param_1 = extraout_x8;
    puVar8 = extraout_x10;
    if (iVar4 == 0) {
      puVar6 = *(uint **)(extraout_x8 + 0x408);
      *puVar6 = (extraout_w9 & 0xffff) << 5 | 0x52800000;
      puVar6[1] = (extraout_w9 >> 0x10) << 5 | 0x72a00000;
      puVar6 = puVar6 + 2;
      *(uint **)(extraout_x8 + 0x408) = puVar6;
    }
    else {
      puVar6 = *(uint **)(extraout_x8 + 0x408) + 1;
      **(uint **)(extraout_x8 + 0x408) = iStack_c << 10 | local_10 << 0x10 | 0x320003e0;
      *(uint **)(extraout_x8 + 0x408) = puVar6;
    }
  }
  uVar1 = 0x123e7400;
  if ((uVar7 & 1) != 0) {
    uVar1 = 0x32000000;
  }
  *puVar6 = uVar1;
  plVar5 = *(long **)(puVar8 + 0xdc0);
  lVar2 = (long)block_indirect_branch + -(long)(puVar6 + 1);
  lVar3 = -(long)(puVar6 + 1) + 0x18cb3f;
  if (-1 < lVar2) {
    lVar3 = lVar2;
  }
  puVar6[1] = (uint)lVar3 >> 2 & 0x3ffffff | 0x14000000;
  *(uint **)(param_1 + 0x408) = puVar6 + 2;
  lVar3 = local_8 - *plVar5;
  if (lVar3 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar5,lVar3,0);
}


