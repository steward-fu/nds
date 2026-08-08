/*
 * Ghidra decompilation
 *
 * Function : ExtractFileCopy
 * Address  : 080ea2d8
 * Program  : drastic
 */


/* DWARF original prototype: bool ExtractFileCopy(CmdExtract * this, CommandData * Cmd, File * New,
   wchar * ArcName, wchar * NameNew, wchar * NameExisting, size_t NameExistingSize) */

bool __thiscall
CmdExtract::ExtractFileCopy
          (CmdExtract *this,CommandData *Cmd,File *New,wchar *ArcName,wchar *NameNew,
          wchar *NameExisting,size_t NameExistingSize)

{
  int iVar1;
  bool bVar2;
  void *Data;
  char *NewBuffer;
  int ReadSize;
  size_t Size;
  int extraout_r1;
  int __in_chrg;
  int extraout_r1_00;
  int extraout_r1_01;
  File Existing;
  
  iVar1 = __stack_chk_guard;
  DosSlashToUnix(NameExisting,NameExisting,NameExistingSize);
  File::File(&Existing);
  bVar2 = File::Open(&Existing,NameExisting,0);
  if (bVar2) {
    Data = realloc((void *)0x0,0x100000);
    if (Data == (void *)0x0) {
      ErrorHandler::MemoryError(&ErrHandler);
    }
    while( true ) {
      Wait();
      Size = File::Read(&Existing,Data,0x100000);
      if (Size == 0) break;
      File::Write(New,Data,Size);
    }
    __in_chrg = extraout_r1_00;
    if (Data != (void *)0x0) {
      free(Data);
      __in_chrg = extraout_r1_01;
    }
  }
  else {
    ErrorHandler::OpenErrorMsg((wchar_t *)&ErrHandler,(wchar_t *)ArcName);
    (Cmd->super_RAROptions).DllError = 0x17;
    __in_chrg = extraout_r1;
  }
  File::~File(&Existing,__in_chrg);
  if (iVar1 == __stack_chk_guard) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


