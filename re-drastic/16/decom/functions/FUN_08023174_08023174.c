/*
 * Ghidra decompilation
 *
 * Function : FUN_08023174
 * Address  : 08023174
 * Program  : drastic16
 */


void FUN_08023174(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  iVar4 = *(int *)(param_2 + 0x15030);
  iVar5 = *(int *)(param_2 + 0x15028);
  iVar1 = *(int *)(param_2 + 0x15014);
  iVar12 = *(int *)(param_2 + 0x1502c);
  iVar9 = *(int *)(param_2 + 0x15020);
  iVar7 = *(int *)(param_2 + 0x15024);
  iVar11 = *(int *)(param_2 + 0x15010);
  iVar10 = *(int *)(param_2 + 0x15018);
  iVar3 = *(int *)(param_2 + 0x1501c);
  *param_1 = param_2;
  param_1[0x761] = param_2 + 0x16040;
  param_1[0x762] = param_2 + 0x16440;
  param_1[0x763] = param_2 + 0x15040;
  param_1[0x764] = param_2 + 0x15440;
  param_1[0x42e] = iVar11;
  param_1[0x42f] = iVar1;
  param_1[0x430] = iVar10;
  param_1[0x431] = iVar3;
  param_1[0x432] = iVar9;
  param_1[0x433] = iVar7;
  param_1[0x434] = iVar5;
  param_1[0x435] = iVar12;
  param_1[0x436] = iVar4;
  param_1[0x437] = param_2 + 0x1b280;
  param_1[0x438] = param_2 + 0x1b281;
  param_1[0x439] = param_2 + 0x1b282;
  param_1[0x43a] = param_2 + 0x1b283;
  param_1[0x43b] = param_2 + 0x1b284;
  param_1[0x43e] = param_2 + 0x1b288;
  param_1[0x43c] = param_2 + 0x1b285;
  param_1[0x43d] = param_2 + 0x1b286;
  param_1[0x43f] = param_2 + 0x1b289;
  param_1[0x9b8c5] = 0;
  param_1[0x9b8c6] = 0;
  FUN_08033cc0(param_1 + 0x766,0,param_1);
  FUN_08033cc0(param_1 + 0x20b36,1,param_1);
  FUN_0805199c(param_1 + 0x6120c,*(undefined4 *)(*param_1 + 0xfba1c),param_1 + 0x60200);
  FUN_08058940(param_1 + 0x60200,param_1);
  puVar6 = (undefined4 *)&DAT_0aaec110;
  puVar8 = (undefined4 *)&DAT_0aaec910;
  iVar1 = 1;
  do {
    uVar2 = __aeabi_uidiv(iVar1 + 0x3fffffff,iVar1);
    puVar6 = puVar6 + 1;
    *puVar6 = uVar2;
    uVar2 = __aeabi_uidiv(iVar1 + 0x7fffffff,iVar1);
    iVar1 = iVar1 + 1;
    puVar8 = puVar8 + 1;
    *puVar8 = uVar2;
  } while (iVar1 != 0x101);
  param_1[0x55330] = (int)param_1;
  param_1[0x55331] = (int)(param_1 + 0x6120c);
  *(undefined *)((int)param_1 + 0x154d6a) = 0;
  *(undefined *)((int)param_1 + 0x154d6b) = 1;
  return;
}


