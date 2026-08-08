/*
 * Ghidra decompilation
 *
 * Function : FUN_08058628
 * Address  : 08058628
 * Program  : drastic16
 */


uint * FUN_08058628(int param_1,uint param_2,uint param_3,undefined4 param_4)

{
  uint **ppuVar1;
  ushort uVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = param_2 & 0x3fffffff;
  iVar5 = param_1 + ((param_2 << 0x10) >> 0x17) * 4;
  puVar4 = *(uint **)(iVar5 + 4);
  uVar2 = (ushort)param_2 >> 7;
  puVar3 = puVar4;
  if (puVar4 == (uint *)0x0) {
    puVar3 = (uint *)malloc(0x30);
    puVar3[3] = 0;
    puVar3[4] = 0;
    FUN_080581a4(puVar3,param_1,uVar6,param_3,param_4);
    puVar3[5] = 0;
    puVar3[6] = 0;
    *(ushort *)(puVar3 + 10) = uVar2;
  }
  else {
    do {
      if ((*puVar3 == (param_2 & 0x3ff0ffff)) && (*(ushort *)((int)puVar3 + 0x2a) == param_3)) {
        if (*(char *)(puVar3 + 0xb) == '\0') {
          return puVar3;
        }
        FUN_080581a4(puVar3,param_1,uVar6,param_3,param_4);
        return puVar3;
      }
      ppuVar1 = (uint **)(puVar3 + 5);
      puVar3 = *ppuVar1;
    } while (*ppuVar1 != (uint *)0x0);
    puVar3 = (uint *)malloc(0x30);
    puVar3[3] = 0;
    puVar3[4] = 0;
    FUN_080581a4(puVar3,param_1,uVar6,param_3,param_4);
    puVar3[5] = (uint)puVar4;
    puVar3[6] = 0;
    *(ushort *)(puVar3 + 10) = uVar2;
    puVar4[6] = (uint)puVar3;
  }
  *(uint **)(iVar5 + 4) = puVar3;
  uVar6 = *(uint *)(param_1 + 0x4004);
  puVar3[8] = 0;
  puVar3[7] = uVar6;
  if (uVar6 != 0) {
    *(uint **)(uVar6 + 0x20) = puVar3;
  }
  *(uint **)(param_1 + 0x4004) = puVar3;
  *(int *)(param_1 + 0x4024) = *(int *)(param_1 + 0x4024) + 1;
  return puVar3;
}


