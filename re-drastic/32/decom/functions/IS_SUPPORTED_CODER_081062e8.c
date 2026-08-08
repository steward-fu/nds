/*
 * Ghidra decompilation
 *
 * Function : IS_SUPPORTED_CODER
 * Address  : 081062e8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

Bool IS_SUPPORTED_CODER(CSzCoderInfo *c)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = *(int *)&c->MethodID;
  bVar2 = *(int *)((int)&c->MethodID + 4) == 0;
  if ((bVar2 && iVar1 != -1 || bVar2 && iVar1 == -1) &&
     (((iVar1 == 0x21 || (iVar1 == 0x30101)) || (iVar1 == 0)))) {
    return 1;
  }
  return 0;
}


