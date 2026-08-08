/*
 * Ghidra decompilation
 *
 * Function : _ZN7RawRead4ReadEm
 * Address  : 001c1d40
 * Program  : drastic64
 */


/* RawRead::Read(unsigned long) */

ulong __thiscall RawRead::Read(RawRead *this,ulong param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  
  if (*(long *)(this + 0x38) == 0) {
    uVar5 = 0;
    if (param_1 != 0) {
      uVar6 = *(ulong *)(this + 0x10);
      uVar5 = param_1 + *(long *)(this + 8);
      *(ulong *)(this + 8) = uVar5;
      if (uVar6 < uVar5) {
        uVar3 = *(ulong *)(this + 0x18);
        if ((uVar3 != 0 && uVar3 <= uVar5) && (uVar3 == 0 || uVar5 != uVar3)) {
          ErrorHandler::GeneralErrMsg(&ErrHandler,L"Maximum allowed array size (%u) is exceeded");
          ErrorHandler::MemoryError();
          uVar5 = *(ulong *)(this + 8);
          uVar6 = *(ulong *)(this + 0x10);
        }
        uVar6 = uVar6 + 0x20 + (uVar6 >> 2);
        if (uVar6 < uVar5) {
          uVar6 = uVar5;
        }
        pvVar4 = realloc(*(void **)this,uVar6);
        if (pvVar4 == (void *)0x0) {
          ErrorHandler::MemoryError();
        }
        *(void **)this = pvVar4;
        *(ulong *)(this + 0x10) = uVar6;
      }
      else {
        pvVar4 = *(void **)this;
      }
      iVar2 = (**(code **)(**(long **)(this + 0x20) + 0x10))
                        (*(long **)(this + 0x20),(long)pvVar4 + *(long *)(this + 0x28),param_1);
      uVar5 = (ulong)iVar2;
      *(ulong *)(this + 0x28) = *(long *)(this + 0x28) + uVar5;
    }
  }
  else {
    lVar8 = *(long *)(this + 8);
    uVar5 = lVar8 - *(long *)(this + 0x28);
    lVar1 = *(long *)(this + 0x28) + param_1;
    if (uVar5 < param_1) {
      uVar5 = (uVar5 - param_1 & 0xf) + (lVar1 - lVar8);
      uVar3 = *(ulong *)(this + 0x10);
      uVar6 = uVar5 + lVar8;
      *(ulong *)(this + 8) = uVar6;
      if (uVar3 < uVar6) {
        uVar7 = *(ulong *)(this + 0x18);
        if ((uVar7 != 0 && uVar7 <= uVar6) && (uVar7 == 0 || uVar6 != uVar7)) {
          ErrorHandler::GeneralErrMsg(&ErrHandler,L"Maximum allowed array size (%u) is exceeded");
          ErrorHandler::MemoryError();
          uVar6 = *(ulong *)(this + 8);
          uVar3 = *(ulong *)(this + 0x10);
        }
        uVar3 = uVar3 + 0x20 + (uVar3 >> 2);
        if (uVar3 < uVar6) {
          uVar3 = uVar6;
        }
        pvVar4 = realloc(*(void **)this,uVar3);
        if (pvVar4 == (void *)0x0) {
          ErrorHandler::MemoryError();
        }
        *(void **)this = pvVar4;
        *(ulong *)(this + 0x10) = uVar3;
      }
      else {
        pvVar4 = *(void **)this;
      }
      iVar2 = (**(code **)(**(long **)(this + 0x20) + 0x10))
                        (*(long **)(this + 0x20),(long)pvVar4 + lVar8,uVar5);
      CryptData::DecryptBlock(*(CryptData **)(this + 0x38),(uchar *)(*(long *)this + lVar8),uVar5);
      lVar1 = *(long *)(this + 0x28) + param_1;
      if ((long)iVar2 == 0) {
        lVar1 = *(long *)(this + 0x28);
      }
      *(long *)(this + 0x28) = lVar1;
      return (long)iVar2;
    }
    *(long *)(this + 0x28) = lVar1;
    uVar5 = param_1;
  }
  return uVar5;
}


