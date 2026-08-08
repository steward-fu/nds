/*
 * Ghidra decompilation
 *
 * Function : luaE_freethread
 * Address  : 001fff00
 * Program  : drastic64
 */


void luaE_freethread(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  luaF_close(param_2,*(undefined8 *)(param_2 + 0x38));
  lVar1 = *(long *)(param_2 + 0x38);
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_2 + 0x78);
    *(long *)(param_2 + 0x20) = param_2 + 0x60;
    *(undefined8 *)(param_2 + 0x78) = 0;
    if (lVar2 != 0) {
      do {
        lVar1 = *(long *)(lVar2 + 0x18);
        luaM_realloc_(param_2,lVar2,0x48,0);
        lVar2 = lVar1;
      } while (lVar1 != 0);
      lVar1 = *(long *)(param_2 + 0x38);
    }
    luaM_realloc_(param_2,lVar1,(long)*(int *)(param_2 + 0xb8) << 4,0);
  }
  luaM_realloc_(param_1,param_2 + -8,0xd8,0);
  return;
}


