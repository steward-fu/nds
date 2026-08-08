/*
 * Ghidra decompilation
 *
 * Function : action_select_menu
 * Address  : 0017a280
 * Program  : drastic64
 */


int action_select_menu(long param_1,long param_2,int *param_3)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  
  iVar2 = *param_3;
  if (iVar2 == 4) {
    pcVar1 = *(code **)(*(long *)(param_1 + 0x10) + 8);
    lVar3 = *(long *)(param_2 + 0x30);
    *(long *)(param_1 + 0x10) = lVar3;
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(param_1,lVar3,1);
    }
    iVar2 = 0xb;
    if (*(code **)(lVar3 + 8) != (code *)0x0) {
      (**(code **)(lVar3 + 8))(param_1,lVar3,0);
      return 0xb;
    }
  }
  else if (iVar2 == 6) {
    iVar2 = 0xb;
    *(undefined4 *)(param_1 + 0x48) = 1;
  }
  return iVar2;
}


