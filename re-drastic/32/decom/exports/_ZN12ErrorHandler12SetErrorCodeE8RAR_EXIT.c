/*
 * Ghidra decompilation
 *
 * Function : _ZN12ErrorHandler12SetErrorCodeE8RAR_EXIT
 * Address  : 080e2bdc
 * Program  : drastic
 */


/* DWARF original prototype: void SetErrorCode(ErrorHandler * this, RAR_EXIT Code) */

void __thiscall ErrorHandler::SetErrorCode(ErrorHandler *this,RAR_EXIT Code)

{
  RAR_EXIT RVar1;
  
  if (Code == RARX_FATAL) {
    if (RARX_WARNING < this->ExitCode) {
      this->ErrCount = this->ErrCount + 1;
      return;
    }
  }
  else if (Code < RARX_CRC) {
    if (Code == RARX_WARNING) {
      RVar1 = this->ExitCode;
joined_r0x080e2c44:
      if (RVar1 != RARX_SUCCESS) {
        this->ErrCount = this->ErrCount + 1;
        return;
      }
    }
  }
  else if (Code == RARX_CRC) {
    if (this->ExitCode == RARX_BADPWD) goto LAB_080e2c00;
  }
  else if (Code == RARX_USERBREAK) {
    RVar1 = this->ExitCode;
    goto joined_r0x080e2c44;
  }
  this->ExitCode = Code;
LAB_080e2c00:
  this->ErrCount = this->ErrCount + 1;
  return;
}


