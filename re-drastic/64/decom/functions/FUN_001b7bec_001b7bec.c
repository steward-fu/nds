/*
 * Ghidra decompilation
 *
 * Function : FUN_001b7bec
 * Address  : 001b7bec
 * Program  : drastic64
 */


uint FUN_001b7bec(File *param_1,wchar_t *param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = File::Create(param_1,param_2,param_3);
  if ((uVar1 & 0xff) == 0) {
    ErrorHandler::SetErrorCode((ErrorHandler *)&ErrHandler,9);
    ErrorHandler::CreateErrorMsg(&ErrHandler);
  }
  return uVar1;
}


