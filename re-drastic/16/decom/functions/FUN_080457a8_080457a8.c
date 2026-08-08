/*
 * Ghidra decompilation
 *
 * Function : FUN_080457a8
 * Address  : 080457a8
 * Program  : drastic16
 */


/* WARNING: Removing unreachable block (ram,0x0804581c) */

void FUN_080457a8(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined auStack_130 [268];
  
  iVar4 = *(int *)(param_1 + 0x9004);
  uVar1 = *(ushort *)(iVar4 + 0x9a72);
  if ((*(int *)(param_1 + 0x900c) != 0) && (*(int *)(*(int *)(param_1 + 0x9000) + 0x1807c8) != 0)) {
    uVar6 = (uint)(*(int *)(iVar4 + 0x9a50) << 0x14) >> 0x1c;
    iVar5 = param_1 + 0x4000;
    iVar2 = param_2;
    do {
      FUN_08092aac(iVar5,auStack_130,iVar4 + 0x9960,
                   uVar6 | ((uVar1 & 0x7fff) + (0x400 >> uVar6)) * 0x10000);
      iVar3 = iVar2 + 0x400;
      iVar5 = iVar5 + 0x400;
      FUN_08092c8c(iVar2,param_1,auStack_130,*(undefined4 *)(iVar4 + 0x9a64));
      param_1 = param_1 + 0x400;
      iVar2 = iVar3;
    } while (iVar3 != param_2 + 0x4000);
    return;
  }
  FUN_08092a74(param_2,param_1);
  return;
}


