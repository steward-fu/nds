/*
 * Ghidra decompilation
 *
 * Function : _Z10FileCreateP10RAROptionsP4FilePwj14OVERWRITE_MODEPbxP7RarTimeb
 * Address  : 08109e74
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

bool FileCreate(RAROptions *Cmd,File *NewFile,wchar *Name,size_t MaxNameSize,OVERWRITE_MODE Mode,
               bool *UserReject,int64 FileSize,RarTime *FileTime,bool WriteOnly)

{
  bool bVar1;
  size_t sVar2;
  uint FileMode;
  
  if (UserReject != (bool *)0x0) {
    *UserReject = false;
  }
  while (bVar1 = FileExist(Name), bVar1) {
    if (Mode == OVERWRITE_NONE) {
      if (UserReject == (bool *)0x0) {
        Name = (wchar *)0x0;
      }
      if (UserReject == (bool *)0x0) {
        return (bool)(char)Name;
      }
      *UserReject = true;
      return false;
    }
    if (Mode != OVERWRITE_AUTORENAME) break;
    sVar2 = wcslen((wchar_t *)Name);
    if ((0x7f6 < sVar2) || (bVar1 = GetAutoRenamedName(Name,MaxNameSize), !bVar1)) {
      Mode = OVERWRITE_DEFAULT;
    }
  }
  if (WriteOnly) {
    FileMode = 10;
  }
  else {
    FileMode = 9;
  }
  if (NewFile != (File *)0x0) {
    bVar1 = File::Create(NewFile,Name,FileMode);
    if (bVar1) {
      return bVar1;
    }
    PrepareToDelete(Name);
    CreatePath(Name,true);
    bVar1 = File::Create(NewFile,Name,FileMode);
    return bVar1;
  }
  PrepareToDelete(Name);
  CreatePath(Name,true);
  bVar1 = DelFile(Name);
  return bVar1;
}


