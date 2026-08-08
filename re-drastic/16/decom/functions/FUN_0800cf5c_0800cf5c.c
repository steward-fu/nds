/*
 * Ghidra decompilation
 *
 * Function : FUN_0800cf5c
 * Address  : 0800cf5c
 * Program  : drastic16
 */


void FUN_0800cf5c(int param_1,int param_2)

{
  int iVar1;
  size_t __pgoff;
  int iVar2;
  int iVar3;
  uint uVar4;
  void *__start;
  int iVar5;
  uint uVar6;
  bool bVar7;
  
  iVar2 = *(int *)(param_1 + 8);
  bVar7 = (*(byte *)(param_1 + 0x1b287) & 1) != 0;
  if (bVar7) {
    param_2 = param_1 + 0x6b000;
  }
  iVar5 = iVar2 + 0x4000;
  if (bVar7) {
    iVar1 = iVar2;
    iVar2 = param_2 + 0x40;
  }
  else {
    iVar1 = param_1 + 0x10;
  }
  bVar7 = (*(byte *)(param_1 + 0x1b287) & 2) != 0;
  iVar3 = 0xfba04;
  *(int *)(param_1 + 0xfba0c) = iVar1;
  *(int *)(param_1 + 0xfba04) = iVar2;
  if (bVar7) {
    iVar3 = param_1 + 0x6b000;
  }
  iVar1 = *(int *)(param_1 + 0xfba2c);
  iVar2 = iVar5;
  if (!bVar7) {
    iVar2 = param_1 + 0x4000;
    iVar3 = iVar5;
  }
  iVar5 = *(int *)(iVar1 + 0x800004);
  if (bVar7) {
    iVar3 = iVar3 + 0x40;
  }
  else {
    iVar2 = iVar2 + 0x10;
  }
  uVar4 = *(uint *)(iVar5 + 0xfc7f4);
  *(int *)(param_1 + 0xfba10) = iVar2;
  uVar6 = *(uint *)(iVar5 + 0xfc7f8);
  *(int *)(param_1 + 0xfba08) = iVar3;
  if ((uVar4 < 0x3000001) && (0x4000000 < uVar6)) {
    FUN_0800a1fc(iVar1,0x3000000,uVar4 + 0xfd000000);
    iVar2 = 0x4000000 - uVar6;
  }
  else {
    iVar2 = 0x1000000;
    uVar4 = 0x3000000;
  }
  FUN_0800a1fc(iVar1,uVar4,iVar2);
  iVar2 = *(int *)(param_1 + 0xfba30);
  uVar4 = *(uint *)(*(int *)(iVar2 + 0x800004) + 0xfc7f4);
  uVar6 = *(uint *)(*(int *)(iVar2 + 0x800004) + 0xfc7f8);
  if ((uVar4 < 0x3000001) && (0x3800000 < uVar6)) {
    FUN_0800a1fc(iVar2,0x3000000,uVar4 + 0xfd000000);
    iVar5 = 0x3800000 - uVar6;
  }
  else {
    iVar5 = 0x800000;
    uVar4 = 0x3000000;
  }
  FUN_0800a1fc(iVar2,uVar4,iVar5);
  iVar2 = 0x3000000;
  do {
    iVar5 = *(int *)(param_1 + 0xfc80c);
    __pgoff = __aeabi_uidiv(0x408000,*(undefined4 *)(param_1 + 0xfc800));
    __start = (void *)(iVar2 + iVar5);
    iVar2 = iVar2 + 0x8000;
    remap_file_pages(__start,0x8000,0,__pgoff,0);
  } while (iVar2 != 0x4000000);
  return;
}


