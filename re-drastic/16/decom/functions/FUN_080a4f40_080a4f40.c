/*
 * Ghidra decompilation
 *
 * Function : FUN_080a4f40
 * Address  : 080a4f40
 * Program  : drastic16
 */


undefined8 FUN_080a4f40(int *param_1,undefined4 param_2,uint param_3,int param_4)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  code *pcVar6;
  bool bVar7;
  uint local_48;
  int iStack_44;
  undefined auStack_34 [16];
  uint local_24;
  uint local_20;
  char local_19;
  undefined8 local_18;
  
  FUN_0809f148(auStack_34,0x10000);
  local_18 = 0;
  iVar5 = param_4;
  if (param_4 != 0x7fffffff || param_3 != 0x7fffffff) {
    iVar5 = 0;
  }
  local_19 = (char)iVar5;
  local_48 = param_3;
  iStack_44 = param_4;
  if (param_4 == 0x7fffffff && param_3 == 0x7fffffff) {
    local_19 = '\x01';
  }
  while ((local_19 != '\0' ||
         ((int)(iStack_44 - (uint)(local_48 == 0)) < 0 ==
          (SBORROW4(iStack_44,(uint)(local_48 == 0)) != false)))) {
    FUN_080b0edc();
    if ((local_19 == '\x01') ||
       (uVar2 = FUN_0809f1f4(auStack_34), uVar3 = local_48,
       (int)(iStack_44 - (uint)(local_48 < uVar2)) < 0 ==
       (SBORROW4(iStack_44,(uint)(local_48 < uVar2)) != false))) {
      uVar3 = FUN_0809f1f4(auStack_34);
    }
    pcVar6 = *(code **)(*param_1 + 8);
    local_20 = uVar3;
    uVar4 = FUN_0809f1c0(auStack_34,0);
    local_24 = (*pcVar6)(param_1,uVar4,local_20);
    if (local_24 == 0) break;
    uVar4 = FUN_0809f1c0(auStack_34,0);
    FUN_080a44e8(param_2,uVar4,local_24);
    local_18 = CONCAT44(((int)local_24 >> 0x1f) + local_18._4_4_ +
                        (uint)CARRY4(local_24,(uint)local_18),local_24 + (uint)local_18);
    if (local_19 != '\x01') {
      bVar7 = local_48 < local_24;
      local_48 = local_48 - local_24;
      iStack_44 = iStack_44 - (((int)local_24 >> 0x1f) + (uint)bVar7);
    }
  }
  uVar1 = local_18;
  FUN_0809f180(auStack_34);
  return uVar1;
}


