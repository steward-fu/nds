/*
 * Ghidra decompilation
 *
 * Function : FUN_080c9578
 * Address  : 080c9578
 * Program  : drastic16
 */


int FUN_080c9578(int param_1,uint param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int local_1c;
  int local_c;
  
  local_1c = param_3;
  for (local_c = 0; *(uint *)(param_4 + local_c * 4) <= (param_2 & 0xfff0); local_c = local_c + 1) {
    local_1c = local_1c + 1;
  }
  FUN_080e2c30(param_1 + 4,local_1c);
  if (local_c == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_4 + (local_c + 0x3fffffff) * 4);
  }
  return ((param_2 & 0xfff0) - iVar1 >> (0x10U - local_1c & 0xff)) +
         *(int *)(param_5 + local_1c * 4);
}


