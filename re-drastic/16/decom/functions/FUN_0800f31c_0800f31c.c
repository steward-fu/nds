/*
 * Ghidra decompilation
 *
 * Function : FUN_0800f31c
 * Address  : 0800f31c
 * Program  : drastic16
 */


undefined4 FUN_0800f31c(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  
  if (0xfffffff < param_2) {
    return 0xffffffff;
  }
  iVar2 = *(int *)(param_1 + 0x800000);
  iVar8 = (param_2 >> 0x17) * 0x30;
  iVar6 = iVar2 + iVar8;
  cVar1 = *(char *)(iVar6 + 0x2c);
  if (cVar1 == '\x01') {
    puVar5 = (undefined4 *)(**(code **)(iVar6 + 4))(*(undefined4 *)(param_1 + 0x800004));
    uVar4 = param_2 - (param_2 & 0x7ff);
    iVar8 = param_1 + (uVar4 >> 0x15) * 4;
    iVar2 = param_1 + (uVar4 >> 0x10) * 4;
    *(uint *)(iVar8 + 0x80400c) = *(uint *)(iVar8 + 0x80400c) | 1 << (uVar4 * 0x800 >> 0x1b);
    *(uint *)(iVar2 + 0x80000c) = *(uint *)(iVar2 + 0x80000c) | 1 << (uVar4 * 0x10000 >> 0x1b);
    *(uint *)(param_1 + (uVar4 >> 0xb) * 4) = (int)puVar5 - param_2 >> 2 | 0x40000000;
    return *puVar5;
  }
  if (cVar1 == '\0') {
    iVar7 = *(int *)(iVar6 + 4);
    uVar9 = param_2 & *(uint *)(iVar2 + iVar8);
    cVar1 = *(char *)(iVar6 + 0x2d);
    iVar2 = param_1 + (param_2 >> 0x15) * 4;
    iVar8 = param_1 + (param_2 >> 0x10) * 4;
    *(uint *)(iVar2 + 0x80400c) = *(uint *)(iVar2 + 0x80400c) | 1 << ((param_2 << 0xb) >> 0x1b);
    uVar4 = (iVar7 + (uVar9 & 0xfffff800)) - (param_2 & 0xfffff800) >> 2;
    if (cVar1 != '\0') {
      uVar4 = uVar4 | 0x40000000;
    }
    *(uint *)(iVar8 + 0x80000c) = *(uint *)(iVar8 + 0x80000c) | 1 << ((param_2 << 0x10) >> 0x1b);
    *(uint *)(param_1 + ((param_2 & 0xfffff80f) >> 9)) = uVar4;
    return *(undefined4 *)(iVar7 + uVar9);
  }
  if (cVar1 == '\x02') {
    uVar3 = (**(code **)(iVar6 + 0xc))
                      (*(undefined4 *)(param_1 + 0x800004),param_2 & *(uint *)(iVar2 + iVar8),
                       *(code **)(iVar6 + 0xc),0x800004,param_4);
    return uVar3;
  }
  return 0;
}


