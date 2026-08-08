/*
 * Ghidra decompilation
 *
 * Function : FUN_001e22bc
 * Address  : 001e22bc
 * Program  : drastic64
 */


void FUN_001e22bc(ComprDataIO **param_1,bool param_2)

{
  char cVar1;
  int iVar2;
  undefined uVar3;
  undefined extraout_w1;
  int iVar4;
  int iVar5;
  ComprDataIO *__dest;
  int iVar6;
  size_t __n;
  
  if (*(Unpack *)(param_1 + 0x9b5) != (Unpack)0x0) {
    param_1[0x18] = param_1[0x19];
    Unpack::Unpack20((Unpack *)param_1,(bool)*(Unpack *)(param_1 + 0x9b5));
    return;
  }
  Unpack::UnpInitData((Unpack *)param_1,param_2);
  iVar2 = *(int *)(param_1 + 1);
  iVar4 = *(int *)(param_1 + 0x1a);
  iVar6 = iVar4 - iVar2;
  if (iVar6 < 0) {
    return;
  }
  *(int *)(param_1 + 0x1b) = *(int *)(param_1 + 0x1b) - (iVar2 - *(int *)(param_1 + 0x1c));
  __dest = param_1[3];
  if (iVar2 < 0x4001) {
    __n = (size_t)iVar4;
    iVar6 = iVar4;
  }
  else {
    __n = (size_t)iVar6;
    if (iVar6 != 0) {
      memmove(__dest,__dest + iVar2,__n);
      __dest = param_1[3];
    }
    *(undefined4 *)(param_1 + 1) = 0;
    *(int *)(param_1 + 0x1a) = iVar6;
  }
  iVar2 = ComprDataIO::UnpRead(*param_1,(uchar *)(__dest + __n),(long)(0x8000 - iVar6));
  if (iVar2 < 1) {
    iVar6 = *(int *)(param_1 + 1);
    iVar4 = *(int *)(param_1 + 0x1b);
    iVar5 = *(int *)(param_1 + 0x1a) + -0x1e;
    *(int *)((long)param_1 + 0xd4) = iVar5;
    *(int *)(param_1 + 0x1c) = iVar6;
    if (iVar4 != -1) goto LAB_001e2380;
    iVar4 = -1;
  }
  else {
    iVar6 = *(int *)(param_1 + 1);
    iVar4 = *(int *)(param_1 + 0x1b);
    iVar5 = iVar2 + *(int *)(param_1 + 0x1a) + -0x1e;
    *(int *)(param_1 + 0x1a) = iVar2 + *(int *)(param_1 + 0x1a);
    *(int *)((long)param_1 + 0xd4) = iVar5;
    *(int *)(param_1 + 0x1c) = iVar6;
    if (iVar4 == -1) goto LAB_001e239c;
LAB_001e2380:
    iVar4 = iVar4 + iVar6 + -1;
    if (iVar5 < iVar4) {
      iVar4 = iVar5;
    }
    *(int *)((long)param_1 + 0xd4) = iVar4;
  }
  if (iVar2 == -1) {
    return;
  }
LAB_001e239c:
  uVar3 = (undefined)iVar4;
  if ((param_2 == false) && (cVar1 = Unpack::ReadTables20(), uVar3 = extraout_w1, cVar1 == '\0')) {
    return;
  }
  param_1[0x9b4] = param_1[0x9b4] + -1;
  Unpack::Unpack20((Unpack *)param_1,(bool)uVar3);
  return;
}


