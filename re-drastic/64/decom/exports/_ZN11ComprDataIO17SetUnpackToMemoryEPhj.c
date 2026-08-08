/*
 * Ghidra decompilation
 *
 * Function : _ZN11ComprDataIO17SetUnpackToMemoryEPhj
 * Address  : 001c3630
 * Program  : drastic64
 */


/* ComprDataIO::SetUnpackToMemory(unsigned char*, unsigned int) */

void __thiscall ComprDataIO::SetUnpackToMemory(ComprDataIO *this,uchar *param_1,uint param_2)

{
  this[0x18] = (ComprDataIO)0x1;
  *(ulong *)(this + 0x20) = (ulong)param_2;
  *(uchar **)(this + 0x28) = param_1;
  return;
}


