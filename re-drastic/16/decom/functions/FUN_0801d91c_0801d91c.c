/*
 * Ghidra decompilation
 *
 * Function : FUN_0801d91c
 * Address  : 0801d91c
 * Program  : drastic16
 */


int FUN_0801d91c(int *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  piVar1 = (int *)param_1[1];
  iVar3 = param_1[2];
  iVar6 = piVar1[2];
  if ((*(byte *)(iVar3 + 0x185) & 0x80) == 0) {
    return 0;
  }
  if ((*(byte *)((int)param_1 + 0x4e) & 1) == 0) {
    bVar4 = *(byte *)((int)param_1 + 0x4e) & 0xfd;
    uVar2 = *(byte *)(param_1 + 0x13) + 1 & 0xf;
    bVar7 = *(byte *)((int)param_1 + 0x4d) == uVar2;
    iVar5 = param_1[*(byte *)(param_1 + 0x13) + 3];
    *(byte *)((int)param_1 + 0x4e) = bVar4;
    if (bVar7) {
      bVar4 = bVar4 | 1;
    }
    *(char *)(param_1 + 0x13) = (char)uVar2;
    if (bVar7) {
      *(byte *)((int)param_1 + 0x4e) = bVar4;
    }
    *(byte *)(iVar6 + 0x184) = *(byte *)(iVar6 + 0x184) & 0xfd;
    if ((*(byte *)((int)param_1 + 0x4e) & 1) != 0) {
      *(byte *)(iVar3 + 0x185) = *(byte *)(iVar3 + 0x185) | 1;
      bVar4 = *(byte *)(iVar6 + 0x184);
      *(byte *)(iVar6 + 0x184) = bVar4 | 1;
      if ((bVar4 & 2) != 0) {
        iVar3 = *param_1;
        if (*(char *)(iVar3 + 0x2104) == '\x01') {
          *(uint *)(iVar3 + 0x237c) = *(uint *)(iVar3 + 0x237c) | 4;
        }
        iVar3 = *(int *)(*piVar1 + 0x2080);
        uVar2 = *(uint *)(iVar3 + 0x214) | 0x20000;
        *(uint *)(iVar3 + 0x214) = uVar2;
        if ((*(byte *)(*piVar1 + 0x2105) & 6) == 0) {
          *(uint *)(*piVar1 + 0x2100) = uVar2 & -*(int *)(iVar3 + 0x208) & *(uint *)(iVar3 + 0x210);
          return iVar5;
        }
      }
    }
    return iVar5;
  }
  *(byte *)(iVar3 + 0x185) = *(byte *)(iVar3 + 0x185) | 0x40;
  return 0;
}


