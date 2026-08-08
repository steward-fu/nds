/*
 * Ghidra decompilation
 *
 * Function : _ZN12ErrorHandlerC1Ev
 * Address  : 080e2abc
 * Program  : drastic
 */


/* DWARF original prototype: ErrorHandler * ErrorHandler(ErrorHandler * this) */

ErrorHandler * __thiscall ErrorHandler::ErrorHandler(ErrorHandler *this)

{
  this->ExitCode = RARX_SUCCESS;
  this->ErrCount = 0;
  this->EnableBreak = true;
  this->Silent = false;
  this->DoShutdown = false;
  this->UserBreak = false;
  this->MainExit = false;
  return this;
}


