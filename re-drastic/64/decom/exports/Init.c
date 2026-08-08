/*
 * Ghidra decompilation
 *
 * Function : Init
 * Address  : 001ede00
 * Program  : drastic64
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* RarVM::Init() */

void RarVM::Init(void)

{
  long in_x0;
  void *pvVar1;
  
  if (*(long *)(in_x0 + 0x18) != 0) {
    return;
  }
  pvVar1 = operator_new__(0x40004);
  *(void **)(in_x0 + 0x18) = pvVar1;
  return;
}


