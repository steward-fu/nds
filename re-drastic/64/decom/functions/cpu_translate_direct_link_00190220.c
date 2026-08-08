/*
 * Ghidra decompilation
 *
 * Function : cpu_translate_direct_link
 * Address  : 00190220
 * Program  : drastic64
 */


void cpu_translate_direct_link(long param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  code *pcVar4;
  code *pcVar5;
  undefined4 *puVar6;
  uint *puVar7;
  code **ppcVar8;
  
  ppcVar8 = *(code ***)(param_1 + 0x460);
  pcVar4 = *ppcVar8;
  if ((*(byte *)(*(long *)(param_1 + 0x450) + 0x29) >> 2 & 1) == 0) {
    if (pcVar4 != (code *)0x0) {
      uVar2 = *(uint *)(ppcVar8 + 4);
      pcVar5 = pcVar4 + 8;
      if ((uVar2 & 1) == 0) {
        pcVar5 = pcVar4;
      }
      goto joined_r0x001902dc;
    }
  }
  else {
    pcVar5 = pcVar4;
    if ((pcVar4 != (code *)0x0) && (pcVar5 = pcVar4 + 8, (*(uint *)(ppcVar8 + 4) & 1) == 0)) {
      pcVar5 = pcVar4;
    }
    pcVar4 = pcVar5;
    if (*(code ***)(*(long *)(param_1 + 0x450) + 0x10) == ppcVar8) {
      puVar6 = *(undefined4 **)(param_1 + 0x408);
      *puVar6 = 0x1280000c;
      uVar2 = *(uint *)(ppcVar8 + 4);
      *(undefined4 **)(param_1 + 0x408) = puVar6 + 1;
      goto joined_r0x001902dc;
    }
  }
  uVar2 = *(uint *)(ppcVar8 + 4);
  pcVar5 = pcVar4;
joined_r0x001902dc:
  if ((uVar2 >> 1 & 1) != 0) {
    cpu_translate_set_imm32_isra_0(param_1 + 0x408,0,*(undefined4 *)(ppcVar8 + 3));
    if ((*(uint *)(ppcVar8 + 3) & 1) == 0) {
      uVar2 = *(uint *)(ppcVar8 + 4);
      pcVar5 = block_itcm_branch_arm;
    }
    else {
      uVar2 = *(uint *)(ppcVar8 + 4);
      pcVar5 = block_itcm_branch_thumb;
    }
  }
  if ((uVar2 >> 2 & 1) == 0) {
    puVar7 = *(uint **)(param_1 + 0x408);
    lVar3 = (long)pcVar5 - (long)puVar7;
    lVar1 = lVar3 + 3;
    if (-1 < lVar3) {
      lVar1 = lVar3;
    }
    *puVar7 = (uint)lVar1 >> 2 & 0x3ffffff | 0x14000000;
    *(uint **)(param_1 + 0x408) = puVar7 + 1;
    if ((pcVar5 == (code *)0x0) && (((ulong)ppcVar8[4] & 0xffff000000000002) == 0)) {
      *(uint **)ppcVar8[2] = puVar7;
      ppcVar8[1] = (code *)puVar7;
      *(code ***)(param_1 + 0x460) = ppcVar8 + 5;
      return;
    }
    ppcVar8[1] = (code *)puVar7;
    *(code ***)(param_1 + 0x460) = ppcVar8 + 5;
    return;
  }
  cpu_translate_set_imm32_isra_0(param_1 + 0x408,0,*(undefined4 *)(ppcVar8 + 3));
  puVar7 = *(uint **)(param_1 + 0x408);
  lVar3 = (long)block_indirect_branch + -(long)puVar7;
  lVar1 = -(long)puVar7 + 0x18cb3f;
  if (-1 < lVar3) {
    lVar1 = lVar3;
  }
  *puVar7 = (uint)lVar1 >> 2 & 0x3ffffff | 0x14000000;
  *(uint **)(param_1 + 0x408) = puVar7 + 1;
  ppcVar8[1] = (code *)puVar7;
  *(code ***)(param_1 + 0x460) = ppcVar8 + 5;
  return;
}


