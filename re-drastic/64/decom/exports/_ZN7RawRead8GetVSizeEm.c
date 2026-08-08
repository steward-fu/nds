/*
 * Ghidra decompilation
 *
 * Function : _ZN7RawRead8GetVSizeEm
 * Address  : 001c2200
 * Program  : drastic64
 */


/* RawRead::GetVSize(unsigned long) */

int __thiscall RawRead::GetVSize(RawRead *this,ulong param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  if (param_1 < *(ulong *)(this + 0x28)) {
    do {
      if (-1 < *(char *)(*(long *)this + param_1)) {
        return ((int)param_1 - iVar1) + 1;
      }
      param_1 = param_1 + 1;
    } while (param_1 != *(ulong *)(this + 0x28));
  }
  return 0;
}


