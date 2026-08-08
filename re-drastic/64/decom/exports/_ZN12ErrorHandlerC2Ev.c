/*
 * Ghidra decompilation
 *
 * Function : _ZN12ErrorHandlerC2Ev
 * Address  : 001c3dc0
 * Program  : drastic64
 */


/* ErrorHandler::ErrorHandler() */

void __thiscall ErrorHandler::ErrorHandler(ErrorHandler *this)

{
  *(undefined8 *)this = 0;
  *(undefined4 *)(this + 8) = 1;
  this[0xc] = (ErrorHandler)0x0;
  return;
}


