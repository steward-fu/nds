/*
 * Ghidra decompilation
 *
 * Function : disasm_arm_data_proc
 * Address  : 080a3638
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void disasm_arm_data_proc(u32 opcode,char *op2,char *buffer)

{
  uint uVar1;
  u32 dp_op;
  char *pcVar2;
  char *condition_str;
  char *pcVar3;
  
  uVar1 = opcode >> 0x15 & 0xf;
  pcVar3 = "s";
  if ((opcode & 0x100000) == 0) {
    pcVar3 = "";
  }
  pcVar2 = condition_table[opcode >> 0x1c];
  if (uVar1 - 8 < 4) {
    __sprintf_chk(buffer,1,0xffffffff,"%s%s %s, %s",data_proc_opcode_table[uVar1],pcVar2,
                  reg_names[(opcode << 0xc) >> 0x1c],op2);
  }
  else if ((opcode >> 0x15 & 0xd) == 0xd) {
    __sprintf_chk(buffer,1,0xffffffff,"%s%s%s %s, %s",data_proc_opcode_table[uVar1],pcVar2,pcVar3,
                  reg_names[(opcode << 0x10) >> 0x1c],op2);
  }
  else {
    __sprintf_chk(buffer,1,0xffffffff,"%s%s%s %s, %s, %s",data_proc_opcode_table[uVar1],pcVar2,
                  pcVar3,reg_names[(opcode << 0x10) >> 0x1c],reg_names[(opcode << 0xc) >> 0x1c],op2)
    ;
  }
  return;
}


