/*
 * Ghidra decompilation
 *
 * Function : SetDirTime
 * Address  : 080d6844
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void SetDirTime(wchar *Name,RarTime *ftm,RarTime *ftc,RarTime *fta)

{
  File::SetCloseFileTimeByName(Name,ftm,fta);
  return;
}


