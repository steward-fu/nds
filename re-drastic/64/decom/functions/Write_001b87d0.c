/*
 * Ghidra decompilation
 *
 * Function : Write
 * Address  : 001b87d0
 * Program  : drastic64
 */


/* File::Write(void const*, unsigned long) */

void __thiscall File::Write(File *this,void *param_1,ulong param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  size_t sVar4;
  long lVar5;
  ulong __off;
  code *pcVar6;
  FILE *pFVar7;
  code *pcVar8;
  
  if (param_2 == 0) {
    return;
  }
  pFVar7 = *(FILE **)(this + 8);
  if ((*(int *)(this + 0x14) == 1) && (pFVar7 == (FILE *)0x0)) {
    iVar2 = dup(1);
    pFVar7 = fdopen(iVar2,"w");
    *(FILE **)(this + 8) = pFVar7;
  }
  while( true ) {
    sVar4 = fwrite(param_1,1,param_2,pFVar7);
    iVar2 = (int)sVar4;
    if ((((param_2 == (long)iVar2) && (iVar3 = ferror(*(FILE **)(this + 8)), iVar3 == 0)) ||
        (this[0x1c] == (File)0x0)) || (*(int *)(this + 0x14) != 0)) goto LAB_001b8874;
    cVar1 = ErrorHandler::AskRepeatWrite(&ErrHandler,(bool)((char)this + ' '));
    if (cVar1 == '\0') break;
    clearerr(*(FILE **)(this + 8));
    if ((iVar2 == 0 || param_2 < (ulong)(long)iVar2) || iVar2 != 0 && param_2 == (long)iVar2)
    goto LAB_001b88d0;
    pcVar8 = *(code **)(*(long *)this + 0x18);
    pcVar6 = *(code **)(*(long *)this + 0x20);
    if (pcVar6 == Tell) {
      pFVar7 = *(FILE **)(this + 8);
      if (pFVar7 != (FILE *)0x0) {
LAB_001b88f8:
        lVar5 = ftello64(pFVar7);
        goto LAB_001b8900;
      }
      if (this[0x1c] != (File)0x0) {
        ErrorHandler::SeekError(&ErrHandler);
        pFVar7 = *(FILE **)(this + 8);
        goto LAB_001b88f8;
      }
      pFVar7 = (FILE *)0x0;
      if (pcVar8 != Seek) {
        __off = ~(long)iVar2;
LAB_001b8990:
        (*pcVar8)(this,__off,0);
        pFVar7 = *(FILE **)(this + 8);
      }
    }
    else {
      lVar5 = (*pcVar6)(this);
LAB_001b8900:
      __off = lVar5 - iVar2;
      if (pcVar8 != Seek) goto LAB_001b8990;
      pFVar7 = *(FILE **)(this + 8);
      if (pFVar7 != (FILE *)0x0) {
        this[0x10] = (File)0x0;
        iVar2 = fseeko64(pFVar7,__off,0);
        if ((iVar2 == 0) || (this[0x1c] == (File)0x0)) {
LAB_001b88d0:
          pFVar7 = *(FILE **)(this + 8);
        }
        else {
          ErrorHandler::SeekError(&ErrHandler);
          pFVar7 = *(FILE **)(this + 8);
        }
      }
    }
  }
  ErrorHandler::WriteError(&ErrHandler,(wchar_t *)0x0);
LAB_001b8874:
  this[0x10] = (File)0x1;
  return;
}


