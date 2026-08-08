/*
 * Ghidra decompilation
 *
 * Function : FUN_08069ca0
 * Address  : 08069ca0
 * Program  : drastic16
 */


uint FUN_08069ca0(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint *puVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  uVar4 = param_2 + 3;
  if (uVar4 >> 6 != param_2 >> 6) {
    iVar6 = *(int *)(param_1 + 0x802380);
    iVar1 = *(int *)(param_1 + 0x802384);
    if (param_2 < 0x2000000) {
      puVar2 = (uint *)(iVar1 + (((param_2 << 0x11) >> 0x17) + 0x3bc60) * 4);
    }
    else {
      iVar6 = iVar6 + (param_2 >> 0x17) * 0x30;
      puVar2 = (uint *)(**(code **)(iVar6 + 0x28))(iVar1,iVar6,param_2);
      iVar6 = *(int *)(param_1 + 0x802380);
      iVar1 = *(int *)(param_1 + 0x802384);
    }
    if (puVar2 == (uint *)0x0) {
      uVar5 = 0;
    }
    else if ((-1 << ((param_2 << 0x1a) >> 0x1b) & *puVar2) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
    if (uVar4 < 0x2000000) {
      puVar2 = (uint *)(iVar1 + ((uVar4 * 0x20000 >> 0x17) + 0x3bc60) * 4);
    }
    else {
      iVar6 = iVar6 + (uVar4 >> 0x17) * 0x30;
      puVar2 = (uint *)(**(code **)(iVar6 + 0x28))(iVar1,iVar6,uVar4);
    }
    if (puVar2 != (uint *)0x0) {
      if ((~(-2 << (uVar4 * 0x4000000 >> 0x1b)) & *puVar2) == 0) {
        puVar2 = (uint *)0x0;
      }
      else {
        puVar2 = (uint *)0x1;
      }
    }
    return (uint)puVar2 | uVar5;
  }
  if (param_2 < 0x2000000) {
    puVar2 = (uint *)(*(int *)(param_1 + 0x802384) + (((param_2 << 0x11) >> 0x17) + 0x3bc60) * 4);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x802380) + (param_2 >> 0x17) * 0x30;
    pcVar3 = *(code **)(iVar1 + 0x28);
    puVar2 = (uint *)(*pcVar3)(*(int *)(param_1 + 0x802384),iVar1,param_2,pcVar3,param_4);
  }
  if (puVar2 != (uint *)0x0) {
    return (uint)((-1 << ((param_2 << 0x1a) >> 0x1b) & ~(-2 << (uVar4 * 0x4000000 >> 0x1b)) &
                  *puVar2) != 0);
  }
  return 0;
}


