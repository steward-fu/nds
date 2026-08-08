/*
 * Ghidra decompilation
 *
 * Function : GetW
 * Address  : 001c22f0
 * Program  : drastic64
 */


/* RawRead::GetW(wchar_t*, unsigned long) */

void __thiscall RawRead::GetW(RawRead *this,wchar_t *param_1,ulong param_2)

{
  if ((*(long *)(this + 0x30) + param_2 * 2) - 1 < *(ulong *)(this + 0x28)) {
    RawToWide((uchar *)(*(long *)this + *(long *)(this + 0x30)),param_1,param_2);
    *(ulong *)(this + 0x30) = *(long *)(this + 0x30) + param_2 * 4;
    return;
  }
  memset(param_1,0,param_2 * 4);
  return;
}


