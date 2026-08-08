/*
 * Ghidra decompilation
 *
 * Function : draw_input
 * Address  : 00179f40
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void draw_input(long param_1,char **param_2,int param_3)

{
  ulong uVar1;
  char *__dest;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar11;
  undefined *puVar13;
  size_t sVar14;
  char *__s;
  char *__s_00;
  undefined auStack_80 [16];
  char local_10;
  undefined local_f;
  long local_8;
  undefined *puVar10;
  undefined *puVar12;
  
  puVar9 = auStack_80;
  puVar10 = auStack_80;
  __s_00 = param_2[6];
  local_8 = ___stack_chk_guard;
  sVar14 = strlen(__s_00);
  iVar3 = *(int *)(*(long *)(param_1 + 0x10) + 0x10);
  iVar4 = *(int *)(param_2 + 1) << 3;
  uVar5 = *(int *)(param_2 + 7) - (int)sVar14;
  if (param_3 == 0) {
    print_string(*param_2,0xffff,0,iVar3,iVar4);
    sVar14 = strlen(*param_2);
    print_string(__s_00,0x7bef,0,iVar3 + ((int)sVar14 + uVar5) * 8,iVar4);
  }
  else {
    print_string(*param_2,0xffff,0x10,iVar3,iVar4);
    uVar2 = *(uint *)((long)param_2 + 0x3c);
    uVar1 = (ulong)(*(int *)(param_2 + 7) + 1) + 0xf;
    puVar11 = auStack_80;
    while (puVar10 != auStack_80 + -(uVar1 & 0x1ffff0000)) {
      puVar9 = puVar11 + -0x10000;
      *(undefined8 *)(puVar11 + -0xfc00) = 0;
      puVar10 = puVar11 + -0x10000;
      puVar11 = puVar11 + -0x10000;
    }
    lVar6 = -(uVar1 & 0xfff0);
    puVar11 = puVar9 + lVar6;
    puVar12 = puVar9 + lVar6;
    *(undefined8 *)(puVar9 + lVar6) = 0;
    if (0x3ff < (uVar1 & 0xfff0)) {
      *(undefined8 *)(puVar9 + lVar6 + 0x400) = 0;
    }
    __dest = puVar9 + lVar6 + 0x10;
    puVar8 = puVar9 + lVar6;
    while (puVar12 != puVar9 + (lVar6 - (uVar1 & 0x1ffff0000))) {
      puVar11 = puVar8 + -0x10000;
      *(undefined8 *)(puVar8 + -0xfc00) = 0;
      puVar12 = puVar8 + -0x10000;
      puVar8 = puVar8 + -0x10000;
    }
    lVar6 = -(uVar1 & 0xfff0);
    puVar9 = puVar11 + lVar6;
    puVar13 = puVar11 + lVar6;
    *(undefined8 *)(puVar11 + lVar6) = 0;
    if (0x3ff < (uVar1 & 0xfff0)) {
      *(undefined8 *)(puVar11 + lVar6 + 0x400) = 0;
    }
    puVar8 = puVar11 + lVar6;
    while (puVar13 != puVar11 + (lVar6 - (uVar1 & 0x1ffff0000))) {
      puVar9 = puVar8 + -0x10000;
      *(undefined8 *)(puVar8 + -0xfc00) = 0;
      puVar13 = puVar8 + -0x10000;
      puVar8 = puVar8 + -0x10000;
    }
    lVar7 = -(uVar1 & 0xfff0);
    *(undefined8 *)(puVar9 + lVar7) = 0;
    if (0x3ff < (uVar1 & 0xfff0)) {
      *(undefined8 *)(puVar9 + lVar7 + 0x400) = 0;
    }
    strcpy(__dest,__s_00);
    strcpy(puVar11 + lVar6 + 0x10,__s_00 + (ulong)uVar2 + 1);
    __s = *param_2;
    puVar9 = puVar9 + lVar7 + 0x10;
    __dest[uVar2] = '\0';
    sVar14 = strlen(__s);
    iVar3 = iVar3 + (int)sVar14 * 8;
    memset(puVar9,0x20,(ulong)uVar5);
    puVar9[uVar5] = 0;
    print_string(puVar9,0x7bef,0x10,iVar3,iVar4);
    local_10 = __s_00[uVar2];
    iVar3 = iVar3 + uVar5 * 8;
    local_f = 0;
    print_string(__dest,0x7bef,0x10,iVar3,iVar4);
    sVar14 = strlen(__dest);
    iVar3 = iVar3 + (int)sVar14 * 8;
    print_string(&local_10,0xffe0,0x1f,iVar3,iVar4);
    print_string(puVar11 + lVar6 + 0x10,0x7bef,0x10,iVar3 + 8,iVar4);
  }
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_8 - ___stack_chk_guard,0);
  }
  return;
}


