/*
 * Ghidra decompilation
 *
 * Function : ceil_div
 * Address  : 08043520
 * Program  : drastic
 */


s64 ceil_div(s64 a,s64 b)

{
  uint in_r0;
  int in_r1;
  uint in_r2;
  int in_r3;
  s64 sVar1;
  
  if (in_r1 < 0) {
    if (in_r3 < 0) {
      sVar1 = __aeabi_ldivmod(in_r0 + in_r2 + 1,
                              in_r1 + in_r3 + (uint)(0xfffffffe < in_r2) +
                              (uint)CARRY4(in_r0,in_r2 + 1));
      return sVar1;
    }
  }
  else if (-1 < in_r3) {
    sVar1 = __aeabi_ldivmod(in_r0 + (in_r2 - 1),
                            in_r1 + (in_r3 - (uint)(in_r2 == 0)) + (uint)CARRY4(in_r0,in_r2 - 1));
    return sVar1;
  }
  sVar1 = __aeabi_ldivmod();
  return sVar1;
}


