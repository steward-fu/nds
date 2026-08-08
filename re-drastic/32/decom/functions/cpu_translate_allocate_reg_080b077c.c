/*
 * Ghidra decompilation
 *
 * Function : cpu_translate_allocate_reg
 * Address  : 080b077c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

u32 cpu_translate_allocate_reg
              (cpu_translate_struct *cpu_translate,u32 emulated_reg,u32 lock,u32 *fresh_allocation)

{
  ushort uVar1;
  u8 uVar2;
  uint uVar3;
  u32 mapped_reg;
  u32 uVar4;
  u32 mapped_reg_5;
  uint uVar5;
  u32 mapped_reg_3;
  u32 dest_3;
  u32 dest_4;
  u8 *emulated_reg_maps_to;
  u8 *emulated_reg_maps_to_1;
  u8 *emulated_reg_maps_to_2;
  u8 *emulated_reg_maps_to_4;
  u8 *emulated_reg_maps_to_5;
  u8 *emulated_reg_maps_to_3;
  u32 *puVar6;
  uint uVar7;
  arm_native_reg_struct *native_regs;
  cpu_translate_register_allocation_struct *reg_alloc;
  u32 mapped_reg_1;
  u32 dest;
  u32 mapped_reg_2;
  u32 dest_1;
  u32 mapped_reg_6;
  u32 mapped_reg_4;
  u32 dest_2;
  uint uVar8;
  int iVar9;
  
  uVar1 = (cpu_translate->reg_alloc).locked_regs;
  uVar8 = (uint)uVar1;
  if ((emulated_reg < 0xfd) &&
     (uVar3 = (uint)(cpu_translate->reg_alloc).emulated_reg_maps_to[emulated_reg], uVar3 != 0xff)) {
    (cpu_translate->reg_alloc).locked_regs = uVar1 | (ushort)(lock << uVar3);
    *fresh_allocation = 0;
    return uVar3;
  }
  *fresh_allocation = 1;
  uVar2 = (u8)emulated_reg;
  if ((((cpu_translate->reg_alloc).native_regs[0].mapped_reg & 0xfd) != 0xfd) ||
     (uVar3 = uVar8 & 1, (uVar1 & 1) != 0)) {
    if ((((cpu_translate->reg_alloc).native_regs[1].mapped_reg & 0xfd) == 0xfd) &&
       ((uVar1 & 2) == 0)) {
      uVar3 = 1;
    }
    else if ((((cpu_translate->reg_alloc).native_regs[2].mapped_reg & 0xfd) == 0xfd) &&
            ((uVar1 & 4) == 0)) {
      uVar3 = 2;
    }
    else if ((((cpu_translate->reg_alloc).native_regs[3].mapped_reg & 0xfd) == 0xfd) &&
            ((uVar1 & 8) == 0)) {
      uVar3 = 3;
    }
    else if ((((cpu_translate->reg_alloc).native_regs[4].mapped_reg & 0xfd) == 0xfd) &&
            ((uVar1 & 0x10) == 0)) {
      uVar3 = 4;
    }
    else if ((((cpu_translate->reg_alloc).native_regs[5].mapped_reg & 0xfd) == 0xfd) &&
            ((uVar1 & 0x20) == 0)) {
      uVar3 = 5;
    }
    else if ((((cpu_translate->reg_alloc).native_regs[6].mapped_reg & 0xfd) == 0xfd) &&
            ((uVar1 & 0x40) == 0)) {
      uVar3 = 6;
    }
    else if ((((cpu_translate->reg_alloc).native_regs[7].mapped_reg & 0xfd) == 0xfd) &&
            ((uVar1 & 0x80) == 0)) {
      uVar3 = 7;
    }
    else if ((((cpu_translate->reg_alloc).native_regs[8].mapped_reg & 0xfd) == 0xfd) &&
            ((uVar1 & 0x100) == 0)) {
      uVar3 = 8;
    }
    else if ((((cpu_translate->reg_alloc).native_regs[9].mapped_reg & 0xfd) == 0xfd) &&
            ((uVar1 & 0x200) == 0)) {
      uVar3 = 9;
    }
    else if ((((cpu_translate->reg_alloc).native_regs[10].mapped_reg & 0xfd) == 0xfd) &&
            ((uVar1 & 0x400) == 0)) {
      uVar3 = 10;
    }
    else if ((((cpu_translate->reg_alloc).native_regs[0xb].mapped_reg & 0xfd) == 0xfd) &&
            ((uVar1 & 0x800) == 0)) {
      uVar3 = 0xb;
    }
    else if ((((cpu_translate->reg_alloc).native_regs[0xc].mapped_reg & 0xfd) == 0xfd) &&
            ((uVar1 & 0x1000) == 0)) {
      uVar3 = 0xc;
    }
    else if ((((cpu_translate->reg_alloc).native_regs[0xd].mapped_reg & 0xfd) == 0xfd) &&
            ((uVar1 & 0x2000) == 0)) {
      uVar3 = 0xd;
    }
    else {
      if ((((cpu_translate->reg_alloc).native_regs[0xe].mapped_reg & 0xfd) != 0xfd) ||
         ((uVar1 & 0x4000) != 0)) {
        uVar7 = (cpu_translate->reg_alloc).allocate_pos_const;
        uVar3 = uVar7;
        do {
          uVar3 = uVar3 + 1 & 0xf;
          if (uVar7 == uVar3) {
            uVar7 = (cpu_translate->reg_alloc).allocate_pos_non_static;
            uVar3 = uVar7;
            do {
              uVar3 = uVar3 + 1 & 0xf;
              if (uVar3 == uVar7) {
                uVar7 = (cpu_translate->reg_alloc).allocate_pos_dead;
                uVar3 = uVar7;
                do {
                  uVar3 = uVar3 + 1 & 0xf;
                  if (uVar3 == uVar7) {
                    if ((uVar1 & 0x4000) == 0) {
                      uVar4 = 0xe;
                    }
                    else if ((uVar1 & 0x2000) == 0) {
                      uVar4 = 0xd;
                    }
                    else if ((uVar1 & 0x1000) == 0) {
                      uVar4 = 0xc;
                    }
                    else if ((uVar1 & 0x800) == 0) {
                      uVar4 = 0xb;
                    }
                    else if ((uVar1 & 0x400) == 0) {
                      uVar4 = 10;
                    }
                    else if ((uVar1 & 0x200) == 0) {
                      uVar4 = 9;
                    }
                    else if ((uVar1 & 0x100) == 0) {
                      uVar4 = 8;
                    }
                    else if ((uVar1 & 0x80) == 0) {
                      uVar4 = 7;
                    }
                    else if ((uVar1 & 0x40) == 0) {
                      uVar4 = 6;
                    }
                    else if ((uVar1 & 0x20) == 0) {
                      uVar4 = 5;
                    }
                    else if ((uVar1 & 0x10) == 0) {
                      uVar4 = 4;
                    }
                    else if ((uVar1 & 8) == 0) {
                      uVar4 = 3;
                    }
                    else if ((uVar1 & 4) == 0) {
                      uVar4 = 2;
                    }
                    else if ((uVar1 & 2) == 0) {
                      uVar4 = 1;
                    }
                    else {
                      uVar4 = uVar8 & 1;
                      if ((uVar1 & 1) != 0) {
                        __printf_chk(1,"FATAL: Could not allocate register to emulated reg %d!\n",
                                     emulated_reg);
                        return 0xff;
                      }
                    }
                    uVar8 = (uint)(cpu_translate->reg_alloc).native_regs[uVar4].mapped_reg;
                    iVar9 = emulated_reg - uVar8;
                    if (iVar9 != 0) {
                      iVar9 = 1;
                    }
                    if (0xfc < uVar8) {
                      iVar9 = 0;
                    }
                    if (((iVar9 != 0) &&
                        ((cpu_translate->reg_alloc).emulated_reg_maps_to[uVar8] = 0xff,
                        (cpu_translate->reg_alloc).native_regs[uVar4].dirty != '\0')) &&
                       (((int)(uint)cpu_translate->current_instruction->live_registers >> uVar8 & 1U
                        ) != 0)) {
                      puVar6 = cpu_translate->translation_ptr;
                      uVar3 = (uVar8 + 0x3fffffeb) * 4;
                      if ((int)uVar3 < 0) {
                        uVar7 = 0;
                        uVar3 = (uVar8 + 0x3fffffeb) * -4;
                      }
                      else {
                        uVar7 = 0x800000;
                      }
                      *puVar6 = uVar3 | uVar4 << 0xc | 0xe50b0000 | uVar7;
                      cpu_translate->translation_ptr = puVar6 + 1;
                    }
                    if (emulated_reg < 0xfd) {
                      (cpu_translate->reg_alloc).emulated_reg_maps_to[emulated_reg] = (u8)uVar4;
                    }
                    (cpu_translate->reg_alloc).native_regs[uVar4].mapped_reg = uVar2;
                    (cpu_translate->reg_alloc).locked_regs =
                         (cpu_translate->reg_alloc).locked_regs | (ushort)(lock << uVar4);
                    return uVar4;
                  }
                  uVar5 = (uint)(cpu_translate->reg_alloc).native_regs[uVar3].mapped_reg;
                } while (((0xfc < uVar5) ||
                         (((int)(uint)cpu_translate->current_instruction->live_registers >> uVar5 &
                          1U) != 0)) || ((uVar8 & 1 << uVar3) != 0));
                uVar8 = (uint)(cpu_translate->reg_alloc).native_regs[uVar3].mapped_reg;
                iVar9 = emulated_reg - uVar8;
                if (iVar9 != 0) {
                  iVar9 = 1;
                }
                if (0xfc < uVar8) {
                  iVar9 = 0;
                }
                if (((iVar9 != 0) &&
                    ((cpu_translate->reg_alloc).emulated_reg_maps_to[uVar8] = 0xff,
                    (cpu_translate->reg_alloc).native_regs[uVar3].dirty != '\0')) &&
                   (((int)(uint)cpu_translate->current_instruction->live_registers >> uVar8 & 1U) !=
                    0)) {
                  puVar6 = cpu_translate->translation_ptr;
                  uVar7 = (uVar8 + 0x3fffffeb) * 4;
                  if ((int)uVar7 < 0) {
                    uVar7 = (uVar8 + 0x3fffffeb) * -4;
                    uVar8 = 0;
                  }
                  else {
                    uVar8 = 0x800000;
                  }
                  dest_2 = uVar3 << 0xc | 0xe50b0000 | uVar8;
                  *puVar6 = uVar7 | dest_2;
                  cpu_translate->translation_ptr = puVar6 + 1;
                }
                if (emulated_reg < 0xfd) {
                  (cpu_translate->reg_alloc).emulated_reg_maps_to[emulated_reg] = (u8)uVar3;
                }
                (cpu_translate->reg_alloc).native_regs[uVar3].mapped_reg = uVar2;
                (cpu_translate->reg_alloc).allocate_pos_dead = uVar3;
                (cpu_translate->reg_alloc).locked_regs =
                     (cpu_translate->reg_alloc).locked_regs | (ushort)(lock << uVar3);
                return uVar3;
              }
            } while (((cpu_translate->reg_alloc).native_regs[uVar3].static_mapping != 0xff) ||
                    ((uVar8 & 1 << uVar3) != 0));
            uVar8 = (uint)(cpu_translate->reg_alloc).native_regs[uVar3].mapped_reg;
            iVar9 = emulated_reg - uVar8;
            if (iVar9 != 0) {
              iVar9 = 1;
            }
            if (0xfc < uVar8) {
              iVar9 = 0;
            }
            if (((iVar9 != 0) &&
                ((cpu_translate->reg_alloc).emulated_reg_maps_to[uVar8] = 0xff,
                (cpu_translate->reg_alloc).native_regs[uVar3].dirty != '\0')) &&
               (((int)(uint)cpu_translate->current_instruction->live_registers >> uVar8 & 1U) != 0))
            {
              puVar6 = cpu_translate->translation_ptr;
              uVar7 = (uVar8 + 0x3fffffeb) * 4;
              if ((int)uVar7 < 0) {
                uVar7 = (uVar8 + 0x3fffffeb) * -4;
                uVar8 = 0;
              }
              else {
                uVar8 = 0x800000;
              }
              dest_1 = uVar3 << 0xc | 0xe50b0000 | uVar8;
              *puVar6 = uVar7 | dest_1;
              cpu_translate->translation_ptr = puVar6 + 1;
            }
            if (emulated_reg < 0xfd) {
              (cpu_translate->reg_alloc).emulated_reg_maps_to[emulated_reg] = (u8)uVar3;
            }
            (cpu_translate->reg_alloc).native_regs[uVar3].mapped_reg = uVar2;
            (cpu_translate->reg_alloc).allocate_pos_non_static = uVar3;
            (cpu_translate->reg_alloc).locked_regs =
                 (cpu_translate->reg_alloc).locked_regs | (ushort)(lock << uVar3);
            return uVar3;
          }
        } while (((cpu_translate->reg_alloc).native_regs[uVar3].mapped_reg != 0xfe) ||
                ((uVar8 & 1 << uVar3) != 0));
        uVar8 = (uint)(cpu_translate->reg_alloc).native_regs[uVar3].mapped_reg;
        iVar9 = emulated_reg - uVar8;
        if (iVar9 != 0) {
          iVar9 = 1;
        }
        if (0xfc < uVar8) {
          iVar9 = 0;
        }
        if (((iVar9 != 0) &&
            ((cpu_translate->reg_alloc).emulated_reg_maps_to[uVar8] = 0xff,
            (cpu_translate->reg_alloc).native_regs[uVar3].dirty != '\0')) &&
           (((int)(uint)cpu_translate->current_instruction->live_registers >> uVar8 & 1U) != 0)) {
          puVar6 = cpu_translate->translation_ptr;
          uVar7 = (uVar8 + 0x3fffffeb) * 4;
          if ((int)uVar7 < 0) {
            uVar7 = (uVar8 + 0x3fffffeb) * -4;
            uVar8 = 0;
          }
          else {
            uVar8 = 0x800000;
          }
          dest = uVar3 << 0xc | 0xe50b0000 | uVar8;
          *puVar6 = uVar7 | dest;
          cpu_translate->translation_ptr = puVar6 + 1;
        }
        if (emulated_reg < 0xfd) {
          (cpu_translate->reg_alloc).emulated_reg_maps_to[emulated_reg] = (u8)uVar3;
        }
        (cpu_translate->reg_alloc).native_regs[uVar3].mapped_reg = uVar2;
        (cpu_translate->reg_alloc).allocate_pos_const = uVar3;
        (cpu_translate->reg_alloc).locked_regs =
             (cpu_translate->reg_alloc).locked_regs | (ushort)(lock << uVar3);
        return uVar3;
      }
      uVar3 = 0xe;
    }
  }
  uVar8 = (uint)(cpu_translate->reg_alloc).native_regs[uVar3].mapped_reg;
  iVar9 = emulated_reg - uVar8;
  if (iVar9 != 0) {
    iVar9 = 1;
  }
  if (0xfc < uVar8) {
    iVar9 = 0;
  }
  if (((iVar9 != 0) &&
      ((cpu_translate->reg_alloc).emulated_reg_maps_to[uVar8] = 0xff,
      (cpu_translate->reg_alloc).native_regs[uVar3].dirty != '\0')) &&
     (((int)(uint)cpu_translate->current_instruction->live_registers >> uVar8 & 1U) != 0)) {
    puVar6 = cpu_translate->translation_ptr;
    uVar7 = (uVar8 + 0x3fffffeb) * 4;
    if ((int)uVar7 < 0) {
      uVar5 = 0;
      uVar7 = (uVar8 + 0x3fffffeb) * -4;
    }
    else {
      uVar5 = 0x800000;
    }
    *puVar6 = uVar7 | uVar3 << 0xc | 0xe50b0000 | uVar5;
    cpu_translate->translation_ptr = puVar6 + 1;
  }
  if (emulated_reg < 0xfd) {
    (cpu_translate->reg_alloc).emulated_reg_maps_to[emulated_reg] = (u8)uVar3;
  }
  (cpu_translate->reg_alloc).native_regs[uVar3].mapped_reg = uVar2;
  (cpu_translate->reg_alloc).locked_regs =
       (cpu_translate->reg_alloc).locked_regs | (ushort)(lock << uVar3);
  return uVar3;
}


