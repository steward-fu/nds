/*
 * Ghidra decompilation
 *
 * Function : _ZN6Unpack4InitEjb
 * Address  : 080f6240
 * Program  : drastic
 */


/* DWARF original prototype: void Init(Unpack * this, size_t WinSize, bool Solid) */

void __thiscall Unpack::Init(Unpack *this,size_t WinSize,bool Solid)

{
  byte *__s;
  byte *NewWindow;
  undefined4 *puVar1;
  uint uVar2;
  size_t sVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte *__ptr;
  
  if (WinSize == 0) {
    WinSize = 0x40000;
    ErrorHandler::MemoryError(&ErrHandler);
  }
  else if (WinSize < 0x40000) {
    WinSize = 0x40000;
  }
  uVar6 = this->MaxWinSize;
  if (WinSize <= uVar6) {
    return;
  }
  if (Solid) {
    __ptr = this->Window;
    if (__ptr != (byte *)0x0) {
      __s = (byte *)calloc(WinSize,1);
      if ((__s == (byte *)0x0) || (this->Fragmented != false)) goto LAB_080f63d0;
      if (1 < uVar6) {
        sVar3 = this->UnpPtr;
        uVar5 = sVar3 - 1;
        do {
          uVar2 = uVar6 - 1 & uVar5;
          uVar4 = WinSize - 1 & uVar5;
          uVar5 = uVar5 - 1;
          __s[uVar4] = __ptr[uVar2];
        } while (uVar5 != sVar3 - uVar6);
      }
LAB_080f62f0:
      free(__ptr);
LAB_080f62f8:
      this->Window = __s;
      this->MaxWinSize = WinSize;
      this->MaxWinMask = WinSize - 1;
      return;
    }
    if (this->Fragmented != false) goto LAB_080f63d0;
    __s = (byte *)malloc(WinSize);
    if (__s != (byte *)0x0) goto LAB_080f63a0;
  }
  else {
    __s = (byte *)malloc(WinSize);
    if (__s != (byte *)0x0) {
      if (this->Fragmented != false) goto code_r0x080f6394;
LAB_080f63a0:
      memset(__s,0,WinSize);
      __ptr = this->Window;
      if (__ptr == (byte *)0x0) goto LAB_080f62f8;
      goto LAB_080f62f0;
    }
  }
  if (WinSize < 0x1000000) {
LAB_080f63d0:
    puVar1 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar1 = 0x8162044;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar1,std::bad_alloc::typeinfo,std::bad_alloc::~bad_alloc);
  }
  FragmentedWindow::Init(&this->FragWindow,WinSize);
  this->Fragmented = true;
code_r0x080f6394:
  this->MaxWinSize = WinSize;
  this->MaxWinMask = WinSize - 1;
  return;
}


