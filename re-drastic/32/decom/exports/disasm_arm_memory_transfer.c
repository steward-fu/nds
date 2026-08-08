/*
 * Ghidra decompilation
 *
 * Function : disasm_arm_memory_transfer
 * Address  : 080a376c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void disasm_arm_memory_transfer(u32 opcode,char *op2,char *buffer)

{
  char *op_str;
  char *condition_str;
  char *pcVar1;
  char *unaff_r6;
  uint uVar2;
  char *pcVar3;
  bool bVar4;
  
  bVar4 = (opcode & 0x400000) != 0;
  if (bVar4) {
    unaff_r6 = "b";
  }
  pcVar3 = "";
  if (!bVar4) {
    unaff_r6 = pcVar3;
  }
  pcVar1 = "-";
  if ((opcode & 0x800000) != 0) {
    pcVar1 = pcVar3;
  }
  uVar2 = (opcode << 0x10) >> 0x1c;
  if ((opcode & 0x1000000) == 0) {
    if ((opcode & 0x200000) != 0) {
      pcVar3 = "t";
    }
    __sprintf_chk(buffer,1,0xffffffff,"%s%s%s%s %s, [%s], %s%s",
                  memory_transfer_op_type[-((int)(opcode << 0xb) >> 0x1f)],
                  condition_table[opcode >> 0x1c],unaff_r6,pcVar3,reg_names[uVar2],
                  reg_names[(opcode << 0xc) >> 0x1c],pcVar1,op2);
  }
  else {
    if ((opcode & 0x200000) != 0) {
      pcVar3 = "!";
    }
    __sprintf_chk(buffer,1,0xffffffff,"%s%s%s %s%s, [%s, %s%s]",
                  memory_transfer_op_type[-((int)(opcode << 0xb) >> 0x1f)],
                  condition_table[opcode >> 0x1c],unaff_r6,reg_names[uVar2],pcVar3,
                  reg_names[(opcode << 0xc) >> 0x1c],pcVar1,op2);
  }
  return;
}


