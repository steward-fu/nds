/*
 * Ghidra decompilation
 *
 * Function : GenerateArchiveName
 * Address  : 080d4f0c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void GenerateArchiveName(wchar *ArcName,size_t MaxSize,wchar *GenerateMask,bool Archiving)

{
  int iVar1;
  bool bVar2;
  wchar *src;
  uint ArcNumber;
  bool ArcNumPresent;
  wchar NewName [2196];
  
  iVar1 = __stack_chk_guard;
  ArcNumber = 1;
  do {
    wcsncpyz(NewName,ArcName,0x894);
    ArcNumPresent = false;
    GenArcName(NewName,GenerateMask,ArcNumber,&ArcNumPresent);
    if (ArcNumPresent == false) {
LAB_080d4fa4:
      wcsncpyz(ArcName,NewName,MaxSize);
      if (iVar1 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    bVar2 = FileExist(NewName);
    if (!bVar2) {
      if (Archiving < (1 < ArcNumber)) {
        src = NullToEmpty(ArcName);
        wcsncpyz(NewName,src,0x894);
        GenArcName(NewName,GenerateMask,ArcNumber - 1,&ArcNumPresent);
      }
      goto LAB_080d4fa4;
    }
    ArcNumber = ArcNumber + 1;
  } while( true );
}


