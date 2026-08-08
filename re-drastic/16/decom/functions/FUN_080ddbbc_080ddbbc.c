/*
 * Ghidra decompilation
 *
 * Function : FUN_080ddbbc
 * Address  : 080ddbbc
 * Program  : drastic16
 */


undefined4 FUN_080ddbbc(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined uVar4;
  undefined4 uVar5;
  
  cVar1 = FUN_0809f6c4(*(undefined4 *)(param_1 + 0x1008),param_1 + 0x1020,0x800);
  if (cVar1 == '\x01') {
    *(undefined4 *)(param_1 + 0x301c) = 0;
    iVar2 = FUN_080a2360(param_1 + 0x1020);
    if (((iVar2 == 0) || (iVar2 = FUN_080a12c0(*(undefined4 *)(param_1 + 0x1028)), iVar2 == 0)) ||
       (*(int *)(param_1 + 0x102c) != 0)) {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
    *(undefined *)(param_1 + 0x101c) = uVar4;
    piVar3 = (int *)FUN_080a0c2c(param_1 + 0x1020);
    if (*piVar3 == 0) {
      FUN_080a06f0(param_1 + 0x1020,&DAT_080eed64,0x800);
    }
    if ((*piVar3 == 0x2e) && ((piVar3[1] == 0 || ((piVar3[1] == 0x2e && (piVar3[2] == 0)))))) {
      FUN_080a1368(param_1 + 0x1020,0x800);
      FUN_080a06f0(param_1 + 0x1020,&DAT_080eed64,0x800);
    }
    *(int *)(param_1 + 0x5024) = (int)piVar3 - (param_1 + 0x1020) >> 2;
    *(undefined4 *)(param_1 + 0x1000) = 0;
    wcscpy((wchar_t *)(param_1 + 0x3020),(wchar_t *)(param_1 + 0x1020));
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}


