/*
 * Ghidra decompilation
 *
 * Function : Throw
 * Address  : 0010e320
 * Program  : drastic64
 */


/* ErrorHandler::Throw(RAR_EXIT) [clone .part.0] */

void __thiscall ErrorHandler::Throw(ErrorHandler *this,RAR_EXIT param_1)

{
  RAR_EXIT *pRVar1;
  
  if (param_1 == 3) {
    if (*(int *)this == 0xb) goto LAB_0010e388;
  }
  else if (param_1 < 4) {
    if (param_1 == 1) {
LAB_0010e35c:
      if (*(int *)this != 0) goto LAB_0010e388;
    }
    else if ((param_1 == 2) && (1 < *(uint *)this)) goto LAB_0010e388;
  }
  else if (param_1 == 0xff) goto LAB_0010e35c;
  *(RAR_EXIT *)this = param_1;
LAB_0010e388:
  *(int *)(this + 4) = *(int *)(this + 4) + 1;
  pRVar1 = (RAR_EXIT *)__cxa_allocate_exception(4);
  *pRVar1 = param_1;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(pRVar1,&RAR_EXIT::typeinfo,0);
}


