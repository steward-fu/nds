/*
 * Ghidra decompilation
 *
 * Function : GetConfigName
 * Address  : 001b64d0
 * Program  : drastic64
 */


/* GetConfigName(wchar_t const*, wchar_t*, unsigned long, bool, bool) */

void GetConfigName(wchar_t *param_1,wchar_t *param_2,ulong param_3,bool param_4,bool param_5)

{
  char cVar1;
  size_t sVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  
  *param_2 = L'\0';
  uVar5 = 0;
  do {
    pcVar3 = getenv("HOME");
    uVar4 = uVar5;
    if (pcVar3 == (char *)0x0) {
      wcsncpyz(param_2,L"/etc",param_3);
    }
    else {
      CharToWide(pcVar3,param_2,param_3);
      if (param_3 != 0) {
        param_2[param_3 - 1] = L'\0';
      }
    }
    while( true ) {
      sVar2 = wcslen(param_2);
      if (((sVar2 != 0) && (param_2[sVar2 - 1] != L'/')) && (sVar2 + 1 < param_3)) {
        wcscat(param_2,L"/");
      }
      wcsncatz(param_2,param_1,param_3);
      if ((!param_4) || (cVar1 = WildFileExist(param_2), cVar1 != '\0')) {
        return;
      }
      uVar5 = uVar4 + 1;
      if (uVar5 == 0) break;
      if (4 < uVar4) {
        return;
      }
      wcsncpyz(param_2,(wchar_t *)
                       (&EnumConfigPaths(unsigned_int,wchar_t*,unsigned_long,bool)::ConfPath)[uVar4]
               ,param_3);
      uVar4 = uVar5;
    }
  } while( true );
}


