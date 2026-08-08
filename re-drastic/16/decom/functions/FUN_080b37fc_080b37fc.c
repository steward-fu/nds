/*
 * Ghidra decompilation
 *
 * Function : FUN_080b37fc
 * Address  : 080b37fc
 * Program  : drastic16
 */


int FUN_080b37fc(int param_1,int param_2,uint param_3)

{
  int iVar1;
  uint local_c;
  
  iVar1 = param_1;
  switch(*(undefined4 *)(param_1 + 0x9e4)) {
  case 1:
    iVar1 = FUN_080b128c(param_1,param_2,param_3);
    break;
  case 2:
    iVar1 = FUN_080b1344(param_1,param_2,param_3);
    break;
  case 3:
    for (local_c = 0; local_c < param_3; local_c = local_c + 0x10) {
      iVar1 = FUN_080b1dc4(param_1,param_2 + local_c);
    }
    break;
  case 4:
  case 5:
    iVar1 = FUN_080b7ac4(param_1 + 0x9e8,param_2,param_3,param_2);
  }
  return iVar1;
}


