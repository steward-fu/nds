/*
 * Ghidra decompilation
 *
 * Function : FUN_080d7b6c
 * Address  : 080d7b6c
 * Program  : drastic16
 */


void FUN_080d7b6c(undefined4 param_1)

{
  int iVar1;
  undefined auStack_68 [92];
  undefined4 *local_c;
  
  FUN_0809f41c(auStack_68);
  iVar1 = FUN_080dcebc(&DAT_080ee8c8,auStack_68,1,0,0,0,0,0);
  if (iVar1 != 0) {
    while (local_c = (undefined4 *)FUN_0809f7d4(auStack_68), local_c != (undefined4 *)0x0) {
      while (iVar1 = FUN_080a016c(*local_c), iVar1 != 0) {
        local_c = local_c + 1;
      }
      iVar1 = FUN_080b0bb0(local_c,L"switches=",9);
      if (iVar1 == 0) {
        FUN_080d7ca0(param_1,local_c + 9);
      }
    }
    local_c = (undefined4 *)0x0;
  }
  FUN_0809ee6c(auStack_68);
  return;
}


