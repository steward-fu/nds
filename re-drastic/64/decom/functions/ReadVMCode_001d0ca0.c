/*
 * Ghidra decompilation
 *
 * Function : ReadVMCode
 * Address  : 001d0ca0
 * Program  : drastic64
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Unpack::ReadVMCode() */

undefined Unpack::ReadVMCode(void)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  ComprDataIO CVar4;
  ComprDataIO CVar5;
  ComprDataIO CVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  undefined uVar10;
  int iVar11;
  ComprDataIO **in_x0;
  size_t sVar12;
  uchar *__ptr;
  ComprDataIO *pCVar13;
  long lVar14;
  uint uVar15;
  int iVar16;
  
  iVar3 = *(int *)(in_x0 + 1);
  pCVar13 = in_x0[3];
  uVar2 = *(int *)((long)in_x0 + 0xc) + 8;
  iVar11 = iVar3 + (uVar2 >> 3);
  uVar7 = (((uint)(byte)pCVar13[(long)iVar3 + 2] | (uint)(byte)pCVar13[iVar3] << 0x10 |
           (uint)(byte)pCVar13[(long)iVar3 + 1] << 8) >>
          (ulong)(8U - *(int *)((long)in_x0 + 0xc) & 0x1f)) >> 8;
  uVar2 = uVar2 & 7;
  *(int *)(in_x0 + 1) = iVar11;
  *(uint *)((long)in_x0 + 0xc) = uVar2;
  uVar15 = uVar7 & 7;
  uVar7 = uVar7 & 0xff;
  if (uVar15 == 6) {
    CVar6 = pCVar13[iVar11];
    CVar4 = pCVar13[(long)iVar11 + 2];
    CVar5 = pCVar13[(long)iVar11 + 1];
    *(int *)(in_x0 + 1) = iVar11 + 1;
    uVar15 = ((((uint)(byte)CVar4 | (uint)(byte)CVar6 << 0x10 | (uint)(byte)CVar5 << 8) >>
              (ulong)(8 - uVar2 & 0x1f)) >> 8 & 0xff) + 7;
  }
  else {
    uVar15 = uVar15 + 1;
    if (uVar15 == 8) {
      CVar6 = pCVar13[iVar11];
      CVar4 = pCVar13[(long)iVar11 + 2];
      CVar5 = pCVar13[(long)iVar11 + 1];
      *(int *)(in_x0 + 1) = iVar11 + 2;
      *(uint *)((long)in_x0 + 0xc) = uVar2;
      uVar15 = ((uint)(byte)CVar4 | (uint)(byte)CVar6 << 0x10 | (uint)(byte)CVar5 << 8) >>
               (ulong)(8 - uVar2 & 0x1f) & 0xffff;
      if (uVar15 == 0) {
        uVar10 = AddVMCode((Unpack *)in_x0,uVar7,(uchar *)0x0,0);
        return uVar10;
      }
    }
  }
  sVar12 = (size_t)(int)uVar15;
  if (sVar12 < 0x20) {
    sVar12 = 0x20;
  }
  __ptr = (uchar *)malloc(sVar12);
  if (__ptr == (uchar *)0x0) {
    ErrorHandler::MemoryError();
  }
  iVar11 = *(int *)(in_x0 + 1);
  lVar14 = 0;
  do {
    iVar3 = *(int *)(in_x0 + 0x1a);
    if (iVar3 + -1 <= iVar11) {
      iVar16 = iVar3 - iVar11;
      if (iVar16 < 0) {
LAB_001d0e70:
        if ((int)lVar14 < (int)(uVar15 - 1)) {
          uVar10 = 0;
          goto LAB_001d0ec8;
        }
      }
      else {
        pCVar13 = in_x0[3];
        if (iVar11 < 0x4001) {
          sVar12 = (size_t)iVar3;
          iVar16 = iVar3;
        }
        else {
          sVar12 = (size_t)iVar16;
          if (iVar16 != 0) {
            memmove(pCVar13,pCVar13 + iVar11,sVar12);
            pCVar13 = in_x0[3];
          }
          *(undefined4 *)(in_x0 + 1) = 0;
          *(int *)(in_x0 + 0x1a) = iVar16;
        }
                    /* try { // try from 001d0de0 to 001d0de3 has its CatchHandler @ 001d0f54 */
        iVar11 = ComprDataIO::UnpRead(*in_x0,(uchar *)(pCVar13 + sVar12),(long)(0x8000 - iVar16));
        if (0 < iVar11) {
          iVar11 = iVar11 + *(int *)(in_x0 + 0x1a);
          *(int *)(in_x0 + 0x1a) = iVar11;
          *(int *)((long)in_x0 + 0xd4) = iVar11 + -0x1e;
          iVar11 = *(int *)(in_x0 + 1);
          goto LAB_001d0d58;
        }
        *(int *)((long)in_x0 + 0xd4) = *(int *)(in_x0 + 0x1a) + -0x1e;
        if (iVar11 == -1) goto LAB_001d0e70;
      }
      iVar11 = *(int *)(in_x0 + 1);
    }
LAB_001d0d58:
    pCVar13 = in_x0[3];
    lVar1 = (long)iVar11;
    lVar8 = (long)iVar11;
    lVar9 = (long)iVar11;
    uVar2 = *(int *)((long)in_x0 + 0xc) + 8;
    iVar11 = iVar11 + (uVar2 >> 3);
    __ptr[lVar14] =
         (uchar)((((uint)(byte)pCVar13[lVar8 + 2] | (uint)(byte)pCVar13[lVar1] << 0x10 |
                  (uint)(byte)pCVar13[lVar9 + 1] << 8) >>
                 (ulong)(8U - *(int *)((long)in_x0 + 0xc) & 0x1f)) >> 8);
    *(int *)(in_x0 + 1) = iVar11;
    *(uint *)((long)in_x0 + 0xc) = uVar2 & 7;
    lVar14 = lVar14 + 1;
  } while ((int)lVar14 < (int)uVar15);
                    /* try { // try from 001d0ec0 to 001d0ec3 has its CatchHandler @ 001d0f6c */
  uVar10 = AddVMCode((Unpack *)in_x0,uVar7,__ptr,uVar15);
LAB_001d0ec8:
  if (__ptr == (uchar *)0x0) {
    return uVar10;
  }
  free(__ptr);
  return uVar10;
}


