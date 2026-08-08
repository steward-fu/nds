/*
 * Ghidra decompilation
 *
 * Function : cpu_translate_conditional_skip
 * Address  : 001932d0
 * Program  : drastic64
 */


uint * cpu_translate_conditional_skip(long param_1,ulong param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  
  uVar3 = (uint)(param_2 >> 0x1c) & 0xf;
  if (uVar3 < 0xe) {
    puVar2 = *(uint **)(param_1 + 0x408);
    puVar1 = (uint *)((long)puVar2 + 3);
    if (-1 < (long)puVar2) {
      puVar1 = puVar2;
    }
    *puVar2 = (-(int)((long)puVar1 >> 2) & 0x7ffffU) << 5 | uVar3 ^ 1 | 0x54000000;
    *(uint **)(param_1 + 0x408) = puVar2 + 1;
    return puVar2;
  }
  return (uint *)0x0;
}


