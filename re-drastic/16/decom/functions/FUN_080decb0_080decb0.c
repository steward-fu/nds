/*
 * Ghidra decompilation
 *
 * Function : FUN_080decb0
 * Address  : 080decb0
 * Program  : drastic16
 */


void FUN_080decb0(int param_1,char *param_2)

{
  bool bVar1;
  int iVar2;
  
  if ((*param_2 != '\0') && (*(int *)(param_1 + 0x7028) != 0)) {
    iVar2 = FUN_080da7a8(*(undefined4 *)(param_1 + 0x7028),param_1 + 0x1020,0,1,1);
    if (iVar2 != 0) {
      bVar1 = true;
      goto LAB_080ded34;
    }
  }
  bVar1 = false;
LAB_080ded34:
  if (bVar1) {
    *param_2 = '\0';
  }
  return;
}


