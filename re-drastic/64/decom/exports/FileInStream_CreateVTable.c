/*
 * Ghidra decompilation
 *
 * Function : FileInStream_CreateVTable
 * Address  : 001af220
 * Program  : drastic64
 */


void FileInStream_CreateVTable(code **param_1)

{
  *param_1 = FileInStream_Read;
  param_1[1] = FileInStream_Seek;
  return;
}


