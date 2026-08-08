/*
 * Ghidra decompilation
 *
 * Function : FileCreate
 * Address  : 001ed760
 * Program  : drastic64
 */


/* FileCreate(RAROptions*, File*, wchar_t*, unsigned long, OVERWRITE_MODE, bool*, long long,
   RarTime*, bool) */

ulong FileCreate(RAROptions *param_1,File *param_2,wchar_t *param_3,ulong param_4,
                OVERWRITE_MODE param_5,bool *param_6,longlong param_7,RarTime *param_8,bool param_9)

{
  char cVar1;
  byte bVar2;
  ulong uVar3;
  size_t sVar4;
  
  if (param_6 != (bool *)0x0) {
    *param_6 = false;
  }
  cVar1 = FileExist(param_3);
  if (cVar1 != '\0') {
    if (param_5 == 2) {
      if (param_6 == (bool *)0x0) {
        return 0;
      }
      *param_6 = true;
      return 0;
    }
    if (param_5 == 3) {
      do {
        sVar4 = wcslen(param_3);
        if ((0x7f6 < sVar4) || (cVar1 = GetAutoRenamedName(param_3,param_4), cVar1 == '\0')) {
          FileExist(param_3);
          break;
        }
        cVar1 = FileExist(param_3);
      } while (cVar1 != '\0');
    }
  }
  if (param_2 == (File *)0x0) {
    PrepareToDelete(param_3);
    CreatePath(param_3,true);
    uVar3 = DelFile(param_3);
    return uVar3;
  }
  bVar2 = File::Create(param_2,param_3,param_9 + 9);
  if (bVar2 != 0) {
    return (ulong)bVar2;
  }
  PrepareToDelete(param_3);
  CreatePath(param_3,true);
  uVar3 = File::Create(param_2,param_3,param_9 + 9);
  return uVar3;
}


