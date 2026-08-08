/*
 * Ghidra decompilation
 *
 * Function : AddVMCode
 * Address  : 001d02a0
 * Program  : drastic64
 */


/* WARNING: Type propagation algorithm not settling */
/* Unpack::AddVMCode(unsigned int, unsigned char*, int) */

undefined8 __thiscall Unpack::AddVMCode(Unpack *this,uint param_1,uchar *param_2,int param_3)

{
  RarVM *this_00;
  BitInput *this_01;
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined extraout_var;
  uchar extraout_var_00;
  uint *puVar5;
  long lVar6;
  uchar *__ptr;
  bool bVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  size_t sVar12;
  ulong uVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puVar16;
  void *pvVar17;
  ulong uVar18;
  void *pvVar19;
  uchar *puVar20;
  ulong uVar21;
  
  if (0x8000 < param_3) {
    param_3 = 0x8000;
  }
  *(undefined8 *)(this + 0xe8f8) = 0;
  this_00 = (RarVM *)(this + 0xe8b0);
  this_01 = (BitInput *)(this + 0xe8f8);
  memcpy(*(void **)(this + 0xe908),param_2,(long)param_3);
  RarVM::Init();
  if ((param_1 >> 7 & 1) == 0) {
    uVar3 = *(uint *)(this + 0xe970);
LAB_001d0310:
    uVar18 = *(ulong *)(this + 0xe918);
    uVar21 = (ulong)uVar3;
    if (uVar18 < uVar3) {
      return 0;
    }
    if (*(ulong *)(this + 0xe958) < uVar21) {
      return 0;
    }
  }
  else {
    iVar4 = RarVM::ReadData(this_01);
    if (iVar4 != 0) {
      uVar3 = iVar4 - 1;
      goto LAB_001d0310;
    }
    InitFilters30();
    uVar21 = 0;
    uVar3 = 0;
    uVar18 = *(ulong *)(this + 0xe918);
  }
  *(uint *)(this + 0xe970) = uVar3;
  puVar5 = (uint *)operator_new(0xb8);
  *(undefined8 *)(puVar5 + 6) = 0;
  *(undefined8 *)(puVar5 + 0xc) = 0;
  *(undefined8 *)(puVar5 + 0xe) = 0;
  puVar5[0x10] = 0;
  *(undefined8 *)(puVar5 + 0x12) = 0;
  *(undefined8 *)(puVar5 + 0x18) = 0;
  *(undefined8 *)(puVar5 + 0x1a) = 0;
  *(undefined8 *)(puVar5 + 0x20) = 0;
  puVar5[0x2c] = 0;
  *(undefined8 *)(puVar5 + 10) = 0;
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined8 *)(puVar5 + 0x16) = 0;
  *(undefined8 *)(puVar5 + 0x14) = 0;
  *(undefined8 *)(puVar5 + 0x1e) = 0;
  *(undefined8 *)(puVar5 + 0x1c) = 0;
  if (uVar21 == uVar18) {
    if (0x400 < uVar3) {
      operator_delete(puVar5,0xb8);
      return 0;
    }
    uVar10 = *(ulong *)(this + 0xe920);
    uVar13 = *(long *)(this + 0xe918) + 1;
    *(ulong *)(this + 0xe918) = uVar13;
    if (uVar10 < uVar13) {
      uVar11 = *(ulong *)(this + 0xe928);
      if ((uVar11 != 0 && uVar11 <= uVar13) && (uVar11 == 0 || uVar13 != uVar11)) {
        ErrorHandler::GeneralErrMsg(&ErrHandler,L"Maximum allowed array size (%u) is exceeded");
        ErrorHandler::MemoryError();
        uVar13 = *(ulong *)(this + 0xe918);
        uVar10 = *(ulong *)(this + 0xe920);
      }
      uVar10 = uVar10 + 0x20 + (uVar10 >> 2);
      if (uVar10 < uVar13) {
        uVar10 = uVar13;
      }
      pvVar17 = realloc(*(void **)(this + 0xe910),uVar10 << 3);
      if (pvVar17 == (void *)0x0) {
        ErrorHandler::MemoryError();
      }
      *(void **)(this + 0xe910) = pvVar17;
      *(ulong *)(this + 0xe920) = uVar10;
    }
    pvVar17 = operator_new(0xb8);
    lVar6 = *(long *)(this + 0xe918);
    lVar14 = *(long *)(this + 0xe958);
    uVar10 = *(ulong *)(this + 0xe960);
    *(undefined8 *)((long)pvVar17 + 0x18) = 0;
    lVar9 = *(long *)(this + 0xe910);
    *(undefined8 *)((long)pvVar17 + 0x28) = 0;
    *(undefined8 *)((long)pvVar17 + 0x20) = 0;
    *(undefined8 *)((long)pvVar17 + 0x30) = 0;
    *(undefined8 *)((long)pvVar17 + 0x38) = 0;
    *(undefined4 *)((long)pvVar17 + 0x40) = 0;
    *(undefined8 *)((long)pvVar17 + 0x48) = 0;
    *(undefined8 *)((long)pvVar17 + 0x58) = 0;
    *(undefined8 *)((long)pvVar17 + 0x50) = 0;
    *(undefined8 *)((long)pvVar17 + 0x60) = 0;
    *(undefined8 *)((long)pvVar17 + 0x68) = 0;
    *(undefined8 *)((long)pvVar17 + 0x78) = 0;
    *(undefined8 *)((long)pvVar17 + 0x70) = 0;
    *(undefined8 *)((long)pvVar17 + 0x80) = 0;
    *(undefined4 *)((long)pvVar17 + 0xb0) = 0;
    *(void **)(lVar9 + (lVar6 + -1) * 8) = pvVar17;
    uVar13 = lVar14 + 1;
    *(ulong *)(this + 0xe958) = uVar13;
    puVar5[4] = (int)lVar6 - 1;
    if (uVar10 < uVar13) {
      uVar11 = *(ulong *)(this + 0xe968);
      if ((uVar11 != 0 && uVar11 <= uVar13) && (uVar11 == 0 || uVar13 != uVar11)) {
        ErrorHandler::GeneralErrMsg(&ErrHandler,L"Maximum allowed array size (%u) is exceeded");
        ErrorHandler::MemoryError();
        uVar13 = *(ulong *)(this + 0xe958);
        uVar10 = *(ulong *)(this + 0xe960);
      }
      uVar10 = uVar10 + 0x20 + (uVar10 >> 2);
      if (uVar10 < uVar13) {
        uVar10 = uVar13;
      }
      pvVar19 = realloc(*(void **)(this + 0xe950),uVar10 << 2);
      if (pvVar19 == (void *)0x0) {
        ErrorHandler::MemoryError();
      }
      *(ulong *)(this + 0xe960) = uVar10;
      *(void **)(this + 0xe950) = pvVar19;
      lVar14 = *(long *)(this + 0xe958) + -1;
    }
    else {
      pvVar19 = *(void **)(this + 0xe950);
    }
    *(undefined4 *)((long)pvVar19 + lVar14 * 4) = 0;
    *(undefined4 *)((long)pvVar17 + 8) = 0;
  }
  else {
    pvVar17 = *(void **)(*(long *)(this + 0xe910) + uVar21 * 8);
    iVar4 = *(int *)((long)pvVar17 + 8);
    puVar5[4] = uVar3;
    *(int *)((long)pvVar17 + 8) = iVar4 + 1;
  }
  uVar13 = *(ulong *)(this + 0xe938);
  if (uVar13 == 0) {
    uVar13 = 1;
LAB_001d0680:
    uVar10 = *(ulong *)(this + 0xe940);
    *(ulong *)(this + 0xe938) = uVar13;
    if (uVar10 < uVar13) {
      if (*(ulong *)(this + 0xe948) != 0 && *(ulong *)(this + 0xe948) < uVar13) {
        ErrorHandler::GeneralErrMsg(&ErrHandler,L"Maximum allowed array size (%u) is exceeded");
        ErrorHandler::MemoryError();
        uVar13 = *(ulong *)(this + 0xe938);
        uVar10 = *(ulong *)(this + 0xe940);
      }
      uVar10 = uVar10 + 0x20 + (uVar10 >> 2);
      if (uVar10 < uVar13) {
        uVar10 = uVar13;
      }
      pvVar19 = realloc(*(void **)(this + 0xe930),uVar10 << 3);
      if (pvVar19 == (void *)0x0) {
        ErrorHandler::MemoryError();
      }
      *(ulong *)(this + 0xe940) = uVar10;
      iVar4 = 1;
      uVar13 = *(ulong *)(this + 0xe938);
      *(void **)(this + 0xe930) = pvVar19;
    }
    else {
      iVar4 = 1;
      pvVar19 = *(void **)(this + 0xe930);
    }
  }
  else {
    iVar4 = 0;
    uVar10 = 0;
    pvVar19 = *(void **)(this + 0xe930);
    do {
      while( true ) {
        iVar8 = (int)uVar10;
        lVar6 = *(long *)((long)pvVar19 + uVar10 * 8);
        *(long *)((long)pvVar19 + (ulong)(uint)(iVar8 - iVar4) * 8) = lVar6;
        if (lVar6 != 0) break;
        iVar4 = iVar4 + 1;
LAB_001d040c:
        *(undefined8 *)((long)pvVar19 + uVar10 * 8) = 0;
        uVar10 = (ulong)(iVar8 + 1);
        if (uVar13 <= uVar10) goto LAB_001d0420;
      }
      if (iVar4 != 0) goto LAB_001d040c;
      uVar10 = (ulong)(iVar8 + 1);
    } while (uVar10 < uVar13);
LAB_001d0420:
    if (iVar4 == 0) {
      uVar13 = uVar13 + 1;
      goto LAB_001d0680;
    }
  }
  uVar3 = *(uint *)((long)pvVar17 + 8);
  *(uint **)((long)pvVar19 + (long)((int)uVar13 - iVar4) * 8) = puVar5;
  puVar5[2] = uVar3;
  uVar2 = RarVM::ReadData(this_01);
  lVar6 = *(long *)(this + 0xc0);
  uVar3 = uVar2 + 0x102;
  if ((param_1 & 0x40) == 0) {
    uVar3 = uVar2;
  }
  *puVar5 = uVar3 + (int)lVar6 & (uint)*(undefined8 *)(this + 0xe980);
  uVar2 = param_1 & 0x20;
  if ((param_1 >> 5 & 1) == 0) {
    if (uVar21 < *(ulong *)(this + 0xe958)) {
      uVar2 = *(uint *)(*(long *)(this + 0xe950) + uVar21 * 4);
    }
    puVar5[1] = uVar2;
  }
  else {
    uVar2 = RarVM::ReadData(this_01);
    lVar9 = *(long *)(this + 0xe950);
    puVar5[1] = uVar2;
    lVar6 = *(long *)(this + 0xc0);
    *(uint *)(lVar9 + uVar21 * 4) = uVar2;
  }
  bVar7 = false;
  if (*(long *)(this + 200) != lVar6) {
    bVar7 = (*(long *)(this + 200) - lVar6 & *(ulong *)(this + 0xe980)) <= (ulong)uVar3;
  }
  *(bool *)(puVar5 + 3) = bVar7;
  *(undefined8 *)(puVar5 + 0x22) = 0;
  *(undefined8 *)(puVar5 + 0x24) = 0;
  puVar5[0x28] = 0;
  puVar5[0x25] = 0x3c000;
  *(undefined8 *)(puVar5 + 0x26) = *(undefined8 *)(puVar5 + 1);
  if ((param_1 >> 4 & 1) != 0) {
    uVar13 = BitInput::fgetbits();
    uVar3 = (uint)(uVar13 >> 9) & 0x7fffff;
    BitInput::faddbits(this_01,7);
    if ((uVar13 >> 9 & 1) != 0) {
      uVar2 = RarVM::ReadData(this_01);
      puVar5[0x22] = uVar2;
    }
    if ((uVar3 >> 1 & 1) != 0) {
      uVar2 = RarVM::ReadData(this_01);
      puVar5[0x23] = uVar2;
    }
    if ((uVar3 >> 2 & 1) != 0) {
      uVar2 = RarVM::ReadData(this_01);
      puVar5[0x24] = uVar2;
    }
    if ((uVar3 >> 3 & 1) != 0) {
      uVar2 = RarVM::ReadData(this_01);
      puVar5[0x25] = uVar2;
    }
    if ((uVar3 >> 4 & 1) != 0) {
      uVar2 = RarVM::ReadData(this_01);
      puVar5[0x26] = uVar2;
    }
    if ((uVar3 >> 5 & 1) != 0) {
      uVar2 = RarVM::ReadData(this_01);
      puVar5[0x27] = uVar2;
    }
    if ((uVar3 >> 6 & 1) != 0) {
      uVar3 = RarVM::ReadData(this_01);
      puVar5[0x28] = uVar3;
    }
  }
  if (uVar21 == uVar18) {
    uVar3 = RarVM::ReadData(this_01);
    sVar12 = (size_t)uVar3;
    if (0xfffe < uVar3 - 1) {
      return 0;
    }
    if (uVar3 < 0x20) {
      sVar12 = 0x20;
    }
    __ptr = (uchar *)malloc(sVar12);
    if (__ptr == (uchar *)0x0) {
      ErrorHandler::MemoryError();
    }
    puVar20 = __ptr;
    do {
      if (0x7fff < *(int *)(this + 0xe8f8) + 3U) {
        if (__ptr == (uchar *)0x0) {
          return 0;
        }
        free(__ptr);
        return 0;
      }
                    /* try { // try from 001d0964 to 001d099b has its CatchHandler @ 001d0c84 */
      BitInput::fgetbits();
      *puVar20 = extraout_var_00;
      BitInput::faddbits(this_01,8);
      puVar20 = puVar20 + 1;
    } while (__ptr + (ulong)(uVar3 - 1) + 1 != puVar20);
    RarVM::Prepare(this_00,__ptr,uVar3,(VM_PreparedProgram *)((long)pvVar17 + 0x18));
    if (__ptr != (uchar *)0x0) {
      free(__ptr);
    }
  }
  sVar12 = *(size_t *)((long)pvVar17 + 0x70);
  *(undefined8 *)(puVar5 + 0xe) = *(undefined8 *)((long)pvVar17 + 0x18);
  puVar5[0x10] = *(uint *)((long)pvVar17 + 0x40);
  if (sVar12 - 1 < 0x1fff) {
    uVar21 = *(ulong *)(puVar5 + 0x1e);
    uVar18 = sVar12 + *(long *)(puVar5 + 0x1c);
    *(ulong *)(puVar5 + 0x1c) = uVar18;
    if (uVar21 < uVar18) {
      uVar13 = *(ulong *)(puVar5 + 0x20);
      if ((uVar13 != 0 && uVar13 <= uVar18) && (uVar13 == 0 || uVar18 != uVar13)) {
        ErrorHandler::GeneralErrMsg(&ErrHandler,L"Maximum allowed array size (%u) is exceeded");
        ErrorHandler::MemoryError();
        uVar18 = *(ulong *)(puVar5 + 0x1c);
        uVar21 = *(ulong *)(puVar5 + 0x1e);
      }
      uVar21 = uVar21 + 0x20 + (uVar21 >> 2);
      if (uVar21 < uVar18) {
        uVar21 = uVar18;
      }
      pvVar19 = realloc(*(void **)(puVar5 + 0x1a),uVar21);
      if (pvVar19 == (void *)0x0) {
        ErrorHandler::MemoryError();
      }
      *(void **)(puVar5 + 0x1a) = pvVar19;
      *(ulong *)(puVar5 + 0x1e) = uVar21;
    }
    else {
      pvVar19 = *(void **)(puVar5 + 0x1a);
    }
    memcpy(pvVar19,*(void **)((long)pvVar17 + 0x68),sVar12);
  }
  pvVar17 = *(void **)(puVar5 + 0x12);
  if (*(ulong *)(puVar5 + 0x14) < 0x40) {
    if (pvVar17 != (void *)0x0) {
      free(pvVar17);
      *(undefined8 *)(puVar5 + 0x12) = 0;
    }
    uVar18 = 0x40;
    pvVar17 = (void *)0x0;
    *(undefined8 *)(puVar5 + 0x16) = 0;
    *(undefined8 *)(puVar5 + 0x14) = 0x40;
    if (*(long *)(puVar5 + 0x18) - 1U < 0x3f) {
      ErrorHandler::GeneralErrMsg(&ErrHandler,L"Maximum allowed array size (%u) is exceeded");
      ErrorHandler::MemoryError();
      uVar18 = *(ulong *)(puVar5 + 0x16) + 0x20 + (*(ulong *)(puVar5 + 0x16) >> 2);
      if (uVar18 < *(ulong *)(puVar5 + 0x14)) {
        uVar18 = *(ulong *)(puVar5 + 0x14);
      }
      pvVar17 = *(void **)(puVar5 + 0x12);
    }
    pvVar17 = realloc(pvVar17,uVar18);
    if (pvVar17 == (void *)0x0) {
      ErrorHandler::MemoryError();
    }
    *(void **)(puVar5 + 0x12) = pvVar17;
    *(ulong *)(puVar5 + 0x16) = uVar18;
  }
  lVar6 = 0;
  do {
    lVar9 = lVar6 + 0x88;
    puVar1 = (uint *)((long)pvVar17 + lVar6);
    lVar6 = lVar6 + 4;
    RarVM::SetLowEndianValue(this_00,puVar1,*(uint *)((long)puVar5 + lVar9));
  } while (lVar6 != 0x1c);
  RarVM::SetLowEndianValue(this_00,(uint *)((long)pvVar17 + 0x1c),puVar5[1]);
  RarVM::SetLowEndianValue(this_00,(uint *)((long)pvVar17 + 0x20),0);
  RarVM::SetLowEndianValue(this_00,(uint *)((long)pvVar17 + 0x2c),puVar5[2]);
  *(undefined8 *)((long)pvVar17 + 0x30) = 0;
  *(undefined8 *)((long)pvVar17 + 0x38) = 0;
  if ((param_1 >> 3 & 1) == 0) {
    return 1;
  }
  if ((0x7fff < *(int *)(this + 0xe8f8) + 3U) || (uVar3 = RarVM::ReadData(this_01), 0x1fc0 < uVar3))
  {
    return 0;
  }
  uVar18 = (ulong)(uVar3 + 0x40);
  if (*(ulong *)(puVar5 + 0x14) < uVar18) {
    uVar21 = *(ulong *)(puVar5 + 0x16);
    *(ulong *)(puVar5 + 0x14) = uVar18;
    if (uVar21 < uVar18) {
      uVar13 = *(ulong *)(puVar5 + 0x18);
      if ((uVar13 != 0 && uVar13 <= uVar18) && (uVar13 == 0 || uVar18 != uVar13)) {
        ErrorHandler::GeneralErrMsg(&ErrHandler,L"Maximum allowed array size (%u) is exceeded");
        ErrorHandler::MemoryError();
        uVar18 = *(ulong *)(puVar5 + 0x14);
        uVar21 = *(ulong *)(puVar5 + 0x16);
      }
      uVar21 = uVar21 + 0x20 + (uVar21 >> 2);
      if (uVar21 < uVar18) {
        uVar21 = uVar18;
      }
      pvVar17 = realloc(*(void **)(puVar5 + 0x12),uVar21);
      if (pvVar17 == (void *)0x0) {
        ErrorHandler::MemoryError();
      }
      *(void **)(puVar5 + 0x12) = pvVar17;
      *(ulong *)(puVar5 + 0x16) = uVar21;
      goto LAB_001d05f0;
    }
  }
  pvVar17 = *(void **)(puVar5 + 0x12);
LAB_001d05f0:
  if (uVar3 != 0) {
    puVar16 = (undefined *)((long)pvVar17 + 0x40);
    do {
      if (0x7fff < *(int *)(this + 0xe8f8) + 3U) {
        return 0;
      }
      BitInput::fgetbits();
      puVar15 = puVar16 + 1;
      *puVar16 = extraout_var;
      BitInput::faddbits(this_01,8);
      puVar16 = puVar15;
    } while ((undefined *)((long)pvVar17 + (ulong)(uVar3 - 1) + 0x41) != puVar15);
  }
  return 1;
}


