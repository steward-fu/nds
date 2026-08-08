/*
 * Ghidra decompilation
 *
 * Function : disasm_arm_imm_operand2
 * Address  : 080a35fc
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void disasm_arm_imm_operand2(u32 op2,char *buffer)

{
  uint uVar1;
  
  uVar1 = (op2 << 0x14) >> 0x1c;
  __sprintf_chk(buffer,1,0xffffffff,&DAT_08140a6c,
                (op2 & 0xff) >> uVar1 * 2 | (op2 & 0xff) << uVar1 * -2 + 0x20);
  return;
}


