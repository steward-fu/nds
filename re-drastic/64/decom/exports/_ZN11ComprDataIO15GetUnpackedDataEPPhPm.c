/*
 * Ghidra decompilation
 *
 * Function : _ZN11ComprDataIO15GetUnpackedDataEPPhPm
 * Address  : 001c3560
 * Program  : drastic64
 */


/* ComprDataIO::GetUnpackedData(unsigned char**, unsigned long*) */

void __thiscall ComprDataIO::GetUnpackedData(ComprDataIO *this,uchar **param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(this + 0x30);
  *param_1 = *(uchar **)(this + 0x38);
  *param_2 = uVar1;
  return;
}


