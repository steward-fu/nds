/*
 * Ghidra decompilation
 *
 * Function : FUN_080a444c
 * Address  : 080a444c
 * Program  : drastic16
 */


char FUN_080a444c(int param_1,wchar_t *param_2)

{
  int iVar1;
  bool bVar2;
  char local_9;
  
  iVar1 = wcscmp((wchar_t *)(param_1 + 0x18),param_2);
  bVar2 = iVar1 != 0;
  if (bVar2) {
    iVar1 = 0;
  }
  local_9 = (char)iVar1;
  if (!bVar2) {
    local_9 = '\x01';
  }
  if (local_9 != '\x01') {
    local_9 = FUN_080a5f64(param_1 + 0x18,param_2);
  }
  if (local_9 != '\0') {
    wcscpy((wchar_t *)(param_1 + 0x18),param_2);
  }
  return local_9;
}


