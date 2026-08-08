/*
 * Ghidra decompilation
 *
 * Function : freeobj
 * Address  : 001f84f0
 * Program  : drastic64
 */


void freeobj(undefined8 param_1,long param_2)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  bVar1 = *(byte *)(param_2 + 8);
  if (bVar1 == 8) {
    luaE_freethread();
    return;
  }
  if (bVar1 < 9) {
    if (bVar1 == 6) {
      uVar2 = (uint)*(byte *)(param_2 + 10);
      if (*(byte *)(param_2 + 10) == 0) {
        uVar2 = 0;
      }
      else {
        lVar5 = 0;
        do {
          plVar4 = *(long **)(param_2 + 0x20 + lVar5 * 8);
          if (plVar4 != (long *)0x0) {
            lVar3 = plVar4[1];
            plVar4[1] = lVar3 + -1;
            if ((lVar3 + -1 == 0) && ((long *)*plVar4 == plVar4 + 2)) {
              luaM_realloc_(param_1,plVar4,0x20,0);
            }
            uVar2 = (uint)*(byte *)(param_2 + 10);
          }
          lVar5 = lVar5 + 1;
        } while ((int)lVar5 < (int)uVar2);
      }
      luaM_realloc_(param_1,param_2,uVar2 * 8 + 0x20,0);
      return;
    }
    if (bVar1 == 7) {
      luaM_realloc_(param_1,param_2,*(long *)(param_2 + 0x18) + 0x28,0);
      return;
    }
    if (bVar1 == 4) {
      luaS_remove();
LAB_001f85b0:
      luaM_realloc_(param_1,param_2,*(long *)(param_2 + 0x10) + 0x21,0);
      return;
    }
    if (bVar1 == 5) {
      luaH_free();
      return;
    }
  }
  else {
    if (bVar1 == 0x14) goto LAB_001f85b0;
    if (bVar1 == 0x26) {
      luaM_realloc_(param_1,param_2,(uint)*(byte *)(param_2 + 10) * 0x10 + 0x20,0);
      return;
    }
    if (bVar1 == 9) {
      luaF_freeproto();
      return;
    }
  }
  return;
}


