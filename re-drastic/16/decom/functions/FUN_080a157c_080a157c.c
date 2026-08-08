/*
 * Ghidra decompilation
 *
 * Function : FUN_080a157c
 * Address  : 080a157c
 * Program  : drastic16
 */


void FUN_080a157c(int param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 *local_c;
  
  local_c = (undefined4 *)FUN_080a0c2c(param_1);
  if ((local_c < (undefined4 *)(param_1 + 8)) ||
     ((cVar2 = FUN_080a12f4(*(undefined4 *)(param_1 + 4)), cVar2 == '\x01' &&
      (local_c < (undefined4 *)(param_1 + 0x10))))) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    local_c = local_c + -1;
  }
  *local_c = 0;
  return;
}


