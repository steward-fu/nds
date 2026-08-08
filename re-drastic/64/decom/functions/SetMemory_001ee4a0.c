/*
 * Ghidra decompilation
 *
 * Function : SetMemory
 * Address  : 001ee4a0
 * Program  : drastic64
 */


/* RarVM::SetMemory(unsigned long, unsigned char*, unsigned long) */

void __thiscall RarVM::SetMemory(RarVM *this,ulong param_1,uchar *param_2,ulong param_3)

{
  size_t __n;
  
  if ((param_1 < 0x40000) && ((uchar *)(*(long *)(this + 0x18) + param_1) != param_2)) {
    __n = 0x40000 - param_1;
    if (param_3 < 0x40000 - param_1) {
      __n = param_3;
    }
    memmove((uchar *)(*(long *)(this + 0x18) + param_1),param_2,__n);
    return;
  }
  return;
}


