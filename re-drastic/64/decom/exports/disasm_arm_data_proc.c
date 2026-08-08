/*
 * Ghidra decompilation
 *
 * Function : disasm_arm_data_proc
 * Address  : 001861c0
 * Program  : drastic64
 */


void disasm_arm_data_proc(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = (uint)(param_1 >> 0x15);
  uVar3 = param_1 & 0xffffffff;
  pcVar1 = "";
  if ((param_1 & 0x100000) != 0) {
    pcVar1 = "s";
  }
  uVar5 = *(undefined8 *)(condition_table + (param_1 >> 0x1c & 0xf) * 8);
  uVar4 = *(undefined8 *)(data_proc_opcode_table + (param_1 >> 0x15 & 0xf) * 8);
  if (3 < (uVar2 & 0xf) - 8) {
    if ((uVar2 & 0xd) != 0xd) {
      __sprintf_chk(param_3,1,0xffffffffffffffff,"%s%s%s %s, %s, %s",uVar4,uVar5,pcVar1,
                    (&reg_names)[uVar3 >> 0xc & 0xf],(&reg_names)[uVar3 >> 0x10 & 0xf],param_2);
      return;
    }
    __sprintf_chk(param_3,1,0xffffffffffffffff,"%s%s%s %s, %s",uVar4,uVar5,pcVar1,
                  (&reg_names)[uVar3 >> 0xc & 0xf],param_2);
    return;
  }
  __sprintf_chk(param_3,1,0xffffffffffffffff,"%s%s %s, %s",uVar4,uVar5,
                (&reg_names)[uVar3 >> 0x10 & 0xf],param_2);
  return;
}


