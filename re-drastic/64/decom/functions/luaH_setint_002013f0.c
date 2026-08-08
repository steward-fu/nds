/*
 * Ghidra decompilation
 *
 * Function : luaH_setint
 * Address  : 002013f0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void luaH_setint(undefined8 param_1,long param_2,uint param_3,undefined8 *param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  uint local_18 [2];
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar4 = 0;
  if (param_3 - 1 < *(uint *)(param_2 + 0xc)) {
    puVar2 = (undefined8 *)(*(long *)(param_2 + 0x10) + (long)(int)param_3 * 0x10 + -0x10);
LAB_00201474:
    if (puVar2 != &luaO_nilobject_) goto LAB_00201484;
  }
  else {
    uVar1 = (1 << (ulong)(*(byte *)(param_2 + 0xb) & 0x1f)) - 1U & param_3;
    uVar4 = -(ulong)(uVar1 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar1 << 5;
    puVar2 = (undefined8 *)(*(long *)(param_2 + 0x18) + uVar4);
    while( true ) {
      if ((*(int *)(puVar2 + 3) == 0x13) && (param_3 == *(uint *)(puVar2 + 2))) goto LAB_00201474;
      uVar1 = *(uint *)((long)puVar2 + 0x1c);
      if (uVar1 == 0) break;
      puVar2 = (undefined8 *)
               ((long)puVar2 + (-(ulong)(uVar1 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar1 << 5));
    }
  }
  local_10 = 0x13;
  local_18[0] = param_3;
  puVar2 = (undefined8 *)luaH_newkey(param_1,param_2,local_18,0x13,puVar2,uVar4);
LAB_00201484:
  uVar3 = param_4[1];
  *puVar2 = *param_4;
  puVar2[1] = uVar3;
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&__stack_chk_guard,local_8 - ___stack_chk_guard,0);
}


