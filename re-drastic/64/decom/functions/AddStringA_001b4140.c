/*
 * Ghidra decompilation
 *
 * Function : AddStringA
 * Address  : 001b4140
 * Program  : drastic64
 */


/* StringList::AddStringA(char const*) */

void __thiscall StringList::AddStringA(StringList *this,char *param_1)

{
  size_t sVar1;
  size_t sVar2;
  wchar_t *__ptr;
  
  sVar2 = strlen(param_1);
  if (sVar2 == 0) {
    CharToWide(param_1,(wchar_t *)0x0,0);
    AddString(this,(wchar_t *)0x0);
  }
  else {
    sVar1 = sVar2;
    if (sVar2 < 0x20) {
      sVar1 = 0x20;
    }
    __ptr = (wchar_t *)malloc(sVar1 << 2);
    if (__ptr == (wchar_t *)0x0) {
      ErrorHandler::MemoryError();
    }
                    /* try { // try from 001b41bc to 001b41cb has its CatchHandler @ 001b41f4 */
    CharToWide(param_1,__ptr,sVar2);
    AddString(this,__ptr);
    if (__ptr != (wchar_t *)0x0) {
      free(__ptr);
      return;
    }
  }
  return;
}


