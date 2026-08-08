/*
 * Ghidra decompilation
 *
 * Function : Init
 * Address  : 001e1980
 * Program  : drastic64
 */


/* Unpack::Init(unsigned long, bool) */

void __thiscall Unpack::Init(Unpack *this,ulong param_1,bool param_2)

{
  ulong __size;
  void *__s;
  ulong uVar1;
  ulong uVar2;
  code **ppcVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  void *__ptr;
  
  __size = param_1;
  if (param_1 < 0x40000) {
    __size = 0x40000;
  }
  if (param_1 == 0) {
    ErrorHandler::MemoryError();
    if (0x3ffff < *(ulong *)(this + 0xe978)) {
      return;
    }
  }
  else if ((__size <= *(ulong *)(this + 0xe978)) || (0x10000 < __size >> 0x10)) {
    return;
  }
  if (param_2) {
    __ptr = *(void **)(this + 0x4b90);
    if (__ptr == (void *)0x0) {
      if (this[0x4d98] != (Unpack)0x0) goto LAB_001e1b28;
      __s = malloc(__size);
      if (__s != (void *)0x0) goto LAB_001e1b08;
LAB_001e1ad4:
      if (param_1 < 0x1000000) {
LAB_001e1b28:
        ppcVar3 = (code **)__cxa_allocate_exception(8);
        *ppcVar3 = memchr;
                    /* WARNING: Subroutine does not return */
        __cxa_throw(ppcVar3,&std::bad_alloc::typeinfo,std::bad_alloc::~bad_alloc);
      }
      FragmentedWindow::Init((FragmentedWindow *)(this + 0x4b98),__size);
      this[0x4d98] = (Unpack)0x1;
      goto LAB_001e1a9c;
    }
    __s = calloc(__size,1);
    if ((__s == (void *)0x0) || (this[0x4d98] != (Unpack)0x0)) goto LAB_001e1b28;
    uVar1 = *(ulong *)(this + 0xe978);
    if (1 < uVar1) {
      lVar6 = *(long *)(this + 0xc0);
      uVar4 = lVar6 - 1;
      do {
        uVar5 = uVar4 & uVar1 - 1;
        uVar2 = uVar4 & __size - 1;
        uVar4 = uVar4 - 1;
        *(undefined *)((long)__s + uVar2) = *(undefined *)((long)__ptr + uVar5);
      } while (uVar4 != lVar6 - uVar1);
    }
  }
  else {
    __s = malloc(__size);
    if (__s == (void *)0x0) goto LAB_001e1ad4;
    if (this[0x4d98] != (Unpack)0x0) goto LAB_001e1a9c;
LAB_001e1b08:
    memset(__s,0,__size);
    __ptr = *(void **)(this + 0x4b90);
    if (__ptr == (void *)0x0) {
      *(void **)(this + 0x4b90) = __s;
      goto LAB_001e1a9c;
    }
  }
  free(__ptr);
  *(void **)(this + 0x4b90) = __s;
LAB_001e1a9c:
  *(ulong *)(this + 0xe978) = __size;
  *(ulong *)(this + 0xe980) = __size - 1;
  return;
}


