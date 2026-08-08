/*
 * Ghidra decompilation
 *
 * Function : FUN_0808b708
 * Address  : 0808b708
 * Program  : drastic16
 */


/* WARNING: Removing unreachable block (ram,0x0808b72c) */

int FUN_0808b708(uint *param_1,undefined4 param_2,int param_3,int *param_4)

{
  short sVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined auStack_b0 [140];
  
  uVar7 = param_1[0xc];
  param_3 = param_3 - *(short *)(param_1 + 0x10);
  if (0xbf < param_3) {
    param_3 = param_3 + -0x100;
  }
  sVar1 = *(short *)((int)param_1 + 0x3e);
  uVar5 = (uint)*(byte *)((int)param_1 + 0x4b) + param_3;
  uVar8 = param_1[0xd];
  lVar2 = (ulonglong)uVar5 * (ulonglong)param_1[4];
  uVar9 = (uint)lVar2;
  lVar3 = (ulonglong)uVar5 * (ulonglong)param_1[10];
  uVar6 = (uint)lVar3;
  uVar11 = param_1[1] +
           param_1[4] * ((int)uVar5 >> 0x1f) + uVar5 * param_1[5] + (int)((ulonglong)lVar2 >> 0x20)
           + (uint)CARRY4(*param_1,uVar9);
  uVar5 = param_1[10] * ((int)uVar5 >> 0x1f) + uVar5 * param_1[0xb] +
          (int)((ulonglong)lVar3 >> 0x20) + param_1[7] + (uint)CARRY4(uVar6,param_1[6]);
  iVar4 = param_1[3] + uVar11 + (uint)CARRY4(param_1[2],*param_1 + uVar9);
  iVar10 = param_1[9] + uVar5 + (uint)CARRY4(param_1[8],uVar6 + param_1[6]);
  if ((int)uVar5 < (int)uVar11) {
    uVar5 = uVar11;
  }
  if (iVar10 <= iVar4) {
    iVar4 = iVar10;
  }
  uVar5 = uVar5 & ~((int)uVar5 >> 0x1f);
  if ((int)(uint)*(byte *)((int)param_1 + 0x4e) <= iVar4) {
    iVar4 = *(byte *)((int)param_1 + 0x4e) - 1;
  }
  iVar4 = (iVar4 - uVar5) + 1;
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  else {
    FUN_0808fef0(param_2,auStack_b0,
                 uVar5 * (int)*(short *)(undefined4 *)((int)param_1 + 0x42) +
                 *(short *)((int)param_1 + 0x46) * param_3 + (int)*(short *)(param_1 + 0xe) & 0xffff
                 | (uVar5 * (int)*(short *)(param_1 + 0x11) +
                   *(short *)(param_1 + 0x12) * param_3 + (int)*(short *)((int)param_1 + 0x3a)) *
                   0x10000,*(undefined4 *)((int)param_1 + 0x42),*(undefined2 *)(param_1 + 0xf),iVar4
                );
    FUN_08090130(param_2,uVar7,auStack_b0,uVar8,iVar4);
    *param_4 = uVar5 + (int)sVar1;
  }
  return iVar4;
}


