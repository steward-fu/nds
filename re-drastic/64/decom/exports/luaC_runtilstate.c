/*
 * Ghidra decompilation
 *
 * Function : luaC_runtilstate
 * Address  : 001fa480
 * Program  : drastic64
 */


void luaC_runtilstate(long param_1,int param_2)

{
  byte bVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x18);
  bVar1 = *(byte *)(lVar2 + 0x55);
  while ((param_2 >> (bVar1 & 0x1f) & 1U) == 0) {
    singlestep(param_1);
    bVar1 = *(byte *)(lVar2 + 0x55);
  }
  return;
}


