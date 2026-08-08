/*
 * Ghidra decompilation
 *
 * Function : _ZN7Archive15BrokenHeaderMsgEv
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


