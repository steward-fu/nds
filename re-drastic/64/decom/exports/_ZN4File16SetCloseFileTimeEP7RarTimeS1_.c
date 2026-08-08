/*
 * Ghidra decompilation
 *
 * Function : _ZN4File16SetCloseFileTimeEP7RarTimeS1_
 * Address  : 001b7ff0
 * Program  : drastic64
 */


/* File::SetCloseFileTime(RarTime*, RarTime*) */

void __thiscall File::SetCloseFileTime(File *this,RarTime *param_1,RarTime *param_2)

{
  SetCloseFileTimeByName((wchar_t *)(this + 0x20),param_1,param_2);
  return;
}


