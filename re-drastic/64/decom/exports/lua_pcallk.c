/*
 * Ghidra decompilation
 *
 * Function : lua_pcallk
 * Address  : 001f3c70
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void lua_pcallk(long param_1,int param_2,int param_3,int param_4,undefined8 param_5,long param_6)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *local_18;
  int local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = *(long **)(param_1 + 0x10);
  if (param_4 == 0) {
    lVar4 = *(long *)(param_1 + 0x38);
    lVar5 = 0;
  }
  else {
    if (param_4 < 1) {
      plVar3 = local_18 + (long)param_4 * 2;
      if (param_4 < -0xf4627) {
        if (param_4 == -0xf4628) {
          plVar3 = (long *)(*(long *)(param_1 + 0x18) + 0x40);
        }
        else {
          plVar3 = **(long ***)(param_1 + 0x20);
          if ((*(int *)(plVar3 + 1) == 0x16) ||
             (lVar4 = *plVar3, (int)(uint)*(byte *)(lVar4 + 10) < -0xf4628 - param_4)) {
            plVar3 = &luaO_nilobject_;
          }
          else {
            plVar3 = (long *)(lVar4 + (long)(-0xf4629 - param_4) * 0x10 + 0x20);
          }
        }
      }
    }
    else {
      plVar1 = **(long ***)(param_1 + 0x20) + (long)param_4 * 2;
      plVar3 = &luaO_nilobject_;
      if (plVar1 < local_18) {
        plVar3 = plVar1;
      }
    }
    lVar4 = *(long *)(param_1 + 0x38);
    lVar5 = (long)plVar3 - lVar4;
  }
  local_18 = local_18 + (long)param_2 * -2 + -2;
  if ((param_6 == 0) || (*(short *)(param_1 + 0xc4) != 0)) {
    local_10 = param_3;
    uVar2 = luaD_pcall(param_1,f_call,&local_18,(long)local_18 - lVar4);
  }
  else {
    lVar6 = *(long *)(param_1 + 0x20);
    uVar2 = *(undefined8 *)(param_1 + 0xb0);
    *(long *)(lVar6 + 0x20) = param_6;
    *(undefined8 *)(lVar6 + 0x28) = uVar2;
    *(undefined8 *)(lVar6 + 0x30) = param_5;
    *(long *)(lVar6 + 0x38) = (long)local_18 - lVar4;
    *(long *)(param_1 + 0xb0) = lVar5;
    *(byte *)(lVar6 + 0x42) = *(byte *)(lVar6 + 0x42) & 0xfe | *(byte *)(param_1 + 0xc9) | 0x10;
    luaD_call(param_1,local_18,param_3,1);
    *(byte *)(lVar6 + 0x42) = *(byte *)(lVar6 + 0x42) & 0xef;
    uVar2 = 0;
    *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(lVar6 + 0x28);
  }
  if (param_3 == -1) {
    if (*(ulong *)(*(long *)(param_1 + 0x20) + 8) < *(ulong *)(param_1 + 0x10)) {
      *(ulong *)(*(long *)(param_1 + 0x20) + 8) = *(ulong *)(param_1 + 0x10);
    }
  }
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2,local_8 - ___stack_chk_guard,0);
  }
  return;
}


