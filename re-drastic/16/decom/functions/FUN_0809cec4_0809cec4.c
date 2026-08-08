/*
 * Ghidra decompilation
 *
 * Function : FUN_0809cec4
 * Address  : 0809cec4
 * Program  : drastic16
 */


void * FUN_0809cec4(int *param_1)

{
  bool bVar1;
  char cVar2;
  void *pvVar3;
  int iVar4;
  size_t sVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char *__s;
  uint uVar8;
  void *__dest;
  undefined auStack_284c [2048];
  undefined auStack_204c [8196];
  undefined auStack_48 [16];
  undefined auStack_38 [20];
  uint local_24;
  int local_20;
  void *local_1c;
  
  local_1c = (void *)0x0;
  *(undefined *)(param_1 + 3) = 0;
  *(undefined *)((int)param_1 + 0xd) = 0;
  *(undefined *)((int)param_1 + 0xe) = 0;
  *(undefined *)((int)param_1 + 0xf) = 0;
  pvVar3 = operator_new(0x31bb8);
  FUN_0809ef28(pvVar3);
  *(undefined4 *)((int)pvVar3 + 0x125a8) = 0;
  *(int *)((int)pvVar3 + 0x31bb0) = param_1[2];
  local_1c = pvVar3;
  FUN_0809f558((int)pvVar3 + 0x16608,&DAT_080ed060);
  auStack_284c[0] = 0;
  if (*param_1 != 0) {
    FUN_080a05bc(auStack_284c,*param_1,0x800);
  }
  FUN_080a3a8c(auStack_284c,param_1[1],auStack_204c,0x800);
  FUN_080db5b0(local_1c,auStack_204c);
  *(undefined4 *)((int)local_1c + 0xc234) = 1;
  *(undefined4 *)((int)local_1c + 0xe58c) = 1;
  *(int *)((int)local_1c + 0x125b0) = param_1[9];
  *(int *)((int)local_1c + 0x125ac) = param_1[10];
  cVar2 = FUN_080a3dec((int)local_1c + 0x167d8,auStack_204c,0);
  pvVar3 = local_1c;
  if (cVar2 == '\x01') {
    cVar2 = FUN_080a79e8((int)local_1c + 0x167d8,0);
    if (cVar2 == '\x01') {
      *(undefined *)(param_1 + 8) = 0;
      *(undefined *)((int)param_1 + 0x21) = 0;
      *(undefined *)((int)param_1 + 0x22) = 0;
      *(undefined *)((int)param_1 + 0x23) = 0;
      if (*(char *)((int)local_1c + 0x27675) != '\0') {
        param_1[8] = param_1[8] | 1;
      }
      if (*(char *)((int)local_1c + 0x27677) != '\0') {
        param_1[8] = param_1[8] | 4;
      }
      if (*(char *)((int)local_1c + 0x27674) != '\0') {
        param_1[8] = param_1[8] | 8;
      }
      if (*(char *)((int)local_1c + 0x2767a) != '\0') {
        param_1[8] = param_1[8] | 0x10;
      }
      if (*(char *)((int)local_1c + 0x27678) != '\0') {
        param_1[8] = param_1[8] | 0x20;
      }
      if (*(char *)((int)local_1c + 0x2767b) != '\0') {
        param_1[8] = param_1[8] | 0x40;
      }
      if (*(char *)((int)local_1c + 0x2767c) != '\0') {
        param_1[8] = param_1[8] | 0x80;
      }
      if (*(char *)((int)local_1c + 0x27679) != '\0') {
        param_1[8] = param_1[8] | 0x100;
      }
      FUN_0809f120(auStack_38);
      if ((param_1[5] == 0) ||
         (iVar4 = FUN_080a62c4((int)local_1c + 0x167d8,auStack_38), iVar4 == 0)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        iVar4 = FUN_0809f0b8(auStack_38);
        FUN_0809f148(auStack_48,iVar4 * 4 + 1);
        pvVar3 = (void *)FUN_0809f1c0(auStack_48,0);
        sVar5 = FUN_0809f1f4(auStack_48);
        memset(pvVar3,0,sVar5);
        uVar6 = FUN_0809f21c(auStack_38,0);
        uVar7 = FUN_0809f1c0(auStack_48,0);
        iVar4 = FUN_0809f1f4(auStack_48);
        FUN_080afbc8(uVar6,uVar7,iVar4 + -1);
        __s = (char *)FUN_0809f1c0(auStack_48,0);
        sVar5 = strlen(__s);
        local_24 = sVar5 + 1;
        param_1[8] = param_1[8] | 2;
        if ((uint)param_1[5] < local_24) {
          iVar4 = 0x14;
        }
        else {
          iVar4 = 1;
        }
        param_1[7] = iVar4;
        uVar8 = local_24;
        if ((uint)param_1[5] <= local_24) {
          uVar8 = param_1[5];
        }
        param_1[6] = uVar8;
        __dest = (void *)param_1[4];
        pvVar3 = (void *)FUN_0809f1c0(auStack_48,0);
        memcpy(__dest,pvVar3,param_1[6] - 1);
        if (local_24 <= (uint)param_1[5]) {
          *(undefined *)(param_1[4] + param_1[6] + -1) = 0;
        }
        FUN_0809f180(auStack_48);
      }
      else {
        *(undefined *)(param_1 + 6) = 0;
        *(undefined *)((int)param_1 + 0x19) = 0;
        *(undefined *)((int)param_1 + 0x1a) = 0;
        *(undefined *)((int)param_1 + 0x1b) = 0;
        param_1[7] = param_1[6];
      }
      FUN_080be830((int)local_1c + 0x296c0,local_1c,(int)local_1c + 0x167d8);
      pvVar3 = local_1c;
      FUN_0809f0e0(auStack_38);
    }
    else {
      if (*(int *)((int)local_1c + 0x125a8) == 0) {
        local_20 = FUN_0809ede0(&DAT_081cd0a0);
        if ((local_20 == 0) || (local_20 == 1)) {
          *(undefined *)(param_1 + 3) = 0xd;
          *(undefined *)((int)param_1 + 0xd) = 0;
          *(undefined *)((int)param_1 + 0xe) = 0;
          *(undefined *)((int)param_1 + 0xf) = 0;
        }
        else {
          iVar4 = FUN_0809ed3c(local_20);
          param_1[3] = iVar4;
        }
      }
      else {
        param_1[3] = *(int *)((int)local_1c + 0x125a8);
      }
      pvVar3 = local_1c;
      if (local_1c != (void *)0x0) {
        FUN_0809efb8(local_1c);
        operator_delete(pvVar3);
      }
      pvVar3 = (void *)0x0;
    }
  }
  else {
    *(undefined *)(param_1 + 3) = 0xf;
    *(undefined *)((int)param_1 + 0xd) = 0;
    *(undefined *)((int)param_1 + 0xe) = 0;
    *(undefined *)((int)param_1 + 0xf) = 0;
    if (local_1c != (void *)0x0) {
      FUN_0809efb8(local_1c);
      operator_delete(pvVar3);
    }
    pvVar3 = (void *)0x0;
  }
  return pvVar3;
}


