/*
 * Ghidra decompilation
 *
 * Function : _ZN10RangeCoder11InitDecoderEP6Unpack
 * Address  : 001cbc80
 * Program  : drastic64
 */


/* RangeCoder::InitDecoder(Unpack*) */

void __thiscall RangeCoder::InitDecoder(RangeCoder *this,Unpack *param_1)

{
  byte bVar1;
  int iVar2;
  ushort uVar3;
  uint3 uVar4;
  int iVar5;
  int iVar6;
  void *__dest;
  ComprDataIO *pCVar7;
  ComprDataIO *__dest_00;
  ComprDataIO **ppCVar8;
  ComprDataIO **ppCVar9;
  
  *(undefined8 *)this = 0;
  __dest = *(void **)(param_1 + 0x18);
  *(undefined4 *)(this + 8) = 0xffffffff;
  *(Unpack **)(this + 0x18) = param_1;
  iVar6 = *(int *)(param_1 + 8);
  if (0x7fe2 < iVar6) {
    iVar5 = *(int *)(param_1 + 0xd0) - iVar6;
    if (-1 < iVar5) {
      *(int *)(param_1 + 0xd8) = *(int *)(param_1 + 0xd8) - (iVar6 - *(int *)(param_1 + 0xe0));
      if (iVar5 != 0) {
        memmove(__dest,(void *)((long)__dest + (long)iVar6),(long)iVar5);
        __dest = *(void **)(param_1 + 0x18);
      }
      *(undefined4 *)(param_1 + 8) = 0;
      *(int *)(param_1 + 0xd0) = iVar5;
      iVar5 = ComprDataIO::UnpRead
                        (*(ComprDataIO **)param_1,(uchar *)((long)__dest + (long)iVar5),
                         (long)(0x8000 - iVar5));
      if (iVar5 < 1) {
        iVar5 = *(int *)(param_1 + 0xd0);
      }
      else {
        iVar5 = iVar5 + *(int *)(param_1 + 0xd0);
        *(int *)(param_1 + 0xd0) = iVar5;
      }
      iVar6 = *(int *)(param_1 + 8);
      iVar5 = iVar5 + -0x1e;
      *(int *)(param_1 + 0xd4) = iVar5;
      *(int *)(param_1 + 0xe0) = iVar6;
      __dest = *(void **)(param_1 + 0x18);
      if (*(int *)(param_1 + 0xd8) != -1) {
        iVar2 = *(int *)(param_1 + 0xd8) + iVar6 + -1;
        if (iVar5 < iVar2) {
          iVar2 = iVar5;
        }
        *(int *)(param_1 + 0xd4) = iVar2;
      }
    }
  }
  *(int *)(param_1 + 8) = iVar6 + 1;
  ppCVar8 = *(ComprDataIO ***)(this + 0x18);
  bVar1 = *(byte *)((long)__dest + (long)iVar6);
  pCVar7 = ppCVar8[3];
  *(uint *)(this + 4) = (uint)bVar1;
  iVar6 = *(int *)(ppCVar8 + 1);
  ppCVar9 = ppCVar8;
  if (0x7fe2 < iVar6) {
    iVar5 = *(int *)(ppCVar8 + 0x1a) - iVar6;
    if (-1 < iVar5) {
      *(int *)(ppCVar8 + 0x1b) = *(int *)(ppCVar8 + 0x1b) - (iVar6 - *(int *)(ppCVar8 + 0x1c));
      if (iVar5 != 0) {
        memmove(pCVar7,pCVar7 + iVar6,(long)iVar5);
        pCVar7 = ppCVar8[3];
      }
      *(undefined4 *)(ppCVar8 + 1) = 0;
      *(int *)(ppCVar8 + 0x1a) = iVar5;
      iVar5 = ComprDataIO::UnpRead(*ppCVar8,(uchar *)(pCVar7 + iVar5),(long)(0x8000 - iVar5));
      if (iVar5 < 1) {
        iVar5 = *(int *)(ppCVar8 + 0x1a);
      }
      else {
        iVar5 = iVar5 + *(int *)(ppCVar8 + 0x1a);
        *(int *)(ppCVar8 + 0x1a) = iVar5;
      }
      iVar6 = *(int *)(ppCVar8 + 1);
      iVar5 = iVar5 + -0x1e;
      *(int *)((long)ppCVar8 + 0xd4) = iVar5;
      *(int *)(ppCVar8 + 0x1c) = iVar6;
      pCVar7 = ppCVar8[3];
      if (*(int *)(ppCVar8 + 0x1b) != -1) {
        iVar2 = iVar6 + *(int *)(ppCVar8 + 0x1b) + -1;
        if (iVar5 < iVar2) {
          iVar2 = iVar5;
        }
        *(int *)((long)ppCVar8 + 0xd4) = iVar2;
      }
      ppCVar9 = *(ComprDataIO ***)(this + 0x18);
    }
  }
  *(int *)(ppCVar8 + 1) = iVar6 + 1;
  __dest_00 = ppCVar9[3];
  uVar3 = CONCAT11(bVar1,pCVar7[iVar6]);
  *(uint *)(this + 4) = (uint)uVar3;
  iVar6 = *(int *)(ppCVar9 + 1);
  ppCVar8 = ppCVar9;
  if (0x7fe2 < iVar6) {
    iVar5 = *(int *)(ppCVar9 + 0x1a) - iVar6;
    if (-1 < iVar5) {
      *(int *)(ppCVar9 + 0x1b) = *(int *)(ppCVar9 + 0x1b) - (iVar6 - *(int *)(ppCVar9 + 0x1c));
      if (iVar5 != 0) {
        memmove(__dest_00,__dest_00 + iVar6,(long)iVar5);
        __dest_00 = ppCVar9[3];
      }
      *(undefined4 *)(ppCVar9 + 1) = 0;
      *(int *)(ppCVar9 + 0x1a) = iVar5;
      iVar5 = ComprDataIO::UnpRead(*ppCVar9,(uchar *)(__dest_00 + iVar5),(long)(0x8000 - iVar5));
      if (iVar5 < 1) {
        iVar5 = *(int *)(ppCVar9 + 0x1a);
      }
      else {
        iVar5 = iVar5 + *(int *)(ppCVar9 + 0x1a);
        *(int *)(ppCVar9 + 0x1a) = iVar5;
      }
      iVar6 = *(int *)(ppCVar9 + 1);
      iVar5 = iVar5 + -0x1e;
      *(int *)((long)ppCVar9 + 0xd4) = iVar5;
      *(int *)(ppCVar9 + 0x1c) = iVar6;
      __dest_00 = ppCVar9[3];
      if (*(int *)(ppCVar9 + 0x1b) != -1) {
        iVar2 = iVar6 + *(int *)(ppCVar9 + 0x1b) + -1;
        if (iVar5 < iVar2) {
          iVar2 = iVar5;
        }
        *(int *)((long)ppCVar9 + 0xd4) = iVar2;
      }
      ppCVar8 = *(ComprDataIO ***)(this + 0x18);
    }
  }
  *(int *)(ppCVar9 + 1) = iVar6 + 1;
  pCVar7 = ppCVar8[3];
  uVar4 = CONCAT21(uVar3,__dest_00[iVar6]);
  *(uint *)(this + 4) = (uint)uVar4;
  iVar6 = *(int *)(ppCVar8 + 1);
  if (0x7fe2 < iVar6) {
    iVar5 = *(int *)(ppCVar8 + 0x1a) - iVar6;
    if (-1 < iVar5) {
      *(int *)(ppCVar8 + 0x1b) = *(int *)(ppCVar8 + 0x1b) - (iVar6 - *(int *)(ppCVar8 + 0x1c));
      if (iVar5 != 0) {
        memmove(pCVar7,pCVar7 + iVar6,(long)iVar5);
        pCVar7 = ppCVar8[3];
      }
      *(undefined4 *)(ppCVar8 + 1) = 0;
      *(int *)(ppCVar8 + 0x1a) = iVar5;
      iVar5 = ComprDataIO::UnpRead(*ppCVar8,(uchar *)(pCVar7 + iVar5),(long)(0x8000 - iVar5));
      if (iVar5 < 1) {
        iVar5 = *(int *)(ppCVar8 + 0x1a);
      }
      else {
        iVar5 = iVar5 + *(int *)(ppCVar8 + 0x1a);
        *(int *)(ppCVar8 + 0x1a) = iVar5;
      }
      iVar6 = *(int *)(ppCVar8 + 1);
      iVar5 = iVar5 + -0x1e;
      *(int *)((long)ppCVar8 + 0xd4) = iVar5;
      *(int *)(ppCVar8 + 0x1c) = iVar6;
      pCVar7 = ppCVar8[3];
      if (*(int *)(ppCVar8 + 0x1b) != -1) {
        iVar2 = iVar6 + *(int *)(ppCVar8 + 0x1b) + -1;
        if (iVar5 < iVar2) {
          iVar2 = iVar5;
        }
        *(int *)((long)ppCVar8 + 0xd4) = iVar2;
      }
    }
  }
  *(int *)(ppCVar8 + 1) = iVar6 + 1;
  *(uint *)(this + 4) = CONCAT31(uVar4,pCVar7[iVar6]);
  return;
}


