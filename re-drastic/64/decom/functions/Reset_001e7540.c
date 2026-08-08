/*
 * Ghidra decompilation
 *
 * Function : Reset
 * Address  : 001e7540
 * Program  : drastic64
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* MainHeader::Reset() */

void MainHeader::Reset(void)

{
  long in_x0;
  
  *(undefined2 *)(in_x0 + 0x14) = 0;
  *(undefined4 *)(in_x0 + 0x18) = 0;
  *(undefined2 *)(in_x0 + 0x1c) = 0;
  *(undefined *)(in_x0 + 0x1e) = 0;
  *(undefined8 *)(in_x0 + 0x28) = 0;
  *(undefined8 *)(in_x0 + 0x20) = 0;
  *(undefined8 *)(in_x0 + 0x38) = 0;
  *(undefined8 *)(in_x0 + 0x30) = 0;
  return;
}


