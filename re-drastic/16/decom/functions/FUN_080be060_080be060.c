/*
 * Ghidra decompilation
 *
 * Function : FUN_080be060
 * Address  : 080be060
 * Program  : drastic16
 */


int FUN_080be060(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1;
  iVar3 = param_2;
  for (iVar1 = 7; iVar1 != -1; iVar1 = iVar1 + -1) {
    FUN_080bdee0(iVar2,iVar3);
    iVar2 = iVar2 + 0x108;
    iVar3 = iVar3 + 0x108;
  }
  FUN_080bdee0(param_1 + 0x840,param_2 + 0x840);
  memcpy((void *)(param_1 + 0x948),(void *)(param_2 + 0x948),0x200);
  *(undefined4 *)(param_1 + 0xb48) = *(undefined4 *)(param_2 + 0xb48);
  *(undefined4 *)(param_1 + 0xb4c) = *(undefined4 *)(param_2 + 0xb4c);
  *(undefined4 *)(param_1 + 0xb50) = *(undefined4 *)(param_2 + 0xb50);
  return param_1;
}


