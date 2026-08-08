/*
 * Ghidra decompilation
 *
 * Function : disasm_arm_memory_transfer2
 * Address  : 001863b0
 * Program  : drastic64
 */


void disasm_arm_memory_transfer2(uint param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  
  uVar5 = param_1 >> 0x14 & 1;
  uVar6 = param_1 >> 5 & 3;
  uVar4 = uVar5 ^ 1;
  if (uVar6 != 2) {
    uVar4 = 0;
  }
  uVar7 = (ulong)uVar5;
  lVar1 = uVar7 * 4;
  if (uVar4 != 0) {
    uVar7 = 1;
  }
  pcVar2 = "";
  if ((param_1 & 0x800000) == 0) {
    pcVar2 = "-";
  }
  if ((param_1 >> 0x18 & 1) != 0) {
    pcVar3 = "!";
    if ((param_1 & 0x200000) == 0) {
      pcVar3 = "";
    }
    __sprintf_chk(param_3,1,0xffffffffffffffff,"%s%s%s %s, [%s, %s%s]%s",
                  *(undefined8 *)(memory_transfer_op_type + uVar7 * 8),
                  *(undefined8 *)(condition_table + (ulong)(param_1 >> 0x1c) * 8),
                  *(undefined8 *)(memory_transfer_op2_type + ((ulong)uVar6 + lVar1) * 8),
                  (&reg_names)[(ulong)(param_1 >> 0xc) & 0xf],
                  (&reg_names)[(ulong)(param_1 >> 0x10) & 0xf],pcVar2,param_2,pcVar3);
    return;
  }
  __sprintf_chk(param_3,1,0xffffffffffffffff,"%s%s%s %s, [%s], %s%s",
                *(undefined8 *)(memory_transfer_op_type + uVar7 * 8),
                *(undefined8 *)(condition_table + (ulong)(param_1 >> 0x1c) * 8),
                *(undefined8 *)(memory_transfer_op2_type + ((ulong)uVar6 + lVar1) * 8),
                (&reg_names)[(ulong)(param_1 >> 0xc) & 0xf],
                (&reg_names)[(ulong)(param_1 >> 0x10) & 0xf],pcVar2,param_2);
  return;
}


