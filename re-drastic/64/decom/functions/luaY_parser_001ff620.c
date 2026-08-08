/*
 * Ghidra decompilation
 *
 * Function : luaY_parser
 * Address  : 001ff620
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long luaY_parser(long param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5,
                undefined4 param_6)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined2 local_c8;
  undefined local_c6;
  long local_c0;
  long *local_b8;
  undefined *puStack_b0;
  undefined8 *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined local_84;
  undefined auStack_80 [16];
  int local_70;
  long *local_50;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = luaF_newLclosure(param_1,1);
  plVar4 = *(long **)(param_1 + 0x10);
  lVar2 = *(long *)(param_1 + 0x30);
  *plVar4 = lVar1;
  *(undefined4 *)(plVar4 + 1) = 0x46;
  *(long **)(param_1 + 0x10) = plVar4 + 2;
  if (lVar2 - (long)(plVar4 + 2) < 1) {
    luaD_growstack(param_1,0);
  }
  local_30 = luaH_new(param_1);
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  lVar2 = *(long *)(param_1 + 0x30);
  *puVar5 = local_30;
  *(undefined4 *)(puVar5 + 1) = 0x45;
  *(undefined8 **)(param_1 + 0x10) = puVar5 + 2;
  if (lVar2 - (long)(puVar5 + 2) < 1) {
    luaD_growstack(param_1,0);
  }
  lVar2 = luaF_newproto(param_1);
  *(long *)(lVar1 + 0x18) = lVar2;
  local_c0 = lVar2;
  uVar3 = luaS_new(param_1,param_5);
  *(undefined8 *)(lVar2 + 0x68) = uVar3;
  uVar3 = *(undefined8 *)(local_c0 + 0x68);
  *(undefined4 *)(param_4 + 8) = 0;
  *(undefined4 *)(param_4 + 0x18) = 0;
  *(undefined4 *)(param_4 + 0x28) = 0;
  local_38 = param_3;
  local_28 = param_4;
  luaX_setinput(param_1,auStack_80,param_2,uVar3,param_6);
  local_88 = 0;
  local_84 = 0;
  uStack_98 = 0xffffffff;
  local_a0 = 0;
  uStack_8c = *(undefined4 *)(local_28 + 8);
  local_b8 = local_50;
  local_90 = 0;
  *(undefined *)(local_c0 + 0xc) = 2;
  local_a8 = &local_d8;
  uStack_cc = *(undefined4 *)(local_28 + 0x18);
  local_d0 = *(undefined4 *)(local_28 + 0x28);
  local_c8 = 0;
  local_c6 = 0;
  *(undefined *)(local_c0 + 0xb) = 1;
  *(undefined8 *)(local_c0 + 0x68) = uStack_20;
  local_e8 = 8;
  uStack_e0 = 0xffffffffffffffff;
  local_d8 = 0;
  puStack_b0 = auStack_80;
  local_50 = &local_c0;
  newupvalue_isra_0(&local_c0,local_18,&local_e8,(long)&local_e8 + 4);
  luaX_next(auStack_80);
  while( true ) {
    if ((local_70 - 0x104U < 0x1e) &&
       ((1L << ((ulong)(local_70 - 0x104U) & 0x3f) & 0x20020007U) != 0)) goto LAB_001ff7fc;
    if (local_70 == 0x112) break;
    statement(auStack_80);
  }
  statement(auStack_80);
LAB_001ff7fc:
  if (local_70 != 0x121) {
                    /* WARNING: Subroutine does not return */
    error_expected(auStack_80,0x121);
  }
  close_func_isra_0(&local_50,local_48);
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x10;
  if (local_8 - ___stack_chk_guard == 0) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


