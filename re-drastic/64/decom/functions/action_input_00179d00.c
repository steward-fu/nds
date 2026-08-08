/*
 * Ghidra decompilation
 *
 * Function : action_input
 * Address  : 00179d00
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void action_input(undefined8 param_1,long param_2,uint *param_3)

{
  ulong uVar1;
  undefined *__dest;
  char *__dest_00;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar9;
  uint uVar11;
  size_t sVar12;
  uint uVar13;
  uint uVar14;
  char *__s;
  undefined auStack_70 [16];
  undefined *puVar8;
  undefined *puVar10;
  
  lVar6 = ___stack_chk_guard;
  __s = *(char **)(param_2 + 0x30);
  uVar14 = *(uint *)(param_2 + 0x3c);
  puVar7 = auStack_70;
  sVar12 = strlen(__s);
  uVar2 = *(uint *)(param_2 + 0x38);
  uVar1 = (ulong)(uVar2 + 1) + 0xf;
  puVar8 = auStack_70;
  puVar9 = auStack_70;
  while (puVar8 != auStack_70 + -(uVar1 & 0x1ffff0000)) {
    puVar7 = puVar9 + -0x10000;
    *(undefined8 *)(puVar9 + -0xfc00) = 0;
    puVar8 = puVar9 + -0x10000;
    puVar9 = puVar9 + -0x10000;
  }
  lVar3 = -(uVar1 & 0xfff0);
  puVar9 = puVar7 + lVar3;
  puVar10 = puVar7 + lVar3;
  *(undefined8 *)(puVar7 + lVar3) = 0;
  if (0x3ff < (uVar1 & 0xfff0)) {
    *(undefined8 *)(puVar7 + lVar3 + 0x400) = 0;
  }
  __dest = puVar7 + lVar3 + 0x10;
  puVar5 = puVar7 + lVar3;
  while (puVar10 != puVar7 + (lVar3 - (uVar1 & 0x1ffff0000))) {
    puVar9 = puVar5 + -0x10000;
    *(undefined8 *)(puVar5 + -0xfc00) = 0;
    puVar10 = puVar5 + -0x10000;
    puVar5 = puVar5 + -0x10000;
  }
  lVar4 = -(uVar1 & 0xfff0);
  *(undefined8 *)(puVar9 + lVar4) = 0;
  if (0x3ff < (uVar1 & 0xfff0)) {
    *(undefined8 *)(puVar9 + lVar4 + 0x400) = 0;
  }
  uVar11 = *param_3;
  __dest_00 = puVar9 + lVar4 + 0x10;
  uVar13 = (uint)sVar12;
  if (uVar11 == 6) {
    if (uVar14 == 0) {
      if (uVar13 != 0) {
        memcpy(__dest,__s,sVar12 + 1);
        strcpy(__s,puVar7 + lVar3 + 0x11);
      }
    }
    else {
      memcpy(__dest,__s,sVar12 + 1);
      uVar1 = (ulong)uVar14;
      uVar14 = uVar14 - 1;
      strcpy(__dest_00,__s + uVar1);
      __dest[uVar14] = 0;
      __sprintf_chk(__s,1,0xffffffffffffffff,&DAT_002217e8,__dest,__dest_00);
    }
  }
  else if (uVar11 < 7) {
    if (uVar11 == 2) {
      uVar14 = uVar14 - (uVar14 != 0);
    }
    else {
      if (uVar11 != 3) goto LAB_00179e00;
      if (uVar14 < uVar13) {
        uVar14 = uVar14 + 1;
      }
    }
  }
  else {
    if (uVar11 != 10) goto LAB_00179e00;
    if (uVar13 < uVar2) {
      memcpy(__dest,__s,sVar12 + 1);
      strcpy(__dest_00,__s + uVar14);
      uVar2 = param_3[1];
      __dest[uVar14] = 0;
      uVar14 = uVar14 + 1;
      __sprintf_chk(__s,1,0xffffffffffffffff,"%s%c%s",__dest,uVar2,__dest_00);
    }
    else if (uVar14 < uVar13) {
      __s[uVar14] = (char)param_3[1];
      uVar14 = uVar14 + 1;
    }
  }
  uVar11 = 0xb;
  *(uint *)(param_2 + 0x3c) = uVar14;
LAB_00179e00:
  if (lVar6 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar11,lVar6 - ___stack_chk_guard,0);
}


