/*
 * Ghidra decompilation
 *
 * Function : FUN_080dd818
 * Address  : 080dd818
 * Program  : drastic16
 */


undefined4 FUN_080dd818(char *param_1,int param_2)

{
  int local_c;
  
  if (((3 < param_2) && (*param_1 == -1)) && (param_1[1] == -2)) {
    for (local_c = 2; local_c < param_2; local_c = local_c + 1) {
      if ((((byte)param_1[local_c] < 0x20) && (param_1[local_c] != '\r')) &&
         (param_1[local_c] != '\n')) {
        return 1;
      }
    }
  }
  return 0;
}


