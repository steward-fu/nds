/*
 * Ghidra decompilation
 *
 * Function : _ZN12ErrorHandler5ThrowE8RAR_EXIT.part.0
 * Address  : 080e2c68
 * Program  : drastic
 */


/* DWARF original prototype: void Throw(ErrorHandler * this, RAR_EXIT Code) */

void __thiscall ErrorHandler::Throw(ErrorHandler *this,RAR_EXIT Code)

{
  RAR_EXIT *pRVar1;
  
  SetErrorCode(this,Code);
  pRVar1 = (RAR_EXIT *)__cxa_allocate_exception(4);
  *pRVar1 = Code;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(pRVar1,&RAR_EXIT::typeinfo,0);
}


