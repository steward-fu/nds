/*
 * Ghidra decompilation
 *
 * Function : malloc
 * Address  : 080033b8
 * Program  : drastic16
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = (void *)(*(code *)(undefined *)0x0)();
  return pvVar1;
}


