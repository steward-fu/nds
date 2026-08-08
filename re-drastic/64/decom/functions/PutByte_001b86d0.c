/*
 * Ghidra decompilation
 *
 * Function : PutByte
 * Address  : 001b86d0
 * Program  : drastic64
 */


/* File::PutByte(unsigned char) */

void __thiscall File::PutByte(File *this,uchar param_1)

{
  char cVar1;
  int iVar2;
  size_t sVar3;
  FILE *__s;
  uchar local_1;
  
  __s = *(FILE **)(this + 8);
  local_1 = param_1;
  if ((*(int *)(this + 0x14) == 1) && (__s == (FILE *)0x0)) {
    iVar2 = dup(1);
    __s = fdopen(iVar2,"w");
    *(FILE **)(this + 8) = __s;
  }
  sVar3 = fwrite(&local_1,1,1,__s);
  iVar2 = (int)sVar3;
  while( true ) {
    if ((((iVar2 == 1) && (iVar2 = ferror(*(FILE **)(this + 8)), iVar2 == 0)) ||
        (this[0x1c] == (File)0x0)) || (*(int *)(this + 0x14) != 0)) goto LAB_001b8758;
    cVar1 = ErrorHandler::AskRepeatWrite(&ErrHandler,(bool)((char)this + ' '));
    if (cVar1 == '\0') break;
    clearerr(*(FILE **)(this + 8));
    sVar3 = fwrite(&local_1,1,1,*(FILE **)(this + 8));
    iVar2 = (int)sVar3;
  }
  ErrorHandler::WriteError(&ErrHandler,(wchar_t *)0x0);
LAB_001b8758:
  this[0x10] = (File)0x1;
  return;
}


