/*
 * Ghidra decompilation
 *
 * Function : SzReadNumber32
 * Address  : 08004d88
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

SRes SzReadNumber32(CSzData *sd,UInt32 *value)

{
  SRes SVar1;
  int __result__;
  bool bVar2;
  UInt64 value64;
  int local_1c;
  
  local_1c = __stack_chk_guard;
  SVar1 = SzReadNumber(sd,&value64);
  if (SVar1 == 0) {
    bVar2 = value64._4_4_ != 0;
    if ((bVar2 || 0x3fffffe < (uint)value64) && (bVar2 || (uint)value64 != 0x3ffffff)) {
      SVar1 = 4;
    }
    if (!bVar2 && 0x3fffffe >= (uint)value64 || !bVar2 && (uint)value64 == 0x3ffffff) {
      *value = (uint)value64;
    }
  }
  if (local_1c != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return SVar1;
}


