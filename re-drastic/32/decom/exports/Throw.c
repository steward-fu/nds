/*
 * Ghidra decompilation
 *
 * Function : Throw
 * Address  : 080e2d64
 * Program  : drastic
 */


/* DWARF original prototype: void Throw(ErrorHandler * this, RAR_EXIT Code) */

void __thiscall ErrorHandler::Throw(ErrorHandler *this,RAR_EXIT Code)

{
  if ((Code == RARX_USERBREAK) && (this->EnableBreak == false)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  Throw(this,Code);
}


