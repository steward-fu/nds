/*
 * Ghidra decompilation
 *
 * Function : GetB
 * Address  : 001c2240
 * Program  : drastic64
 */


/* RawRead::GetB(void*, unsigned long) */

ulong __thiscall RawRead::GetB(RawRead *this,void *param_1,ulong param_2)

{
  ulong __n;
  
  __n = *(long *)(this + 0x28) - *(long *)(this + 0x30);
  if (param_2 < __n) {
    __n = param_2;
  }
  if (__n == 0) {
    if (param_2 != 0) {
LAB_001c22b8:
      memset((void *)((long)param_1 + __n),0,param_2 - __n);
      *(ulong *)(this + 0x30) = *(long *)(this + 0x30) + __n;
      return __n;
    }
  }
  else {
    param_1 = memcpy(param_1,(void *)(*(long *)this + *(long *)(this + 0x30)),__n);
    if (__n < param_2) goto LAB_001c22b8;
  }
  *(ulong *)(this + 0x30) = *(long *)(this + 0x30) + __n;
  return __n;
}


