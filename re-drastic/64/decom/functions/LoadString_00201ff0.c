/*
 * Ghidra decompilation
 *
 * Function : LoadString
 * Address  : 00201ff0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void LoadString(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined auVar3 [16];
  byte local_11;
  ulong local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = luaZ_read(param_1[1],&local_11,1,&__stack_chk_guard,0);
  if (lVar1 != 0) {
LAB_002020cc:
    auVar3 = LoadBlock_part_0(param_1);
    goto LAB_002020d4;
  }
  local_10 = (ulong)local_11;
  if (local_10 == 0xff) {
    lVar1 = luaZ_read(param_1[1],&local_10,8);
    if (lVar1 != 0) goto LAB_002020cc;
    if (local_10 != 0) goto LAB_0020203c;
LAB_002020c0:
    uVar2 = 0;
  }
  else {
    if (local_10 == 0) goto LAB_002020c0;
LAB_0020203c:
    local_10 = local_10 - 1;
    uVar2 = luaZ_openspace(*param_1,param_1[2]);
    lVar1 = luaZ_read(param_1[1],uVar2,local_10);
    if (lVar1 != 0) goto LAB_002020cc;
    uVar2 = luaS_newlstr(*param_1,uVar2,local_10);
  }
  auVar3._8_8_ = local_8 - ___stack_chk_guard;
  auVar3._0_8_ = uVar2;
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
LAB_002020d4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(auVar3._0_8_,auVar3._8_8_);
}


