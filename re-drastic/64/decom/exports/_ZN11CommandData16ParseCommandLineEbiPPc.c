/*
 * Ghidra decompilation
 *
 * Function : _ZN11CommandData16ParseCommandLineEbiPPc
 * Address  : 001e9640
 * Program  : drastic64
 */


/* CommandData::ParseCommandLine(bool, int, char**) */

void __thiscall
CommandData::ParseCommandLine(CommandData *this,bool param_1,int param_2,char **param_3)

{
  ulong uVar1;
  char cVar2;
  size_t sVar3;
  char **ppcVar4;
  char *pcVar5;
  wchar_t *__ptr;
  ulong uVar6;
  
  if (param_2 < 2) {
    if (!param_1) {
      ParseDone();
    }
    return;
  }
  if (param_1) {
    ppcVar4 = param_3 + 1;
    uVar6 = 0;
    __ptr = (wchar_t *)0x0;
    do {
      pcVar5 = *ppcVar4;
      sVar3 = strlen(pcVar5);
      uVar1 = sVar3 + 1;
      if (uVar6 < uVar1) {
        uVar6 = uVar6 + 0x20 + (uVar6 >> 2);
        if (uVar6 < uVar1) {
          uVar6 = uVar1;
        }
        __ptr = (wchar_t *)realloc(__ptr,uVar6 << 2);
        if (__ptr == (wchar_t *)0x0) {
                    /* try { // try from 001e97f4 to 001e980b has its CatchHandler @ 001e9818 */
          ErrorHandler::MemoryError();
          pcVar5 = *ppcVar4;
        }
      }
                    /* try { // try from 001e96a0 to 001e96a3 has its CatchHandler @ 001e9818 */
      CharToWide(pcVar5,__ptr,uVar1);
    } while (((*__ptr != L'-') ||
             (cVar2 = PreprocessSwitch(this,__ptr), cVar2 != '\0'
                    /* try { // try from 001e9708 to 001e970b has its CatchHandler @ 001e9830 */))
            && (ppcVar4 = ppcVar4 + 1, ppcVar4 != param_3 + (ulong)(param_2 - 2U) + 2));
  }
  else {
    ppcVar4 = param_3 + 1;
    uVar6 = 0;
    __ptr = (wchar_t *)0x0;
    do {
      pcVar5 = *ppcVar4;
      sVar3 = strlen(pcVar5);
      uVar1 = sVar3 + 1;
      if (uVar6 < uVar1) {
        uVar6 = uVar6 + 0x20 + (uVar6 >> 2);
        if (uVar6 < uVar1) {
          uVar6 = uVar1;
        }
        __ptr = (wchar_t *)realloc(__ptr,uVar6 << 2);
        if (__ptr == (wchar_t *)0x0) {
          ErrorHandler::MemoryError();
          pcVar5 = *ppcVar4;
        }
      }
                    /* try { // try from 001e975c to 001e97c3 has its CatchHandler @ 001e9818 */
      CharToWide(pcVar5,__ptr,uVar1);
      ParseArg(this,__ptr);
      ppcVar4 = ppcVar4 + 1;
    } while (ppcVar4 != param_3 + (ulong)(param_2 - 2U) + 2);
    ParseDone();
    if (__ptr == (wchar_t *)0x0) {
      return;
    }
  }
  free(__ptr);
  return;
}


