/*
 * Ghidra decompilation
 *
 * Function : _ZN16FragmentedWindow4InitEj
 * Address  : 080f5ccc
 * Program  : drastic
 */


/* DWARF original prototype: void Init(FragmentedWindow * this, size_t WinSize) */

void __thiscall FragmentedWindow::Init(FragmentedWindow *this,size_t WinSize)

{
  uint uVar1;
  void *pvVar2;
  undefined4 *puVar3;
  uint __nmemb;
  size_t Size;
  size_t MinSize;
  byte *pbVar4;
  int iVar5;
  byte **ppbVar6;
  size_t *psVar7;
  
  if (WinSize == 0) {
    return;
  }
  iVar5 = 0x20;
  pbVar4 = (byte *)0x0;
  ppbVar6 = this->Mem + 0x1f;
  psVar7 = this[-1].MemSize + 0x1f;
  while( true ) {
    __nmemb = WinSize - (int)pbVar4;
    uVar1 = __aeabi_uidiv(__nmemb,iVar5);
    if (uVar1 < 0x400000) {
      uVar1 = 0x400000;
    }
    while( true ) {
      if (__nmemb < uVar1) {
        puVar3 = (undefined4 *)__cxa_allocate_exception(4);
        *puVar3 = 0x8162044;
                    /* WARNING: Subroutine does not return */
        __cxa_throw(puVar3,std::bad_alloc::typeinfo,std::bad_alloc::~bad_alloc);
      }
      pvVar2 = calloc(__nmemb,1);
      if (pvVar2 != (void *)0x0) break;
      __nmemb = __nmemb - (__nmemb >> 5);
    }
    pbVar4 = pbVar4 + __nmemb;
    psVar7 = psVar7 + 1;
    *psVar7 = (size_t)pvVar2;
    ppbVar6 = ppbVar6 + 1;
    *ppbVar6 = pbVar4;
    if (WinSize <= pbVar4) break;
    iVar5 = iVar5 + -1;
    if (iVar5 == 0) {
      puVar3 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar3 = 0x8162044;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar3,std::bad_alloc::typeinfo,std::bad_alloc::~bad_alloc);
    }
  }
  return;
}


