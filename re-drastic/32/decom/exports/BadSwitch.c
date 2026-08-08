/*
 * Ghidra decompilation
 *
 * Function : BadSwitch
 * Address  : 08105928
 * Program  : drastic
 */


/* DWARF original prototype: void BadSwitch(CommandData * this, wchar * Switch) */

void __thiscall CommandData::BadSwitch(CommandData *this,wchar *Switch)

{
  ErrorHandler::Exit(&ErrHandler,RARX_USERERROR);
  return;
}


