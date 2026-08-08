/*
 * Ghidra decompilation
 *
 * Function : cpu_translate_normalize_reg_allocation
 * Address  : 080af300
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void cpu_translate_normalize_reg_allocation(cpu_translate_struct *cpu_translate)

{
  byte bVar1;
  int iVar2;
  cpu_translate_register_allocation_struct *pcVar3;
  arm_native_reg_struct *native_reg;
  uint uVar4;
  u32 mapped_reg;
  u32 mapped_reg_1;
  uint uVar5;
  u8 *emulated_reg_maps_to;
  u8 *emulated_reg_maps_to_1;
  int iVar6;
  cpu_translate_register_allocation_struct *pcVar7;
  arm_native_reg_struct *native_regs;
  u32 *puVar8;
  uint uVar9;
  cpu_translate_struct *pcVar10;
  u32 mapped_reg_2;
  uint local_2c;
  
  iVar2 = 0;
  pcVar7 = &cpu_translate->reg_alloc;
  pcVar3 = pcVar7;
  pcVar10 = cpu_translate;
  do {
    if ((pcVar3->native_regs[0].static_mapping == 0xff) &&
       (pcVar3->native_regs[0].mapped_reg < 0xfd)) {
      uVar4 = (uint)(pcVar10->reg_alloc).native_regs[0].mapped_reg;
      if ((uVar4 < 0xfd) &&
         (((cpu_translate->reg_alloc).emulated_reg_maps_to[uVar4] = 0xff,
          (pcVar10->reg_alloc).native_regs[0].dirty != '\0' &&
          (((int)(uint)cpu_translate->current_instruction->live_registers >> uVar4 & 1U) != 0)))) {
        puVar8 = cpu_translate->translation_ptr;
        uVar5 = (uVar4 + 0x3fffffeb) * 4;
        if ((int)uVar5 < 0) {
          uVar9 = 0;
          uVar5 = (uVar4 + 0x3fffffeb) * -4;
        }
        else {
          uVar9 = 0x800000;
        }
        *puVar8 = uVar5 | iVar2 << 0xc | 0xe50b0000U | uVar9;
        cpu_translate->translation_ptr = puVar8 + 1;
      }
      (pcVar10->reg_alloc).native_regs[0].mapped_reg = 0xff;
    }
    iVar2 = iVar2 + 1;
    pcVar3 = (cpu_translate_register_allocation_struct *)(pcVar3->native_regs + 1);
    pcVar10 = (cpu_translate_struct *)(pcVar10->translation_stub_buffer + 2);
  } while (iVar2 != 0xf);
  iVar2 = 0;
  pcVar3 = pcVar7;
  pcVar10 = cpu_translate;
  do {
    bVar1 = pcVar3->native_regs[0].static_mapping;
    uVar4 = (uint)bVar1;
    if ((uVar4 != 0xff) && (pcVar3->native_regs[0].mapped_reg != uVar4)) {
      uVar9 = (uint)(pcVar10->reg_alloc).native_regs[0].mapped_reg;
      uVar5 = (uint)(cpu_translate->reg_alloc).emulated_reg_maps_to[uVar4];
      iVar6 = uVar4 - uVar9;
      if (iVar6 != 0) {
        iVar6 = 1;
      }
      if (0xfc < uVar9) {
        iVar6 = 0;
      }
      if (((iVar6 != 0) &&
          ((cpu_translate->reg_alloc).emulated_reg_maps_to[uVar9] = 0xff,
          (pcVar10->reg_alloc).native_regs[0].dirty != '\0')) &&
         (((int)(uint)cpu_translate->current_instruction->live_registers >> uVar9 & 1U) != 0)) {
        puVar8 = cpu_translate->translation_ptr;
        local_2c = (uVar9 + 0x3fffffeb) * 4;
        if ((int)local_2c < 0) {
          local_2c = (uVar9 + 0x3fffffeb) * -4;
          uVar9 = 0;
        }
        else {
          uVar9 = 0x800000;
        }
        *puVar8 = local_2c | iVar2 << 0xc | 0xe50b0000U | uVar9;
        cpu_translate->translation_ptr = puVar8 + 1;
      }
      if (uVar4 < 0xfd) {
        (cpu_translate->reg_alloc).emulated_reg_maps_to[uVar4] = (u8)iVar2;
      }
      (pcVar10->reg_alloc).native_regs[0].mapped_reg = bVar1;
      if (uVar5 < 0xfd) {
        pcVar7->native_regs[uVar5].mapped_reg = 0xff;
      }
      else {
        puVar8 = cpu_translate->translation_ptr;
        iVar6 = pcVar3->native_regs[0].static_mapping - 0x15;
        uVar4 = iVar6 * 4;
        if ((int)uVar4 < 0) {
          uVar5 = 0;
          uVar4 = iVar6 * -4;
        }
        else {
          uVar5 = 0x800000;
        }
        *puVar8 = uVar4 | iVar2 << 0xc | 0xe51b0000U | uVar5;
        cpu_translate->translation_ptr = puVar8 + 1;
      }
    }
    iVar2 = iVar2 + 1;
    pcVar3 = (cpu_translate_register_allocation_struct *)(pcVar3->native_regs + 1);
    pcVar10 = (cpu_translate_struct *)(pcVar10->translation_stub_buffer + 2);
  } while (iVar2 != 0xf);
  return;
}


