/*
 * Ghidra decompilation
 *
 * Function : cpu_translate_setup_memory_map_offset
 * Address  : 080b79f4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */
/* Local variable memory_map_offset_value:u32[r1:4] conflicts with parameter, skipped. */

void cpu_translate_setup_memory_map_offset
               (cpu_translate_struct *cpu_translate,u32 memory_map_offset)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = memory_map_offset;
  if (memory_map_offset < 0x100) {
    uVar2 = 0x10;
LAB_080b7a34:
    cpu_translate->memory_map_offset = memory_map_offset;
    cpu_translate->memory_map_offset_value = uVar3;
    cpu_translate->memory_map_offset_shift = uVar2;
    return;
  }
  if ((memory_map_offset & 3) == 0) {
    iVar1 = 0;
    do {
      uVar3 = uVar3 >> 2;
      iVar1 = iVar1 + 2;
      if (uVar3 < 0x100) {
        uVar2 = 0x20U - iVar1 >> 1;
        goto LAB_080b7a34;
      }
    } while ((uVar3 & 3) == 0);
  }
  __printf_chk(1,"ERROR: memory_map_offset %x doesn\'t work as an ARM immediate!\n",
               memory_map_offset);
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


