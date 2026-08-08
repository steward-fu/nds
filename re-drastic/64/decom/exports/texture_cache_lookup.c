/*
 * Ghidra decompilation
 *
 * Function : texture_cache_lookup
 * Address  : 0016b720
 * Program  : drastic64
 */


uint * texture_cache_lookup(long param_1,uint param_2,uint param_3)

{
  uint **ppuVar1;
  uint uVar2;
  undefined2 uVar3;
  uint *puVar4;
  long lVar5;
  uint *puVar6;
  ulong uVar7;
  
  uVar7 = (ulong)(param_2 >> 7) & 0x1ff;
  lVar5 = param_1 + uVar7 * 8;
  puVar6 = *(uint **)(lVar5 + 8);
  uVar2 = param_2 & 0x3fffffff;
  uVar3 = (undefined2)uVar7;
  puVar4 = puVar6;
  if (puVar6 == (uint *)0x0) {
    puVar4 = (uint *)malloc(0x50);
    *(undefined8 *)(puVar4 + 4) = 0;
    *(undefined8 *)(puVar4 + 6) = 0;
    texture_cache_create(puVar4,param_1,uVar2,param_3);
    *(undefined8 *)(puVar4 + 8) = 0;
    *(undefined8 *)(puVar4 + 10) = 0;
    *(undefined2 *)(puVar4 + 0x11) = uVar3;
  }
  else {
    do {
      if ((*puVar4 == (param_2 & 0x3ff0ffff)) && (*(ushort *)((long)puVar4 + 0x46) == param_3)) {
        if (*(char *)(puVar4 + 0x12) != '\0') {
          texture_cache_create(puVar4,param_1,uVar2,param_3);
          return puVar4;
        }
        return puVar4;
      }
      ppuVar1 = (uint **)(puVar4 + 8);
      puVar4 = *ppuVar1;
    } while (*ppuVar1 != (uint *)0x0);
    puVar4 = (uint *)malloc(0x50);
    *(undefined8 *)(puVar4 + 4) = 0;
    *(undefined8 *)(puVar4 + 6) = 0;
    texture_cache_create(puVar4,param_1,uVar2,param_3);
    *(uint **)(puVar4 + 8) = puVar6;
    *(undefined8 *)(puVar4 + 10) = 0;
    *(undefined2 *)(puVar4 + 0x11) = uVar3;
    *(uint **)(puVar6 + 10) = puVar4;
  }
  *(uint **)(lVar5 + 8) = puVar4;
  *(undefined8 *)(puVar4 + 0xe) = 0;
  lVar5 = *(long *)(param_1 + 0x8008);
  *(long *)(puVar4 + 0xc) = lVar5;
  if (lVar5 != 0) {
    *(uint **)(lVar5 + 0x38) = puVar4;
  }
  *(uint **)(param_1 + 0x8008) = puVar4;
  *(int *)(param_1 + 0x802c) = *(int *)(param_1 + 0x802c) + 1;
  return puVar4;
}


