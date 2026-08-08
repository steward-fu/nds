/*
 * Ghidra decompilation
 *
 * Function : SzWaitAttribute
 * Address  : 08004e64
 * Program  : drastic
 */


SRes SzWaitAttribute(CSzData *sd,UInt64 attribute)

{
  SRes SVar1;
  int __result__;
  uint in_r2;
  uint in_r3;
  UInt64 type;
  int local_1c;
  
  local_1c = __stack_chk_guard;
  while( true ) {
    SVar1 = SzReadNumber(sd,&type);
    if ((SVar1 != 0) || (type._4_4_ == in_r3 && (uint)type == in_r2)) goto LAB_08004ed0;
    if (((uint)type | type._4_4_) == 0) break;
    SVar1 = SzSkeepData(sd);
    if (SVar1 != 0) {
LAB_08004ed0:
      if (local_1c != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return SVar1;
    }
  }
  SVar1 = 0x10;
  goto LAB_08004ed0;
}


