/*
 * Ghidra decompilation
 *
 * Function : BrokenHeaderMsg
 * Address  : 080d9a7c
 * Program  : drastic
 */


/* DWARF original prototype: void BrokenHeaderMsg(Archive * this) */

void __thiscall Archive::BrokenHeaderMsg(Archive *this)

{
  this->BrokenHeader = true;
  ErrorHandler::SetErrorCode(&ErrHandler,RARX_CRC);
  return;
}


