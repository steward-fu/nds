/*
 * Ghidra decompilation
 *
 * Function : memory_region_block_memory_load
 * Address  : 001135f0
 * Program  : drastic64
 */


uint memory_region_block_memory_load
               (long param_1,undefined8 param_2,uint param_3,undefined4 *param_4,uint param_5)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  undefined8 uVar6;
  void *__dest;
  long lVar7;
  void *extraout_x12;
  undefined4 *puVar8;
  code *pcVar9;
  uint local_14;
  
  if (param_5 == 0) {
    return 0;
  }
  pcVar9 = (code *)0x0;
  local_14 = 0;
  do {
    while( true ) {
      lVar7 = (ulong)(param_3 >> 0x17) * 0x60;
      lVar2 = param_1 + lVar7;
      uVar5 = *(uint *)(param_1 + lVar7);
      lVar7 = (**(code **)(lVar2 + 0x48))(param_2,lVar2,param_3);
      uVar6 = (**(code **)(lVar2 + 0x50))(param_2,lVar2,param_3);
      cVar4 = *(char *)(lVar2 + 0x59);
      uVar1 = uVar5 + 1;
      if (param_5 < uVar5 + 1) {
        uVar1 = param_5;
      }
      param_5 = param_5 - uVar1;
      if (cVar4 == '\x01') break;
      if (cVar4 != '\x02') {
        if (cVar4 == '\0') {
          __dest = (void *)(*(long *)(lVar2 + 0x20) + (ulong)(uVar5 & param_3));
          goto LAB_001136f0;
        }
        __printf_chk(1,"can\'t get ptr @ %x type is %x!!!\n",param_3);
        goto LAB_001136b4;
      }
      pcVar9 = *(code **)(lVar2 + 0x30);
      if (pcVar9 != (code *)0x0) goto LAB_00113740;
LAB_001136b8:
      param_3 = param_3 + uVar1;
      param_4 = (undefined4 *)((long)param_4 + (ulong)uVar1);
joined_r0x00113770:
      if (param_5 == 0) {
        return local_14;
      }
    }
    __dest = (void *)(**(code **)(lVar2 + 0x20))(param_2,param_3);
LAB_001136f0:
    if (__dest == (void *)0x0) {
LAB_001136b4:
      if (pcVar9 == (code *)0x0) goto LAB_001136b8;
LAB_00113740:
      if (uVar1 != 0) {
        uVar1 = param_3 + uVar1;
        puVar8 = param_4;
        do {
          param_4 = puVar8 + 1;
          uVar3 = uVar5 & param_3;
          param_3 = param_3 + 4;
          (*pcVar9)(param_2,uVar3,*puVar8);
          puVar8 = param_4;
        } while (param_3 != uVar1);
      }
      goto joined_r0x00113770;
    }
    if (lVar7 != 0) {
      uVar5 = memory_check_code_region(lVar7,uVar6,param_3,uVar1);
      local_14 = local_14 | uVar5;
      __dest = extraout_x12;
    }
    param_3 = param_3 + uVar1;
    memcpy(__dest,param_4,(ulong)uVar1);
    param_4 = (undefined4 *)((long)param_4 + (ulong)uVar1);
    if (param_5 == 0) {
      return local_14;
    }
  } while( true );
}


