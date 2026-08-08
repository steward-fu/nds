/*
 * Ghidra decompilation
 *
 * Function : _ZN7RawRead4ReadEPhm
 * Address  : 001c1f70
 * Program  : drastic64
 */


/* RawRead::Read(unsigned char*, unsigned long) */

void __thiscall RawRead::Read(RawRead *this,uchar *param_1,ulong param_2)

{
  ulong uVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_2 == 0) {
    return;
  }
  uVar1 = *(ulong *)(this + 0x10);
  uVar3 = param_2 + *(long *)(this + 8);
  *(ulong *)(this + 8) = uVar3;
  if (uVar1 < uVar3) {
    uVar4 = *(ulong *)(this + 0x18);
    if ((uVar4 != 0 && uVar4 <= uVar3) && (uVar4 == 0 || uVar3 != uVar4)) {
      ErrorHandler::GeneralErrMsg(&ErrHandler,L"Maximum allowed array size (%u) is exceeded");
      ErrorHandler::MemoryError();
      uVar3 = *(ulong *)(this + 8);
      uVar1 = *(ulong *)(this + 0x10);
    }
    uVar1 = uVar1 + 0x20 + (uVar1 >> 2);
    if (uVar1 < uVar3) {
      uVar1 = uVar3;
    }
    pvVar2 = realloc(*(void **)this,uVar1);
    if (pvVar2 == (void *)0x0) {
      ErrorHandler::MemoryError();
    }
    *(void **)this = pvVar2;
    *(ulong *)(this + 0x10) = uVar1;
  }
  else {
    pvVar2 = *(void **)this;
  }
  memcpy((void *)((long)pvVar2 + *(long *)(this + 0x28)),param_1,param_2);
  *(ulong *)(this + 0x28) = *(long *)(this + 0x28) + param_2;
  return;
}


