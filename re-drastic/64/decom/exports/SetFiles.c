/*
 * Ghidra decompilation
 *
 * Function : SetFiles
 * Address  : 001c3540
 * Program  : drastic64
 */


/* ComprDataIO::SetFiles(File*, File*) */

void __thiscall ComprDataIO::SetFiles(ComprDataIO *this,File *param_1,File *param_2)

{
  if (param_1 != (File *)0x0) {
    *(File **)(this + 0x50) = param_1;
  }
  if (param_2 != (File *)0x0) {
    *(File **)(this + 0x58) = param_2;
  }
  *(undefined4 *)(this + 0x2088) = 0xffffffff;
  return;
}


