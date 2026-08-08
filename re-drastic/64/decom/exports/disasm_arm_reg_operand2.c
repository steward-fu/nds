/*
 * Ghidra decompilation
 *
 * Function : disasm_arm_reg_operand2
 * Address  : 00186040
 * Program  : drastic64
 */


void disasm_arm_reg_operand2(ulong param_1,char *param_2)

{
  ulong uVar1;
  char *__src;
  ulong uVar2;
  
  uVar2 = param_1 & 0xffffffff;
  uVar1 = uVar2 >> 5 & 3;
  __src = (&reg_names)[param_1 & 0xf];
  if (((uint)param_1 >> 4 & 1) != 0) {
    __sprintf_chk(param_2,1,0xffffffffffffffff,"%s, %s %s",__src,(&shift_table)[uVar1],
                  (&reg_names)[uVar2 >> 8 & 0xf]);
    return;
  }
  uVar2 = uVar2 >> 7 & 0x1f;
  if ((int)uVar2 == 0) {
    if ((int)uVar1 == 3) {
      __sprintf_chk(param_2,1,0xffffffffffffffff,"%s, rrx #1");
      return;
    }
    if ((int)uVar1 == 0) {
      strcpy(param_2,__src);
      return;
    }
    uVar2 = 0x20;
  }
  __sprintf_chk(param_2,1,0xffffffffffffffff,"%s, %s #%d",__src,(&shift_table)[uVar1],uVar2);
  return;
}


