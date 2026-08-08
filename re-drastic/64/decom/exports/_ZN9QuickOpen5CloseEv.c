/*
 * Ghidra decompilation
 *
 * Function : _ZN9QuickOpen5CloseEv
 * Address  : 001ecb10
 * Program  : drastic64
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* QuickOpen::Close() */

void QuickOpen::Close(void)

{
  long in_x0;
  void *pvVar1;
  void **ppvVar2;
  void **ppvVar3;
  
  ppvVar2 = *(void ***)(in_x0 + 0x10);
  if (ppvVar2 == (void **)0x0) {
    return;
  }
  pvVar1 = *ppvVar2;
  ppvVar3 = (void **)ppvVar2[3];
  if (pvVar1 == (void *)0x0) goto LAB_001ecb68;
  do {
    operator_delete__(pvVar1);
    operator_delete(ppvVar2,0x20);
    ppvVar2 = ppvVar3;
    while( true ) {
      if (ppvVar2 == (void **)0x0) {
        return;
      }
      pvVar1 = *ppvVar2;
      ppvVar3 = (void **)ppvVar2[3];
      if (pvVar1 != (void *)0x0) break;
LAB_001ecb68:
      operator_delete(ppvVar2,0x20);
      ppvVar2 = ppvVar3;
    }
  } while( true );
}


