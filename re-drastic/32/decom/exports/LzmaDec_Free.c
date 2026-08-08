/*
 * Ghidra decompilation
 *
 * Function : LzmaDec_Free
 * Address  : 080cecec
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void LzmaDec_Free(CLzmaDec *p,ISzAlloc *alloc)

{
  _func_void_void_ptr_void_ptr *p_Var1;
  
  (*alloc->Free)(alloc,p->probs);
  p_Var1 = alloc->Free;
  p->probs = (UInt16 *)0x0;
  (*p_Var1)(alloc,p->dic);
  p->dic = (Byte *)0x0;
  return;
}


