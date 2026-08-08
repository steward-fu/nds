/*
 * Ghidra decompilation
 *
 * Function : Unpack20
 * Address  : 001e22c0
 * Program  : drastic64
 */


/* Unpack::Unpack20(bool) */

void __thiscall Unpack::Unpack20(Unpack *this,bool param_1)

{
  char cVar1;
  int iVar2;
  undefined uVar3;
  undefined extraout_w1;
  int iVar4;
  int iVar5;
  void *__dest;
  int iVar6;
  size_t __n;
  
  if (this[0x4da8] != (Unpack)0x0) {
    *(undefined8 *)(this + 0xc0) = *(undefined8 *)(this + 200);
    Unpack20(this,(bool)this[0x4da8]);
    return;
  }
  UnpInitData(this,param_1);
  iVar2 = *(int *)(this + 8);
  iVar4 = *(int *)(this + 0xd0);
  iVar6 = iVar4 - iVar2;
  if (iVar6 < 0) {
    return;
  }
  *(int *)(this + 0xd8) = *(int *)(this + 0xd8) - (iVar2 - *(int *)(this + 0xe0));
  __dest = *(void **)(this + 0x18);
  if (iVar2 < 0x4001) {
    __n = (size_t)iVar4;
    iVar6 = iVar4;
  }
  else {
    __n = (size_t)iVar6;
    if (iVar6 != 0) {
      memmove(__dest,(void *)((long)__dest + (long)iVar2),__n);
      __dest = *(void **)(this + 0x18);
    }
    *(undefined4 *)(this + 8) = 0;
    *(int *)(this + 0xd0) = iVar6;
  }
  iVar2 = ComprDataIO::UnpRead
                    (*(ComprDataIO **)this,(uchar *)((long)__dest + __n),(long)(0x8000 - iVar6));
  if (iVar2 < 1) {
    iVar6 = *(int *)(this + 8);
    iVar4 = *(int *)(this + 0xd8);
    iVar5 = *(int *)(this + 0xd0) + -0x1e;
    *(int *)(this + 0xd4) = iVar5;
    *(int *)(this + 0xe0) = iVar6;
    if (iVar4 != -1) goto LAB_001e2380;
    iVar4 = -1;
  }
  else {
    iVar6 = *(int *)(this + 8);
    iVar4 = *(int *)(this + 0xd8);
    iVar5 = iVar2 + *(int *)(this + 0xd0) + -0x1e;
    *(int *)(this + 0xd0) = iVar2 + *(int *)(this + 0xd0);
    *(int *)(this + 0xd4) = iVar5;
    *(int *)(this + 0xe0) = iVar6;
    if (iVar4 == -1) goto LAB_001e239c;
LAB_001e2380:
    iVar4 = iVar4 + iVar6 + -1;
    if (iVar5 < iVar4) {
      iVar4 = iVar5;
    }
    *(int *)(this + 0xd4) = iVar4;
  }
  if (iVar2 == -1) {
    return;
  }
LAB_001e239c:
  uVar3 = (undefined)iVar4;
  if ((!param_1) && (cVar1 = ReadTables20(), uVar3 = extraout_w1, cVar1 == '\0')) {
    return;
  }
  *(long *)(this + 0x4da0) = *(long *)(this + 0x4da0) + -1;
  Unpack20(this,(bool)uVar3);
  return;
}


