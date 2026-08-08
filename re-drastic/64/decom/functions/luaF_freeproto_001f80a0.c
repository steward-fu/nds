/*
 * Ghidra decompilation
 *
 * Function : luaF_freeproto
 * Address  : 001f80a0
 * Program  : drastic64
 */


void luaF_freeproto(undefined8 param_1,long param_2)

{
  luaM_realloc_(param_1,*(undefined8 *)(param_2 + 0x38),(long)*(int *)(param_2 + 0x18) << 2,0);
  luaM_realloc_(param_1,*(undefined8 *)(param_2 + 0x40),(long)*(int *)(param_2 + 0x20) << 3,0);
  luaM_realloc_(param_1,*(undefined8 *)(param_2 + 0x30),(long)*(int *)(param_2 + 0x14) << 4,0);
  luaM_realloc_(param_1,*(undefined8 *)(param_2 + 0x48),(long)*(int *)(param_2 + 0x1c) << 2,0);
  luaM_realloc_(param_1,*(undefined8 *)(param_2 + 0x50),(long)*(int *)(param_2 + 0x24) << 4,0);
  luaM_realloc_(param_1,*(undefined8 *)(param_2 + 0x58),(long)*(int *)(param_2 + 0x10) << 4,0);
  luaM_realloc_(param_1,param_2,0x78,0);
  return;
}


