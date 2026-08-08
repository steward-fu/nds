/*
 * Ghidra decompilation
 *
 * Function : luaD_rawrunprotected
 * Address  : 001f5ed0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void luaD_rawrunprotected(long param_1,code *param_2,undefined8 param_3)

{
  undefined2 uVar1;
  int iVar2;
  undefined8 local_150;
  __jmp_buf_tag _Stack_148;
  undefined4 local_10;
  long local_8;
  
  local_150 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 **)(param_1 + 0x58) = &local_150;
  local_8 = ___stack_chk_guard;
  uVar1 = *(undefined2 *)(param_1 + 0xc6);
  local_10 = 0;
  iVar2 = _setjmp(&_Stack_148);
  if (iVar2 == 0) {
    (*param_2)(param_1,param_3);
  }
  *(undefined2 *)(param_1 + 0xc6) = uVar1;
  *(undefined8 *)(param_1 + 0x58) = local_150;
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_10,&__stack_chk_guard,local_8 - ___stack_chk_guard,0);
}


