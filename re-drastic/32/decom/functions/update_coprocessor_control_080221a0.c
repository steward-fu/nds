/*
 * Ghidra decompilation
 *
 * Function : update_coprocessor_control
 * Address  : 080221a0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

u32 update_coprocessor_control(coprocessor_struct *coprocessor)

{
  uint uVar1;
  u32 control;
  u32 old_exception_vector_offset;
  u32 uVar2;
  bool bVar3;
  
  uVar1 = coprocessor->control;
  uVar2 = uVar1 & 0x2000;
  if (uVar2 != 0) {
    uVar2 = 0xffff0000;
  }
  bVar3 = coprocessor->exception_vector_offset != uVar2;
  coprocessor->exception_vector_offset = uVar2;
  coprocessor->dtcm_enable = (uVar1 << 0xf) >> 0x1f;
  coprocessor->dtcm_mode = (uVar1 << 0xe) >> 0x1f;
  coprocessor->itcm_enable = (uVar1 << 0xd) >> 0x1f;
  coprocessor->itcm_mode = (uVar1 << 0xc) >> 0x1f;
  if (bVar3) {
    __printf_chk(1,"Changing exception vector offset from %08x to %08x\n");
  }
  return (uint)bVar3;
}


