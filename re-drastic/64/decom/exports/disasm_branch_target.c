/*
 * Ghidra decompilation
 *
 * Function : disasm_branch_target
 * Address  : 00196a10
 * Program  : drastic64
 */


void disasm_branch_target(char *param_1,long param_2,int param_3,long *param_4,int param_5)

{
  long *plVar1;
  
  if (param_5 != 0) {
    plVar1 = param_4 + (ulong)(param_5 - 1) * 2 + 2;
    do {
      if (*param_4 == param_2 + (param_3 << 2)) {
        strcpy(param_1,(char *)param_4[1]);
        return;
      }
      param_4 = param_4 + 2;
    } while (param_4 != plVar1);
  }
  __sprintf_chk(param_1,1,0xffffffffffffffff,&DAT_00227b48);
  return;
}


