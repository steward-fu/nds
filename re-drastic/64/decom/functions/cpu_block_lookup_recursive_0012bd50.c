/*
 * Ghidra decompilation
 *
 * Function : cpu_block_lookup_recursive
 * Address  : 0012bd50
 * Program  : drastic64
 */


long cpu_block_lookup_recursive(long param_1,uint param_2)

{
  uint *puVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 0x2088);
  if (param_2 < 0x2000000) {
    if (*(int *)(param_1 + 0x210c) == 1) {
      if ((param_2 & 1) == 0) {
        uVar3 = *(uint *)(*(long *)(param_1 + 0x2270) + ((ulong)(param_2 >> 2) & 0x1fff) * 4);
      }
      else {
        uVar3 = *(uint *)(*(long *)(param_1 + 0x2278) + ((ulong)(param_2 >> 1) & 0x3fff) * 4);
      }
      if (uVar3 == 0) {
        lVar2 = cpu_block_create(param_1,param_2 & 0xfffffffe,param_2 & 1);
        iVar4 = (int)lVar2 - (int)lVar6;
        if (lVar2 == 0) {
          return 0;
        }
        if ((param_2 & 1) != 0) {
          *(int *)(*(long *)(param_1 + 0x2278) + ((ulong)(param_2 >> 1) & 0x3fff) * 4) = iVar4;
          return lVar2;
        }
        uVar5 = (ulong)(param_2 >> 2) & 0x1fff;
        lVar6 = lVar6 + uVar5;
        *(int *)(*(long *)(param_1 + 0x2270) + uVar5 * 4) = iVar4;
        if ((byte)nds_system[lVar6 + 0xfdc038] < 9) {
          return lVar2;
        }
        nds_system[lVar6 + 0xfdc038] = nds_system[lVar6 + 0xfdc038] | 0x80;
        return lVar2;
      }
      goto LAB_0012bed4;
    }
LAB_0012bd84:
    uVar5 = (ulong)(param_2 >> 2 & 0x1fff);
    puVar1 = (uint *)(lVar6 + 0x1380000 + uVar5 * 0x10);
    uVar3 = *(uint *)(lVar6 + 0x1380000 + uVar5 * 0x10);
  }
  else {
    if (param_2 >> 0x18 != 2) goto LAB_0012bd84;
    uVar5 = (ulong)(param_2 >> 2 & 0x7fff);
    puVar1 = (uint *)(lVar6 + 0x1300000 + uVar5 * 0x10);
    uVar3 = *(uint *)(lVar6 + 0x1300000 + uVar5 * 0x10);
  }
  if (uVar3 == param_2) {
    return lVar6 + (ulong)puVar1[1];
  }
  uVar3 = puVar1[3];
  if (puVar1[2] != param_2) {
    if (uVar3 != 0) {
      for (uVar3 = *(uint *)(lVar6 + (ulong)*(uint *)(lVar6 + (ulong)uVar3 + -4)); uVar3 != 0;
          uVar3 = *(uint *)(lVar6 + (ulong)uVar3)) {
        if (*(uint *)(lVar6 + (ulong)uVar3 + 4) == param_2) {
          return lVar6 + (ulong)*(uint *)(lVar6 + (ulong)uVar3 + 8);
        }
      }
    }
    lVar2 = cpu_block_create(param_1,param_2 & 0xfffffffe,param_2 & 1);
    if (lVar2 != 0) {
      uVar3 = (int)lVar2 - (int)lVar6;
      if (puVar1[1] != 0) {
        if (puVar1[3] == 0) {
          puVar1[2] = param_2;
          puVar1[3] = uVar3;
        }
        else {
          uVar5 = (ulong)*(uint *)(lVar6 + (ulong)puVar1[3] + -4);
          for (uVar3 = *(uint *)(lVar6 + uVar5); uVar3 != 0; uVar3 = *(uint *)(lVar6 + (ulong)uVar3)
              ) {
            uVar5 = (ulong)uVar3;
          }
          *(undefined4 *)(lVar6 + uVar5) = *(undefined4 *)(lVar2 + -4);
        }
        return lVar2;
      }
      *puVar1 = param_2;
      puVar1[1] = uVar3;
      return lVar2;
    }
    return 0;
  }
LAB_0012bed4:
  return lVar6 + (ulong)uVar3;
}


