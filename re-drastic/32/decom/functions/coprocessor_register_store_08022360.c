/*
 * Ghidra decompilation
 *
 * Function : coprocessor_register_store
 * Address  : 08022360
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void coprocessor_register_store
               (coprocessor_struct *coprocessor,u32 cn,u32 cm,u32 operation,u32 value)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  u32 control;
  uint uVar5;
  u32 old_exception_vector_offset;
  u32 dtcm_in_mapped_memory;
  u32 control_2;
  u32 control_1;
  
  if (cn == 7) {
    if ((cm == 0 && operation == 4) || (cm == 8 && operation == 2)) {
      coprocessor->cpu->state = '\x01';
    }
  }
  else if (cn == 9) {
    if (cm == 1) {
      if (operation == 0) {
        uVar3 = 0x200 << (((value & 0xfffff03e) << 0x1a) >> 0x1b);
        coprocessor->dtcm_control = value & 0xfffff03e;
        coprocessor->dtcm_offset = value & 0xfffff000;
        coprocessor->dtcm_virtual_size = uVar3;
        if (uVar3 < 0x1000) {
          uVar3 = 0x1000;
          coprocessor->dtcm_virtual_size = 0x1000;
        }
        remap_dtcm(coprocessor->memory,value & 0xfffff000,uVar3);
        bVar2 = coprocessor->dtcm_in_mapped_memory;
        bVar1 = coprocessor->dtcm_offset + coprocessor->dtcm_virtual_size < 0x4000000;
        dtcm_in_mapped_memory = (u32)bVar1;
        coprocessor->dtcm_in_mapped_memory = bVar1;
        if (dtcm_in_mapped_memory != bVar2) {
          __printf_chk(1,"DTCM in mapped memory status changed (to %d)\n");
          return;
        }
      }
      else if (operation == 1) {
        coprocessor->itcm_control = value & 0x3e;
        uVar3 = 0x200 << ((value & 0x3e) >> 1);
        if (uVar3 < 0x1000) {
          uVar3 = 0x1000;
          coprocessor->itcm_virtual_size = 0x1000;
        }
        else {
          coprocessor->itcm_virtual_size = uVar3;
        }
        remap_itcm(coprocessor->memory,uVar3);
        return;
      }
    }
  }
  else if ((cn == 1) && ((cm | operation) == 0)) {
    uVar3 = coprocessor->control;
    if (((uVar3 ^ value) & 0x2000) != 0) {
      __printf_chk(1,"Changing coprocessor exception vector offset to %x\n",
                   ((int)(value << 0x12) >> 0x1f) * 0x10000);
      uVar3 = coprocessor->control;
    }
    uVar5 = coprocessor->exception_vector_offset;
    uVar4 = value & 0xff085 | uVar3 & 0xfff00f7a;
    uVar3 = value & 0x2000;
    if (uVar3 != 0) {
      uVar3 = 0xffff0000;
    }
    coprocessor->exception_vector_offset = uVar3;
    coprocessor->control = uVar4;
    control = uVar4 << 0xc;
    control = control >> 0x1f;
    coprocessor->dtcm_enable = (uVar4 << 0xf) >> 0x1f;
    coprocessor->dtcm_mode = (uVar4 << 0xe) >> 0x1f;
    coprocessor->itcm_enable = (uVar4 << 0xd) >> 0x1f;
    coprocessor->itcm_mode = control;
    if (uVar5 != uVar3) {
      __printf_chk(1,"Changing exception vector offset from %08x to %08x\n");
      return;
    }
  }
  return;
}


