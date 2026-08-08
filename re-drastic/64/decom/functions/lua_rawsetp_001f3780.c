/*
 * Ghidra decompilation
 *
 * Function : lua_rawsetp
 * Address  : 001f3780
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void lua_rawsetp(long param_1,int param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 < 1) {
    if (param_2 < -0xf4627) {
      if (param_2 == -0xf4628) {
        plVar3 = (long *)(*(long *)(param_1 + 0x18) + 0x40);
      }
      else {
        plVar3 = **(long ***)(param_1 + 0x20);
        if ((*(int *)(plVar3 + 1) == 0x16) ||
           (lVar4 = *plVar3, (int)(uint)*(byte *)(lVar4 + 10) < -0xf4628 - param_2)) {
          plVar3 = &luaO_nilobject_;
        }
        else {
          plVar3 = (long *)(lVar4 + (long)(-0xf4629 - param_2) * 0x10 + 0x20);
        }
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 0x10) + (long)param_2 * 0x10);
    }
  }
  else {
    plVar1 = **(long ***)(param_1 + 0x20) + (long)param_2 * 2;
    plVar3 = &luaO_nilobject_;
    if (plVar1 < *(long **)(param_1 + 0x10)) {
      plVar3 = plVar1;
    }
  }
  lVar6 = *plVar3;
  local_10 = 2;
  local_18 = param_3;
  puVar2 = (undefined8 *)luaH_set(param_1,lVar6,&local_18);
  lVar4 = *(long *)(param_1 + 0x10);
  uVar5 = *(undefined8 *)(lVar4 + -8);
  *puVar2 = *(undefined8 *)(lVar4 + -0x10);
  puVar2[1] = uVar5;
  if ((((*(uint *)(lVar4 + -8) >> 6 & 1) != 0) && ((*(byte *)(lVar6 + 9) >> 2 & 1) != 0)) &&
     ((*(byte *)(*(long *)(lVar4 + -0x10) + 9) & 3) != 0)) {
    luaC_barrierback_(param_1,lVar6);
    lVar4 = *(long *)(param_1 + 0x10);
  }
  *(long *)(param_1 + 0x10) = lVar4 + -0x10;
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(&__stack_chk_guard,local_8 - ___stack_chk_guard,0);
  }
  return;
}


