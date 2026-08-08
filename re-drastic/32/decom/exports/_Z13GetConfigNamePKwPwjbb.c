/*
 * Ghidra decompilation
 *
 * Function : _Z13GetConfigNamePKwPwjbb
 * Address  : 080d4304
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void GetConfigName(wchar *Name,wchar *FullName,size_t MaxSize,bool CheckExist,bool Create)

{
  bool bVar1;
  char *Src;
  char *EnvStr;
  size_t sVar2;
  size_t Length;
  uint uVar3;
  
  *FullName = 0;
  uVar3 = 0xffffffff;
  while( true ) {
    if (uVar3 + 1 == 0) {
      Src = getenv("HOME");
      if (Src == (char *)0x0) {
        wcsncpyz(FullName,(wchar *)L"/etc",MaxSize);
      }
      else {
        CharToWide(Src,FullName,MaxSize);
        if (MaxSize != 0) {
          FullName[MaxSize + 0x3fffffff] = 0;
        }
      }
    }
    else {
      if (4 < uVar3) {
        return;
      }
      wcsncpyz(FullName,EnumConfigPaths::ConfPath[uVar3],MaxSize);
    }
    sVar2 = wcslen((wchar_t *)FullName);
    if (((sVar2 != 0) && (FullName[sVar2 + 0x3fffffff] != 0x2f)) && (sVar2 + 1 < MaxSize)) {
      wcscat((wchar_t *)FullName,L"/");
    }
    wcsncatz(FullName,Name,MaxSize);
    if (!CheckExist) break;
    bVar1 = WildFileExist(FullName);
    uVar3 = uVar3 + 1;
    if (bVar1) {
      return;
    }
  }
  return;
}


