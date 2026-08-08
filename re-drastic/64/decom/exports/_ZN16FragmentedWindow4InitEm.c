/*
 * Ghidra decompilation
 *
 * Function : _ZN16FragmentedWindow4InitEm
 * Address  : 001dfcb0
 * Program  : drastic64
 */


/* FragmentedWindow::Init(unsigned long) */

void __thiscall FragmentedWindow::Init(FragmentedWindow *this,ulong param_1)

{
  ulong uVar1;
  void *pvVar2;
  code **ppcVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  ulong __nmemb;
  
  if (param_1 == 0) {
    return;
  }
  lVar5 = 1;
  uVar6 = 0;
  do {
    __nmemb = param_1 - uVar6;
    uVar1 = 0;
    if (0x21U - lVar5 != 0) {
      uVar1 = __nmemb / (0x21U - lVar5);
    }
    if (uVar1 < 0x400000) {
      uVar1 = 0x400000;
    }
    while( true ) {
      if (__nmemb < uVar1) {
        ppcVar3 = (code **)__cxa_allocate_exception(8);
        *ppcVar3 = memchr;
                    /* WARNING: Subroutine does not return */
        __cxa_throw(ppcVar3,&std::bad_alloc::typeinfo,std::bad_alloc::~bad_alloc);
      }
      pvVar2 = calloc(__nmemb,1);
      if (pvVar2 != (void *)0x0) break;
      __nmemb = __nmemb - (__nmemb >> 5);
    }
    uVar6 = uVar6 + __nmemb;
    *(void **)(this + lVar5 * 8 + -8) = pvVar2;
    uVar4 = (uint)lVar5;
    *(ulong *)(this + lVar5 * 8 + 0xf8) = uVar6;
    lVar5 = lVar5 + 1;
  } while (uVar6 < param_1 && uVar4 < 0x20);
  if (param_1 <= uVar6) {
    return;
  }
  ppcVar3 = (code **)__cxa_allocate_exception(8);
  *ppcVar3 = memchr;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(ppcVar3,&std::bad_alloc::typeinfo,std::bad_alloc::~bad_alloc);
}


