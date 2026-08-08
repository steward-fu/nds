/*
 * Ghidra decompilation
 *
 * Function : MemoryError
 * Address  : 080e2c94
 * Program  : drastic
 */


/* DWARF original prototype: void MemoryError(ErrorHandler * this) */

void __thiscall ErrorHandler::MemoryError(ErrorHandler *this)

{
                    /* WARNING: Subroutine does not return */
  Throw(this,RARX_MEMORY);
}


