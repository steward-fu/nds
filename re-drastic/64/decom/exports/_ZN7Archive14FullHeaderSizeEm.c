/*
 * Ghidra decompilation
 *
 * Function : _ZN7Archive14FullHeaderSizeEm
 * Address  : 001b9f00
 * Program  : drastic64
 */


/* Archive::FullHeaderSize(unsigned long) */

ulong __thiscall Archive::FullHeaderSize(Archive *this,ulong param_1)

{
  long lVar1;
  
  if (this[0x11214] != (Archive)0x0) {
    lVar1 = (-param_1 & 0xf) + param_1;
    param_1 = lVar1 + 8;
    if (*(int *)(this + 0x11208) == 3) {
      param_1 = lVar1 + 0x10;
    }
  }
  return param_1;
}


