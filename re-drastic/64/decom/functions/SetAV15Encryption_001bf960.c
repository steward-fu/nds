/*
 * Ghidra decompilation
 *
 * Function : SetAV15Encryption
 * Address  : 001bf960
 * Program  : drastic64
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptData::SetAV15Encryption() */

void CryptData::SetAV15Encryption(void)

{
  long in_x0;
  
  InitCRC32((uint *)(in_x0 + 0xaec));
  *(undefined4 *)(in_x0 + 0x9e4) = 2;
  *(undefined8 *)(in_x0 + 0x1000) = 0x5215738290214765;
  return;
}


