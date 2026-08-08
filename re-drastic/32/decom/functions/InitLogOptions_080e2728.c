/*
 * Ghidra decompilation
 *
 * Function : InitLogOptions
 * Address  : 080e2728
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void InitLogOptions(wchar *LogFileName,RAR_CHARSET CSet)

{
  wcsncpyz(LogName,LogFileName,0x800);
  return;
}


