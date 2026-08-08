/*
 * Ghidra decompilation
 *
 * Function : disasm_reg_name
 * Address  : 00196990
 * Program  : drastic64
 */


void disasm_reg_name(undefined4 *param_1,int param_2,int param_3,int param_4)

{
  if (param_2 == 0x1f) {
    if (param_4 != 0) {
      *(undefined2 *)param_1 = 0x7073;
      *(undefined *)((long)param_1 + 2) = 0;
      return;
    }
    *param_1 = 0x6f72657a;
    *(undefined *)(param_1 + 1) = 0;
    return;
  }
  if (param_3 != 0) {
    __sprintf_chk(param_1,1,0xffffffffffffffff,&DAT_00227b38,param_2);
    return;
  }
  __sprintf_chk(param_1,1,0xffffffffffffffff,&DAT_00227b40,param_2);
  return;
}


