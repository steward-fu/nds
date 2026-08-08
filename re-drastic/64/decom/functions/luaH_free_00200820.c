/*
 * Ghidra decompilation
 *
 * Function : luaH_free
 * Address  : 00200820
 * Program  : drastic64
 */


void luaH_free(undefined8 param_1,long param_2)

{
  uint uVar1;
  
  if (*(undefined1 **)(param_2 + 0x18) != &dummynode_) {
    uVar1 = 1 << (ulong)(*(byte *)(param_2 + 0xb) & 0x1f);
    luaM_realloc_(param_1,*(undefined1 **)(param_2 + 0x18),
                  -(ulong)(uVar1 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar1 << 5,0);
  }
  luaM_realloc_(param_1,*(undefined8 *)(param_2 + 0x10),(ulong)*(uint *)(param_2 + 0xc) << 4,0);
  luaM_realloc_(param_1,param_2,0x38,0);
  return;
}


