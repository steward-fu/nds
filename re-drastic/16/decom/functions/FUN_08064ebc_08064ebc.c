/*
 * Ghidra decompilation
 *
 * Function : FUN_08064ebc
 * Address  : 08064ebc
 * Program  : drastic16
 */


void FUN_08064ebc(int param_1,code *param_2)

{
  code **ppcVar1;
  undefined4 *puVar2;
  char **ppcVar3;
  char **ppcVar4;
  char **ppcVar5;
  int iVar6;
  code *pcVar7;
  
  iVar6 = *(int *)(param_1 + 4);
  ppcVar1 = (code **)malloc(0x20);
  ppcVar1[7] = param_2;
  ppcVar1[3] = (code *)0x15;
  *ppcVar1 = FUN_08061828;
  ppcVar1[1] = (code *)&DAT_08061718;
  ppcVar1[4] = (code *)0x0;
  puVar2 = (undefined4 *)malloc(0x54);
  ppcVar1[6] = (code *)puVar2;
  ppcVar3 = (char **)malloc(0x28);
  ppcVar5 = ppcVar3;
  if (ppcVar3 == (char **)0x0) {
    ppcVar5 = (char **)malloc(0x24);
  }
  ppcVar4 = ppcVar5;
  if (ppcVar5 == (char **)0x0) {
    ppcVar4 = (char **)malloc(0x18);
  }
  ppcVar4[4] = (char *)0x0;
  ppcVar4[5] = (char *)0x0;
  *ppcVar4 = "Frame skip type        ";
  ppcVar4[2] = (char *)FUN_08062024;
  ppcVar4[1] = (char *)0x1f;
  ppcVar4[3] = "p";
  ppcVar5[7] = (char *)0x0;
  ppcVar5[6] = (char *)(iVar6 + 0x440);
  ppcVar5[8] = (char *)0x2;
  ppcVar3[2] = (char *)FUN_08061fb8;
  ppcVar3[9] = &DAT_080fa7b0;
  *puVar2 = ppcVar3;
  ppcVar3 = (char **)malloc(0x24);
  ppcVar5 = ppcVar3;
  if (ppcVar3 == (char **)0x0) {
    ppcVar5 = (char **)malloc(0x18);
  }
  ppcVar5[2] = (char *)FUN_08062024;
  ppcVar5[3] = "p";
  ppcVar5[1] = (char *)0x20;
  *ppcVar5 = "Frame skip value                   ";
  puVar2[1] = ppcVar3;
  ppcVar5[4] = (char *)0x0;
  ppcVar5[5] = (char *)0x0;
  ppcVar3[6] = (char *)(iVar6 + 0x444);
  ppcVar3[7] = (char *)0x1;
  ppcVar3[8] = (char *)0x9;
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
  ppcVar4[3] = "p";
  *ppcVar4 = "Screen orientation     ";
  ppcVar4[1] = (char *)0x22;
  ppcVar4[4] = (char *)0x0;
  ppcVar4[5] = (char *)0x0;
  ppcVar5[7] = (char *)0x0;
  ppcVar5[6] = (char *)(param_1 + 0x30);
  ppcVar5[8] = (char *)0x2;
  ppcVar3[2] = (char *)FUN_08061fb8;
  ppcVar3[9] = &DAT_080fa7c0;
  puVar2[2] = ppcVar3;
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
  ppcVar4[3] = "p";
  puVar2[3] = ppcVar3;
  *ppcVar4 = "Screen scaling         ";
  ppcVar4[1] = (char *)0x23;
  ppcVar4[4] = (char *)0x0;
  ppcVar4[5] = (char *)0x0;
  ppcVar5[7] = (char *)0x0;
  ppcVar5[6] = (char *)(iVar6 + 0x450);
  ppcVar5[8] = (char *)0x4;
  ppcVar3[2] = (char *)FUN_08061fb8;
  ppcVar3[9] = (char *)&PTR_s__none_080fa7d0;
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
  ppcVar4[1] = (char *)0x24;
  ppcVar4[3] = "p";
  *ppcVar4 = "Screen swap            ";
  puVar2[4] = ppcVar3;
  ppcVar4[4] = (char *)0x0;
  ppcVar4[5] = (char *)0x0;
  ppcVar5[7] = (char *)0x0;
  ppcVar5[6] = (char *)(iVar6 + 0x454);
  ppcVar5[8] = (char *)0x1;
  ppcVar3[2] = (char *)FUN_08061fb8;
  ppcVar3[9] = &DAT_080fa7e8;
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
  ppcVar4[3] = "p";
  ppcVar4[4] = (char *)0x0;
  ppcVar4[5] = (char *)0x0;
  *ppcVar4 = "Show speed             ";
  ppcVar4[1] = (char *)0x25;
  ppcVar5[7] = (char *)0x0;
  ppcVar5[6] = (char *)(iVar6 + 0x448);
  ppcVar5[8] = (char *)0x1;
  puVar2[5] = ppcVar3;
  ppcVar3[9] = &DAT_080fa7e8;
  ppcVar3[2] = (char *)FUN_08061fb8;
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
  ppcVar4[3] = "p";
  ppcVar4[4] = (char *)0x0;
  ppcVar4[5] = (char *)0x0;
  puVar2[6] = ppcVar3;
  *ppcVar4 = "Enable sound           ";
  ppcVar4[1] = (char *)0x26;
  ppcVar5[7] = (char *)0x0;
  ppcVar5[6] = (char *)(iVar6 + 0x460);
  ppcVar5[8] = (char *)0x1;
  ppcVar3[9] = &DAT_080fa7e8;
  ppcVar3[2] = (char *)FUN_08061fb8;
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
  ppcVar4[3] = "p";
  puVar2[7] = ppcVar3;
  *ppcVar4 = "Fast forward           ";
  ppcVar4[1] = (char *)0x27;
  ppcVar4[4] = (char *)0x0;
  ppcVar4[5] = (char *)0x0;
  ppcVar5[7] = (char *)0x0;
  ppcVar5[6] = (char *)(iVar6 + 0x45c);
  ppcVar5[8] = (char *)0x1;
  ppcVar3[9] = &DAT_080fa7e8;
  ppcVar3[2] = (char *)FUN_08061fb8;
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
  ppcVar4[3] = "p";
  ppcVar4[1] = (char *)0x28;
  *ppcVar4 = "Mirror touchscreen     ";
  puVar2[8] = ppcVar3;
  ppcVar4[4] = (char *)0x0;
  ppcVar4[5] = (char *)0x0;
  ppcVar5[6] = (char *)(iVar6 + 0x46c);
  ppcVar5[7] = (char *)0x0;
  ppcVar5[8] = (char *)0x1;
  ppcVar3[9] = &DAT_080fa7e8;
  ppcVar3[2] = (char *)FUN_08061fb8;
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
  ppcVar4[3] = "p";
  puVar2[9] = ppcVar3;
  *ppcVar4 = "Compress savestates    ";
  ppcVar4[1] = (char *)0x29;
  ppcVar4[4] = (char *)0x0;
  ppcVar4[5] = (char *)0x0;
  ppcVar5[7] = (char *)0x0;
  ppcVar5[6] = (char *)(iVar6 + 0x470);
  ppcVar5[8] = (char *)0x1;
  ppcVar3[9] = &DAT_080fa7e8;
  ppcVar3[2] = (char *)FUN_08061fb8;
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
  ppcVar4[3] = "p";
  ppcVar4[4] = (char *)0x0;
  ppcVar4[5] = (char *)0x0;
  puVar2[10] = ppcVar3;
  *ppcVar4 = "Snapshot in savestates ";
  ppcVar4[1] = (char *)0x2a;
  ppcVar5[6] = (char *)(iVar6 + 0x474);
  ppcVar5[7] = (char *)0x0;
  ppcVar5[8] = (char *)0x1;
  ppcVar3[9] = &DAT_080fa7e8;
  ppcVar3[2] = (char *)FUN_08061fb8;
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
  ppcVar4[3] = "p";
  puVar2[0xb] = ppcVar3;
  *ppcVar4 = "Enable cheats          ";
  ppcVar4[1] = (char *)0x2b;
  ppcVar4[4] = (char *)0x0;
  ppcVar4[5] = (char *)0x0;
  ppcVar5[7] = (char *)0x0;
  ppcVar5[6] = (char *)(iVar6 + 0x478);
  ppcVar5[8] = (char *)0x1;
  ppcVar3[9] = &DAT_080fa7e8;
  ppcVar3[2] = (char *)FUN_08061fb8;
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
  ppcVar4[3] = "p";
  *ppcVar4 = "Uncompress ROMs        ";
  ppcVar4[1] = (char *)0x2c;
  ppcVar4[4] = (char *)0x0;
  ppcVar4[5] = (char *)0x0;
  ppcVar5[7] = (char *)0x0;
  ppcVar5[6] = (char *)(iVar6 + 0x47c);
  ppcVar5[8] = (char *)0x1;
  ppcVar3[9] = &DAT_080fa7e8;
  ppcVar3[2] = (char *)FUN_08061fb8;
  puVar2[0xc] = ppcVar3;
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
  ppcVar4[3] = "p";
  puVar2[0xd] = ppcVar3;
  *ppcVar4 = "Backup in savestates   ";
  ppcVar4[1] = (char *)0x2d;
  ppcVar4[4] = (char *)0x0;
  ppcVar4[5] = (char *)0x0;
  ppcVar5[7] = (char *)0x0;
  ppcVar5[6] = (char *)(iVar6 + 0x480);
  ppcVar5[8] = (char *)0x1;
  ppcVar3[9] = &DAT_080fa7e8;
  ppcVar3[2] = (char *)FUN_08061fb8;
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
  ppcVar4[3] = "p";
  *ppcVar4 = "Speed override         ";
  ppcVar4[4] = (char *)0x0;
  ppcVar4[1] = (char *)0x2e;
  ppcVar4[5] = (char *)0x0;
  ppcVar5[7] = (char *)0x0;
  ppcVar5[6] = (char *)(param_1 + 0x34);
  ppcVar5[8] = (char *)0x7;
  puVar2[0xe] = ppcVar3;
  ppcVar3[2] = (char *)FUN_08061fb8;
  ppcVar3[9] = (char *)&PTR_s__none_080fa7f0;
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
  ppcVar4[3] = "p";
  puVar2[0xf] = ppcVar3;
  *ppcVar4 = "Fix main 2D screen     ";
  ppcVar4[1] = (char *)0x2f;
  ppcVar4[4] = (char *)0x0;
  ppcVar4[5] = (char *)0x0;
  ppcVar5[6] = (char *)(iVar6 + 0x494);
  ppcVar5[7] = (char *)0x0;
  ppcVar5[8] = (char *)0x1;
  ppcVar3[9] = &DAT_080fa7e8;
  ppcVar3[2] = (char *)FUN_08061fb8;
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
  ppcVar4[3] = "p";
  ppcVar4[1] = (char *)0x30;
  *ppcVar4 = "Disable edge marking   ";
  puVar2[0x10] = ppcVar3;
  ppcVar4[4] = (char *)0x0;
  ppcVar4[5] = (char *)0x0;
  ppcVar5[7] = (char *)0x0;
  ppcVar5[6] = (char *)(iVar6 + 0x498);
  ppcVar5[8] = (char *)0x1;
  ppcVar3[2] = (char *)FUN_08061fb8;
  ppcVar3[9] = &DAT_080fa7e8;
  ppcVar3 = (char **)malloc(0x1c);
  ppcVar5 = ppcVar3;
  if (ppcVar3 == (char **)0x0) {
    ppcVar5 = (char **)malloc(0x18);
  }
  puVar2[0x11] = ppcVar3;
  *ppcVar5 = "Delete game-specific config";
  ppcVar5[2] = &DAT_08061f7c;
  ppcVar5[1] = (char *)0x32;
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
  ppcVar5[1] = (char *)0x34;
  puVar2[0x12] = ppcVar3;
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
  ppcVar5[1] = (char *)0x35;
  puVar2[0x13] = ppcVar3;
  *ppcVar5 = "Exit: save for this game";
  ppcVar5[4] = (char *)0x0;
  ppcVar5[5] = (char *)0x0;
  ppcVar3[6] = "";
  ppcVar3 = (char **)malloc(0x1c);
  ppcVar5 = ppcVar3;
  if (ppcVar3 == (char **)0x0) {
    ppcVar5 = (char **)malloc(0x18);
  }
  iVar6 = *(int *)(param_1 + 0x20);
  ppcVar5[2] = &DAT_08061f7c;
  *ppcVar5 = "Exit without saving";
  ppcVar5[3] = (char *)FUN_08061e00;
  if (iVar6 == 0) {
    pcVar7 = (code *)0x100;
  }
  else {
    pcVar7 = (code *)0x5c;
  }
  ppcVar5[1] = (char *)0x36;
  ppcVar1[2] = pcVar7;
  puVar2[0x14] = ppcVar3;
  ppcVar5[4] = (char *)0x0;
  ppcVar5[5] = (char *)0x0;
  ppcVar3[6] = (char *)FUN_08061d6c;
  return;
}


