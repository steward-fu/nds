/*
 * Ghidra decompilation
 *
 * Function : FUN_08045384
 * Address  : 08045384
 * Program  : drastic16
 */


/* WARNING: Removing unreachable block (ram,0x08045414) */

void FUN_08045384(void *param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  void *__src;
  void *pvVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  void *pvVar9;
  int iVar10;
  undefined auStack_130 [268];
  
  iVar2 = *(int *)((int)param_1 + 0x9000);
  iVar7 = *(int *)((int)param_1 + 0x9004);
  uVar8 = *(undefined4 *)(iVar2 + 0x1807c4);
  if ((*(int *)((int)param_1 + 0x900c) == 0) || (*(int *)(iVar2 + 0x1807c8) == 0)) {
    FUN_08045024(param_1,param_2,param_3);
    return;
  }
  uVar1 = (uint)(*(int *)(iVar7 + 0x9a50) << 0x14) >> 0x1c;
  iVar10 = iVar7 + 0x99a0;
  uVar1 = uVar1 | ((*(ushort *)(iVar7 + 0x9a72) & 0x7fff) + (0x400 >> uVar1)) * 0x10000;
  iVar3 = iVar7 + 0x9960;
  pvVar9 = (void *)((int)param_1 + 0x4000);
  if (param_3 == 0) {
    FUN_08092aac(pvVar9,auStack_130,iVar3,uVar1);
    FUN_08092bbc(param_1,param_1,auStack_130,*(undefined4 *)(iVar7 + 0x9a64));
    FUN_08093690(auStack_130,pvVar9,(int)param_1 + 0x4400,uVar8);
    FUN_08093260(param_2,param_1,auStack_130,iVar10);
  }
  else {
    memcpy((void *)(iVar2 + 0x103c40 + (param_3 + 0x3ffffff) * 0x1000 + 0x6cb80),pvVar9,0x800);
    memcpy((void *)(iVar2 + 0x103c40 + (param_3 + 0x3ffffff) * 0x800 + 0x77780),param_1,0x400);
  }
  pvVar4 = (void *)((int)param_1 + 0x400);
  iVar6 = param_2;
  do {
    iVar6 = iVar6 + 0x400;
    pvVar5 = (void *)((int)pvVar9 + 0x400);
    FUN_08092aac(pvVar5,auStack_130,iVar3,uVar1);
    FUN_08092bbc(pvVar4,pvVar4,auStack_130,*(undefined4 *)(iVar7 + 0x9a64));
    FUN_080932f0(auStack_130,pvVar9,pvVar5,(int)pvVar9 + 0x800,uVar8);
    __src = (void *)((int)pvVar4 + 0x400);
    FUN_08093260(iVar6,pvVar4,auStack_130,iVar10);
    pvVar4 = __src;
    pvVar9 = pvVar5;
  } while (__src != (void *)((int)param_1 + 0x3c00));
  pvVar9 = (void *)((int)param_1 + 0x7800);
  if (param_3 == 0xb) {
    FUN_08092aac(pvVar9,auStack_130,iVar3,uVar1);
    FUN_08092bbc(__src,__src,auStack_130,*(undefined4 *)(iVar7 + 0x9a64));
    FUN_08093a30(auStack_130,pvVar9,(int)param_1 + 0x7c00,uVar8);
    FUN_08093260(param_2 + 0x3c00,__src,auStack_130,iVar10);
    return;
  }
  memcpy((void *)(iVar2 + 0x103c40 + param_3 * 0x1000 + 0x6c380),pvVar9,0x800);
  memcpy((void *)(iVar2 + 0x103c40 + param_3 * 0x800 + 0x77380),__src,0x400);
  return;
}


