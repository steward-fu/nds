/*
 * Ghidra decompilation
 *
 * Function : FUN_080d03f4
 * Address  : 080d03f4
 * Program  : drastic16
 */


void FUN_080d03f4(undefined4 *param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint local_c;
  
  iVar1 = param_1[0x1315];
  iVar3 = param_1[0x1311];
  if ((int)(iVar1 - (iVar3 + (uint)((uint)param_1[0x1314] < (uint)param_1[0x1310]))) < 0 !=
      (SBORROW4(iVar1,iVar3) !=
      SBORROW4(iVar1 - iVar3,(uint)((uint)param_1[0x1314] < (uint)param_1[0x1310])))) {
    uVar2 = param_1[0x1310] - param_1[0x1314];
    iVar1 = param_1[0x1311] -
            (param_1[0x1315] + (uint)((uint)param_1[0x1310] < (uint)param_1[0x1314]));
    local_c = param_3;
    if ((int)(iVar1 - (uint)(uVar2 < param_3)) < 0 !=
        (SBORROW4(iVar1,(uint)(uVar2 < param_3)) != false)) {
      local_c = uVar2;
    }
    FUN_080b6298(*param_1,param_2,local_c);
    uVar2 = param_1[0x1314];
    param_1[0x1314] = param_3 + uVar2;
    param_1[0x1315] = param_1[0x1315] + (uint)CARRY4(param_3,uVar2);
  }
  return;
}


