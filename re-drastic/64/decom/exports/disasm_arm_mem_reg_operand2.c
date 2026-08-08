/*
 * Ghidra decompilation
 *
 * Function : disasm_arm_mem_reg_operand2
 * Address  : 001860e0
 * Program  : drastic64
 */


void disasm_arm_mem_reg_operand2(ulong param_1,char *param_2)

{
  char *__src;
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar1 = param_1 >> 7 & 0x1f;
  uVar3 = param_1 >> 5 & 3;
  __src = (&reg_names)[param_1 & 0xf];
  if ((int)uVar1 == 0) {
    iVar2 = (int)uVar3;
    if (iVar2 == 3) {
      __sprintf_chk(param_2,1,0xffffffffffffffff,"%s, rrx #1");
      return;
    }
    uVar1 = 0x20;
    if (iVar2 == 0) {
      param_2 = strcpy(param_2,__src);
      __src = (&reg_names)[param_1 & 0xf];
      uVar1 = 0;
    }
  }
  __sprintf_chk(param_2,1,0xffffffffffffffff,"%s, %s #%d",__src,(&shift_table)[uVar3],uVar1);
  return;
}


