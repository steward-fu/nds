/*
 * Ghidra decompilation
 *
 * Function : FUN_001b773c
 * Address  : 001b773c
 * Program  : drastic64
 */


void FUN_001b773c(undefined8 *param_1)

{
  int iVar1;
  FILE *__stream;
  
  __stream = (FILE *)param_1[1];
  *param_1 = &PTR__File_0025e458;
  if ((__stream != (FILE *)0x0) && (*(char *)(param_1 + 3) == '\0')) {
    if (*(char *)((long)param_1 + 0x1a) == '\0') {
      iVar1 = fclose(__stream);
      param_1[1] = 0;
      *(undefined4 *)((long)param_1 + 0x14) = 0;
      if ((iVar1 == -1) && (*(char *)((long)param_1 + 0x1c) != '\0')) {
        ErrorHandler::CloseError(&ErrHandler);
      }
    }
    else if (*(int *)((long)param_1 + 0x14) == 0) {
      iVar1 = fclose(__stream);
      param_1[1] = 0;
      *(undefined4 *)((long)param_1 + 0x14) = 0;
      if ((iVar1 == -1) && (*(char *)((long)param_1 + 0x1c) != '\0')) {
        ErrorHandler::CloseError(&ErrHandler);
      }
      if (*(char *)((long)param_1 + 0x1b) != '\0') {
        DelFile((wchar_t *)(param_1 + 4));
      }
    }
  }
  return;
}


