/*
 * Ghidra decompilation
 *
 * Function : SetCmt13Encryption
 * Address  : 001bf9a0
 * Program  : drastic64
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptData::SetCmt13Encryption() */

void CryptData::SetCmt13Encryption(void)

{
  long in_x0;
  
  *(undefined4 *)(in_x0 + 0x9e4) = 1;
  *(undefined2 *)(in_x0 + 0xffc) = 0x700;
  *(undefined *)(in_x0 + 0xffe) = 0x4d;
  return;
}


