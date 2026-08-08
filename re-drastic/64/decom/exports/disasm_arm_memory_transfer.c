/*
 * Ghidra decompilation
 *
 * Function : disasm_arm_memory_transfer
 * Address  : 001862b0
 * Program  : drastic64
 */


void disasm_arm_memory_transfer(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  ulong uVar4;
  
  uVar4 = param_1 & 0xffffffff;
  pcVar1 = "";
  pcVar2 = pcVar1;
  if ((param_1 & 0x400000) != 0) {
    pcVar2 = "b";
  }
  pcVar3 = pcVar1;
  if ((param_1 & 0x800000) == 0) {
    pcVar3 = "-";
  }
  if (((uint)param_1 >> 0x18 & 1) != 0) {
    if ((param_1 & 0x200000) != 0) {
      pcVar1 = "!";
    }
    __sprintf_chk(param_3,1,0xffffffffffffffff,"%s%s%s %s%s, [%s, %s%s]",
                  *(undefined8 *)(memory_transfer_op_type + (uVar4 >> 0x14 & 1) * 8),
                  *(undefined8 *)(condition_table + (param_1 >> 0x1c & 0xf) * 8),pcVar2,
                  (&reg_names)[uVar4 >> 0xc & 0xf],pcVar1,(&reg_names)[uVar4 >> 0x10 & 0xf],pcVar3,
                  param_2);
    return;
  }
  if ((param_1 & 0x200000) != 0) {
    pcVar1 = "t";
  }
  __sprintf_chk(param_3,1,0xffffffffffffffff,"%s%s%s%s %s, [%s], %s%s",
                *(undefined8 *)(memory_transfer_op_type + (uVar4 >> 0x14 & 1) * 8),
                *(undefined8 *)(condition_table + (param_1 >> 0x1c & 0xf) * 8),pcVar2,pcVar1,
                (&reg_names)[uVar4 >> 0xc & 0xf],(&reg_names)[uVar4 >> 0x10 & 0xf],pcVar3,param_2);
  return;
}


