/*
 * Ghidra decompilation
 *
 * Function : _ZN12ErrorHandler5CleanEv
 * Address  : 001c3de0
 * Program  : drastic64
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ErrorHandler::Clean() */

void ErrorHandler::Clean(void)

{
  undefined8 *in_x0;
  
  *in_x0 = 0;
  *(undefined4 *)(in_x0 + 1) = 1;
  *(undefined *)((long)in_x0 + 0xc) = 0;
  return;
}


