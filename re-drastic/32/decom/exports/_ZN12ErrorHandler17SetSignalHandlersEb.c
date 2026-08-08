/*
 * Ghidra decompilation
 *
 * Function : _ZN12ErrorHandler17SetSignalHandlersEb
 * Address  : 080e2d10
 * Program  : drastic
 */


/* DWARF original prototype: void SetSignalHandlers(ErrorHandler * this, bool Enable) */

void __thiscall ErrorHandler::SetSignalHandlers(ErrorHandler *this,bool Enable)

{
  code *__handler;
  
  this->EnableBreak = Enable;
  if (Enable) {
    signal(2,ProcessSignal);
    __handler = ProcessSignal;
  }
  else {
    signal(2,(__sighandler_t)0x1);
    __handler = (__sighandler_t)0x1;
  }
  signal(0xf,__handler);
  return;
}


