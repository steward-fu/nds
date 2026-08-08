/*
 * Ghidra decompilation
 *
 * Function : LookToRead_CreateVTable
 * Address  : 001afa10
 * Program  : drastic64
 */


void LookToRead_CreateVTable(code **param_1,int param_2)

{
  code *pcVar1;
  
  pcVar1 = LookToRead_Look_Lookahead;
  if (param_2 == 0) {
    pcVar1 = LookToRead_Look_Exact;
  }
  *param_1 = pcVar1;
  param_1[1] = LookToRead_Skip;
  param_1[2] = LookToRead_Read;
  param_1[3] = LookToRead_Seek;
  return;
}


