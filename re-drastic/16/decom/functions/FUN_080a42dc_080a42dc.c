/*
 * Ghidra decompilation
 *
 * Function : FUN_080a42dc
 * Address  : 080a42dc
 * Program  : drastic16
 */


char FUN_080a42dc(int param_1)

{
  int iVar1;
  bool bVar2;
  char local_9;
  
  local_9 = '\x01';
  if (*(int *)(param_1 + 4) != 0) {
    if (*(char *)(param_1 + 0x10) != '\x01') {
      iVar1 = fclose(*(FILE **)(param_1 + 4));
      bVar2 = iVar1 == -1;
      if (bVar2) {
        iVar1 = 0;
      }
      local_9 = (char)iVar1;
      if (!bVar2) {
        local_9 = '\x01';
      }
    }
    *(undefined4 *)(param_1 + 4) = 0;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  if ((local_9 != '\x01') && (*(char *)(param_1 + 0x14) != '\0')) {
    FUN_080b6f48(&DAT_081cd0a0,param_1 + 0x18);
  }
  return local_9;
}


