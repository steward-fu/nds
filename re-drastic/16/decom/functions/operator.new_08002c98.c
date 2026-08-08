/*
 * Ghidra decompilation
 *
 * Function : operator.new
 * Address  : 08002c98
 * Program  : drastic16
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * operator_new(uint param_1)

{
  void *pvVar1;
  
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = (void *)(*(code *)(undefined *)0x0)();
  return pvVar1;
}


