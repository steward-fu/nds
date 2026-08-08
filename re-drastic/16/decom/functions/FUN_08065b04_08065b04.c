/*
 * Ghidra decompilation
 *
 * Function : FUN_08065b04
 * Address  : 08065b04
 * Program  : drastic16
 */


code ** FUN_08065b04(int param_1,code *param_2)

{
  code **ppcVar1;
  undefined4 *puVar2;
  char **ppcVar3;
  char **ppcVar4;
  char **ppcVar5;
  code *pcVar6;
  int iVar7;
  
  iVar7 = *(int *)(param_1 + 4);
  ppcVar1 = (code **)malloc(0x20);
  ppcVar1[3] = (code *)0x9;
  ppcVar1[1] = (code *)&DAT_08061718;
  ppcVar1[7] = param_2;
  *ppcVar1 = FUN_0806185c;
  ppcVar1[4] = (code *)0x0;
  puVar2 = (undefined4 *)malloc(0x24);
  ppcVar1[6] = (code *)puVar2;
  ppcVar3 = (char **)malloc(0x24);
  ppcVar5 = ppcVar3;
  if (ppcVar3 == (char **)0x0) {
    ppcVar5 = (char **)malloc(0x18);
  }
  *ppcVar5 = "Username                   ";
  ppcVar5[2] = (char *)FUN_08061940;
  ppcVar5[1] = (char *)0x23;
  ppcVar5[3] = (char *)FUN_08061adc;
  *puVar2 = ppcVar3;
  ppcVar5[4] = (char *)0x0;
  ppcVar5[5] = (char *)0x0;
  ppcVar3[8] = (char *)0x0;
  ppcVar3[6] = (char *)(param_1 + 0x38);
  ppcVar3[7] = (char *)0xa;
  ppcVar3 = (char **)malloc(0x28);
  ppcVar5 = ppcVar3;
  if (ppcVar3 == (char **)0x0) {
    ppcVar5 = (char **)malloc(0x24);
  }
  ppcVar4 = ppcVar5;
  if (ppcVar5 == (char **)0x0) {
    ppcVar4 = (char **)malloc(0x18);
  }
  puVar2[1] = ppcVar3;
  ppcVar4[4] = (char *)0x0;
  ppcVar4[5] = (char *)0x0;
  *ppcVar4 = "Language          ";
  ppcVar4[2] = (char *)FUN_08062024;
  ppcVar4[1] = (char *)0x24;
  ppcVar4[3] = "p";
  ppcVar5[7] = (char *)0x0;
  ppcVar5[6] = (char *)(iVar7 + 0x2c);
  ppcVar5[8] = (char *)0x6;
  ppcVar3[2] = (char *)FUN_08061fb8;
  ppcVar3[9] = (char *)&PTR_s__Japanese_080fa810;
  ppcVar3 = (char **)malloc(0x28);
  ppcVar5 = ppcVar3;
  if (ppcVar3 == (char **)0x0) {
    ppcVar5 = (char **)malloc(0x24);
  }
  ppcVar4 = ppcVar5;
  if (ppcVar5 == (char **)0x0) {
    ppcVar4 = (char **)malloc(0x18);
  }
  ppcVar4[2] = (char *)FUN_08062024;
  ppcVar4[1] = (char *)0x25;
  ppcVar4[3] = "p";
  *ppcVar4 = "Favorite Color ";
  puVar2[2] = ppcVar3;
  ppcVar4[4] = (char *)0x0;
  ppcVar4[5] = (char *)0x0;
  ppcVar5[7] = (char *)0x0;
  ppcVar5[6] = (char *)(iVar7 + 0x30);
  ppcVar5[8] = (char *)0xf;
  ppcVar3[2] = (char *)FUN_08061fb8;
  ppcVar3[9] = (char *)&PTR_s__Light_Slate_Gray_080fa830;
  ppcVar3 = (char **)malloc(0x28);
  ppcVar5 = ppcVar3;
  if (ppcVar3 == (char **)0x0) {
    ppcVar5 = (char **)malloc(0x24);
  }
  ppcVar4 = ppcVar5;
  if (ppcVar5 == (char **)0x0) {
    ppcVar4 = (char **)malloc(0x18);
  }
  ppcVar4[2] = (char *)FUN_08062024;
  ppcVar4[1] = (char *)0x26;
  ppcVar4[3] = "p";
  *ppcVar4 = "Birthday Month    ";
  puVar2[3] = ppcVar3;
  ppcVar4[4] = (char *)0x0;
  ppcVar4[5] = (char *)0x0;
  ppcVar5[6] = (char *)(iVar7 + 0x34);
  ppcVar5[7] = (char *)0x0;
  ppcVar5[8] = (char *)0xb;
  ppcVar3[2] = (char *)FUN_08061fb8;
  ppcVar3[9] = (char *)&PTR_s__January_080fa870;
  ppcVar3 = (char **)malloc(0x24);
  ppcVar5 = ppcVar3;
  if (ppcVar3 == (char **)0x0) {
    ppcVar5 = (char **)malloc(0x18);
  }
  ppcVar5[2] = (char *)FUN_08062024;
  ppcVar5[3] = "p";
  ppcVar5[1] = (char *)0x27;
  *ppcVar5 = "Birthday Day                       ";
  puVar2[4] = ppcVar3;
  ppcVar5[4] = (char *)0x0;
  ppcVar5[5] = (char *)0x0;
  ppcVar3[6] = (char *)(iVar7 + 0x38);
  ppcVar3[8] = (char *)0x1f;
  ppcVar3[7] = (char *)0x1;
  ppcVar3 = (char **)malloc(0x1c);
  ppcVar5 = ppcVar3;
  if (ppcVar3 == (char **)0x0) {
    ppcVar5 = (char **)malloc(0x18);
  }
  puVar2[5] = ppcVar3;
  *ppcVar5 = "Delete game-specific config";
  ppcVar5[2] = &DAT_08061f7c;
  ppcVar5[1] = (char *)0x29;
  ppcVar5[3] = (char *)FUN_08061e00;
  ppcVar5[4] = (char *)0x0;
  ppcVar5[5] = (char *)0x0;
  ppcVar3[6] = "";
  ppcVar3 = (char **)malloc(0x1c);
  ppcVar5 = ppcVar3;
  if (ppcVar3 == (char **)0x0) {
    ppcVar5 = (char **)malloc(0x18);
  }
  ppcVar5[2] = &DAT_08061f7c;
  ppcVar5[3] = (char *)FUN_08061e00;
  ppcVar5[1] = (char *)0x2b;
  puVar2[6] = ppcVar3;
  *ppcVar5 = "Exit: save for all games";
  ppcVar5[4] = (char *)0x0;
  ppcVar5[5] = (char *)0x0;
  ppcVar3[6] = (char *)FUN_08061e3c;
  ppcVar3 = (char **)malloc(0x1c);
  ppcVar5 = ppcVar3;
  if (ppcVar3 == (char **)0x0) {
    ppcVar5 = (char **)malloc(0x18);
  }
  ppcVar5[2] = &DAT_08061f7c;
  ppcVar5[3] = (char *)FUN_08061e00;
  ppcVar5[1] = (char *)0x2c;
  puVar2[7] = ppcVar3;
  *ppcVar5 = "Exit: save for this game";
  ppcVar5[4] = (char *)0x0;
  ppcVar5[5] = (char *)0x0;
  ppcVar3[6] = "";
  ppcVar3 = (char **)malloc(0x1c);
  ppcVar5 = ppcVar3;
  if (ppcVar3 == (char **)0x0) {
    ppcVar5 = (char **)malloc(0x18);
  }
  iVar7 = *(int *)(param_1 + 0x20);
  ppcVar5[2] = &DAT_08061f7c;
  *ppcVar5 = "Exit without saving";
  ppcVar5[3] = (char *)FUN_08061e00;
  if (iVar7 == 0) {
    pcVar6 = (code *)0x100;
  }
  else {
    pcVar6 = (code *)0x5c;
  }
  ppcVar5[1] = (char *)0x2d;
  ppcVar1[2] = pcVar6;
  puVar2[8] = ppcVar3;
  ppcVar5[4] = (char *)0x0;
  ppcVar5[5] = (char *)0x0;
  ppcVar3[6] = (char *)FUN_08061d6c;
  return ppcVar1;
}


