/*
 * Ghidra decompilation
 *
 * Function : disasm_arm_mem_reg_operand2
 * Address  : 080a351c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void disasm_arm_mem_reg_operand2(u32 opcode,char *buffer)

{
  uint uVar1;
  u32 rm;
  uint uVar2;
  u32 shift_op;
  uint uVar3;
  u32 shift;
  
  uVar2 = (opcode << 0x19) >> 0x1e;
  uVar3 = (opcode << 0x14) >> 0x1b;
  uVar1 = opcode & 0xf;
  if (uVar3 == 0) {
    if (uVar2 != 0) {
      if (uVar2 < 3) {
        uVar3 = 0x20;
        goto LAB_080a359c;
      }
      if (uVar2 == 3) {
        __sprintf_chk(buffer,1,0xffffffff,"%s, rrx #1",reg_names[uVar1]);
        return;
      }
    }
    buffer = strcpy(buffer,reg_names[uVar1]);
  }
LAB_080a359c:
  __sprintf_chk(buffer,1,0xffffffff,"%s, %s #%d",reg_names[uVar1],shift_table[uVar2],uVar3);
  return;
}


