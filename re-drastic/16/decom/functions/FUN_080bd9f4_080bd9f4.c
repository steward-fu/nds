/*
 * Ghidra decompilation
 *
 * Function : FUN_080bd9f4
 * Address  : 080bd9f4
 * Program  : drastic16
 */


bool FUN_080bd9f4(int *param_1,int *param_2)

{
  int iVar1;
  bool bVar2;
  
  if ((*param_1 == 0) || (*param_2 == 0)) {
    bVar2 = true;
  }
  else if (((*param_1 == 1) && (*param_2 == 1)) || ((*param_1 == 2 && (*param_2 == 2)))) {
    bVar2 = param_1[1] == param_2[1];
  }
  else if ((*param_1 == 3) && (*param_2 == 3)) {
    iVar1 = memcmp(param_1 + 1,param_2 + 1,0x20);
    bVar2 = iVar1 == 0;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}


