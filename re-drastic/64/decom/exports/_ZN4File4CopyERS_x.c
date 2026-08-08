/*
 * Ghidra decompilation
 *
 * Function : _ZN4File4CopyERS_x
 * Address  : 001b89e0
 * Program  : drastic64
 */


/* File::Copy(File&, long long) */

long __thiscall File::Copy(File *this,File *param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  void *__ptr;
  size_t sVar4;
  long lVar5;
  ulong __off;
  code *pcVar6;
  FILE *pFVar7;
  ulong __n;
  code *pcVar8;
  longlong lVar9;
  long lVar10;
  
  __ptr = malloc(0x10000);
  if (__ptr == (void *)0x0) {
    ErrorHandler::MemoryError();
    if (param_2 < 1) {
      return 0;
    }
  }
  else if (param_2 < 1) {
    lVar10 = 0;
    goto LAB_001b8b08;
  }
  lVar10 = 0;
  lVar9 = param_2;
  do {
                    /* try { // try from 001b8a30 to 001b8a5f has its CatchHandler @ 001b8cb0 */
    Wait();
    lVar5 = lVar9;
    if (0xffff < lVar9 || param_2 == 0x7fffffff7fffffff) {
      lVar5 = 0x10000;
    }
    iVar2 = (**(code **)(*(long *)this + 0x10))(this,__ptr,lVar5);
    if (iVar2 == 0) {
      if (__ptr == (void *)0x0) {
        return lVar10;
      }
      break;
    }
    __n = (ulong)iVar2;
    pFVar7 = *(FILE **)(param_1 + 8);
    if ((*(int *)(param_1 + 0x14) == 1) && (pFVar7 == (FILE *)0x0)) {
      iVar2 = dup(1);
      pFVar7 = fdopen(iVar2,"w");
      *(FILE **)(param_1 + 8) = pFVar7;
    }
    while( true ) {
                    /* try { // try from 001b8a88 to 001b8c73 has its CatchHandler @ 001b8c9c */
      sVar4 = fwrite(__ptr,1,__n,pFVar7);
      iVar2 = (int)sVar4;
      if ((((__n == (long)iVar2) && (iVar3 = ferror(*(FILE **)(param_1 + 8)), iVar3 == 0)) ||
          (param_1[0x1c] == (File)0x0)) || (*(int *)(param_1 + 0x14) != 0)) goto LAB_001b8ae0;
      cVar1 = ErrorHandler::AskRepeatWrite(&ErrHandler,(bool)((char)param_1 + ' '));
      if (cVar1 == '\0') break;
      clearerr(*(FILE **)(param_1 + 8));
      if ((iVar2 == 0 || __n < (ulong)(long)iVar2) || iVar2 != 0 && __n == (long)iVar2)
      goto LAB_001b8b68;
      pcVar8 = *(code **)(*(long *)param_1 + 0x18);
      pcVar6 = *(code **)(*(long *)param_1 + 0x20);
      if (pcVar6 == Tell) {
        pFVar7 = *(FILE **)(param_1 + 8);
        if (pFVar7 != (FILE *)0x0) {
LAB_001b8b90:
          lVar5 = ftello64(pFVar7);
          goto LAB_001b8b98;
        }
        if (param_1[0x1c] != (File)0x0) {
          ErrorHandler::SeekError(&ErrHandler);
          pFVar7 = *(FILE **)(param_1 + 8);
          goto LAB_001b8b90;
        }
        pFVar7 = (FILE *)0x0;
        if (pcVar8 != Seek) {
          __off = ~(long)iVar2;
LAB_001b8c58:
          (*pcVar8)(param_1,__off,0);
          pFVar7 = *(FILE **)(param_1 + 8);
        }
      }
      else {
        lVar5 = (*pcVar6)(param_1);
LAB_001b8b98:
        __off = lVar5 - iVar2;
        if (pcVar8 != Seek) goto LAB_001b8c58;
        pFVar7 = *(FILE **)(param_1 + 8);
        if (pFVar7 != (FILE *)0x0) {
          param_1[0x10] = (File)0x0;
          iVar2 = fseeko64(pFVar7,__off,0);
          if ((iVar2 == 0) || (param_1[0x1c] == (File)0x0)) {
LAB_001b8b68:
            pFVar7 = *(FILE **)(param_1 + 8);
          }
          else {
            ErrorHandler::SeekError(&ErrHandler);
            pFVar7 = *(FILE **)(param_1 + 8);
          }
        }
      }
    }
    ErrorHandler::WriteError(&ErrHandler,(wchar_t *)0x0);
LAB_001b8ae0:
    param_1[0x10] = (File)0x1;
    lVar10 = lVar10 + __n;
  } while ((param_2 == 0x7fffffff7fffffff) || (lVar9 = lVar9 - __n, 0 < lVar9));
LAB_001b8b08:
  free(__ptr);
  return lVar10;
}


