/*
 * Ghidra decompilation
 *
 * Function : unarchive_get_progress
 * Address  : 080c7180
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

u32 unarchive_get_progress(void)

{
  u32 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (((uint)g_current_unpack_size | g_current_unpack_size._4_4_) == 0) {
    return (uint)g_current_unpack_size;
  }
  uVar2 = CONCAT44(g_current_unpack_done._4_4_ * 3 +
                   (uint)CARRY4((uint)g_current_unpack_done,(uint)g_current_unpack_done) +
                   (uint)CARRY4((uint)g_current_unpack_done * 2,(uint)g_current_unpack_done),
                   (uint)g_current_unpack_done * 3);
  uVar3 = VectorShiftLeft(uVar2,5,0x40,0);
  uVar2 = VectorAdd(uVar2,uVar3,8);
  uVar1 = __aeabi_uldivmod((uint)uVar2 + (uint)g_current_unpack_done,
                           (int)((ulonglong)uVar2 >> 0x20) + g_current_unpack_done._4_4_ +
                           (uint)CARRY4((uint)uVar2,(uint)g_current_unpack_done),
                           (uint)g_current_unpack_size,g_current_unpack_size._4_4_);
  return uVar1;
}


