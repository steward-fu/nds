/*
 * Ghidra decompilation
 *
 * Function : FUN_080a8c40
 * Address  : 080a8c40
 * Program  : drastic16
 */


int FUN_080a8c40(int *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  if ((*(char *)((int)param_1 + 0x83d6) != '\0') && ((param_1[0x20fa] | param_1[0x20fb]) != 0)) {
    uVar4 = (**(code **)(*param_1 + 0x10))(param_1);
    (**(code **)(*param_1 + 0xc))
              (param_1,*(code **)(*param_1 + 0xc),param_1[0x20fa],param_1[0x20fb],0);
    iVar2 = FUN_080a8970(param_1);
    if ((iVar2 == 0) ||
       (((*(char *)(param_1 + 0x43ab) == '\x01' || (iVar3 = FUN_0809ee40(param_1), iVar3 != 3)) ||
        (iVar3 = FUN_080af950(param_1 + 0x31dc,&DAT_080ed900), iVar3 == 0)))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      return iVar2;
    }
    (**(code **)(*param_1 + 0xc))
              (param_1,*(code **)(*param_1 + 0xc),(int)uVar4,(int)((ulonglong)uVar4 >> 0x20),0);
  }
  iVar2 = FUN_080a8b78(param_1,&DAT_080ed900);
  return iVar2;
}


