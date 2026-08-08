/*
 * Ghidra decompilation
 *
 * Function : GetCRC15
 * Address  : 001c2360
 * Program  : drastic64
 */


/* RawRead::GetCRC15(bool) */

ushort __thiscall RawRead::GetCRC15(RawRead *this,bool param_1)

{
  ushort uVar1;
  
  if (*(ulong *)(this + 0x28) < 3) {
    return 0;
  }
  if (!param_1) {
    uVar1 = CRC32(0xffffffff,(void *)(*(long *)this + 2),*(ulong *)(this + 0x28) - 2);
    return ~uVar1;
  }
  uVar1 = CRC32(0xffffffff,(void *)(*(long *)this + 2),*(long *)(this + 0x30) - 2);
  return ~uVar1;
}


