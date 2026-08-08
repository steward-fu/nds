/*
 * Ghidra decompilation
 *
 * Function : SzSkeepData
 * Address  : 08004dec
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

SRes SzSkeepData(CSzData *sd)

{
  SRes SVar1;
  int __result__;
  uint uVar2;
  bool bVar3;
  UInt64 size;
  int local_24;
  
  local_24 = __stack_chk_guard;
  SVar1 = SzReadNumber(sd,&size);
  if (SVar1 == 0) {
    uVar2 = sd->Size;
    bVar3 = size._4_4_ != 0;
    if ((bVar3 || uVar2 <= (uint)size) && (bVar3 || (uint)size != uVar2)) {
      SVar1 = 0x10;
    }
    if (!bVar3 && uVar2 > (uint)size || !bVar3 && (uint)size == uVar2) {
      sd->Size = uVar2 - (uint)size;
      sd->Data = sd->Data + (uint)size;
    }
  }
  if (local_24 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return SVar1;
}


