/*
 * Ghidra decompilation
 *
 * Function : disasm_arm_memory_transfer2
 * Address  : 080a387c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void disasm_arm_memory_transfer2(u32 opcode,char *op2,char *buffer)

{
  int iVar1;
  int iVar2;
  char *op_str;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  char *condition_str;
  uint uVar6;
  u32 op_size;
  char *wordsize_str;
  
  iVar1 = (int)(opcode << 0xb) >> 0x1f;
  iVar2 = iVar1 * -4;
  uVar6 = (opcode << 0x19) >> 0x1e;
  if (uVar6 == 2) {
    uVar3 = (-iVar1 ^ 1U) & 1;
  }
  else {
    uVar3 = 0;
  }
  if (uVar3 != 0) {
    iVar2 = 4;
  }
  pcVar5 = "-";
  if ((opcode & 0x800000) != 0) {
    pcVar5 = "";
  }
  if ((opcode & 0x1000000) == 0) {
    __sprintf_chk(buffer,1,0xffffffff,"%s%s%s %s, [%s], %s%s",
                  *(undefined4 *)((int)memory_transfer_op_type + iVar2),
                  condition_table[opcode >> 0x1c],memory_transfer_op2_type[-iVar1][uVar6],
                  reg_names[(opcode << 0x10) >> 0x1c],reg_names[(opcode << 0xc) >> 0x1c],pcVar5,op2)
    ;
  }
  else {
    pcVar4 = "";
    if ((opcode & 0x200000) != 0) {
      pcVar4 = "!";
    }
    __sprintf_chk(buffer,1,0xffffffff,"%s%s%s %s%s, [%s, %s%s]",
                  *(undefined4 *)((int)memory_transfer_op_type + iVar2),
                  condition_table[opcode >> 0x1c],memory_transfer_op2_type[-iVar1][uVar6],
                  reg_names[(opcode << 0x10) >> 0x1c],pcVar4,reg_names[(opcode << 0xc) >> 0x1c],
                  pcVar5,op2);
  }
  return;
}


