/*
 * Ghidra decompilation
 *
 * Function : cpu_translate_alu_op_imm
 * Address  : 00191fd0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cpu_translate_alu_op_imm(long param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  uint *puVar7;
  undefined8 *puVar8;
  code *pcVar9;
  uint uVar10;
  undefined4 *puVar11;
  uint *puVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int local_10;
  int local_c;
  long local_8;
  
  uVar1 = param_2 & 0xff;
  uVar4 = param_2 >> 8 & 0xf;
  local_8 = ___stack_chk_guard;
  uVar14 = param_2 >> 0x15;
  uVar15 = uVar14 & 0xf;
  uVar18 = uVar1 >> uVar4 * 2 | uVar1 << uVar4 * -2 + 0x20;
  iVar16 = 0xff;
  if (((uVar14 & 0xd) != 0xd) &&
     (uVar17 = param_2 >> 0x10 & 0xf, iVar16 = uVar17 + 0xd, uVar17 == 0xf)) {
    iVar16 = 0;
    cpu_translate_set_imm32_isra_0
              (param_1 + 0x408,0,*(undefined4 *)(*(long *)(param_1 + 0x458) + 4));
  }
  uVar17 = 0xff;
  uVar10 = 0;
  if (uVar15 - 8 < 4) {
LAB_00192058:
    bVar5 = (uVar14 & 0xe) == 0;
    if ((((bVar5 || uVar15 == 8) || !bVar5 && uVar15 - 8 == 1) || (uVar19 = 0, uVar15 - 0xc < 4)) &&
       (uVar19 = 0, (*(byte *)(*(long *)(param_1 + 0x458) + 0x19) & 3) != 0)) {
      puVar11 = *(undefined4 **)(param_1 + 0x408);
      *puVar11 = 0xd53b4202;
      *(undefined4 **)(param_1 + 0x408) = puVar11 + 1;
      if (uVar4 == 0) {
        uVar19 = 1;
      }
      else {
        uVar14 = uVar18 >> (ulong)(uVar4 * 2 - 1 & 0x1f);
        uVar19 = uVar14 & 1;
        if ((uVar14 & 1) == 0) {
          puVar11[1] = 0x12227842;
          uVar19 = 1;
          *(undefined4 **)(param_1 + 0x408) = puVar11 + 2;
        }
        else {
          puVar11[1] = 0x32230042;
          *(undefined4 **)(param_1 + 0x408) = puVar11 + 2;
        }
      }
    }
    if (uVar15 == 8) {
      bVar5 = true;
      if (uVar18 - 1 < 0xfffffffe) {
LAB_00192a24:
        iVar6 = cpu_translate_imm_map_to_logical_isra_0_part_0(uVar18,&local_10,&local_c);
        if (iVar6 != 0) {
          puVar7 = *(uint **)(param_1 + 0x408);
          uVar18 = local_c << 10 | local_10 << 0x10 | iVar16 << 5;
          if (bVar5) {
            *puVar7 = uVar18 | 0x72000003;
            *(uint **)(param_1 + 0x408) = puVar7 + 1;
          }
          else {
            *puVar7 = uVar18 | 0x12000003;
            *(uint **)(param_1 + 0x408) = puVar7 + 1;
          }
          goto LAB_00192120;
        }
        uVar18 = iVar16 << 5 | uVar4 << 0xb;
        cpu_translate_set_imm32_isra_0(param_1 + 0x408,1,uVar1);
        if (!bVar5) goto LAB_00192af0;
      }
      else {
        uVar18 = iVar16 << 5 | uVar4 << 0xb;
        cpu_translate_set_imm32_isra_0(param_1 + 0x408,1,uVar1);
      }
      puVar7 = *(uint **)(param_1 + 0x408);
      *puVar7 = uVar18 | 0x6ac10003;
      *(uint **)(param_1 + 0x408) = puVar7 + 1;
    }
    else if (uVar15 < 9) {
      if (uVar15 == 4) {
        uVar17 = uVar17 | iVar16 << 5;
        if ((uVar18 & 0xfffff000) == 0) {
          puVar7 = *(uint **)(param_1 + 0x408);
          uVar18 = uVar18 << 10;
        }
        else {
          if ((uVar18 & 0xff000fff) != 0) {
            bVar5 = true;
            goto LAB_001929a4;
          }
          puVar7 = *(uint **)(param_1 + 0x408);
          uVar18 = (uVar18 >> 0xc) << 10 | 0x400000;
        }
        *puVar7 = uVar18 | uVar17 | 0x31000000;
        *(uint **)(param_1 + 0x408) = puVar7 + 1;
      }
      else if (uVar15 < 5) {
        if (uVar15 == 2) {
          uVar17 = uVar17 | iVar16 << 5;
          if ((uVar18 & 0xfffff000) == 0) {
            puVar7 = *(uint **)(param_1 + 0x408);
            uVar18 = uVar18 << 10;
          }
          else {
            if ((uVar18 & 0xff000fff) != 0) {
              bVar5 = true;
              goto LAB_0019265c;
            }
            puVar7 = *(uint **)(param_1 + 0x408);
            uVar18 = (uVar18 >> 0xc) << 10 | 0x400000;
          }
          *puVar7 = uVar18 | uVar17 | 0x71000000;
          *(uint **)(param_1 + 0x408) = puVar7 + 1;
        }
        else if (uVar15 == 3) {
          uVar17 = uVar17 | iVar16 << 0x10;
          if (uVar1 == 0) {
            puVar7 = *(uint **)(param_1 + 0x408);
            *puVar7 = uVar17 | 0x6b0003e0;
            *(uint **)(param_1 + 0x408) = puVar7 + 1;
          }
          else {
            cpu_translate_set_imm32_isra_0(param_1 + 0x408,1,uVar18);
            puVar7 = *(uint **)(param_1 + 0x408);
            *puVar7 = uVar17 | 0x6b000020;
            *(uint **)(param_1 + 0x408) = puVar7 + 1;
          }
        }
        else {
          if (uVar15 != 1) goto LAB_00192e6c;
LAB_0019225c:
          uVar14 = uVar17 | iVar16 << 5;
          if ((uVar18 - 1 < 0xfffffffe) &&
             (iVar6 = cpu_translate_imm_map_to_logical_isra_0_part_0(uVar18,&local_10,&local_c),
             iVar6 != 0)) {
            puVar7 = *(uint **)(param_1 + 0x408) + 1;
            **(uint **)(param_1 + 0x408) = local_c << 10 | local_10 << 0x10 | uVar14 | 0x52000000;
            *(uint **)(param_1 + 0x408) = puVar7;
          }
          else {
            cpu_translate_set_imm32_isra_0(param_1 + 0x408,1,uVar1);
            puVar7 = *(uint **)(param_1 + 0x408) + 1;
            **(uint **)(param_1 + 0x408) = uVar17 | uVar4 << 0xb | iVar16 << 5 | 0x4ac10000U;
            *(uint **)(param_1 + 0x408) = puVar7;
          }
          if (uVar15 != 0) goto LAB_001926fc;
        }
      }
      else if (uVar15 == 6) {
        cpu_translate_set_imm32_isra_0(param_1 + 0x408,1,uVar18);
        puVar7 = *(uint **)(param_1 + 0x408);
        *puVar7 = uVar17 | iVar16 << 5 | 0x7a010000;
        *(uint **)(param_1 + 0x408) = puVar7 + 1;
      }
      else if (uVar15 == 7) {
        cpu_translate_set_imm32_isra_0(param_1 + 0x408,1,uVar18);
        puVar7 = *(uint **)(param_1 + 0x408);
        *puVar7 = uVar17 | iVar16 << 0x10 | 0x7a000020;
        *(uint **)(param_1 + 0x408) = puVar7 + 1;
      }
      else {
        if (uVar15 != 5) goto LAB_00192e6c;
        cpu_translate_set_imm32_isra_0(param_1 + 0x408,1,uVar18);
        puVar7 = *(uint **)(param_1 + 0x408);
        *puVar7 = uVar17 | iVar16 << 5 | 0x3a010000;
        *(uint **)(param_1 + 0x408) = puVar7 + 1;
      }
    }
    else if (uVar15 == 0xc) {
      bVar5 = true;
LAB_0019268c:
      uVar15 = uVar17 | iVar16 << 5;
      if ((uVar18 - 1 < 0xfffffffe) &&
         (iVar6 = cpu_translate_imm_map_to_logical_isra_0_part_0(uVar18,&local_10,&local_c),
         iVar6 != 0)) {
        puVar7 = *(uint **)(param_1 + 0x408) + 1;
        **(uint **)(param_1 + 0x408) = local_c << 10 | local_10 << 0x10 | uVar15 | 0x32000000;
        *(uint **)(param_1 + 0x408) = puVar7;
      }
      else {
        cpu_translate_set_imm32_isra_0(param_1 + 0x408,1,uVar1);
        puVar7 = *(uint **)(param_1 + 0x408) + 1;
        **(uint **)(param_1 + 0x408) = uVar17 | uVar4 << 0xb | iVar16 << 5 | 0x2ac10000U;
        *(uint **)(param_1 + 0x408) = puVar7;
      }
      if (bVar5) {
LAB_001926fc:
        *puVar7 = uVar17 << 5 | uVar17 << 0x10 | uVar17 | 0x6a000000;
        *(uint **)(param_1 + 0x408) = puVar7 + 1;
      }
    }
    else if (uVar15 < 0xd) {
      if (uVar15 == 10) {
        if ((uVar18 & 0xfffff000) == 0) {
          puVar7 = *(uint **)(param_1 + 0x408);
          uVar18 = iVar16 << 5 | uVar18 << 10;
        }
        else {
          if ((uVar18 & 0xff000fff) != 0) {
            bVar5 = true;
            goto LAB_00192610;
          }
          puVar7 = *(uint **)(param_1 + 0x408);
          uVar18 = iVar16 << 5 | 0x400000U | (uVar18 >> 0xc) << 10;
        }
        *puVar7 = uVar18 | 0x71000003;
        *(uint **)(param_1 + 0x408) = puVar7 + 1;
      }
      else if (uVar15 == 0xb) {
        if ((uVar18 & 0xfffff000) == 0) {
          puVar7 = *(uint **)(param_1 + 0x408);
          uVar18 = iVar16 << 5 | uVar18 << 10;
        }
        else {
          if ((uVar18 & 0xff000fff) != 0) {
            bVar5 = true;
            goto LAB_00192508;
          }
          puVar7 = *(uint **)(param_1 + 0x408);
          uVar18 = iVar16 << 5 | 0x400000U | (uVar18 >> 0xc) << 10;
        }
        *puVar7 = uVar18 | 0x31000003;
        *(uint **)(param_1 + 0x408) = puVar7 + 1;
      }
      else {
        bVar5 = true;
        if (uVar15 == 9) goto LAB_00192344;
LAB_00192e6c:
        uVar15 = uVar17 | iVar16 << 5;
        if (uVar18 - 1 < 0xfffffffe) {
          bVar5 = true;
LAB_00192d18:
          iVar6 = cpu_translate_imm_map_to_logical_isra_0_part_0(uVar18,&local_10,&local_c);
          if (iVar6 != 0) goto LAB_001929dc;
          cpu_translate_set_imm32_isra_0(param_1 + 0x408,1,uVar1);
          uVar17 = iVar16 << 5 | uVar4 << 0xb | uVar17;
          if (!bVar5) goto LAB_00192d98;
        }
        else {
          cpu_translate_set_imm32_isra_0(param_1 + 0x408,1,uVar1);
          uVar17 = iVar16 << 5 | uVar4 << 0xb | uVar17;
        }
        puVar7 = *(uint **)(param_1 + 0x408);
        *puVar7 = uVar17 | 0x6ac10000;
        *(uint **)(param_1 + 0x408) = puVar7 + 1;
      }
    }
    else if (uVar15 == 0xe) {
      uVar15 = uVar17 | iVar16 << 5;
      bVar5 = true;
      if (~uVar18 - 1 < 0xfffffffe) {
LAB_00192730:
        iVar6 = cpu_translate_imm_map_to_logical_isra_0_part_0(~uVar18,&local_10,&local_c);
        if (iVar6 != 0) {
LAB_001929dc:
          puVar7 = *(uint **)(param_1 + 0x408);
          uVar15 = local_c << 10 | local_10 << 0x10 | uVar15;
          if (bVar5) {
            *puVar7 = uVar15 | 0x72000000;
            *(uint **)(param_1 + 0x408) = puVar7 + 1;
          }
          else {
            *puVar7 = uVar15 | 0x12000000;
            *(uint **)(param_1 + 0x408) = puVar7 + 1;
          }
          goto LAB_00192120;
        }
        cpu_translate_set_imm32_isra_0(param_1 + 0x408,1,uVar1);
        uVar17 = iVar16 << 5 | uVar4 << 0xb | uVar17;
        if (!bVar5) goto LAB_0019276c;
      }
      else {
        cpu_translate_set_imm32_isra_0(param_1 + 0x408,1,uVar1);
        uVar17 = iVar16 << 5 | uVar4 << 0xb | uVar17;
      }
      puVar7 = *(uint **)(param_1 + 0x408);
      *puVar7 = uVar17 | 0x6ae10000;
      *(uint **)(param_1 + 0x408) = puVar7 + 1;
    }
    else if (uVar15 == 0xf) {
      cpu_translate_set_imm32_isra_0(param_1 + 0x408,uVar17,~uVar18);
      puVar7 = *(uint **)(param_1 + 0x408);
      *puVar7 = uVar17 << 5 | uVar17 << 0x10 | uVar17 | 0x6a000000;
      *(uint **)(param_1 + 0x408) = puVar7 + 1;
    }
    else {
      if (uVar15 != 0xd) goto LAB_00192e6c;
      cpu_translate_set_imm32_isra_0(param_1 + 0x408,uVar17,uVar18);
      puVar7 = *(uint **)(param_1 + 0x408);
      *puVar7 = uVar17 << 5 | uVar17 << 0x10 | uVar17 | 0x6a000000;
      *(uint **)(param_1 + 0x408) = puVar7 + 1;
    }
    goto LAB_00192120;
  }
  uVar10 = param_2 >> 0xc & 0xf;
  uVar17 = uVar10 + 0xd;
  if (uVar10 == 0xf) {
    uVar17 = 0;
  }
  uVar19 = param_2 >> 0x14 & 1;
  uVar10 = uVar19;
  if ((param_2 >> 0x14 & 1) != 0) goto LAB_00192058;
  if (uVar15 == 8) {
    if (uVar18 - 1 < 0xfffffffe) {
      bVar5 = false;
      uVar10 = 1;
      goto LAB_00192a24;
    }
    uVar10 = 1;
    uVar18 = iVar16 << 5 | uVar4 << 0xb;
    cpu_translate_set_imm32_isra_0(param_1 + 0x408,1,uVar1);
LAB_00192af0:
    puVar7 = *(uint **)(param_1 + 0x408);
    *puVar7 = uVar18 | 0xac10003;
    *(uint **)(param_1 + 0x408) = puVar7 + 1;
LAB_00192120:
    if (uVar19 != 0) {
      puVar8 = *(undefined8 **)(param_1 + 0x408);
      *puVar8 = 0x33007441d53b4201;
      *(undefined4 *)(puVar8 + 1) = 0xd51b4201;
      *(long *)(param_1 + 0x408) = (long)puVar8 + 0xc;
    }
    if (uVar10 == 0) goto LAB_0019214c;
  }
  else {
    if (8 < uVar15) {
      if (uVar15 == 0xc) {
        bVar5 = false;
        uVar10 = 1;
        goto LAB_0019268c;
      }
      if (uVar15 < 0xd) {
        if (uVar15 == 10) {
          if ((uVar18 & 0xfffff000) == 0) {
            puVar7 = *(uint **)(param_1 + 0x408);
            uVar18 = iVar16 << 5 | uVar18 << 10;
LAB_001928f0:
            *puVar7 = uVar18 | 0x51000003;
            *(uint **)(param_1 + 0x408) = puVar7 + 1;
            goto LAB_00192400;
          }
          if ((uVar18 & 0xff000fff) == 0) {
            puVar7 = *(uint **)(param_1 + 0x408);
            uVar18 = iVar16 << 5 | 0x400000U | (uVar18 >> 0xc) << 10;
            goto LAB_001928f0;
          }
          bVar5 = false;
          uVar10 = 1;
LAB_00192610:
          cpu_translate_set_imm32_isra_0(param_1 + 0x408,1,uVar18);
          if (bVar5) {
            puVar7 = *(uint **)(param_1 + 0x408);
            *puVar7 = iVar16 << 5 | 0x6b010003;
            *(uint **)(param_1 + 0x408) = puVar7 + 1;
          }
          else {
            puVar7 = *(uint **)(param_1 + 0x408);
            *puVar7 = iVar16 << 5 | 0x4b010003;
            *(uint **)(param_1 + 0x408) = puVar7 + 1;
          }
        }
        else if (uVar15 == 0xb) {
          if ((uVar18 & 0xfffff000) == 0) {
            puVar7 = *(uint **)(param_1 + 0x408);
            uVar18 = iVar16 << 5 | uVar18 << 10;
LAB_001928ac:
            *puVar7 = uVar18 | 0x11000003;
            *(uint **)(param_1 + 0x408) = puVar7 + 1;
            goto LAB_00192400;
          }
          if ((uVar18 & 0xff000fff) == 0) {
            puVar7 = *(uint **)(param_1 + 0x408);
            uVar18 = iVar16 << 5 | 0x400000U | (uVar18 >> 0xc) << 10;
            goto LAB_001928ac;
          }
          bVar5 = false;
          uVar10 = 1;
LAB_00192508:
          cpu_translate_set_imm32_isra_0(param_1 + 0x408,1,uVar18);
          if (bVar5) {
            puVar7 = *(uint **)(param_1 + 0x408);
            *puVar7 = iVar16 << 5 | 0x2b010003;
            *(uint **)(param_1 + 0x408) = puVar7 + 1;
          }
          else {
            puVar7 = *(uint **)(param_1 + 0x408);
            *puVar7 = iVar16 << 5 | 0xb010003;
            *(uint **)(param_1 + 0x408) = puVar7 + 1;
          }
        }
        else {
          if (uVar15 != 9) goto LAB_00192cfc;
          bVar5 = false;
          uVar10 = 1;
LAB_00192344:
          uVar15 = iVar16 << 5 | 0x52000003;
          if ((uVar18 - 1 < 0xfffffffe) &&
             (iVar6 = cpu_translate_imm_map_to_logical_isra_0_part_0(uVar18,&local_10,&local_c),
             iVar6 != 0)) {
            puVar7 = *(uint **)(param_1 + 0x408) + 1;
            **(uint **)(param_1 + 0x408) = local_c << 10 | local_10 << 0x10 | uVar15;
            *(uint **)(param_1 + 0x408) = puVar7;
          }
          else {
            cpu_translate_set_imm32_isra_0(param_1 + 0x408,1,uVar1);
            puVar7 = *(uint **)(param_1 + 0x408) + 1;
            **(uint **)(param_1 + 0x408) = iVar16 << 5 | uVar4 << 0xb | 0x4ac10003;
            *(uint **)(param_1 + 0x408) = puVar7;
          }
          if (bVar5) {
            *puVar7 = 0x6a030063;
            *(uint **)(param_1 + 0x408) = puVar7 + 1;
          }
        }
      }
      else {
        if (uVar15 != 0xe) {
          if (uVar15 == 0xf) {
            cpu_translate_set_imm32_isra_0(param_1 + 0x408,uVar17,~uVar18);
          }
          else {
            if (uVar15 != 0xd) goto LAB_00192cfc;
            cpu_translate_set_imm32_isra_0(param_1 + 0x408,uVar17,uVar18);
          }
          goto LAB_00192400;
        }
        uVar15 = uVar17 | iVar16 << 5;
        if (~uVar18 - 1 < 0xfffffffe) {
          bVar5 = false;
          uVar10 = 1;
          goto LAB_00192730;
        }
        cpu_translate_set_imm32_isra_0(param_1 + 0x408,1,uVar1);
        uVar17 = iVar16 << 5 | uVar4 << 0xb | uVar17;
        uVar10 = 1;
LAB_0019276c:
        puVar7 = *(uint **)(param_1 + 0x408);
        *puVar7 = uVar17 | 0xae10000;
        *(uint **)(param_1 + 0x408) = puVar7 + 1;
      }
      goto LAB_00192120;
    }
    if (uVar15 != 4) {
      if (4 < uVar15) {
        if (uVar15 == 6) {
          cpu_translate_set_imm32_isra_0(param_1 + 0x408,1,uVar18);
          puVar7 = *(uint **)(param_1 + 0x408);
          *puVar7 = uVar17 | iVar16 << 5 | 0x5a010000;
          *(uint **)(param_1 + 0x408) = puVar7 + 1;
        }
        else if (uVar15 == 7) {
          cpu_translate_set_imm32_isra_0(param_1 + 0x408,1,uVar18);
          puVar7 = *(uint **)(param_1 + 0x408);
          *puVar7 = uVar17 | iVar16 << 0x10 | 0x5a000020;
          *(uint **)(param_1 + 0x408) = puVar7 + 1;
        }
        else {
          if (uVar15 != 5) goto LAB_00192cfc;
          cpu_translate_set_imm32_isra_0(param_1 + 0x408,1,uVar18);
          puVar7 = *(uint **)(param_1 + 0x408);
          *puVar7 = uVar17 | iVar16 << 5 | 0x1a010000;
          *(uint **)(param_1 + 0x408) = puVar7 + 1;
        }
        goto LAB_00192400;
      }
      if (uVar15 == 2) {
        uVar17 = uVar17 | iVar16 << 5;
        if ((uVar18 & 0xfffff000) == 0) {
          puVar7 = *(uint **)(param_1 + 0x408);
          uVar18 = uVar18 << 10;
LAB_001928d0:
          *puVar7 = uVar18 | uVar17 | 0x51000000;
          *(uint **)(param_1 + 0x408) = puVar7 + 1;
          goto LAB_00192400;
        }
        if ((uVar18 & 0xff000fff) == 0) {
          puVar7 = *(uint **)(param_1 + 0x408);
          uVar18 = (uVar18 >> 0xc) << 10 | 0x400000;
          goto LAB_001928d0;
        }
        bVar5 = false;
        uVar10 = 1;
LAB_0019265c:
        cpu_translate_set_imm32_isra_0(param_1 + 0x408,1,uVar18);
        if (bVar5) {
          puVar7 = *(uint **)(param_1 + 0x408);
          *puVar7 = uVar17 | 0x6b010000;
          *(uint **)(param_1 + 0x408) = puVar7 + 1;
        }
        else {
          puVar7 = *(uint **)(param_1 + 0x408);
          *puVar7 = uVar17 | 0x4b010000;
          *(uint **)(param_1 + 0x408) = puVar7 + 1;
        }
      }
      else {
        if (uVar15 == 3) {
          uVar17 = uVar17 | iVar16 << 0x10;
          if (uVar1 == 0) {
            puVar7 = *(uint **)(param_1 + 0x408);
            *puVar7 = uVar17 | 0x4b0003e0;
            *(uint **)(param_1 + 0x408) = puVar7 + 1;
          }
          else {
            cpu_translate_set_imm32_isra_0(param_1 + 0x408,1,uVar18);
            puVar7 = *(uint **)(param_1 + 0x408);
            *puVar7 = uVar17 | 0x4b000020;
            *(uint **)(param_1 + 0x408) = puVar7 + 1;
          }
          goto LAB_00192400;
        }
        if (uVar15 == 1) {
          uVar15 = 0;
          uVar10 = 1;
          goto LAB_0019225c;
        }
LAB_00192cfc:
        uVar15 = uVar17 | iVar16 << 5;
        if (uVar18 - 1 < 0xfffffffe) {
          bVar5 = false;
          uVar10 = 1;
          goto LAB_00192d18;
        }
        cpu_translate_set_imm32_isra_0(param_1 + 0x408,1,uVar1);
        uVar17 = iVar16 << 5 | uVar4 << 0xb | uVar17;
        uVar10 = 1;
LAB_00192d98:
        puVar7 = *(uint **)(param_1 + 0x408);
        *puVar7 = uVar17 | 0xac10000;
        *(uint **)(param_1 + 0x408) = puVar7 + 1;
      }
      goto LAB_00192120;
    }
    uVar17 = uVar17 | iVar16 << 5;
    if ((uVar18 & 0xfffff000) != 0) {
      if ((uVar18 & 0xff000fff) == 0) {
        puVar7 = *(uint **)(param_1 + 0x408);
        uVar18 = (uVar18 >> 0xc) << 10 | 0x400000;
        goto LAB_00192b34;
      }
      bVar5 = false;
      uVar10 = 1;
LAB_001929a4:
      cpu_translate_set_imm32_isra_0(param_1 + 0x408,1,uVar18);
      if (bVar5) {
        puVar7 = *(uint **)(param_1 + 0x408);
        *puVar7 = uVar17 | 0x2b010000;
        *(uint **)(param_1 + 0x408) = puVar7 + 1;
      }
      else {
        puVar7 = *(uint **)(param_1 + 0x408);
        *puVar7 = uVar17 | 0xb010000;
        *(uint **)(param_1 + 0x408) = puVar7 + 1;
      }
      goto LAB_00192120;
    }
    puVar7 = *(uint **)(param_1 + 0x408);
    uVar18 = uVar18 << 10;
LAB_00192b34:
    *puVar7 = uVar18 | uVar17 | 0x11000000;
    *(uint **)(param_1 + 0x408) = puVar7 + 1;
  }
LAB_00192400:
  if (*(short *)(*(long *)(param_1 + 0x458) + 0x14) < 0) {
    puVar12 = *(uint **)(param_1 + 0x408);
    puVar7 = puVar12 + 1;
    puVar13 = puVar7;
    if ((param_2 >> 0x14 & 1) == 0) {
      if (*(char *)(param_1 + 0x479) == '\0') {
        puVar13 = puVar12 + 2;
        *puVar12 = 0x123e7400;
        puVar12 = puVar7;
      }
      else if (*(char *)(param_1 + 0x479) == '\x01') {
        puVar13 = puVar12 + 2;
        *puVar12 = 0x32000000;
        puVar12 = puVar7;
      }
      pcVar9 = block_indirect_branch;
    }
    else {
      pcVar9 = arm64_spsr_restore;
    }
    lVar3 = (long)pcVar9 - (long)puVar12;
    lVar2 = lVar3 + 3;
    if (-1 < lVar3) {
      lVar2 = lVar3;
    }
    *puVar12 = (uint)lVar2 >> 2 & 0x3ffffff | 0x14000000;
    *(uint **)(param_1 + 0x408) = puVar13;
  }
LAB_0019214c:
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(&__stack_chk_guard,local_8 - ___stack_chk_guard,0);
  }
  return;
}


