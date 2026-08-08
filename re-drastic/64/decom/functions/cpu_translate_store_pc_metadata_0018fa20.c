/*
 * Ghidra decompilation
 *
 * Function : cpu_translate_store_pc_metadata
 * Address  : 0018fa20
 * Program  : drastic64
 */


void cpu_translate_store_pc_metadata(long param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  uint *puVar5;
  
  uVar1 = param_2 - *(int *)(param_1 + 0x440);
  puVar5 = *(uint **)(param_1 + 0x430);
  uVar4 = *(long *)(param_1 + 0x408) - *(long *)(param_1 + 0x438) >> 2;
  uVar3 = (uint)uVar4;
  if (*(uint *)(param_1 + 0x420) <= (uint)((long)puVar5 - *(long *)(param_1 + 0x428) >> 2)) {
    __printf_chk(1,"FATAL: went past metadata storage of %d for block @ %p (%x)\n",
                 *(uint *)(param_1 + 0x420),*(long *)(param_1 + 0x438),param_2);
  }
  if (0xffff < uVar1) {
    __printf_chk(1,"FATAL: pc_delta in stored PC metadata is %x\n",uVar1);
  }
  if (0xffff < uVar3) {
    __printf_chk(1,"FATAL: translation_ptr_delta in stored PC metadata is %x\n",uVar4 & 0xffffffff);
  }
  lVar2 = *(long *)(param_1 + 0x430);
  *puVar5 = uVar1 | uVar3 << 0x10;
  *(long *)(param_1 + 0x430) = lVar2 + 4;
  return;
}


