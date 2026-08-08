/*
 * Ghidra decompilation
 *
 * Function : FUN_001b86cc
 * Address  : 001b86cc
 * Program  : drastic64
 */


void FUN_001b86cc(long param_1,undefined param_2)

{
  char cVar1;
  int iVar2;
  size_t sVar3;
  FILE *__s;
  undefined uStack_1;
  
  __s = *(FILE **)(param_1 + 8);
  uStack_1 = param_2;
  if ((*(int *)(param_1 + 0x14) == 1) && (__s == (FILE *)0x0)) {
    iVar2 = dup(1);
    __s = fdopen(iVar2,"w");
    *(FILE **)(param_1 + 8) = __s;
  }
  sVar3 = fwrite(&uStack_1,1,1,__s);
  iVar2 = (int)sVar3;
  while( true ) {
    if ((((iVar2 == 1) && (iVar2 = ferror(*(FILE **)(param_1 + 8)), iVar2 == 0)) ||
        (*(char *)(param_1 + 0x1c) == '\0')) || (*(int *)(param_1 + 0x14) != 0)) goto LAB_001b8758;
    cVar1 = ErrorHandler::AskRepeatWrite(&ErrHandler,(bool)((char)param_1 + ' '));
    if (cVar1 == '\0') break;
    clearerr(*(FILE **)(param_1 + 8));
    sVar3 = fwrite(&uStack_1,1,1,*(FILE **)(param_1 + 8));
    iVar2 = (int)sVar3;
  }
  ErrorHandler::WriteError(&ErrHandler,(wchar_t *)0x0);
LAB_001b8758:
  *(undefined *)(param_1 + 0x10) = 1;
  return;
}


