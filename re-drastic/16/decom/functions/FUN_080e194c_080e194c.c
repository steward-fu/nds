/*
 * Ghidra decompilation
 *
 * Function : FUN_080e194c
 * Address  : 080e194c
 * Program  : drastic16
 */


undefined4 FUN_080e194c(undefined4 param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  uint local_c;
  
  uVar1 = FUN_080b4060(0xffffffff,param_2,param_3);
  local_c = 0;
  while( true ) {
    if (5 < local_c) {
      return 0;
    }
    if ((*(uint *)(&DAT_081022e0 + local_c * 0xc) == ~uVar1) &&
       (*(int *)(&DAT_081022dc + local_c * 0xc) == param_3)) break;
    local_c = local_c + 1;
  }
  return *(undefined4 *)(&DAT_081022e4 + local_c * 0xc);
}


