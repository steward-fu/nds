/*
 * Ghidra decompilation
 *
 * Function : FUN_0808a0f4
 * Address  : 0808a0f4
 * Program  : drastic16
 */


/* WARNING: Removing unreachable block (ram,0x0808a110) */

void FUN_0808a0f4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined auStack_270 [288];
  undefined auStack_150 [300];
  
  iVar3 = (int)*(short *)(param_1 + 0x76);
  uVar4 = *(undefined4 *)(param_1 + 0x2c);
  iVar2 = (int)*(short *)(param_1 + 0x78);
  uVar1 = FUN_0808d138(iVar3,param_5,param_7,auStack_270,*(undefined4 *)(param_1 + 0x28));
  uVar4 = FUN_0808d138(iVar2,param_6,param_7,auStack_150,uVar4);
  uVar1 = FUN_0808d1d4(auStack_270,auStack_150,param_2,uVar1,uVar4);
  FUN_0808d430(param_2,param_3,uVar1,param_5,param_6,iVar3,iVar2,*(undefined *)(param_1 + 0x83),
               *(undefined *)(param_1 + 0x84));
  FUN_0808d5c4(param_2,uVar1,param_7);
  FUN_0808d630(param_4,param_5,param_6,iVar3,iVar2,param_7);
  return;
}


