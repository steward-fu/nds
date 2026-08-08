/*
 * Ghidra decompilation
 *
 * Function : _ZN11CommandData21ProcessSwitchesStringEPKw
 * Address  : 001e9840
 * Program  : drastic64
 */


/* CommandData::ProcessSwitchesString(wchar_t const*) */

void __thiscall CommandData::ProcessSwitchesString(CommandData *this,wchar_t *param_1)

{
  long lVar1;
  wchar_t *__ptr;
  
  while( true ) {
    lVar1 = GetCmdParam(param_1,(wchar_t *)0x0,0);
    if (((lVar1 == 0) ||
        (__ptr = (wchar_t *)malloc((lVar1 - (long)param_1) + 8), __ptr == (wchar_t *)0x0)) ||
       (param_1 = (wchar_t *)GetCmdParam(param_1,__ptr,(lVar1 - (long)param_1 >> 2) + 2),
       param_1 == (wchar_t *)0x0)) break;
    if (*__ptr == L'-') {
      ProcessSwitch(this,__ptr + 1);
    }
    free(__ptr);
  }
  return;
}


