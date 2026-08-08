/*
 * Ghidra decompilation
 *
 * Function : CrcUpdate
 * Address  : 080c99a8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

UInt32 CrcUpdate(UInt32 v,void *data,size_t size)

{
  UInt32 UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x080c99c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = (*g_CrcUpdate)(v,data,size,g_CrcTable);
  return UVar1;
}


