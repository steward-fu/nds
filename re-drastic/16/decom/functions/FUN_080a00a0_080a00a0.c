/*
 * Ghidra decompilation
 *
 * Function : FUN_080a00a0
 * Address  : 080a00a0
 * Program  : drastic16
 */


uint FUN_080a00a0(byte param_1)

{
  uint uVar1;
  
  if (param_1 == 0x69) {
    uVar1 = 0x49;
  }
  else {
    uVar1 = toupper((uint)param_1);
    uVar1 = uVar1 & 0xff;
  }
  return uVar1;
}


