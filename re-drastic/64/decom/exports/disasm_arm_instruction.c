/*
 * Ghidra decompilation
 *
 * Function : disasm_arm_instruction
 * Address  : 001869b0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void disasm_arm_instruction
               (ulong param_1,undefined8 *param_2,int param_3,ulong *param_4,int param_5)

{
  char *pcVar1;
  undefined uVar2;
  uint uVar3;
  uint uVar4;
  size_t sVar5;
  int iVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined *puVar11;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  char *pcVar16;
  char *pcVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 in_stack_fffffffffffffe50;
  undefined4 uVar20;
  undefined8 in_stack_fffffffffffffe58;
  undefined4 uVar21;
  undefined8 in_stack_fffffffffffffe60;
  undefined4 uVar22;
  undefined *local_118 [2];
  undefined auStack_108 [256];
  long local_8;
  
  uVar22 = (undefined4)((ulong)in_stack_fffffffffffffe60 >> 0x20);
  uVar21 = (undefined4)((ulong)in_stack_fffffffffffffe58 >> 0x20);
  uVar20 = (undefined4)((ulong)in_stack_fffffffffffffe50 >> 0x20);
  uVar10 = param_1 >> 0x1c & 0xf;
  uVar13 = param_1 & 0xffffffff;
  local_8 = ___stack_chk_guard;
  uVar15 = uVar13 >> 0x19 & 7;
  pcVar17 = *(char **)(condition_table + uVar10 * 8);
  __sprintf_chk(param_2,1,0xffffffffffffffff,"[error (%x)]",param_1 & 0xffffffff);
  uVar14 = (uint)uVar15;
  uVar12 = (uint)param_1;
  if (uVar14 == 4) {
    pcVar16 = "";
    if ((param_1 & 0x200000) != 0) {
      pcVar16 = "!";
    }
    pcVar1 = "";
    if ((param_1 & 0x400000) != 0) {
      pcVar1 = "^";
    }
    uVar18 = *(undefined8 *)(block_memory_table + (uVar13 >> 0x17 & 3) * 8);
    uVar19 = *(undefined8 *)(block_memory_op_type + (uVar13 >> 0x14 & 1) * 8);
    get_rlist(uVar13,auStack_108);
    __sprintf_chk(param_2,1,0xffffffffffffffff,"%s%s%s %s%s, %s%s",uVar19,pcVar17,uVar18,
                  (&reg_names)[uVar13 >> 0x10 & 0xf],pcVar16,auStack_108,pcVar1);
    goto LAB_00186c80;
  }
  uVar3 = (uint)(uVar13 >> 0x10);
  if (uVar14 < 5) {
    if (uVar14 == 2) {
      __sprintf_chk(auStack_108,1,0x10,"#%d",uVar12 & 0xfff);
      disasm_arm_memory_transfer(uVar13,auStack_108,param_2);
      if ((uVar3 & 0xf) != 0xf) goto LAB_00186c80;
      sVar5 = strlen((char *)param_2);
      iVar6 = param_3 + 8 + (uVar12 & 0xfff);
LAB_00186e7c:
      __sprintf_chk((long)param_2 + sVar5,1,0xffffffffffffffff," (%08x)",iVar6);
      goto LAB_00186c80;
    }
    if (uVar14 != 3) {
      if (uVar14 == 1) {
        uVar14 = (uint)(uVar13 >> 8) & 0xf;
        __sprintf_chk(auStack_108,uVar15,0x10,"#0x%x",
                      (uVar12 & 0xff) >> uVar14 * 2 | (uVar12 & 0xff) << uVar14 * -2 + 0x20);
        if ((((uint)(uVar13 >> 0x17) & 3) == 2) && ((uVar12 >> 0x14 & 1) == 0)) {
          uVar10 = uVar13 >> 0x15 & 3;
          iVar6 = (int)uVar10;
          if (iVar6 == 1) {
            __sprintf_chk(param_2,uVar10,0xffffffffffffffff,"msr%s %s, %s",pcVar17,
                          *(undefined8 *)(psr_op_type + (uVar13 >> 0x16 & 1) * 8),auStack_108);
          }
          else if (iVar6 == 2) {
            __sprintf_chk(param_2,uVar15,0xffffffffffffffff,"movt%s %s, %08x",pcVar17,
                          (&reg_names)[uVar13 >> 0xc & 0xf],
                          ((uVar12 >> 0x10 & 0xf) << 0xc | uVar12 & 0xfff) << 0x10);
          }
          else if (iVar6 == 0) {
            __sprintf_chk(param_2,1,0xffffffffffffffff,"movw%s %s, %08x",pcVar17,
                          (&reg_names)[uVar13 >> 0xc & 0xf],
                          (uVar12 >> 0x10 & 0xf) << 0xc | uVar12 & 0xfff);
          }
        }
        else {
          disasm_arm_data_proc(uVar13,auStack_108,param_2);
        }
        goto LAB_00186c80;
      }
      goto LAB_00186cf8;
    }
    if ((uVar12 >> 4 & 1) == 0) {
      disasm_arm_mem_reg_operand2(uVar13,auStack_108);
      disasm_arm_memory_transfer(uVar13,auStack_108,param_2);
      goto LAB_00186c80;
    }
    if ((((uint)(uVar13 >> 0x15) & 0xf) == 0xe) && ((param_1 & 0x60) == 0)) {
      uVar10 = uVar13 >> 7 & 0x1f;
      __sprintf_chk(param_2,1,0xffffffffffffffff,"bfi%s %s, %s, #%d, #%d",pcVar17,
                    (&reg_names)[uVar13 >> 0xc & 0xf],(&reg_names)[param_1 & 0xf],uVar10,
                    CONCAT44(uVar20,((uVar3 & 0x1f) + 1) - (int)uVar10));
      goto LAB_00186c80;
    }
  }
  else {
    if (uVar14 == 6) {
      param_2[2] = 0x282065726f74732f;
      param_2[3] = 0x6e656d656c706d69;
      *param_2 = 0x7365636f72706f63;
      param_2[1] = 0x64616f6c20726f73;
      *(undefined8 *)((long)param_2 + 0x1e) = 0x29656d20746e65;
      goto LAB_00186c80;
    }
    if (uVar14 == 7) {
      if ((uVar12 >> 0x18 & 1) == 0) {
        uVar14 = uVar12 >> 0x15 & 7;
        if ((uVar12 >> 4 & 1) == 0) {
          puVar7 = &DAT_00224350;
          uVar4 = uVar12 >> 0x15 & 0xf;
        }
        else {
          puVar7 = *(undefined **)(coprocessor_register_transfer_type + (uVar13 >> 0x14 & 1) * 8);
          uVar4 = uVar14;
        }
        __sprintf_chk(param_2,1,0xffffffffffffffff,"%s%s p%d, %d, %s, c%d, c%d, %d",puVar7,pcVar17,
                      uVar13 >> 8 & 0xf,uVar14,(&reg_names)[uVar13 >> 0xc & 0xf],
                      CONCAT44(uVar21,uVar3) & 0xffffffff0000000f,
                      CONCAT44(uVar22,uVar12) & 0xffffffff0000000f,uVar4);
      }
      else {
        __sprintf_chk(param_2,1,0xffffffffffffffff,"swi%s 0x%x",pcVar17,uVar12 & 0xffffff);
      }
      goto LAB_00186c80;
    }
    if (uVar14 == 5) {
      pcVar16 = "";
      if ((param_1 & 0x1000000) != 0) {
        pcVar16 = "l";
      }
      uVar12 = param_3 + 8 + (int)((long)(uVar13 << 0x28) >> 0x28) * 4;
      if ((int)uVar10 == 0xf) {
        pcVar16 = "lx";
        uVar12 = uVar12 + ((uint)(uVar13 >> 0x18) & 1) * 2;
        pcVar17 = "";
      }
      iVar6 = 0;
      if (param_5 != 0) {
        do {
          if (*param_4 == (ulong)uVar12) {
            __sprintf_chk(param_2,1,0xffffffffffffffff,"b%s%s %s",pcVar16,pcVar17,param_4[1]);
            if (iVar6 != param_5) goto LAB_00186c80;
            break;
          }
          iVar6 = iVar6 + 1;
          param_4 = param_4 + 2;
        } while (param_5 != iVar6);
      }
      __sprintf_chk(param_2,1,0xffffffffffffffff,"b%s%s %x",pcVar16,pcVar17,uVar12);
      goto LAB_00186c80;
    }
LAB_00186cf8:
    if ((uVar12 & 0x90) != 0x90) {
      if ((((uint)(uVar13 >> 0x17) & 3) == 2) && ((uVar12 >> 0x14 & 1) == 0)) {
        if ((uVar12 & 0x90) == 0x80) {
          uVar10 = uVar13 >> 0x15 & 3;
          iVar6 = (int)uVar10;
          uVar2 = (&DAT_002243f8)[uVar13 >> 6 & 1];
          puVar8 = (&reg_names)[uVar13 >> 8 & 0xf];
          puVar9 = (&reg_names)[uVar13 >> 0x10 & 0xf];
          puVar7 = (&reg_names)[uVar13 >> 0xc & 0xf];
          puVar11 = (&reg_names)[param_1 & 0xf];
          if (iVar6 == 2) {
            __sprintf_chk(param_2,1,0xffffffffffffffff,"smlal%c%c%s %s, %s, %s, %s",
                          (&DAT_002243f8)[uVar13 >> 5 & 1],uVar2,pcVar17,puVar7,puVar9,puVar11,
                          puVar8);
          }
          else if (iVar6 == 3) {
            __sprintf_chk(param_2,1,0xffffffffffffffff,"smul%c%c%s %s, %s, %s, %s",
                          (&DAT_002243f8)[uVar13 >> 5 & 1],uVar2,pcVar17,puVar9,puVar11,puVar8,
                          puVar7);
          }
          else if (iVar6 == 1) {
            if ((uVar12 >> 5 & 1) == 0) {
              __sprintf_chk(param_2,uVar10,0xffffffffffffffff,"smlaw%c%s %s, %s, %s, %s",uVar2,
                            pcVar17,puVar9,puVar11,puVar8,puVar7);
            }
            else {
              __sprintf_chk(param_2,uVar10,0xffffffffffffffff,"smulw%c%s %s, %s, %s, %s",uVar2,
                            pcVar17,puVar9,puVar11,puVar8,puVar7);
            }
          }
          else {
            __sprintf_chk(param_2,1,0xffffffffffffffff,"smla%c%c%s %s, %s, %s, %s",
                          (&DAT_002243f8)[uVar13 >> 5 & 1],uVar2,pcVar17,puVar9,puVar11,puVar8,
                          puVar7);
          }
        }
        else if ((uVar12 >> 4 & 1) == 0) {
          uVar10 = uVar13 >> 0x16 & 1;
          if ((uVar12 >> 0x15 & 1) == 0) {
            __sprintf_chk(param_2,1,0xffffffffffffffff,"mrs%s %s, %s",pcVar17,
                          (&reg_names)[uVar13 >> 0xc & 0xf],
                          *(undefined8 *)(psr_op_type + uVar10 * 8));
          }
          else {
            disasm_arm_reg_operand2(uVar12 & 0xfff,auStack_108);
            __sprintf_chk(param_2,1,0xffffffffffffffff,"msr%s %s_%s, %s",pcVar17,
                          *(undefined8 *)(psr_op_type + uVar10 * 8),
                          *(undefined8 *)(psr_flags + (uVar13 >> 0x10 & 0xf) * 8),auStack_108);
          }
        }
        else {
          uVar10 = uVar13 >> 5 & 3;
          iVar6 = (int)uVar10;
          if (iVar6 == 2) {
            local_118[0] = &DAT_002244c8;
            local_118[1] = &DAT_002244d0;
            pcVar16 = "";
            if ((param_1 & 0x400000) != 0) {
              pcVar16 = "d";
            }
            __sprintf_chk(param_2,1,0xffffffffffffffff,"%s%s%s %s, %s, %s",
                          local_118[uVar13 >> 0x15 & 1],pcVar16,pcVar17,
                          (&reg_names)[uVar13 >> 0xc & 0xf],(&reg_names)[param_1 & 0xf],
                          (&reg_names)[uVar13 >> 0x10 & 0xf]);
          }
          else if (iVar6 == 3) {
            __sprintf_chk(param_2,1,0xffffffffffffffff,"bkpt%s 0x%x",pcVar17,uVar12 & 0xffffff);
          }
          else if (iVar6 == 1) {
            __sprintf_chk(param_2,uVar10,0xffffffffffffffff,"blx%s %s",pcVar17,
                          (&reg_names)[param_1 & 0xf]);
          }
          else if ((uVar12 >> 0x16 & 1) == 0) {
            __sprintf_chk(param_2,1,0xffffffffffffffff,"bx%s %s",pcVar17);
          }
          else {
            __sprintf_chk(param_2,1,0xffffffffffffffff,"clz%s %s, %s",pcVar17,
                          (&reg_names)[uVar13 >> 0xc & 0xf],(&reg_names)[param_1 & 0xf]);
          }
        }
      }
      else {
        disasm_arm_reg_operand2(uVar12 & 0xfff,auStack_108);
        disasm_arm_data_proc(uVar13,auStack_108,param_2);
      }
      goto LAB_00186c80;
    }
    if ((param_1 & 0x60) != 0) {
      if ((uVar12 >> 0x16 & 1) == 0) {
        __sprintf_chk(auStack_108,1,0x10,"%s",(&reg_names)[uVar12 & 0xf]);
        disasm_arm_memory_transfer2(uVar13,auStack_108,param_2);
        goto LAB_00186c80;
      }
      uVar12 = (uVar12 >> 8 & 0xf) << 4 | uVar12 & 0xf;
      __sprintf_chk(auStack_108,1,0x10,"#%d",uVar12);
      disasm_arm_memory_transfer2(uVar13,auStack_108,param_2);
      if ((uVar3 & 0xf) != 0xf) goto LAB_00186c80;
      sVar5 = strlen((char *)param_2);
      iVar6 = param_3 + 8 + uVar12;
      goto LAB_00186e7c;
    }
    pcVar16 = "";
    if ((param_1 & 0x100000) != 0) {
      pcVar16 = "s";
    }
    uVar14 = uVar12 >> 0x15 & 0xf;
    if ((uVar12 >> 0x18 & 1) == 0) {
      if ((uVar12 >> 0x15 & 0xc) != 0) {
        __sprintf_chk(param_2,1,0xffffffffffffffff,"%s%s%s %s, %s, %s, %s",
                      *(undefined8 *)(long_multiply_type + (ulong)(uVar14 - 4) * 8),pcVar17,pcVar16,
                      (&reg_names)[uVar13 >> 0xc & 0xf],(&reg_names)[uVar13 >> 0x10 & 0xf],
                      (&reg_names)[param_1 & 0xf],(&reg_names)[uVar13 >> 8 & 0xf]);
        goto LAB_00186c80;
      }
      if (uVar14 == 0) {
        __sprintf_chk(param_2,1,0xffffffffffffffff,"mul%s%s %s, %s, %s",pcVar17,pcVar16,
                      (&reg_names)[uVar13 >> 0x10 & 0xf],(&reg_names)[param_1 & 0xf],
                      (&reg_names)[uVar13 >> 8 & 0xf]);
        goto LAB_00186c80;
      }
      if (uVar14 == 1) {
        __sprintf_chk(param_2,1,0xffffffffffffffff,"mla%s%s %s, %s, %s, %s",pcVar17,pcVar16,
                      (&reg_names)[uVar13 >> 0x10 & 0xf],(&reg_names)[param_1 & 0xf],
                      (&reg_names)[uVar13 >> 8 & 0xf],(&reg_names)[uVar13 >> 0xc & 0xf]);
        goto LAB_00186c80;
      }
    }
    else {
      if (uVar14 == 8) {
        __sprintf_chk(param_2,1,0xffffffffffffffff,"swp%s %s, %s, [%s]",pcVar17,
                      (&reg_names)[uVar13 >> 0xc & 0xf],(&reg_names)[param_1 & 0xf],
                      (&reg_names)[uVar13 >> 0x10 & 0xf]);
        goto LAB_00186c80;
      }
      if (uVar14 == 10) {
        __sprintf_chk(param_2,1,0xffffffffffffffff,"swpb%s %s, %s, [%s]",pcVar17,
                      (&reg_names)[uVar13 >> 0xc & 0xf],(&reg_names)[param_1 & 0xf],
                      (&reg_names)[uVar13 >> 0x10 & 0xf]);
        goto LAB_00186c80;
      }
    }
  }
  *param_2 = 0x656e696665646e75;
  *(undefined2 *)(param_2 + 1) = 100;
LAB_00186c80:
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(&__stack_chk_guard,local_8 - ___stack_chk_guard,0);
  }
  return;
}


