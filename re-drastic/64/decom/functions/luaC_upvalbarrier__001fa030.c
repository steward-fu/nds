/*
 * Ghidra decompilation
 *
 * Function : luaC_upvalbarrier_
 * Address  : 001fa030
 * Program  : drastic64
 */


void luaC_upvalbarrier_(long param_1,long **param_2)

{
  char cVar1;
  long lVar2;
  
  lVar2 = **param_2;
  cVar1 = *(char *)(*(long *)(param_1 + 0x18) + 0x55);
  if ((lVar2 != 0 && cVar1 == '\0' || lVar2 != 0 && cVar1 == '\x01') &&
     ((*(byte *)(lVar2 + 9) & 3) != 0)) {
    reallymarkobject();
    return;
  }
  return;
}


