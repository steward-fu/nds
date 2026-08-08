/*
 * Ghidra decompilation
 *
 * Function : execute_arm_alu_load_op2_imm
 * Address  : 00124fe0
 * Program  : drastic64
 */


void execute_arm_alu_load_op2_imm(long param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = (uint)(param_2 >> 8) & 0xf;
  iVar3 = uVar4 * 2;
  uVar1 = (uint)param_2 & 0xff;
  if (((param_2 & 0x100000) != 0 && (param_2 & 0xf00) != 0) &&
     ((uVar2 = (uint)param_2 >> 0x15, (uVar2 & 0xe) == 0 || (0xb < (uVar2 & 0xf))))) {
    *(uint *)(param_1 + 0x23c0) =
         *(uint *)(param_1 + 0x23c0) & 0xc0000000 |
         *(uint *)(param_1 + 0x23c0) & 0x1fffffff |
         ((uVar1 >> iVar3 | uVar1 << uVar4 * -2 + 0x20) >> (ulong)(iVar3 - 1U & 0x1f) & 1) << 0x1d;
    return;
  }
  return;
}


