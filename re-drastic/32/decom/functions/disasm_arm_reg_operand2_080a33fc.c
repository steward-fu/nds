/*
 * Ghidra decompilation
 *
 * Function : disasm_arm_reg_operand2
 * Address  : 080a33fc
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void disasm_arm_reg_operand2(u32 opcode,char *buffer)

{
  uint uVar1;
  u32 shift;
  uint uVar2;
  u32 rm;
  uint uVar3;
  u32 shift_op;
  
  uVar3 = (opcode << 0x19) >> 0x1e;
  uVar2 = opcode & 0xf;
  if ((opcode & 0x10) == 0) {
    uVar1 = (opcode << 0x14) >> 0x1b;
    if (uVar1 == 0) {
      if (uVar3 == 0) {
LAB_080a34f8:
        strcpy(buffer,reg_names[uVar2]);
        return;
      }
      if (2 < uVar3) {
        if (uVar3 == 3) {
          __sprintf_chk(buffer,1,0xffffffff,"%s, rrx #1",reg_names[uVar2]);
          return;
        }
        goto LAB_080a34f8;
      }
      uVar1 = 0x20;
    }
    __sprintf_chk(buffer,1,0xffffffff,"%s, %s #%d",reg_names[uVar2],shift_table[uVar3],uVar1);
  }
  else {
    __sprintf_chk(buffer,1,0xffffffff,"%s, %s %s",reg_names[uVar2],shift_table[uVar3],
                  reg_names[(opcode << 0x14) >> 0x1c]);
  }
  return;
}


