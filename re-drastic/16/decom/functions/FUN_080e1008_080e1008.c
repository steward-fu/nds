/*
 * Ghidra decompilation
 *
 * Function : FUN_080e1008
 * Address  : 080e1008
 * Program  : drastic16
 */


void FUN_080e1008(int param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  size_t __n;
  void *pvVar4;
  size_t __n_00;
  int iVar5;
  undefined4 *puVar6;
  uint local_18;
  uint local_14;
  
  memcpy((void *)(param_1 + 0x14),(void *)(param_2 + 0x38),0x1c);
  uVar3 = FUN_080a8838(param_2 + 0x18);
  if (uVar3 < 0x2000) {
    __n = FUN_080a8838(param_2 + 0x18);
  }
  else {
    __n = 0x2000;
  }
  if (__n != 0) {
    iVar5 = *(int *)(param_1 + 0x10);
    pvVar4 = (void *)FUN_080a609c(param_2 + 0x18,0);
    memcpy((void *)(iVar5 + 0x3c000),pvVar4,__n);
  }
  uVar3 = FUN_080a8838(param_2 + 0x28);
  if (uVar3 < 0x2000 - __n) {
    __n_00 = FUN_080a8838(param_2 + 0x28);
  }
  else {
    __n_00 = 0x2000 - __n;
  }
  if (__n_00 != 0) {
    iVar5 = *(int *)(param_1 + 0x10);
    pvVar4 = (void *)FUN_080a609c(param_2 + 0x28,0);
    memcpy((void *)(iVar5 + __n + 0x3c000),pvVar4,__n_00);
  }
  *(undefined4 *)(param_1 + 0x30) = 0x40000;
  *(undefined4 *)(param_1 + 0x34) = 0;
  if (*(int *)(param_2 + 0x10) == 0) {
    puVar6 = (undefined4 *)FUN_080d56d8(param_2,0);
  }
  else {
    puVar6 = *(undefined4 **)(param_2 + 0x10);
  }
  if ((*(int *)(param_2 + 0x14) < 1) ||
     (cVar2 = FUN_080e1368(param_1,puVar6,*(undefined4 *)(param_2 + 0x14)), cVar2 == '\x01')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    *puVar6 = 0x16;
  }
  local_14 = FUN_080e2860(param_1,0,*(int *)(param_1 + 0x10) + 0x3c020);
  local_14 = local_14 & 0x3ffff;
  local_18 = FUN_080e2860(param_1,0,*(int *)(param_1 + 0x10) + 0x3c01c);
  local_18 = local_18 & 0x3ffff;
  if (0x3ffff < local_14 + local_18) {
    local_18 = 0;
    local_14 = 0;
  }
  *(uint *)(param_2 + 0x54) = *(int *)(param_1 + 0x10) + local_14;
  *(uint *)(param_2 + 0x58) = local_18;
  FUN_080afb6c(param_2 + 0x18);
  uVar3 = FUN_080e2860(param_1,0,*(int *)(param_1 + 0x10) + 0x3c030);
  if (uVar3 < 0x1fc0) {
    iVar5 = FUN_080e2860(param_1,0,*(int *)(param_1 + 0x10) + 0x3c030);
  }
  else {
    iVar5 = 0x1fc0;
  }
  if (iVar5 != 0) {
    FUN_080a6194(param_2 + 0x18,iVar5 + 0x40);
    pvVar4 = (void *)FUN_080a609c(param_2 + 0x18,0);
    memcpy(pvVar4,(void *)(*(int *)(param_1 + 0x10) + 0x3c000),iVar5 + 0x40);
  }
  return;
}


