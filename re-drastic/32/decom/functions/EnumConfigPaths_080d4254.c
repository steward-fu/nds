/*
 * Ghidra decompilation
 *
 * Function : EnumConfigPaths
 * Address  : 080d4254
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

bool EnumConfigPaths(uint Number,wchar *Path,size_t MaxSize,bool Create)

{
  undefined uVar1;
  char *Src;
  char *EnvStr;
  uint uVar2;
  
  if (Number == 0) {
    Src = getenv("HOME");
    if (Src == (char *)0x0) {
      wcsncpyz(Path,(wchar *)L"/etc",MaxSize);
      uVar1 = 1;
    }
    else {
      CharToWide(Src,Path,MaxSize);
      if (MaxSize == 0) {
        uVar1 = 1;
      }
      else {
        uVar1 = 1;
        Path[MaxSize + 0x3fffffff] = 0;
      }
    }
  }
  else {
    uVar2 = Number - 1;
    if (4 < uVar2) {
      Number = 0;
    }
    uVar1 = (undefined)Number;
    if (uVar2 < 5) {
      wcsncpyz(Path,EnumConfigPaths::ConfPath[uVar2],MaxSize);
      uVar1 = 1;
    }
  }
  return (bool)uVar1;
}


