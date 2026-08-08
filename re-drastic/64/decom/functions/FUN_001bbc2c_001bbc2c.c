/*
 * Ghidra decompilation
 *
 * Function : FUN_001bbc2c
 * Address  : 001bbc2c
 * Program  : drastic64
 */


void FUN_001bbc2c(File *param_1)

{
  long lVar1;
  
  lVar1 = File::FileLength(param_1);
  if (((*(long *)(param_1 + 0x111f8) <= lVar1) && (*(long *)(param_1 + 0x11200) <= lVar1)) &&
     ((*(long *)(param_1 + 0x111f8) == lVar1 || *(long *)(param_1 + 0x11200) == lVar1 ||
      (*(int *)(param_1 + 0x11208) != 3)))) {
    return;
  }
  ErrorHandler::SetErrorCode((ErrorHandler *)&ErrHandler,1);
  return;
}


