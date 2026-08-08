/*
 * Ghidra decompilation
 *
 * Function : _Z15EnumConfigPathsjPwmb
 * Address  : 001b6430
 * Program  : drastic64
 */


/* EnumConfigPaths(unsigned int, wchar_t*, unsigned long, bool) */

undefined8 EnumConfigPaths(uint param_1,wchar_t *param_2,ulong param_3,bool param_4)

{
  undefined8 uVar1;
  char *pcVar2;
  
  if (param_1 == 0) {
    pcVar2 = getenv("HOME");
    if (pcVar2 == (char *)0x0) {
      wcsncpyz(param_2,L"/etc",param_3);
      uVar1 = 1;
    }
    else {
      CharToWide(pcVar2,param_2,param_3);
      uVar1 = 1;
      if (param_3 != 0) {
        param_2[param_3 - 1] = L'\0';
      }
    }
  }
  else {
    uVar1 = 0;
    if (param_1 - 1 < 5) {
      wcsncpyz(param_2,(wchar_t *)
                       (&EnumConfigPaths(unsigned_int,wchar_t*,unsigned_long,bool)::ConfPath)
                       [param_1 - 1],param_3);
      return 1;
    }
  }
  return uVar1;
}


