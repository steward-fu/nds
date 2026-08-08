/*
 * Ghidra decompilation
 *
 * Function : Unpack5
 * Address  : 001e4a10
 * Program  : drastic64
 */


/* Unpack::Unpack5(bool) */

void __thiscall Unpack::Unpack5(Unpack *this,bool param_1)

{
  char cVar1;
  int iVar2;
  undefined extraout_w1;
  undefined extraout_w1_00;
  int iVar3;
  int iVar4;
  void *__dest;
  int iVar5;
  size_t __n;
  
  this[0x4db8] = (Unpack)0x1;
  if (this[0x4da8] != (Unpack)0x0) goto LAB_001e4a34;
  UnpInitData(this,param_1);
  iVar2 = *(int *)(this + 8);
  iVar3 = *(int *)(this + 0xd0);
  iVar5 = iVar3 - iVar2;
  if (iVar5 < 0) {
    return;
  }
  __dest = *(void **)(this + 0x18);
  *(int *)(this + 0xd8) = *(int *)(this + 0xd8) - (iVar2 - *(int *)(this + 0xe0));
  if (iVar2 < 0x4001) {
    __n = (size_t)iVar3;
    iVar5 = iVar3;
  }
  else {
    __n = (size_t)iVar5;
    if (iVar5 != 0) {
      memmove(__dest,(void *)((long)__dest + (long)iVar2),__n);
      __dest = *(void **)(this + 0x18);
    }
    *(undefined4 *)(this + 8) = 0;
    *(int *)(this + 0xd0) = iVar5;
  }
  iVar2 = ComprDataIO::UnpRead
                    (*(ComprDataIO **)this,(uchar *)((long)__dest + __n),(long)(0x8000 - iVar5));
  if (iVar2 < 1) {
    iVar3 = *(int *)(this + 8);
    iVar5 = *(int *)(this + 0xd8);
    iVar4 = *(int *)(this + 0xd0) + -0x1e;
    *(int *)(this + 0xd4) = iVar4;
    *(int *)(this + 0xe0) = iVar3;
    if (iVar5 != -1) goto LAB_001e4acc;
LAB_001e4ae0:
    if (iVar2 == -1) {
      return;
    }
  }
  else {
    iVar3 = *(int *)(this + 8);
    iVar4 = iVar2 + *(int *)(this + 0xd0) + -0x1e;
    *(int *)(this + 0xd0) = iVar2 + *(int *)(this + 0xd0);
    *(int *)(this + 0xd4) = iVar4;
    iVar5 = *(int *)(this + 0xd8);
    *(int *)(this + 0xe0) = iVar3;
    if (iVar5 != -1) {
LAB_001e4acc:
      iVar3 = iVar3 + iVar5 + -1;
      if (iVar4 < iVar3) {
        iVar3 = iVar4;
      }
      *(int *)(this + 0xd4) = iVar3;
      goto LAB_001e4ae0;
    }
  }
  cVar1 = ReadBlockHeader(this,(BitInput *)(this + 8),(UnpackBlockHeader *)(this + 0xd8));
  if ((cVar1 == '\0') ||
     ((param_1 = (bool)extraout_w1, this[0xe9] != (Unpack)0x0 &&
      ((((this[0x10] == (Unpack)0x0 && (*(int *)(this + 0xd0) + -0x18 <= *(int *)(this + 8))) &&
        (cVar1 = UnpReadBuf(), cVar1 == '\0')) ||
       (cVar1 = ReadTables((BitInput *)this,(UnpackBlockHeader *)(BitInput *)(this + 8),
                           (UnpackBlockTables *)(this + 0xec)), param_1 = (bool)extraout_w1_00,
       cVar1 == '\0')))))) {
    return;
  }
LAB_001e4a34:
  Unpack5(this,param_1);
  return;
}


