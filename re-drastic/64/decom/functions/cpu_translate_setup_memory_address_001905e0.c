/*
 * Ghidra decompilation
 *
 * Function : cpu_translate_setup_memory_address
 * Address  : 001905e0
 * Program  : drastic64
 */


uint cpu_translate_setup_memory_address(long param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  
  uVar8 = param_2 >> 0x10 & 0xf;
  if (param_3 != 1) {
    if (param_3 == 2) {
      iVar9 = (param_2 & 0xf) + 0xd;
      uVar5 = param_2 >> 7 & 0x1f;
      uVar10 = param_2 >> 5 & 3;
      if ((param_2 & 0xf) == 0xf) {
        iVar9 = 0;
        cpu_translate_set_imm32_isra_0
                  (param_1 + 0x408,0,*(undefined4 *)(*(long *)(param_1 + 0x458) + 4));
      }
      if (uVar8 == 0xf) {
        cpu_translate_set_imm32_isra_0
                  (param_1 + 0x408,1,*(undefined4 *)(*(long *)(param_1 + 0x458) + 4));
        uVar3 = 0x20;
        uVar8 = 1;
      }
      else {
        uVar8 = uVar8 + 0xd;
        uVar3 = uVar8 * 0x20;
      }
      puVar4 = *(uint **)(param_1 + 0x408);
      if (uVar5 != 0 || uVar10 != 1) {
        if (uVar5 != 0 || uVar10 != 2) {
          if (uVar10 == 3) {
            if (uVar5 == 0) {
              *puVar4 = iVar9 << 5 | 0x123f7802;
              puVar4[1] = 0x1a1f0042;
              uVar10 = 0x2ac207e2;
              puVar7 = puVar4 + 2;
            }
            else {
              uVar10 = uVar5 << 10 | iVar9 << 0x10 | 0x2ac003e2;
              puVar7 = puVar4;
            }
            puVar4 = puVar7 + 1;
            *puVar7 = uVar10;
            uVar5 = 0;
            uVar6 = 0x20000;
            uVar10 = 0;
            *(uint **)(param_1 + 0x408) = puVar4;
          }
          else {
            uVar10 = uVar10 << 0x16;
            uVar6 = iVar9 << 0x10;
            uVar5 = uVar5 << 10;
          }
        }
        else {
          uVar6 = iVar9 << 0x10;
          uVar5 = 0x7c00;
          uVar10 = 0x800000;
        }
      }
      else {
        uVar5 = 0;
        uVar6 = 0x1f0000;
        uVar10 = 0;
      }
      puVar7 = puVar4 + 1;
      if ((param_2 >> 0x18 & 1) != 0) {
        if ((param_2 & 0x200000) == 0) {
          uVar8 = 0;
        }
        uVar10 = uVar3 | uVar5 | uVar10 | uVar6 | uVar8;
        if ((param_2 & 0x800000) != 0) {
          *puVar4 = uVar10 | 0xb000000;
          *(uint **)(param_1 + 0x408) = puVar7;
          return uVar8;
        }
        *puVar4 = uVar10 | 0x4b000000;
        *(uint **)(param_1 + 0x408) = puVar7;
        return uVar8;
      }
      *puVar4 = uVar8 << 0x10 | 0x2a0003e0;
      *(uint **)(param_1 + 0x408) = puVar7;
      uVar2 = 0xb000000;
      if ((param_2 & 0x800000) == 0) {
        uVar2 = 0x4b000000;
      }
      puVar4[1] = uVar5 | uVar8 | uVar3 | uVar10 | uVar6 | uVar2;
      *(uint **)(param_1 + 0x408) = puVar4 + 2;
      return 0;
    }
    uVar10 = uVar8 + 0xd;
    if (param_4 == 0 && uVar8 != 0xf) {
      return uVar10;
    }
    uVar5 = param_2 & 0x800000;
    if ((param_2 >> 0x18 & 1) != 0) {
      if (uVar8 == 0xf) {
        iVar1 = *(int *)(*(long *)(param_1 + 0x458) + 4);
        iVar9 = iVar1 - param_4;
        if (uVar5 != 0) {
          iVar9 = param_4 + iVar1;
        }
        cpu_translate_set_imm32_isra_0(param_1 + 0x408,0,iVar9);
        return 0;
      }
      puVar4 = *(uint **)(param_1 + 0x408);
      uVar8 = param_2 & 0x200000;
      if ((param_2 & 0x200000) != 0) {
        uVar8 = uVar10;
      }
      uVar10 = uVar10 * 0x20 | param_4 << 10 | uVar8;
      if (uVar5 != 0) {
        *puVar4 = uVar10 | 0x11000000;
        *(uint **)(param_1 + 0x408) = puVar4 + 1;
        return uVar8;
      }
      *puVar4 = uVar10 | 0x51000000;
      *(uint **)(param_1 + 0x408) = puVar4 + 1;
      return uVar8;
    }
    puVar4 = *(uint **)(param_1 + 0x408);
    *puVar4 = uVar10 * 0x10000 | 0x2a0003e0;
    uVar8 = uVar10 | param_4 << 10 | uVar10 * 0x20;
    *(uint **)(param_1 + 0x408) = puVar4 + 1;
    if (uVar5 != 0) {
      puVar4[1] = uVar8 | 0x11000000;
      *(uint **)(param_1 + 0x408) = puVar4 + 2;
      return 0;
    }
    puVar4[1] = uVar8 | 0x51000000;
    *(uint **)(param_1 + 0x408) = puVar4 + 2;
    return 0;
  }
  if ((param_2 & 0xf) == 0xf) {
    uVar10 = 0;
    cpu_translate_set_imm32_isra_0
              (param_1 + 0x408,0,*(undefined4 *)(*(long *)(param_1 + 0x458) + 4));
  }
  else {
    uVar10 = ((param_2 & 0xf) + 0xd) * 0x10000;
  }
  if (uVar8 == 0xf) {
    cpu_translate_set_imm32_isra_0
              (param_1 + 0x408,1,*(undefined4 *)(*(long *)(param_1 + 0x458) + 4));
    uVar5 = 0x20;
    uVar8 = 1;
    if ((param_2 & 0x1000000) == 0) {
      uVar3 = 0x2a0103e0;
      uVar8 = 1;
      goto LAB_00190798;
    }
  }
  else {
    uVar8 = uVar8 + 0xd;
    uVar5 = uVar8 * 0x20;
    if ((param_2 & 0x1000000) == 0) {
      uVar3 = uVar8 * 0x10000 | 0x2a0003e0;
LAB_00190798:
      puVar4 = *(uint **)(param_1 + 0x408);
      uVar10 = uVar5 | uVar8 | uVar10;
      *puVar4 = uVar3;
      *(uint **)(param_1 + 0x408) = puVar4 + 1;
      if ((param_2 >> 0x17 & 1) != 0) {
        puVar4[1] = uVar10 | 0xb000000;
        *(uint **)(param_1 + 0x408) = puVar4 + 2;
        return 0;
      }
      puVar4[1] = uVar10 | 0x4b000000;
      *(uint **)(param_1 + 0x408) = puVar4 + 2;
      return param_2 & 0x800000;
    }
  }
  uVar3 = param_2 & 0x200000;
  if ((param_2 >> 0x15 & 1) != 0) {
    uVar10 = uVar10 | uVar8;
    uVar3 = uVar8;
  }
  puVar4 = *(uint **)(param_1 + 0x408);
  if ((param_2 >> 0x17 & 1) == 0) {
    *puVar4 = uVar5 | uVar10 | 0x4b000000;
    *(uint **)(param_1 + 0x408) = puVar4 + 1;
  }
  else {
    *puVar4 = uVar5 | uVar10 | 0xb000000;
    *(uint **)(param_1 + 0x408) = puVar4 + 1;
  }
  return uVar3;
}


