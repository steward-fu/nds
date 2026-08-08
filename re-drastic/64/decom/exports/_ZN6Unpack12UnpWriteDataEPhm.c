/*
 * Ghidra decompilation
 *
 * Function : _ZN6Unpack12UnpWriteDataEPhm
 * Address  : 001df9b0
 * Program  : drastic64
 */


/* Unpack::UnpWriteData(unsigned char*, unsigned long) */

void __thiscall Unpack::UnpWriteData(Unpack *this,uchar *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if (*(long *)(this + 0x4db0) < *(long *)(this + 0x4da0)) {
    uVar2 = *(long *)(this + 0x4da0) - *(long *)(this + 0x4db0);
    uVar1 = param_2;
    if ((long)uVar2 < (long)param_2) {
      uVar1 = uVar2;
    }
    ComprDataIO::UnpWrite(*(ComprDataIO **)this,param_1,uVar1);
    *(ulong *)(this + 0x4db0) = *(long *)(this + 0x4db0) + param_2;
  }
  return;
}


