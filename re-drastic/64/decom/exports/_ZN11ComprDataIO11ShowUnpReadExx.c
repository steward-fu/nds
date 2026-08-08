/*
 * Ghidra decompilation
 *
 * Function : _ZN11ComprDataIO11ShowUnpReadExx
 * Address  : 001c34c0
 * Program  : drastic64
 */


/* ComprDataIO::ShowUnpRead(long long, long long) */

void __thiscall ComprDataIO::ShowUnpRead(ComprDataIO *this,longlong param_1,longlong param_2)

{
  int iVar1;
  long lVar2;
  
  if (this[0x48] != (ComprDataIO)0x0) {
    if (*(long *)(this + 0x50) != 0) {
      if (*(long *)(this + 0x20c8) != 0) {
        param_1 = param_1 + *(long *)(this + 0x20c0);
        param_2 = *(long *)(this + 0x20c8);
      }
      lVar2 = *(long *)(*(long *)(this + 0x50) + 0x7600);
      iVar1 = ToPercent(param_1,param_2);
      if ((*(char *)(lVar2 + 0xc250) == '\0') && (iVar1 != *(int *)(this + 0x2088))) {
        *(int *)(this + 0x2088) = iVar1;
      }
    }
    return;
  }
  return;
}


