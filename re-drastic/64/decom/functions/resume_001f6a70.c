/*
 * Ghidra decompilation
 *
 * Function : resume
 * Address  : 001f6a70
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void resume(long param_1,long param_2)

{
  undefined2 uVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined auVar5 [16];
  undefined8 uStack_170;
  __jmp_buf_tag _Stack_168;
  undefined4 uStack_30;
  long lStack_28;
  
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = param_1;
  plVar4 = *(long **)(param_1 + 0x20);
  if (*(ushort *)(param_1 + 0xc6) < 200) {
    if (*(char *)(param_1 + 10) == '\0') {
      if (plVar4 == (long *)(param_1 + 0x60)) {
        iVar2 = luaD_precall(param_1,param_2 + -0x10,0xffffffff);
        if (iVar2 != 0) {
          return;
        }
        luaV_execute(param_1);
        return;
      }
      goto LAB_001f6b64;
    }
    if (*(char *)(param_1 + 10) == '\x01') {
      *(undefined *)(param_1 + 10) = 0;
      *plVar4 = *(long *)(param_1 + 0x38) + plVar4[7];
      if ((*(byte *)((long)plVar4 + 0x42) >> 1 & 1) == 0) {
        if ((code *)plVar4[4] != (code *)0x0) {
          iVar2 = (*(code *)plVar4[4])(param_1,1,plVar4[6]);
          param_2 = *(long *)(param_1 + 0x10) + (long)iVar2 * -0x10;
        }
        luaD_poscall(param_1,param_2);
        unroll(param_1,0);
        return;
      }
      luaV_execute();
      unroll(param_1,0);
      return;
    }
  }
  else {
    auVar5 = resume_error(param_1,"C stack overflow",param_2);
  }
  auVar5 = resume_error(auVar5._0_8_,"cannot resume dead coroutine",auVar5._8_8_);
LAB_001f6b64:
  auVar5 = resume_error(auVar5._0_8_,"cannot resume non-suspended coroutine",auVar5._8_8_);
  lVar3 = auVar5._0_8_;
  uStack_170 = *(undefined8 *)(lVar3 + 0x58);
  *(undefined8 **)(lVar3 + 0x58) = &uStack_170;
  lStack_28 = ___stack_chk_guard;
  uVar1 = *(undefined2 *)(lVar3 + 0xc6);
  uStack_30 = 0;
  iVar2 = _setjmp(&_Stack_168);
  if (iVar2 == 0) {
    unroll(lVar3,auVar5._8_8_);
  }
  *(undefined2 *)(lVar3 + 0xc6) = uVar1;
  *(undefined8 *)(lVar3 + 0x58) = uStack_170;
  if (lStack_28 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uStack_30,&__stack_chk_guard,lStack_28 - ___stack_chk_guard,0);
}


