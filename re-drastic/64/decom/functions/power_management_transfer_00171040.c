/*
 * Ghidra decompilation
 *
 * Function : power_management_transfer
 * Address  : 00171040
 * Program  : drastic64
 */


char power_management_transfer(char *param_1,char param_2)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  
  cVar2 = *param_1;
  if (cVar2 == '\0') {
    *param_1 = '\x01';
    param_1[1] = param_2;
    return cVar2;
  }
  bVar3 = param_1[1];
  bVar1 = bVar3 >> 7 ^ 1;
  cVar2 = param_1[((ulong)bVar3 & 0x7f) + 2];
  if ((bVar3 & 0x7f) == 1) {
    bVar1 = 0;
  }
  if (bVar1 != 0) {
    param_1[((ulong)bVar3 & 0x7f) + 2] = param_2;
  }
  *param_1 = '\0';
  return cVar2;
}


