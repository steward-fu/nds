/*
 * Ghidra decompilation
 *
 * Function : ParseEnvVar
 * Address  : 001e9a00
 * Program  : drastic64
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CommandData::ParseEnvVar() */

void CommandData::ParseEnvVar(void)

{
  ulong uVar1;
  ulong uVar2;
  CommandData *in_x0;
  char *__s;
  size_t sVar3;
  wchar_t *__ptr;
  
  __s = getenv("RAR");
  if (__s != (char *)0x0) {
    sVar3 = strlen(__s);
    uVar1 = sVar3 + 1;
    uVar2 = uVar1;
    if (uVar1 < 0x20) {
      uVar2 = 0x20;
    }
    __ptr = (wchar_t *)malloc(uVar2 << 2);
    if (__ptr == (wchar_t *)0x0) {
      ErrorHandler::MemoryError();
    }
                    /* try { // try from 001e9a58 to 001e9a67 has its CatchHandler @ 001e9aa0 */
    CharToWide(__s,__ptr,uVar1);
    ProcessSwitchesString(in_x0,__ptr);
    if (__ptr != (wchar_t *)0x0) {
      free(__ptr);
      return;
    }
  }
  return;
}


