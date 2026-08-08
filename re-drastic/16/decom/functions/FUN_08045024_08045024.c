/*
 * Ghidra decompilation
 *
 * Function : FUN_08045024
 * Address  : 08045024
 * Program  : drastic16
 */


/* WARNING: Removing unreachable block (ram,0x08045054) */

void FUN_08045024(void *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  void *__src;
  undefined auStack_130 [268];
  
  __src = (void *)((int)param_1 + 0x4000);
  iVar1 = *(int *)((int)param_1 + 0x9000);
  iVar5 = *(int *)((int)param_1 + 0x9004) + 0x99a0;
  uVar6 = *(undefined4 *)(iVar1 + 0x1807c4);
  if (param_3 == 0) {
    FUN_08093690(auStack_130,__src,(int)param_1 + 0x4400,uVar6);
    FUN_08093260(param_2,param_1,auStack_130,iVar5);
  }
  else {
    memcpy((void *)(iVar1 + 0x103c40 + (param_3 + 0x3ffffff) * 0x1000 + 0x6cb80),__src,0x800);
    memcpy((void *)(iVar1 + 0x103c40 + (param_3 + 0x3ffffff) * 0x800 + 0x77780),param_1,0x400);
  }
  iVar4 = (int)param_1 + 0x400;
  iVar2 = param_2 + 0x400;
  do {
    FUN_080932f0(auStack_130,__src,(void *)((int)__src + 0x400),(int)__src + 0x800,uVar6);
    iVar3 = iVar2 + 0x400;
    FUN_08093260(iVar2,iVar4,auStack_130,iVar5);
    iVar4 = iVar4 + 0x400;
    __src = (void *)((int)__src + 0x400);
    iVar2 = iVar3;
  } while (iVar3 != param_2 + 0x3c00);
  if (param_3 == 0xb) {
    FUN_08093a30(auStack_130,(void *)((int)param_1 + 0x7800),(int)param_1 + 0x7c00,uVar6);
    FUN_08093260(iVar3,(void *)((int)param_1 + 0x3c00),auStack_130,iVar5);
    return;
  }
  memcpy((void *)(iVar1 + 0x103c40 + param_3 * 0x1000 + 0x6c380),(void *)((int)param_1 + 0x7800),
         0x800);
  memcpy((void *)(iVar1 + 0x103c40 + param_3 * 0x800 + 0x77380),(void *)((int)param_1 + 0x3c00),
         0x400);
  return;
}


