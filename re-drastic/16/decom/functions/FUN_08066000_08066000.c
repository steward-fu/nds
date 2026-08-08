/*
 * Ghidra decompilation
 *
 * Function : FUN_08066000
 * Address  : 08066000
 * Program  : drastic16
 */


undefined4 * FUN_08066000(int param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  char *pcVar3;
  char *pcVar4;
  char **ppcVar5;
  char **ppcVar6;
  char **ppcVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int iVar10;
  
  iVar10 = *(int *)(param_1 + 4);
  puVar1 = (undefined4 *)malloc(0x20);
  *puVar1 = &DAT_08061710;
  puVar1[3] = 9;
  puVar1[7] = 0;
  puVar1[1] = 0;
  puVar1[4] = 0;
  pvVar2 = malloc(0x24);
  puVar1[6] = pvVar2;
  pcVar3 = (char *)FUN_08064ebc(param_1,puVar1);
  pcVar4 = (char *)FUN_08065b04(param_1,puVar1);
  puVar9 = (undefined4 *)puVar1[6];
  if (*(int *)(param_1 + 0x20) == 0) {
    uVar8 = 0x158;
  }
  else {
    uVar8 = 0xb4;
  }
  puVar1[2] = uVar8;
  ppcVar5 = (char **)malloc(0x1c);
  ppcVar7 = ppcVar5;
  if (ppcVar5 == (char **)0x0) {
    ppcVar7 = (char **)malloc(0x18);
  }
  ppcVar7[1] = (char *)0x23;
  *ppcVar7 = "Change options";
  ppcVar7[2] = &DAT_08061f7c;
  ppcVar7[4] = (char *)0x0;
  ppcVar7[3] = (char *)FUN_08061ce8;
  ppcVar7[5] = (char *)FUN_08062430;
  ppcVar5[6] = pcVar3;
  *puVar9 = ppcVar5;
  ppcVar5 = (char **)malloc(0x1c);
  ppcVar7 = ppcVar5;
  if (ppcVar5 == (char **)0x0) {
    ppcVar7 = (char **)malloc(0x18);
  }
  ppcVar7[2] = &DAT_08061f7c;
  ppcVar7[3] = (char *)FUN_08061ce8;
  ppcVar7[5] = (char *)FUN_08062430;
  ppcVar7[1] = (char *)0x24;
  *ppcVar7 = "Configure Firmware";
  ppcVar7[4] = (char *)0x0;
  ppcVar5[6] = pcVar4;
  puVar9[1] = ppcVar5;
  ppcVar5 = (char **)malloc(0x1c);
  ppcVar7 = ppcVar5;
  if (ppcVar5 == (char **)0x0) {
    ppcVar7 = (char **)malloc(0x18);
  }
  ppcVar7[2] = &DAT_08061f7c;
  ppcVar7[4] = (char *)0x0;
  ppcVar7[5] = (char *)0x0;
  *ppcVar7 = "Configure Cheats";
  ppcVar7[3] = (char *)FUN_08061e00;
  ppcVar7[1] = (char *)0x25;
  ppcVar5[6] = "";
  pcVar3 = (char *)(iVar10 + 0x458);
  puVar9[2] = ppcVar5;
  ppcVar6 = (char **)malloc(0x2c);
  ppcVar7 = ppcVar6;
  ppcVar5 = ppcVar6;
  if ((ppcVar6 == (char **)0x0) &&
     (ppcVar5 = (char **)malloc(0x24), ppcVar7 = ppcVar5, ppcVar5 == (char **)0x0)) {
    ppcVar7 = (char **)malloc(0x18);
  }
  ppcVar7[4] = (char *)0x0;
  ppcVar7[1] = (char *)0x27;
  ppcVar7[5] = (char *)0x0;
  *ppcVar7 = "Load state   ";
  ppcVar7[2] = (char *)FUN_08062024;
  ppcVar7[3] = "p";
  ppcVar5[7] = (char *)0x0;
  ppcVar5[6] = pcVar3;
  ppcVar5[8] = (char *)0x9;
  ppcVar6[3] = (char *)FUN_080620c4;
  ppcVar6[4] = &DAT_08061714;
  ppcVar6[10] = (char *)FUN_08061c60;
  ppcVar6[9] = &DAT_08061650;
  puVar9[3] = ppcVar6;
  ppcVar6 = (char **)malloc(0x2c);
  ppcVar7 = ppcVar6;
  ppcVar5 = ppcVar6;
  if ((ppcVar6 == (char **)0x0) &&
     (ppcVar5 = (char **)malloc(0x24), ppcVar7 = ppcVar5, ppcVar5 == (char **)0x0)) {
    ppcVar7 = (char **)malloc(0x18);
  }
  ppcVar7[2] = (char *)FUN_08062024;
  ppcVar7[3] = "p";
  ppcVar7[4] = (char *)0x0;
  ppcVar7[5] = (char *)0x0;
  *ppcVar7 = "Save state   ";
  ppcVar7[1] = (char *)0x28;
  ppcVar5[7] = (char *)0x0;
  ppcVar5[6] = pcVar3;
  ppcVar5[8] = (char *)0x9;
  ppcVar6[3] = (char *)FUN_080620c4;
  ppcVar6[4] = &DAT_08061714;
  ppcVar6[9] = &DAT_08061650;
  ppcVar6[10] = "";
  puVar9[4] = ppcVar6;
  ppcVar5 = (char **)malloc(0x1c);
  ppcVar7 = ppcVar5;
  if (ppcVar5 == (char **)0x0) {
    ppcVar7 = (char **)malloc(0x18);
  }
  ppcVar7[2] = &DAT_08061f7c;
  ppcVar7[3] = (char *)FUN_08061e00;
  ppcVar7[1] = (char *)0x2a;
  *ppcVar7 = "Load new game ";
  ppcVar7[4] = (char *)0x0;
  ppcVar7[5] = (char *)0x0;
  ppcVar5[6] = (char *)FUN_08064034;
  puVar9[5] = ppcVar5;
  ppcVar5 = (char **)malloc(0x1c);
  ppcVar7 = ppcVar5;
  if (ppcVar5 == (char **)0x0) {
    ppcVar7 = (char **)malloc(0x18);
  }
  ppcVar7[2] = &DAT_08061f7c;
  ppcVar7[3] = (char *)FUN_08061e00;
  ppcVar7[1] = (char *)0x2b;
  *ppcVar7 = "Restart game  ";
  ppcVar7[4] = (char *)0x0;
  ppcVar7[5] = (char *)0x0;
  ppcVar5[6] = "";
  puVar9[6] = ppcVar5;
  ppcVar5 = (char **)malloc(0x1c);
  ppcVar7 = ppcVar5;
  if (ppcVar5 == (char **)0x0) {
    ppcVar7 = (char **)malloc(0x18);
  }
  ppcVar7[2] = &DAT_08061f7c;
  ppcVar7[3] = (char *)FUN_08061e00;
  ppcVar7[1] = (char *)0x2d;
  *ppcVar7 = "Return to game";
  ppcVar7[4] = (char *)0x0;
  ppcVar7[5] = (char *)0x0;
  ppcVar5[6] = "";
  puVar9[7] = ppcVar5;
  ppcVar5 = (char **)malloc(0x1c);
  ppcVar7 = ppcVar5;
  if (ppcVar5 == (char **)0x0) {
    ppcVar7 = (char **)malloc(0x18);
  }
  ppcVar7[2] = &DAT_08061f7c;
  ppcVar7[3] = (char *)FUN_08061e00;
  ppcVar7[1] = (char *)0x2f;
  *ppcVar7 = "Exit DraStic  ";
  ppcVar7[4] = (char *)0x0;
  ppcVar7[5] = (char *)0x0;
  ppcVar5[6] = "";
  puVar9[8] = ppcVar5;
  return puVar1;
}


