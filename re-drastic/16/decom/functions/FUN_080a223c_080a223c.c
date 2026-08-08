/*
 * Ghidra decompilation
 *
 * Function : FUN_080a223c
 * Address  : 080a223c
 * Program  : drastic16
 */


void FUN_080a223c(int *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  char *pcVar2;
  char local_808 [2048];
  
  if ((param_1 == (int *)0x0) || (*param_1 == 0)) {
    if (param_3 != 0) {
      *param_2 = 0;
    }
  }
  else {
    iVar1 = FUN_080a2330(param_1);
    if (iVar1 == 0) {
      pcVar2 = getcwd(local_808,0x800);
      if (pcVar2 == (char *)0x0) {
        local_808[0] = '\0';
      }
      FUN_080afc9c(local_808,param_2,param_3);
      FUN_080a1368(param_2,param_3);
    }
    else {
      *param_2 = 0;
    }
    FUN_080a06f0(param_2,param_1,param_3);
  }
  return;
}


