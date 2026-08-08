/*
 * Ghidra decompilation
 *
 * Function : FUN_080c40a4
 * Address  : 080c40a4
 * Program  : drastic16
 */


undefined4 FUN_080c40a4(undefined4 param_1,int param_2,char param_3)

{
  undefined uVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  undefined auStack_870 [16];
  undefined4 local_860;
  undefined4 local_840;
  undefined4 uStack_83c;
  undefined4 local_828;
  undefined4 local_820;
  undefined4 local_818;
  undefined auStack_808 [2048];
  
  *(undefined *)(param_2 + 0x202c) = 0;
  FUN_080afbc8(param_1,auStack_808,0x800);
  if (param_3 == '\0') {
    iVar2 = FUN_080e54e8(auStack_808,auStack_870);
    if (iVar2 != 0) {
      piVar3 = __errno_location();
      iVar2 = *piVar3;
      bVar4 = iVar2 == 2;
      if (bVar4) {
        iVar2 = 0;
      }
      uVar1 = (undefined)iVar2;
      if (!bVar4) {
        uVar1 = 1;
      }
      *(undefined *)(param_2 + 0x202c) = uVar1;
      return 0;
    }
  }
  else {
    iVar2 = FUN_080e5508(auStack_808,auStack_870);
    if (iVar2 != 0) {
      piVar3 = __errno_location();
      iVar2 = *piVar3;
      bVar4 = iVar2 == 2;
      if (bVar4) {
        iVar2 = 0;
      }
      uVar1 = (undefined)iVar2;
      if (!bVar4) {
        uVar1 = 1;
      }
      *(undefined *)(param_2 + 0x202c) = uVar1;
      return 0;
    }
  }
  *(undefined4 *)(param_2 + 0x2008) = local_860;
  *(undefined4 *)(param_2 + 0x2000) = local_840;
  *(undefined4 *)(param_2 + 0x2004) = uStack_83c;
  FUN_080b5284(param_2 + 0x2010,local_820);
  FUN_080b5284(param_2 + 0x2020,local_828);
  FUN_080b5284(param_2 + 0x2018,local_818);
  FUN_080a0620(param_2,param_1,0x800);
  *(undefined4 *)(param_2 + 0x2028) = 0;
  uVar1 = FUN_080a5890(*(undefined4 *)(param_2 + 0x2008));
  *(undefined *)(param_2 + 0x200c) = uVar1;
  uVar1 = FUN_080a5924(*(undefined4 *)(param_2 + 0x2008));
  *(undefined *)(param_2 + 0x200d) = uVar1;
  return 1;
}


