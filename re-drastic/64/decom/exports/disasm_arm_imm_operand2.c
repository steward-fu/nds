/*
 * Ghidra decompilation
 *
 * Function : disasm_arm_imm_operand2
 * Address  : 00186190
 * Program  : drastic64
 */


void disasm_arm_imm_operand2(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)param_1 & 0xff;
  uVar2 = (uint)((ulong)param_1 >> 8) & 0xf;
  __sprintf_chk(param_2,1,0xffffffffffffffff,"#0x%x",uVar1 >> uVar2 * 2 | uVar1 << uVar2 * -2 + 0x20
               );
  return;
}


