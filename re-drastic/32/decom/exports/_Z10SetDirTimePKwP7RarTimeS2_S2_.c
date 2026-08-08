/*
 * Ghidra decompilation
 *
 * Function : _Z10SetDirTimePKwP7RarTimeS2_S2_
 * Address  : 080d6844
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void SetDirTime(wchar *Name,RarTime *ftm,RarTime *ftc,RarTime *fta)

{
  File::SetCloseFileTimeByName(Name,ftm,fta);
  return;
}


