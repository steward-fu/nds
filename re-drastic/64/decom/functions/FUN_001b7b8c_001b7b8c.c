/*
 * Ghidra decompilation
 *
 * Function : FUN_001b7b8c
 * Address  : 001b7b8c
 * Program  : drastic64
 */


void FUN_001b7b8c(File *param_1,wchar_t *param_2,uint param_3)

{
  char cVar1;
  
  cVar1 = File::Create(param_1,param_2,param_3);
  if (cVar1 != '\0') {
    return;
  }
  ErrorHandler::SetErrorCode((ErrorHandler *)&ErrHandler,9);
  ErrorHandler::CreateErrorMsg(&ErrHandler);
  ErrorHandler::Exit((ErrorHandler *)&ErrHandler,2);
  return;
}


