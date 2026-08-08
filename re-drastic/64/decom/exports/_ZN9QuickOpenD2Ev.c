/*
 * Ghidra decompilation
 *
 * Function : _ZN9QuickOpenD2Ev
 * Address  : 001ec990
 * Program  : drastic64
 */


/* QuickOpen::~QuickOpen() */

void __thiscall QuickOpen::~QuickOpen(QuickOpen *this)

{
  void *pvVar1;
  void **ppvVar2;
  void **ppvVar3;
  
  ppvVar2 = *(void ***)(this + 0x10);
  if (ppvVar2 != (void **)0x0) {
    pvVar1 = *ppvVar2;
    ppvVar3 = (void **)ppvVar2[3];
    if (pvVar1 == (void *)0x0) goto LAB_001ec9f0;
    do {
      operator_delete__(pvVar1);
      operator_delete(ppvVar2,0x20);
      ppvVar2 = ppvVar3;
      while( true ) {
        if (ppvVar2 == (void **)0x0) goto LAB_001ec9fc;
        pvVar1 = *ppvVar2;
        ppvVar3 = (void **)ppvVar2[3];
        if (pvVar1 != (void *)0x0) break;
LAB_001ec9f0:
        operator_delete(ppvVar2,0x20);
        ppvVar2 = ppvVar3;
      }
    } while( true );
  }
LAB_001ec9fc:
  if (*(void **)(this + 0x20) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x20));
  }
  if (*(void **)(this + 0x1070) != (void *)0x0) {
    free(*(void **)(this + 0x1070));
  }
  CryptData::~CryptData((CryptData *)(this + 0x30));
  return;
}


