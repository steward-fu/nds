/*
 * Ghidra decompilation
 *
 * Function : FUN_080afc9c
 * Address  : 080afc9c
 * Program  : drastic16
 */


char FUN_080afc9c(char *param_1,wchar_t *param_2,uint param_3)

{
  char local_d;
  size_t local_c;
  
  local_d = '\x01';
  *param_2 = L'\0';
  local_c = mbstowcs(param_2,param_1,param_3);
  if (local_c == 0xffffffff) {
    local_d = '\0';
  }
  if ((local_c == 0) && (*param_1 != '\0')) {
    local_d = '\0';
  }
  if ((local_d != '\x01') && (1 < param_3)) {
    FUN_080affb8(param_1,param_2,param_3,&local_d);
  }
  if (param_3 != 0) {
    param_2[param_3 + 0x3fffffff] = L'\0';
  }
  return local_d;
}


