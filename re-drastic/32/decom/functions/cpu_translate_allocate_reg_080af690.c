/*
 * Ghidra decompilation
 *
 * Function : cpu_translate_allocate_reg
 * Address  : 080af690
 * Program  : drastic
 */


u32 cpu_translate_allocate_reg
              (cpu_translate_struct *cpu_translate,u32 emulated_reg,u32 lock,u32 *fresh_allocation)

{
  uint uVar1;
  u32 mapped_reg_3;
  u32 mapped_reg_5;
  uint uVar2;
  u32 uVar3;
  u32 mapped_reg_2;
  u32 dest_2;
  u32 dest_4;
  u32 dest_3;
  uint uVar4;
  u32 *puVar5;
  arm_native_reg_struct *native_regs;
  u32 mapped_reg;
  u32 dest;
  u32 mapped_reg_1;
  u32 dest_1;
  u32 mapped_reg_4;
  ushort uVar6;
  uint uVar7;
  u32 locked_regs;
  
  uVar6 = (cpu_translate->reg_alloc).locked_regs;
  uVar7 = (uint)uVar6;
  *(undefined4 *)emulated_reg = 1;
  if ((((cpu_translate->reg_alloc).native_regs[0].mapped_reg & 0xfd) != 0xfd) ||
     (uVar3 = uVar7 & 1, (uVar6 & 1) != 0)) {
    if ((((cpu_translate->reg_alloc).native_regs[1].mapped_reg & 0xfd) == 0xfd) &&
       ((uVar6 & 2) == 0)) {
      uVar3 = 1;
    }
    else if ((((cpu_translate->reg_alloc).native_regs[2].mapped_reg & 0xfd) == 0xfd) &&
            ((uVar6 & 4) == 0)) {
      uVar3 = 2;
    }
    else if ((((cpu_translate->reg_alloc).native_regs[3].mapped_reg & 0xfd) == 0xfd) &&
            ((uVar6 & 8) == 0)) {
      uVar3 = 3;
    }
    else if ((((cpu_translate->reg_alloc).native_regs[4].mapped_reg & 0xfd) == 0xfd) &&
            ((uVar6 & 0x10) == 0)) {
      uVar3 = 4;
    }
    else if ((((cpu_translate->reg_alloc).native_regs[5].mapped_reg & 0xfd) == 0xfd) &&
            ((uVar6 & 0x20) == 0)) {
      uVar3 = 5;
    }
    else if ((((cpu_translate->reg_alloc).native_regs[6].mapped_reg & 0xfd) == 0xfd) &&
            ((uVar6 & 0x40) == 0)) {
      uVar3 = 6;
    }
    else if ((((cpu_translate->reg_alloc).native_regs[7].mapped_reg & 0xfd) == 0xfd) &&
            ((uVar6 & 0x80) == 0)) {
      uVar3 = 7;
    }
    else if ((((cpu_translate->reg_alloc).native_regs[8].mapped_reg & 0xfd) == 0xfd) &&
            ((uVar6 & 0x100) == 0)) {
      uVar3 = 8;
    }
    else if ((((cpu_translate->reg_alloc).native_regs[9].mapped_reg & 0xfd) == 0xfd) &&
            ((uVar6 & 0x200) == 0)) {
      uVar3 = 9;
    }
    else if ((((cpu_translate->reg_alloc).native_regs[10].mapped_reg & 0xfd) == 0xfd) &&
            ((uVar6 & 0x400) == 0)) {
      uVar3 = 10;
    }
    else if ((((cpu_translate->reg_alloc).native_regs[0xb].mapped_reg & 0xfd) == 0xfd) &&
            ((uVar6 & 0x800) == 0)) {
      uVar3 = 0xb;
    }
    else if ((((cpu_translate->reg_alloc).native_regs[0xc].mapped_reg & 0xfd) == 0xfd) &&
            ((uVar6 & 0x1000) == 0)) {
      uVar3 = 0xc;
    }
    else if ((((cpu_translate->reg_alloc).native_regs[0xd].mapped_reg & 0xfd) == 0xfd) &&
            ((uVar6 & 0x2000) == 0)) {
      uVar3 = 0xd;
    }
    else {
      if ((((cpu_translate->reg_alloc).native_regs[0xe].mapped_reg & 0xfd) != 0xfd) ||
         ((uVar6 & 0x4000) != 0)) {
        uVar4 = (cpu_translate->reg_alloc).allocate_pos_const;
        uVar2 = uVar4;
        do {
          uVar2 = uVar2 + 1 & 0xf;
          if (uVar4 == uVar2) {
            uVar4 = (cpu_translate->reg_alloc).allocate_pos_non_static;
            uVar2 = uVar4;
            do {
              uVar2 = uVar2 + 1 & 0xf;
              if (uVar4 == uVar2) {
                uVar4 = (cpu_translate->reg_alloc).allocate_pos_dead;
                uVar2 = uVar4;
                do {
                  uVar2 = uVar2 + 1 & 0xf;
                  if (uVar4 == uVar2) {
                    if ((uVar6 & 0x4000) == 0) {
                      uVar3 = 0xe;
                    }
                    else if ((uVar6 & 0x2000) == 0) {
                      uVar3 = 0xd;
                    }
                    else if ((uVar6 & 0x1000) == 0) {
                      uVar3 = 0xc;
                    }
                    else if ((uVar6 & 0x800) == 0) {
                      uVar3 = 0xb;
                    }
                    else if ((uVar6 & 0x400) == 0) {
                      uVar3 = 10;
                    }
                    else if ((uVar6 & 0x200) == 0) {
                      uVar3 = 9;
                    }
                    else if ((uVar6 & 0x100) == 0) {
                      uVar3 = 8;
                    }
                    else if ((uVar6 & 0x80) == 0) {
                      uVar3 = 7;
                    }
                    else if ((uVar6 & 0x40) == 0) {
                      uVar3 = 6;
                    }
                    else if ((uVar6 & 0x20) == 0) {
                      uVar3 = 5;
                    }
                    else if ((uVar6 & 0x10) == 0) {
                      uVar3 = 4;
                    }
                    else if ((uVar6 & 8) == 0) {
                      uVar3 = 3;
                    }
                    else if ((uVar6 & 4) == 0) {
                      uVar3 = 2;
                    }
                    else if ((uVar6 & 2) == 0) {
                      uVar3 = 1;
                    }
                    else {
                      uVar3 = uVar7 & 1;
                      if ((uVar6 & 1) != 0) {
                        __printf_chk(1,"FATAL: Could not allocate register to emulated reg %d!\n",
                                     0xfd);
                        return 0xff;
                      }
                    }
                    uVar7 = (uint)(cpu_translate->reg_alloc).native_regs[uVar3].mapped_reg;
                    if (uVar7 < 0xfd) {
                      (cpu_translate->reg_alloc).emulated_reg_maps_to[uVar7] = 0xff;
                      if (((cpu_translate->reg_alloc).native_regs[uVar3].dirty == '\0') ||
                         (((int)(uint)cpu_translate->current_instruction->live_registers >> uVar7 &
                          1U) == 0)) {
                        uVar6 = (cpu_translate->reg_alloc).locked_regs;
                      }
                      else {
                        puVar5 = cpu_translate->translation_ptr;
                        uVar2 = (uVar7 + 0x3fffffeb) * 4;
                        if ((int)uVar2 < 0) {
                          uVar4 = 0;
                          uVar2 = (uVar7 + 0x3fffffeb) * -4;
                        }
                        else {
                          uVar4 = 0x800000;
                        }
                        uVar6 = (cpu_translate->reg_alloc).locked_regs;
                        *puVar5 = uVar2 | uVar3 << 0xc | 0xe50b0000 | uVar4;
                        cpu_translate->translation_ptr = puVar5 + 1;
                      }
                    }
                    (cpu_translate->reg_alloc).native_regs[uVar3].mapped_reg = 0xfd;
                    (cpu_translate->reg_alloc).locked_regs = uVar6 | (ushort)(1 << uVar3);
                    return uVar3;
                  }
                  uVar1 = (uint)(cpu_translate->reg_alloc).native_regs[uVar2].mapped_reg;
                } while (((0xfc < uVar1) ||
                         (((int)(uint)cpu_translate->current_instruction->live_registers >> uVar1 &
                          1U) != 0)) || ((uVar7 & 1 << uVar2) != 0));
                uVar7 = (uint)(cpu_translate->reg_alloc).native_regs[uVar2].mapped_reg;
                if (uVar7 < 0xfd) {
                  (cpu_translate->reg_alloc).emulated_reg_maps_to[uVar7] = 0xff;
                  if (((cpu_translate->reg_alloc).native_regs[uVar2].dirty == '\0') ||
                     (((int)(uint)cpu_translate->current_instruction->live_registers >> uVar7 & 1U)
                      == 0)) {
                    uVar6 = (cpu_translate->reg_alloc).locked_regs;
                  }
                  else {
                    puVar5 = cpu_translate->translation_ptr;
                    uVar4 = (uVar7 + 0x3fffffeb) * 4;
                    if ((int)uVar4 < 0) {
                      uVar4 = (uVar7 + 0x3fffffeb) * -4;
                      uVar7 = 0;
                    }
                    else {
                      uVar7 = 0x800000;
                    }
                    uVar6 = (cpu_translate->reg_alloc).locked_regs;
                    *puVar5 = uVar4 | uVar2 << 0xc | 0xe50b0000 | uVar7;
                    cpu_translate->translation_ptr = puVar5 + 1;
                  }
                }
                (cpu_translate->reg_alloc).native_regs[uVar2].mapped_reg = 0xfd;
                (cpu_translate->reg_alloc).allocate_pos_dead = uVar2;
                (cpu_translate->reg_alloc).locked_regs = uVar6 | (ushort)(1 << uVar2);
                return uVar2;
              }
            } while (((cpu_translate->reg_alloc).native_regs[uVar2].static_mapping != 0xff) ||
                    ((uVar7 & 1 << uVar2) != 0));
            uVar7 = (uint)(cpu_translate->reg_alloc).native_regs[uVar2].mapped_reg;
            if (uVar7 < 0xfd) {
              (cpu_translate->reg_alloc).emulated_reg_maps_to[uVar7] = 0xff;
              if (((cpu_translate->reg_alloc).native_regs[uVar2].dirty == '\0') ||
                 (((int)(uint)cpu_translate->current_instruction->live_registers >> uVar7 & 1U) == 0
                 )) {
                uVar6 = (cpu_translate->reg_alloc).locked_regs;
              }
              else {
                puVar5 = cpu_translate->translation_ptr;
                uVar4 = (uVar7 + 0x3fffffeb) * 4;
                uVar6 = (cpu_translate->reg_alloc).locked_regs;
                if ((int)uVar4 < 0) {
                  uVar4 = (uVar7 + 0x3fffffeb) * -4;
                  uVar7 = 0;
                }
                else {
                  uVar7 = 0x800000;
                }
                dest_1 = uVar2 << 0xc | 0xe50b0000 | uVar7;
                *puVar5 = uVar4 | dest_1;
                cpu_translate->translation_ptr = puVar5 + 1;
              }
            }
            (cpu_translate->reg_alloc).native_regs[uVar2].mapped_reg = 0xfd;
            (cpu_translate->reg_alloc).allocate_pos_non_static = uVar2;
            (cpu_translate->reg_alloc).locked_regs = uVar6 | (ushort)(1 << uVar2);
            return uVar2;
          }
        } while (((cpu_translate->reg_alloc).native_regs[uVar2].mapped_reg != 0xfe) ||
                ((uVar7 & 1 << uVar2) != 0));
        uVar7 = (uint)(cpu_translate->reg_alloc).native_regs[uVar2].mapped_reg;
        if (uVar7 < 0xfd) {
          (cpu_translate->reg_alloc).emulated_reg_maps_to[uVar7] = 0xff;
          if (((cpu_translate->reg_alloc).native_regs[uVar2].dirty == '\0') ||
             (((int)(uint)cpu_translate->current_instruction->live_registers >> uVar7 & 1U) == 0)) {
            uVar6 = (cpu_translate->reg_alloc).locked_regs;
          }
          else {
            puVar5 = cpu_translate->translation_ptr;
            uVar4 = (uVar7 + 0x3fffffeb) * 4;
            uVar6 = (cpu_translate->reg_alloc).locked_regs;
            if ((int)uVar4 < 0) {
              uVar4 = (uVar7 + 0x3fffffeb) * -4;
              uVar7 = 0;
            }
            else {
              uVar7 = 0x800000;
            }
            dest = uVar2 << 0xc | 0xe50b0000 | uVar7;
            *puVar5 = uVar4 | dest;
            cpu_translate->translation_ptr = puVar5 + 1;
          }
        }
        (cpu_translate->reg_alloc).native_regs[uVar2].mapped_reg = 0xfd;
        (cpu_translate->reg_alloc).allocate_pos_const = uVar2;
        (cpu_translate->reg_alloc).locked_regs = uVar6 | (ushort)(1 << uVar2);
        return uVar2;
      }
      uVar3 = 0xe;
    }
  }
  uVar7 = (uint)(cpu_translate->reg_alloc).native_regs[uVar3].mapped_reg;
  if (uVar7 < 0xfd) {
    (cpu_translate->reg_alloc).emulated_reg_maps_to[uVar7] = 0xff;
    if (((cpu_translate->reg_alloc).native_regs[uVar3].dirty == '\0') ||
       (((int)(uint)cpu_translate->current_instruction->live_registers >> uVar7 & 1U) == 0)) {
      uVar6 = (cpu_translate->reg_alloc).locked_regs;
    }
    else {
      puVar5 = cpu_translate->translation_ptr;
      uVar2 = (uVar7 + 0x3fffffeb) * 4;
      if ((int)uVar2 < 0) {
        uVar4 = 0;
        uVar2 = (uVar7 + 0x3fffffeb) * -4;
      }
      else {
        uVar4 = 0x800000;
      }
      uVar6 = (cpu_translate->reg_alloc).locked_regs;
      *puVar5 = uVar2 | uVar3 << 0xc | 0xe50b0000 | uVar4;
      cpu_translate->translation_ptr = puVar5 + 1;
    }
  }
  (cpu_translate->reg_alloc).native_regs[uVar3].mapped_reg = 0xfd;
  (cpu_translate->reg_alloc).locked_regs = uVar6 | (ushort)(1 << uVar3);
  return uVar3;
}


