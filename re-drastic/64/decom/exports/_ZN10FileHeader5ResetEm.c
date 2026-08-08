/*
 * Ghidra decompilation
 *
 * Function : _ZN10FileHeader5ResetEm
 * Address  : 001e7190
 * Program  : drastic64
 */


/* FileHeader::Reset(unsigned long) */

void __thiscall FileHeader::Reset(FileHeader *this,ulong param_1)

{
  ulong uVar1;
  void *pvVar2;
  ulong uVar3;
  
  uVar1 = *(ulong *)(this + 0x2030);
  if (uVar1 < param_1) {
    uVar3 = *(ulong *)(this + 0x2038);
    *(ulong *)(this + 0x2028) = param_1;
    if ((uVar3 != 0 && uVar3 <= param_1) && (uVar3 == 0 || param_1 != uVar3)) {
      ErrorHandler::GeneralErrMsg(&ErrHandler,L"Maximum allowed array size (%u) is exceeded");
      ErrorHandler::MemoryError();
      param_1 = *(ulong *)(this + 0x2028);
      uVar1 = *(ulong *)(this + 0x2030);
    }
    uVar1 = uVar1 + 0x20 + (uVar1 >> 2);
    if (uVar1 < param_1) {
      uVar1 = param_1;
    }
    pvVar2 = realloc(*(void **)(this + 0x2020),uVar1);
    if (pvVar2 == (void *)0x0) {
      ErrorHandler::MemoryError();
    }
    *(void **)(this + 0x2020) = pvVar2;
    *(ulong *)(this + 0x2030) = uVar1;
  }
  else {
    *(ulong *)(this + 0x2028) = param_1;
  }
  this[0x10] = (FileHeader)0x0;
  HashValue::Init((HashValue *)(this + 0x2070),0);
  *(undefined8 *)(this + 0x2040) = 0;
  *(undefined8 *)(this + 0x2048) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined8 *)(this + 0x2050) = 0;
  *(undefined8 *)(this + 0x2098) = 0;
  *(undefined8 *)(this + 0x20ec) = 0;
  this[0x20a0] = (FileHeader)0x0;
  this[0x20c1] = (FileHeader)0x0;
  this[0x20ca] = (FileHeader)0x0;
  *(undefined8 *)(this + 0x20f8) = 0;
  *(undefined2 *)(this + 0x2100) = 0;
  this[0x2102] = (FileHeader)0x0;
  *(undefined4 *)(this + 0x2108) = 0;
  this[0x410d] = (FileHeader)0x0;
  return;
}


