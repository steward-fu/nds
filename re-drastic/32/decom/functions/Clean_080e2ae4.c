/*
 * Ghidra decompilation
 *
 * Function : Clean
 * Address  : 080e2ae4
 * Program  : drastic
 */


/* DWARF original prototype: void Clean(ErrorHandler * this) */

void __thiscall ErrorHandler::Clean(ErrorHandler *this)

{
  this->ExitCode = RARX_SUCCESS;
  this->ErrCount = 0;
  this->EnableBreak = true;
  this->Silent = false;
  this->DoShutdown = false;
  this->UserBreak = false;
  this->MainExit = false;
  return;
}


