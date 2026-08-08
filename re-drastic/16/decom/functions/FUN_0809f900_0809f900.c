/*
 * Ghidra decompilation
 *
 * Function : FUN_0809f900
 * Address  : 0809f900
 * Program  : drastic16
 */


undefined FUN_0809f900(undefined4 param_1,wchar_t *param_2,char param_3)

{
  int iVar1;
  wchar_t *local_10;
  undefined local_9;
  
  FUN_0809f9fc(param_1);
  FUN_0809f8d8(param_1);
  local_9 = 0;
  do {
    iVar1 = FUN_0809f80c(param_1,&local_10);
    if (iVar1 == 0) goto LAB_0809f9dc;
    if ((param_2 == (wchar_t *)0x0) || (local_10 == (wchar_t *)0x0)) break;
    if (param_3 == '\0') {
      iVar1 = FUN_080b0b10(param_2,local_10);
    }
    else {
      iVar1 = wcscmp(param_2,local_10);
    }
  } while (iVar1 != 0);
  local_9 = 1;
LAB_0809f9dc:
  FUN_0809fa5c(param_1);
  return local_9;
}


