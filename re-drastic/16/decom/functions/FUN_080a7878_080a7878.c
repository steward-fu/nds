/*
 * Ghidra decompilation
 *
 * Function : FUN_080a7878
 * Address  : 080a7878
 * Program  : drastic16
 */


undefined4 FUN_080a7878(undefined4 param_1,char *param_2,uint param_3)

{
  undefined4 local_c;
  
  local_c = 0;
  if ((param_3 != 0) && (*param_2 == 'R')) {
    if ((param_3 < 4) || (((param_2[1] != 'E' || (param_2[2] != '~')) || (param_2[3] != '^')))) {
      if (((((6 < param_3) && (param_2[1] == 'a')) && (param_2[2] == 'r')) &&
          ((param_2[3] == '!' && (param_2[4] == '\x1a')))) && (param_2[5] == '\a')) {
        if (param_2[6] == '\0') {
          local_c = 2;
        }
        else if (param_2[6] == '\x01') {
          local_c = 3;
        }
        else if (param_2[6] == '\x02') {
          local_c = 4;
        }
      }
    }
    else {
      local_c = 1;
    }
  }
  return local_c;
}


