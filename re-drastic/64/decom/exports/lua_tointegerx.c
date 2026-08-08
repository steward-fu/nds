/*
 * Ghidra decompilation
 *
 * Function : lua_tointegerx
 * Address  : 001f1a90
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void lua_tointegerx(long param_1,int param_2,int *param_3)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  long **pplVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined4 local_c;
  long local_8;
  
  plVar6 = *(long **)(param_1 + 0x20);
  local_8 = ___stack_chk_guard;
  lVar8 = 0;
  if (param_2 < 1) {
    plVar7 = (long *)0xfff0b9d9;
    if (param_2 < -0xf4627) {
      plVar7 = (long *)0xfff0b9d8;
      if (param_2 == -0xf4628) {
        plVar4 = (long *)(*(long *)(param_1 + 0x18) + 0x40);
      }
      else {
        pplVar5 = (long **)*plVar6;
        uVar2 = *(uint *)(pplVar5 + 1);
        plVar6 = (long *)(ulong)uVar2;
        if (uVar2 != 0x16) {
          plVar6 = *pplVar5;
          plVar7 = (long *)(ulong)(-param_2 - 0xf4628U);
          if ((int)(-param_2 - 0xf4628U) <= (int)(uint)*(byte *)((long)plVar6 + 10)) {
            plVar4 = plVar6 + (long)(-0xf4629 - param_2) * 2 + 4;
            goto LAB_001f1adc;
          }
        }
        plVar4 = &luaO_nilobject_;
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 0x10) + (long)param_2 * 0x10);
    }
  }
  else {
    lVar8 = *plVar6;
    plVar6 = &luaO_nilobject_;
    plVar7 = *(long **)(param_1 + 0x10);
    plVar1 = (long *)(lVar8 + (long)param_2 * 0x10);
    plVar4 = plVar6;
    if (plVar1 < plVar7) {
      plVar4 = plVar1;
    }
  }
LAB_001f1adc:
  if (*(int *)(plVar4 + 1) == 0x13) {
    local_c = *(undefined4 *)plVar4;
    iVar3 = 1;
  }
  else {
    iVar3 = luaV_tointeger_(plVar4,&local_c,plVar6,plVar7,lVar8);
    if (iVar3 == 0) {
      local_c = 0;
    }
  }
  if (param_3 != (int *)0x0) {
    *param_3 = iVar3;
  }
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_c,local_8 - ___stack_chk_guard,0);
  }
  return;
}


