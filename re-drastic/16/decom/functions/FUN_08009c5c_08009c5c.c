/*
 * Ghidra decompilation
 *
 * Function : FUN_08009c5c
 * Address  : 08009c5c
 * Program  : drastic16
 */


uint FUN_08009c5c(int param_1,undefined4 param_2,uint param_3,undefined4 *param_4,uint param_5)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  void *__dest;
  uint local_30;
  code *local_2c;
  
  if (param_5 == 0) {
    local_30 = 0;
  }
  else {
    local_30 = 0;
    local_2c = (code *)0x0;
    do {
      iVar5 = param_1 + (param_3 >> 0x17) * 0x30;
      uVar8 = *(uint *)(param_1 + (param_3 >> 0x17) * 0x30);
      iVar1 = (**(code **)(iVar5 + 0x24))(param_2,iVar5,param_3);
      uVar2 = (**(code **)(iVar5 + 0x28))(param_2,iVar5,param_3);
      uVar3 = (uint)*(byte *)(iVar5 + 0x2d);
      uVar4 = uVar8 + 1;
      uVar6 = param_5;
      if (uVar3 == 1) {
        __dest = (void *)(**(code **)(iVar5 + 0x10))(param_2,param_3);
LAB_08009d7c:
        if (uVar4 <= param_5) {
          uVar6 = uVar4;
        }
        param_5 = param_5 - uVar6;
        if (__dest == (void *)0x0) goto LAB_08009d00;
        if (iVar1 != 0) {
          uVar3 = FUN_08009850(iVar1,uVar2,param_3,uVar6);
          local_30 = local_30 | uVar3;
        }
        param_3 = param_3 + uVar6;
        puVar7 = (undefined4 *)((int)param_4 + uVar6);
        memcpy(__dest,param_4,uVar6);
      }
      else {
        if (uVar3 == 0) {
          __dest = (void *)(*(int *)(iVar5 + 0x10) + (param_3 & uVar8));
          goto LAB_08009d7c;
        }
        if (uVar3 == 2) {
          local_2c = *(code **)(iVar5 + 0x18);
        }
        else {
          printf("can\'t get ptr @ %x type is %x!!!\n",param_3,uVar3);
        }
        if (uVar4 <= param_5) {
          uVar6 = uVar4;
        }
        param_5 = param_5 - uVar6;
LAB_08009d00:
        puVar7 = param_4;
        if (local_2c == (code *)0x0) {
          param_3 = param_3 + uVar6;
          puVar7 = (undefined4 *)((int)param_4 + uVar6);
        }
        else {
          for (; uVar6 != 0; uVar6 = uVar6 - 4) {
            uVar3 = param_3 & uVar8;
            param_3 = param_3 + 4;
            (*local_2c)(param_2,uVar3,*puVar7);
            puVar7 = puVar7 + 1;
          }
        }
      }
      param_4 = puVar7;
    } while (param_5 != 0);
  }
  return local_30;
}


