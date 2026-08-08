/*
 * Ghidra decompilation
 *
 * Function : FUN_0808b8cc
 * Address  : 0808b8cc
 * Program  : drastic16
 */


int FUN_0808b8cc(uint *param_1,undefined4 param_2,int param_3,int *param_4)

{
  short sVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  
  uVar6 = param_1[0xc];
  param_3 = param_3 - *(short *)(param_1 + 0x10);
  if (0xbf < param_3) {
    param_3 = param_3 + -0x100;
  }
  sVar1 = *(short *)((int)param_1 + 0x3e);
  uVar4 = (uint)*(byte *)((int)param_1 + 0x4b) + param_3;
  uVar8 = param_1[0xd];
  lVar2 = (ulonglong)uVar4 * (ulonglong)param_1[4];
  uVar7 = (uint)lVar2;
  lVar3 = (ulonglong)uVar4 * (ulonglong)param_1[10];
  uVar5 = (uint)lVar3;
  uVar10 = param_1[1] +
           param_1[4] * ((int)uVar4 >> 0x1f) + uVar4 * param_1[5] + (int)((ulonglong)lVar2 >> 0x20)
           + (uint)CARRY4(*param_1,uVar7);
  uVar4 = param_1[10] * ((int)uVar4 >> 0x1f) + uVar4 * param_1[0xb] +
          (int)((ulonglong)lVar3 >> 0x20) + param_1[7] + (uint)CARRY4(uVar5,param_1[6]);
  iVar9 = param_1[3] + uVar10 + (uint)CARRY4(param_1[2],*param_1 + uVar7);
  iVar11 = param_1[9] + uVar4 + (uint)CARRY4(param_1[8],uVar5 + param_1[6]);
  if ((int)uVar10 < (int)uVar4) {
    uVar10 = uVar4;
  }
  if (iVar11 <= iVar9) {
    iVar9 = iVar11;
  }
  uVar10 = uVar10 & ~((int)uVar10 >> 0x1f);
  if ((int)(uint)*(byte *)((int)param_1 + 0x4e) <= iVar9) {
    iVar9 = *(byte *)((int)param_1 + 0x4e) - 1;
  }
  iVar9 = (iVar9 - uVar10) + 1;
  if (iVar9 < 0) {
    iVar9 = 0;
  }
  else {
    FUN_0808ffb4(param_2,uVar10 * (int)*(short *)(undefined4 *)((int)param_1 + 0x42) +
                         *(short *)((int)param_1 + 0x46) * param_3 + (int)*(short *)(param_1 + 0xe)
                         & 0xffff |
                         (uVar10 * (int)*(short *)(param_1 + 0x11) +
                         *(short *)(param_1 + 0x12) * param_3 + (int)*(short *)((int)param_1 + 0x3a)
                         ) * 0x10000,*(undefined4 *)((int)param_1 + 0x42),
                 *(undefined2 *)(param_1 + 0xf),iVar9);
    FUN_080901d8(param_2,uVar6,uVar8,iVar9);
    *param_4 = uVar10 + (int)sVar1;
  }
  return iVar9;
}


