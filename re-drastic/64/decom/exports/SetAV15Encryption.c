/*
 * Ghidra decompilation
 *
 * Function : SetAV15Encryption
 * Address  : 001c35f0
 * Program  : drastic64
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ComprDataIO::SetAV15Encryption() */

void ComprDataIO::SetAV15Encryption(void)

{
  long in_x0;
  
  *(undefined *)(in_x0 + 0x45c1) = 1;
  CryptData::SetAV15Encryption();
  return;
}


