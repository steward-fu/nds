/*
 * Ghidra decompilation
 *
 * Function : FUN_08071470
 * Address  : 08071470
 * Program  : drastic16
 */


void FUN_08071470(int param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  
  iVar6 = *(int *)(param_1 + 0x2084);
  iVar7 = *(int *)(param_1 + 0x230c);
  iVar8 = *(int *)(param_1 + 0x2378);
  memset((void *)(iVar6 + 0x1300000),0,0x80000);
  memset((void *)(iVar6 + 0x1380000),0,0x20000);
  iVar3 = 0;
  puVar1 = (undefined *)(iVar6 + 0x14b801f);
  do {
    *(undefined4 *)(*(int *)(param_1 + 0x2314) + iVar3) = 0;
    iVar3 = iVar3 + 4;
    puVar1 = puVar1 + 1;
    *puVar1 = 0;
  } while (iVar3 != 0x8000);
  iVar3 = 0;
  do {
    *(undefined4 *)(*(int *)(param_1 + 0x2318) + iVar3) = 0;
    iVar3 = iVar3 + 4;
  } while (iVar3 != 0x10000);
  puVar2 = (undefined8 *)(param_1 + 0x80);
  puVar4 = (undefined8 *)(iVar8 + 0x80);
  if (puVar2 < (undefined8 *)(iVar8 + 0x90) && puVar4 < (undefined8 *)(param_1 + 0x90)) {
    puVar5 = (undefined4 *)(param_1 + 0x7c);
    puVar9 = (undefined4 *)(iVar8 + 0x7c);
    iVar3 = 0x800;
    do {
      iVar3 = iVar3 + -1;
      puVar5 = puVar5 + 1;
      *puVar5 = 0;
      puVar9 = puVar9 + 1;
      *puVar9 = 0;
    } while (iVar3 != 0);
  }
  else {
    do {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2 = puVar2 + 2;
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4 = puVar4 + 2;
    } while (puVar4 != (undefined8 *)(iVar8 + 0x2080));
  }
  memset((void *)(iVar7 + 0xaf040),0,0x100);
  *(undefined *)(iVar7 + 0xaf144) = 0;
  *(undefined *)(iVar7 + 0xaf145) = 0;
  *(undefined *)(iVar7 + 0xaf146) = 0;
  *(undefined *)(iVar7 + 0xaf147) = 0;
  *(undefined *)(iVar7 + 0xaf148) = 0;
  *(undefined *)(iVar7 + 0xaf149) = 0;
  *(undefined *)(iVar7 + 0xaf14a) = 0;
  *(undefined *)(iVar7 + 0xaf14b) = 0;
  *(undefined *)(iVar7 + 0xaf14c) = 0;
  *(undefined *)(iVar7 + 0xaf14d) = 0;
  *(undefined *)(iVar7 + 0xaf14e) = 0;
  *(undefined *)(iVar7 + 0xaf14f) = 0;
  memset((void *)(iVar7 + 0xaf150),0,0x2c);
  memset((void *)(iVar7 + 0xaf17c),0,0x40000);
  if (*(int *)(iVar7 + 0xef17c) != 0) {
    memset(*(void **)(iVar7 + 0xaf140),0,0x800);
    memset(*(void **)(iVar7 + 0xef17c),0,0x200000);
  }
  memset((void *)(iVar7 + 0xef180),0,0x800);
  memset((void *)(iVar7 + 0xef980),0,0x800);
  memset((void *)(iVar7 + 0xf0180),0,0x1000);
  memset((void *)(iVar7 + 0xf1180),0,0xa400);
  FUN_080896d4(iVar6);
  FUN_08089690(iVar6);
  memset((void *)(iVar6 + 0x14b8020),0,0x2000);
  *(undefined4 *)(iVar6 + 0x14da0e0) = 0;
  memset((void *)(iVar6 + 0x14ba0e0),0,0x20000);
  return;
}


