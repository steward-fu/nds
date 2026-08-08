/*
 * Ghidra decompilation
 *
 * Function : cpu_translate_bx_op
 * Address  : 001903b0
 * Program  : drastic64
 */


void cpu_translate_bx_op(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint *puVar4;
  
  if ((param_2 & 0xf) == 0xf) {
    cpu_translate_set_imm32_isra_0
              (param_1 + 0x408,1,*(undefined4 *)(*(long *)(param_1 + 0x458) + 4));
    uVar3 = 0x2a0103e0;
  }
  else {
    uVar3 = ((param_2 & 0xf) + 0xd) * 0x10000 | 0x2a0003e0;
  }
  puVar4 = *(uint **)(param_1 + 0x408) + 1;
  **(uint **)(param_1 + 0x408) = uVar3;
  *(uint **)(param_1 + 0x408) = puVar4;
  if ((param_2 >> 5 & 1) != 0) {
    cpu_translate_set_imm32_isra_0
              (param_1 + 0x408,0x1b,(uint)*(byte *)(param_1 + 0x479) | *(uint *)(param_1 + 0x448));
    puVar4 = *(uint **)(param_1 + 0x408);
  }
  lVar2 = (long)block_indirect_branch + -(long)puVar4;
  lVar1 = -(long)puVar4 + 0x18cb3f;
  if (-1 < lVar2) {
    lVar1 = lVar2;
  }
  *puVar4 = (uint)lVar1 >> 2 & 0x3ffffff | 0x14000000;
  *(uint **)(param_1 + 0x408) = puVar4 + 1;
  return;
}


