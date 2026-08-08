/*
 * Ghidra decompilation
 *
 * Function : RARCloseArchive
 * Address  : 001b3060
 * Program  : drastic64
 */


undefined8 RARCloseArchive(RAROptions *param_1)

{
  char cVar1;
  
  if (param_1 == (RAROptions *)0x0) {
    return 0x11;
  }
  cVar1 = File::Close();
  CmdExtract::~CmdExtract((CmdExtract *)(param_1 + 0x29c28));
  Archive::~Archive((Archive *)(param_1 + 0x169d0));
  if (*(void **)(param_1 + 0x16918) != (void *)0x0) {
    free(*(void **)(param_1 + 0x16918));
  }
  if (*(void **)(param_1 + 0x16860) != (void *)0x0) {
    free(*(void **)(param_1 + 0x16860));
  }
  if (*(void **)(param_1 + 0x167a8) != (void *)0x0) {
    free(*(void **)(param_1 + 0x167a8));
  }
  if (*(void **)(param_1 + 0x166f0) != (void *)0x0) {
    free(*(void **)(param_1 + 0x166f0));
  }
  if (*(void **)(param_1 + 0x16638) != (void *)0x0) {
    free(*(void **)(param_1 + 0x16638));
  }
  RAROptions::~RAROptions(param_1);
  operator_delete(param_1,0x32430);
  if (cVar1 != '\0') {
    return 0;
  }
  return 0x11;
}


