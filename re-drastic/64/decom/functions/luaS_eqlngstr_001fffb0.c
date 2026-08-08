/*
 * Ghidra decompilation
 *
 * Function : luaS_eqlngstr
 * Address  : 001fffb0
 * Program  : drastic64
 */


bool luaS_eqlngstr(long param_1,long param_2)

{
  int iVar1;
  
  if (param_1 == param_2) {
    return true;
  }
  if (*(size_t *)(param_2 + 0x10) != *(size_t *)(param_1 + 0x10)) {
    return false;
  }
  iVar1 = memcmp((void *)(param_1 + 0x20),(void *)(param_2 + 0x20),*(size_t *)(param_2 + 0x10));
  return iVar1 == 0;
}


