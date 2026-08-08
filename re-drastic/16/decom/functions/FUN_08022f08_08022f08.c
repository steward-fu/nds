/*
 * Ghidra decompilation
 *
 * Function : FUN_08022f08
 * Address  : 08022f08
 * Program  : drastic16
 */


void FUN_08022f08(int *param_1)

{
  undefined uVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  uint uVar9;
  undefined4 unaff_r6;
  int *piVar10;
  int *__ptr;
  undefined4 unaff_r7;
  int iVar11;
  undefined4 unaff_r8;
  size_t __n;
  undefined4 unaff_r9;
  bool bVar12;
  double dVar13;
  
  iVar11 = *(int *)(*param_1 + 0xfba1c);
  FUN_08032d3c(param_1 + 0x766,*(undefined2 *)(param_1 + 0x9b8c9),0xbf,param_1 + 0x9b8c0);
  FUN_08032d3c(param_1 + 0x20b36,*(undefined2 *)(param_1 + 0x9b8c9),0xbf,0);
  *(undefined2 *)(param_1 + 0x9b8c9) = 0xc0;
  if (*(char *)(param_1 + 0x9b8c4) != '\0') {
    *(undefined *)(param_1 + 0x9b8c4) = 0;
    *(uint *)(*param_1 + 0x1b0a4) = *(uint *)(*param_1 + 0x1b0a4) & 0x7fffffff;
  }
  FUN_08011dfc(*param_1);
  uVar8 = *(uint *)(iVar11 + 0x81824);
  if ((uVar8 & 0x20) == 0) {
    if (*(int *)(iVar11 + 0x81768) != 0) {
      DAT_080fa5f8 = DAT_080fa5f8 + -1;
      FUN_0807b7f0(DAT_080fa5f8 * 8 + 0x81030d0);
      DAT_08103170 = DAT_08103170 + 1;
      if (*(char *)(iVar11 + 0x291646a) == '\0') {
        DAT_08103174 = DAT_08103174 + 1;
      }
      fVar2 = ((float)(ulonglong)DAT_08103174 * 100.0) / (float)(ulonglong)DAT_08103170;
      fVar3 = 3.166667e+07 /
              (float)(ulonglong)
                     (uint)(*(int *)(DAT_080fa5f8 * 8 + 0x81030d0) -
                           *(int *)(((DAT_080fa5f8 + 0x13U) % 0x14) * 8 + 0x81030d0));
      param_1[0x9b8c7] = (int)fVar3;
      param_1[0x9b8c8] = (int)fVar2;
      dVar13 = (double)fVar3;
      sprintf(&DAT_08103178,"%05.1lf%% %05.1lf%%",SUB84(dVar13,0),(int)((ulonglong)dVar13 >> 0x20),
              (double)fVar2);
      DAT_081031f8 = *(undefined4 *)(iVar11 + 0x15a0e08);
      DAT_081031fc = *(undefined4 *)(iVar11 + 0x15a0e0c);
      DAT_08103200 = *(undefined4 *)(iVar11 + 0x1da7398);
      DAT_08103204 = *(undefined4 *)(iVar11 + 0x1da739c);
      if (DAT_080fa5f8 == 0) {
        DAT_080fa5f8 = 0x14;
        DAT_08103174 = 0;
        DAT_08103170 = 0;
      }
      FUN_08076bb8(&DAT_08103178,0xffff,0,0,0);
    }
    uVar8 = (uint)*(byte *)(iVar11 + 0x291646a);
    if (uVar8 == 0) {
      FUN_0807b014();
    }
  }
  piVar4 = param_1 + 0x6120c;
  uVar5 = param_1[0x638a1];
  uVar9 = *(ushort *)((int)param_1 + 0x18e29e) & 0x7fff;
  bVar12 = uVar9 != 0x7fff;
  iVar11 = param_1[0x63892];
  if (bVar12) {
    uVar9 = uVar9 << 9;
  }
  if (!bVar12) {
    uVar9 = 0xffffff;
  }
  uVar9 = uVar9 | uVar5 & 0x3f000000;
  uVar8 = FUN_08055ad8(uVar5,(uVar5 << 0xb) >> 0x1b,0x7fff,uVar5 & 0x3f000000,uVar8,unaff_r4,
                       unaff_r5,unaff_r6,unaff_r7,unaff_r8,unaff_r9);
  if ((int)(uVar5 << 0x10) < 0) {
    uVar8 = uVar8 | 0x80000000;
  }
  if (*(uint *)(iVar11 + 0x2828744) != uVar9) {
    *(uint *)(iVar11 + 0x2828744) = uVar9;
    *(undefined *)(param_1 + 0x638b1) = 1;
  }
  uVar9 = *(uint *)(iVar11 + 0x2828740);
  bVar12 = uVar9 != uVar8;
  if (bVar12) {
    *(uint *)(iVar11 + 0x2828740) = uVar8;
    uVar9 = 0x9a94;
  }
  iVar11 = param_1[0x63892];
  if (bVar12) {
    *(undefined *)((int)piVar4 + uVar9) = 1;
  }
  if ((*(uint *)(iVar11 + 0x81824) & 0x10) == 0) {
    if (*(char *)(param_1 + 0x9b8be) == '\x02') {
      piVar7 = (int *)param_1[0x6389c];
      __ptr = param_1 + 0x798b8;
      piVar10 = piVar7;
      if (piVar7 != __ptr) {
        piVar10 = param_1 + 0x7b8b8;
        printf("logging %d commands, %d parameters\n",(int)piVar7 - (int)__ptr,
               param_1[0x6389d] - (int)piVar10 >> 2);
        fwrite(__ptr,1,param_1[0x6389c] - (int)__ptr,(FILE *)param_1[0x9b8ba]);
        fwrite(piVar10,1,param_1[0x6389d] - (int)piVar10 & 0xfffffffc,(FILE *)param_1[0x9b8bb]);
        piVar7 = (int *)param_1[0x6389c];
        piVar10 = __ptr;
      }
    }
    else {
      piVar7 = (int *)param_1[0x6389c];
      piVar10 = param_1 + 0x798b8;
    }
    FUN_0804cb3c(piVar4,(int)piVar7 - (int)piVar10);
  }
  else {
    piVar10 = param_1 + 0x798b8;
  }
  __n = param_1[0x6389e] - (int)(void *)param_1[0x6389c];
  iVar11 = param_1[0x6389f] - param_1[0x6389d] >> 2;
  if (__n != 0) {
    memcpy(piVar10,(void *)param_1[0x6389c],__n);
  }
  if (iVar11 != 0) {
    memcpy(param_1 + 0x7b8b8,(void *)param_1[0x6389d],iVar11 << 2);
  }
  param_1[0x6389f] = (int)(piVar4 + iVar11 + 0x1a6ac);
  param_1[0x6389e] = (int)piVar4 + __n + 0x61ab0;
  param_1[0x6389c] = (int)piVar10;
  param_1[0x6389d] = (int)(param_1 + 0x7b8b8);
  *(undefined *)((int)param_1 + 0x18e2bf) = 0;
  FUN_0804b5f0(piVar4);
  FUN_08047860(piVar4);
  if (*(char *)((int)param_1 + 0x18e2bd) != '\0') {
    uVar8 = *(byte *)((int)param_1 + 0x18e2b5) ^ 1;
    uVar1 = *(undefined *)((int)param_1 + 0x18e2c2);
    *(char *)((int)param_1 + 0x18e2b5) = (char)uVar8;
    *(undefined *)((int)param_1 + 0x18e2c2) = *(undefined *)(param_1 + 0x638b0);
    *(undefined *)((int)param_1 + 0x18e2c1) = uVar1;
    *(undefined *)(param_1 + 0x638b1) = 1;
    piVar4[uVar8 * 0x6001 + 0x86a6] = 0;
    piVar4[uVar8 * 0x2801 + 0x10ea8] = 0;
    piVar4[uVar8 * 0x2801 + 0x15eaa] = 0;
    *(undefined *)((int)param_1 + 0x18e2bd) = 0;
    *(undefined2 *)(param_1 + 0x638a6) = 0;
  }
  if (*(char *)((int)param_1 + 0x18e2be) != '\0') {
    iVar6 = param_1[0x63892];
    iVar11 = *(int *)(iVar6 + 0x15a0c78);
    FUN_08050844(piVar4,param_1[0x9b8b8],param_1[0x9b8b9]);
    *(undefined4 *)(iVar6 + 0x15a0f74) = 0;
    *(byte *)(iVar6 + 0x15a0cfd) = *(byte *)(iVar6 + 0x15a0cfd) & 0xfb;
    *(uint *)(iVar6 + 0x15a0cf8) =
         *(uint *)(iVar11 + 0x210) & *(uint *)(iVar11 + 0x214) & -*(int *)(iVar11 + 0x208);
    *(undefined *)((int)param_1 + 0x18e2be) = 0;
    iVar11 = FUN_0806d394(iVar6 + 0x159ebf8,*(undefined4 *)(iVar6 + 0x15a0f1c));
    *(int *)(iVar6 + 0x15a0f68) = iVar11 + 8;
    return;
  }
  return;
}


