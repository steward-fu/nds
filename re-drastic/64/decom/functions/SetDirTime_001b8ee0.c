/*
 * Ghidra decompilation
 *
 * Function : SetDirTime
 * Address  : 001b8ee0
 * Program  : drastic64
 */


/* SetDirTime(wchar_t const*, RarTime*, RarTime*, RarTime*) */

void SetDirTime(wchar_t *param_1,RarTime *param_2,RarTime *param_3,RarTime *param_4)

{
  File::SetCloseFileTimeByName(param_1,param_2,param_4);
  return;
}


