/*
 * Ghidra decompilation
 *
 * Function : SetCmt13Encryption
 * Address  : 001c3610
 * Program  : drastic64
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ComprDataIO::SetCmt13Encryption() */

void ComprDataIO::SetCmt13Encryption(void)

{
  long in_x0;
  
  *(undefined *)(in_x0 + 0x45c1) = 1;
  CryptData::SetCmt13Encryption();
  return;
}


