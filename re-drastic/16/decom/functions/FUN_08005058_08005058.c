/*
 * Ghidra decompilation
 *
 * Function : FUN_08005058
 * Address  : 08005058
 * Program  : drastic16
 */


void FUN_08005058(int param_1)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  bool bVar11;
  undefined8 uVar12;
  int local_34;
  uint local_30;
  int iStack_2c;
  
  iVar8 = *(int *)(param_1 + 0x817a8);
  iVar4 = FUN_08078aac(param_1 + 0x155e000);
  local_34 = *(int *)(param_1 + 0x81764);
  iVar9 = *(int *)(param_1 + 0x81760);
  FUN_0807b7f0(&local_30);
  uVar5 = local_30 * 3 - *(uint *)(param_1 + 0x2916448);
  iStack_2c = (iStack_2c * 3 + (uint)CARRY4(local_30,local_30) + (uint)CARRY4(local_30,local_30 * 2)
              ) - (*(int *)(param_1 + 0x291644c) +
                  (uint)(local_30 * 3 < *(uint *)(param_1 + 0x2916448)));
  if (iVar8 == 0) {
    uVar12 = 50000;
    iVar8 = 50000;
  }
  else {
    uVar12 = VectorShiftRight(CONCAT44(iVar8,iVar8),0x20);
  }
  puVar10 = (undefined8 *)(param_1 + 0x2916450);
  uVar12 = VectorAdd(uVar12,*puVar10,8);
  *puVar10 = uVar12;
  if (*(int *)(param_1 + 0x8177c) == 0) {
    uVar6 = (uint)uVar12;
    iVar7 = (int)((ulonglong)uVar12 >> 0x20);
  }
  else {
    *(uint *)puVar10 = uVar5;
    *(int *)(param_1 + 0x2916454) = iStack_2c;
    uVar6 = uVar5;
    iVar7 = iStack_2c;
    if (*(int *)(param_1 + 0x81828) == 0) {
      iVar9 = 1;
      local_34 = 6;
    }
  }
  local_30 = uVar5;
  if (*(char *)(param_1 + 0x2916468) == '\0') {
    if (iVar4 != 2) goto LAB_080052a8;
    *(undefined *)(param_1 + 0x2916469) = 0;
    *(undefined *)(param_1 + 0x2916468) = 1;
LAB_08005180:
    iVar4 = uVar6 - uVar5;
    if (iVar4 < 1) {
      bVar11 = true;
      goto LAB_080052b8;
    }
  }
  else {
    if (*(char *)(param_1 + 0x2916469) == '\x14') {
      FUN_08078ae0(param_1 + 0x155e000);
      uVar6 = *(uint *)puVar10;
      iVar7 = *(int *)(param_1 + 0x2916454);
    }
    else if (iVar4 != 0) {
      *(char *)(param_1 + 0x2916469) = *(char *)(param_1 + 0x2916469) + '\x01';
      goto LAB_08005180;
    }
    uVar5 = local_30;
    *(undefined *)(param_1 + 0x2916468) = 0;
    iVar4 = __aeabi_uidiv((iVar8 + -1 + uVar6) - local_30,iVar8);
    bVar11 = uVar6 < (uint)(iVar8 * iVar4);
    uVar6 = uVar6 - iVar8 * iVar4;
    *(uint *)puVar10 = uVar6;
    *(uint *)(param_1 + 0x2916454) = iVar7 - (uint)bVar11;
LAB_080052a8:
    iVar4 = uVar6 - uVar5;
    if (0 < iVar4) {
      usleep(iVar4 / 3);
      bVar11 = false;
      goto joined_r0x080052cc;
    }
    bVar11 = false;
LAB_080052b8:
    if (-0x2329 < iVar4) goto joined_r0x080052cc;
  }
  usleep(0);
  bVar11 = true;
joined_r0x080052cc:
  if (iVar9 == 1) {
    cVar3 = *(char *)(param_1 + 0x291646d);
    bVar2 = cVar3 + 1;
    if (cVar3 != '\0') {
      cVar3 = '\x01';
    }
    *(char *)(param_1 + 0x291646a) = cVar3;
    *(byte *)(param_1 + 0x291646d) = bVar2;
    if ((uint)bVar2 == local_34 + 1U) {
      *(undefined *)(param_1 + 0x291646d) = 0;
    }
    return;
  }
  if (iVar9 == 0) {
    *(undefined *)(param_1 + 0x291646a) = 0;
    return;
  }
  if (iVar9 != 2) {
    return;
  }
  bVar2 = *(byte *)(param_1 + 0x291646b) ^ 1;
  *(byte *)(param_1 + 0x291646b) = bVar2;
  if (*(int *)(param_1 + 0x25c67c4) < 0) {
    bVar1 = *(byte *)(param_1 + 0x291646c);
    if (bVar2 != 0) {
      return;
    }
    *(undefined *)(param_1 + 0x291646c) = 0;
    if (0x78 < bVar1) {
      *(undefined *)(param_1 + 0x291646a) = 0;
      return;
    }
  }
  else if (*(char *)(param_1 + 0x291646c) != -1) {
    *(char *)(param_1 + 0x291646c) = *(char *)(param_1 + 0x291646c) + '\x01';
  }
  *(undefined *)(param_1 + 0x291646a) = 0;
  if (bVar11) {
    bVar2 = *(char *)(param_1 + 0x291646d) + 1;
    *(byte *)(param_1 + 0x291646d) = bVar2;
    if ((uint)bVar2 == local_34 + 1U) {
      *(undefined *)(param_1 + 0x291646d) = 0;
      *(undefined *)(param_1 + 0x2916468) = 0;
      iVar4 = __aeabi_uidiv(iVar8 + -1 + iVar4,iVar8);
      uVar5 = *(uint *)puVar10;
      *(uint *)puVar10 = uVar5 - iVar8 * iVar4;
      *(uint *)(param_1 + 0x2916454) =
           *(int *)(param_1 + 0x2916454) - (uint)(uVar5 < (uint)(iVar8 * iVar4));
    }
    else {
      *(undefined *)(param_1 + 0x291646a) = 1;
    }
  }
  else {
    *(undefined *)(param_1 + 0x291646d) = 0;
  }
  return;
}


