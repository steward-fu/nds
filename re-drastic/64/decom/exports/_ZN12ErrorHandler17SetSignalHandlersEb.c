/*
 * Ghidra decompilation
 *
 * Function : _ZN12ErrorHandler17SetSignalHandlersEb
 * Address  : 001c4070
 * Program  : drastic64
 */


/* ErrorHandler::SetSignalHandlers(bool) */

void __thiscall ErrorHandler::SetSignalHandlers(ErrorHandler *this,bool param_1)

{
  code *__handler;
  
  __handler = ProcessSignal;
  this[8] = (ErrorHandler)param_1;
  if (!param_1) {
    __handler = (__sighandler_t)0x1;
  }
  signal(2,__handler);
  signal(0xf,__handler);
  return;
}


