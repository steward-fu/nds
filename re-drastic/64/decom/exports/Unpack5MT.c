/*
 * Ghidra decompilation
 *
 * Function : Unpack5MT
 * Address  : 001e4490
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Unpack::Unpack5MT(bool) */

void __thiscall Unpack::Unpack5MT(Unpack *this,bool param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  ulong uVar8;
  bool bVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  long lVar14;
  ThreadPool *this_00;
  void *pvVar15;
  int iVar16;
  undefined *puVar17;
  UnpackThreadData *pUVar18;
  undefined8 uVar19;
  ulong uVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  ulong uVar24;
  UnpackThreadData *local_208;
  uint local_200 [126];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  InitMT();
  UnpInitData(this,param_1);
  iVar16 = *(int *)(this + 0x30);
  lVar14 = *(long *)(this + 0x28);
  if (iVar16 * 2 != 0) {
    puVar17 = (undefined *)(lVar14 + 0x4add);
    do {
      *puVar17 = 0;
      puVar17[2] = 0;
      puVar17 = puVar17 + 0x4af8;
    } while ((undefined *)(lVar14 + 0x95d5 + (ulong)(iVar16 * 2 - 1) * 0x4af8) != puVar17);
  }
  uVar19 = *(undefined8 *)(this + 0xe0);
  *(undefined8 *)(lVar14 + 0x24) = *(undefined8 *)(this + 0xd8);
  *(undefined8 *)(lVar14 + 0x2c) = uVar19;
  *(undefined4 *)(lVar14 + 0x34) = *(undefined4 *)(this + 0xe8);
  bVar7 = false;
  iVar16 = 0;
  uVar24 = 0;
  memcpy((void *)(lVar14 + 0x3c),this + 0xec,0x4a9c);
  iVar21 = 0;
LAB_001e4560:
  do {
    iVar11 = ComprDataIO::UnpRead
                       (*(ComprDataIO **)this,(uchar *)(*(long *)(this + 0x38) + (long)iVar21),
                        (long)(int)(0x400000U - iVar21 & 0xfffffff0));
    if ((iVar11 < 0) || (iVar1 = iVar21 + iVar11, iVar1 == 0)) goto LAB_001e48e8;
    do {
      iVar21 = iVar1;
      if (iVar1 <= iVar16) goto LAB_001e4560;
      uVar13 = *(uint *)(this + 0x30);
      uVar22 = 0;
      uVar20 = 0;
      uVar23 = 0;
      if ((uVar13 & 0x7fffffff) != 0) {
        do {
          uVar24 = uVar20;
          lVar14 = *(long *)(this + 0x28) + uVar24 * 0x4af8;
          *(Unpack **)(*(long *)(this + 0x28) + uVar24 * 0x4af8) = this;
          uVar23 = (uint)uVar24;
          if (*(char *)(lVar14 + 0x4adf) == '\0') {
            BitInput::SetExternalBuffer
                      ((BitInput *)(lVar14 + 8),(uchar *)(*(long *)(this + 0x38) + (long)iVar16));
            *(undefined8 *)(lVar14 + 8) = 0;
            *(int *)(lVar14 + 0x4ad8) = iVar1 - iVar16;
            if (iVar1 - iVar16 == 0) {
              uVar13 = *(uint *)(this + 0x30);
              bVar9 = false;
              goto LAB_001e4660;
            }
            *(undefined *)(lVar14 + 0x4adc) = 0;
            *(undefined *)(lVar14 + 0x38) = 0;
            *(bool *)(lVar14 + 0x4ade) = iVar11 == 0;
            *(undefined *)(lVar14 + 0x4adf) = 0;
            *(uint *)(lVar14 + 0x4af0) = uVar23;
LAB_001e4808:
            *(undefined *)(lVar14 + 0x20) = 1;
            cVar10 = ReadBlockHeader(this,(BitInput *)(lVar14 + 8),
                                     (UnpackBlockHeader *)(lVar14 + 0x24));
            if (cVar10 == '\0') {
              uVar13 = *(uint *)(this + 0x30);
              bVar9 = true;
              goto LAB_001e4660;
            }
          }
          else {
            *(int *)(lVar14 + 0x4ad8) = iVar1;
            *(bool *)(lVar14 + 0x4ade) = iVar11 == 0;
            *(undefined *)(lVar14 + 0x4adf) = 0;
            *(uint *)(lVar14 + 0x4af0) = uVar23;
            if (*(char *)(lVar14 + 0x20) == '\0') goto LAB_001e4808;
          }
          iVar12 = *(int *)(lVar14 + 0x24);
          if ((bVar7) || (0x20000 < iVar12)) {
            *(undefined *)(lVar14 + 0x4add) = 1;
            iVar16 = iVar16 + iVar12 + *(int *)(lVar14 + 0x30);
            iVar12 = iVar1 - iVar16;
            bVar7 = true;
            if (-1 < iVar12) goto LAB_001e462c;
LAB_001e47b8:
            uVar23 = uVar23 + 1;
            uVar13 = *(uint *)(this + 0x30);
            bVar9 = false;
            goto LAB_001e4660;
          }
          uVar22 = uVar22 + 1;
          iVar16 = iVar16 + iVar12 + *(int *)(lVar14 + 0x30);
          iVar12 = iVar1 - iVar16;
          if (iVar12 < 0) goto LAB_001e47b8;
LAB_001e462c:
          uVar6 = uVar23 + 1;
          if ((*(byte *)(lVar14 + 0x34) | iVar12 < 0x400) != 0) goto LAB_001e47b8;
          uVar13 = *(uint *)(this + 0x30);
          uVar20 = (ulong)uVar6;
          uVar23 = uVar6;
        } while (uVar6 < uVar13 << 1);
      }
      bVar9 = false;
LAB_001e4660:
      uVar6 = 0;
      if (uVar13 != 0) {
        uVar6 = uVar22 / uVar13;
      }
      if (uVar22 != uVar6 * uVar13) {
        uVar6 = uVar6 + 1;
      }
      if (uVar22 == 0) {
LAB_001e46f0:
        if (uVar23 == 0) {
LAB_001e49dc:
          if (bVar9) goto LAB_001e48e8;
          goto LAB_001e4560;
        }
      }
      else {
        if (uVar23 != 1) {
          uVar20 = 0;
          uVar13 = 0;
          uVar5 = uVar22;
          do {
            this_00 = *(ThreadPool **)(this + 0x20);
            uVar8 = (ulong)uVar13;
            uVar2 = (int)uVar20 + uVar6;
            (&local_208)[uVar8 * 2] = (UnpackThreadData *)(*(long *)(this + 0x28) + uVar20 * 0x4af8)
            ;
            uVar3 = uVar6;
            if (uVar5 < uVar6) {
              uVar3 = uVar5;
            }
            local_200[uVar8 * 4] = uVar3;
            ThreadPool::AddTask(this_00,UnpackDecodeThread,&local_208 + uVar8 * 2);
            uVar20 = (ulong)uVar2;
            uVar5 = uVar5 - uVar6;
            uVar13 = uVar13 + 1;
          } while (uVar2 < uVar22);
          goto LAB_001e46f0;
        }
        uVar20 = 0;
        uVar13 = 0;
        uVar5 = uVar22;
        do {
          pUVar18 = (UnpackThreadData *)(*(long *)(this + 0x28) + uVar20 * 0x4af8);
          uVar2 = uVar5;
          if (uVar6 < uVar5) {
            uVar2 = uVar6;
          }
          uVar3 = (int)uVar20 + uVar6;
          (&local_208)[(ulong)uVar13 * 2] = pUVar18;
          local_200[(ulong)uVar13 * 4] = uVar2;
          UnpackDecode(this,pUVar18);
          uVar20 = (ulong)uVar3;
          uVar13 = uVar13 + 1;
          uVar5 = uVar5 - uVar6;
        } while (uVar3 < uVar22);
      }
      uVar22 = 0;
      ThreadPool::WaitDone();
      lVar14 = 0;
      do {
        pUVar18 = (UnpackThreadData *)(*(long *)(this + 0x28) + lVar14);
        if (pUVar18[0x4add] == (UnpackThreadData)0x0) {
          cVar10 = ProcessDecoded(this,pUVar18);
          if (cVar10 == '\0') goto LAB_001e48e8;
          if (pUVar18[0x4add] != (UnpackThreadData)0x0) goto LAB_001e4710;
        }
        else {
LAB_001e4710:
          cVar10 = UnpackLargeBlock(this,pUVar18);
          if (cVar10 == '\0') goto LAB_001e48e8;
        }
        if (pUVar18[0x4adc] != (UnpackThreadData)0x0) goto LAB_001e48e8;
        if (pUVar18[0x4adf] != (UnpackThreadData)0x0) {
          pvVar15 = *(void **)(this + 0x38);
          iVar16 = ((int)*(undefined8 *)(pUVar18 + 0x18) + *(int *)(pUVar18 + 8)) - (int)pvVar15;
          if (iVar1 <= iVar16) goto LAB_001e48e8;
          iVar21 = iVar1 - iVar16;
          memmove(pvVar15,(void *)((long)pvVar15 + (long)iVar16),(long)iVar21);
          iVar16 = *(int *)(pUVar18 + 8);
          uVar19 = *(undefined8 *)(this + 0x38);
          *(undefined4 *)(pUVar18 + 8) = 0;
          *(undefined8 *)(pUVar18 + 0x18) = uVar19;
          *(int *)(pUVar18 + 0x24) = *(int *)(pUVar18 + 0x24) - (iVar16 - *(int *)(pUVar18 + 0x2c));
          *(undefined8 *)(pUVar18 + 0x2c) = 0;
          iVar16 = 0;
          if (uVar22 != 0) {
            pvVar15 = *(void **)(this + 0x28);
            uVar19 = *(undefined8 *)((long)pvVar15 + 0x4ae0);
            uVar4 = *(undefined4 *)((long)pvVar15 + 0x4aec);
            memcpy(pvVar15,pUVar18,0x4af4);
            lVar14 = *(long *)(this + 0x28);
            *(undefined8 *)(lVar14 + 0x4ae0) = uVar19;
            *(undefined4 *)(lVar14 + 0x4aec) = uVar4;
            pUVar18[0x4adf] = (UnpackThreadData)0x0;
          }
          goto LAB_001e49dc;
        }
        if (pUVar18[0x34] != (UnpackThreadData)0x0) goto LAB_001e48e8;
        uVar22 = uVar22 + 1;
        lVar14 = lVar14 + 0x4af8;
      } while (uVar23 != uVar22);
      if (bVar9) goto LAB_001e48e8;
      iVar21 = iVar1 - iVar16;
    } while (0x3ff < iVar21);
    if (iVar21 < 0) {
LAB_001e48e8:
      UnpWriteBuf();
      lVar14 = *(long *)(this + 0x28) + uVar24 * 0x4af8;
      uVar19 = *(undefined8 *)(lVar14 + 0x2c);
      *(undefined8 *)(this + 0xd8) = *(undefined8 *)(lVar14 + 0x24);
      *(undefined8 *)(this + 0xe0) = uVar19;
      *(undefined4 *)(this + 0xe8) = *(undefined4 *)(lVar14 + 0x34);
      memcpy(this + 0xec,(void *)(lVar14 + 0x3c),0x4a9c);
      if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(&__stack_chk_guard,local_8 - ___stack_chk_guard,0);
      }
      return;
    }
    if (iVar21 == 0) {
      iVar16 = 0;
      iVar21 = 0;
    }
    else {
      lVar14 = (long)iVar16;
      iVar16 = 0;
      memmove(*(void **)(this + 0x38),(void *)((long)*(void **)(this + 0x38) + lVar14),(long)iVar21)
      ;
    }
  } while( true );
}


