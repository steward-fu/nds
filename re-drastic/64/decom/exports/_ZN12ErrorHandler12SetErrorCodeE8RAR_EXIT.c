/*
 * Ghidra decompilation
 *
 * Function : _ZN12ErrorHandler12SetErrorCodeE8RAR_EXIT
 * Address  : 001c4000
 * Program  : drastic64
 */


/* ErrorHandler::SetErrorCode(RAR_EXIT) */

void __thiscall ErrorHandler::SetErrorCode(ErrorHandler *this,RAR_EXIT param_1)

{
  if (param_1 == 3) {
    if (*(int *)this == 0xb) goto LAB_001c4028;
  }
  else if (param_1 < 4) {
    if (param_1 == 1) {
LAB_001c4060:
      if (*(int *)this != 0) {
LAB_001c4028:
        *(int *)(this + 4) = *(int *)(this + 4) + 1;
        return;
      }
      *(RAR_EXIT *)this = param_1;
      goto LAB_001c4048;
    }
    if ((param_1 == 2) && (1 < *(uint *)this)) goto LAB_001c4028;
  }
  else if (param_1 == 0xff) goto LAB_001c4060;
  *(RAR_EXIT *)this = param_1;
LAB_001c4048:
  *(int *)(this + 4) = *(int *)(this + 4) + 1;
  return;
}


