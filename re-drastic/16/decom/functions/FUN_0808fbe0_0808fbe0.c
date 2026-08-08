/*
 * Ghidra decompilation
 *
 * Function : FUN_0808fbe0
 * Address  : 0808fbe0
 * Program  : drastic16
 */


void FUN_0808fbe0(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = param_3 - *(short *)(param_1 + 0x40);
  if ((*(uint *)(param_1 + 0x4c) & 0x100) != 0) {
    uVar1 = -uVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x0808fc18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&DAT_0808fc20 + ((*(uint *)(param_1 + 0x4c) << 9) >> 0x1c) * 4))
            (param_1,param_2,*(undefined4 *)(param_1 + 0x30),uVar1 & 7);
  return;
}


