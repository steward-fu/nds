/*
 * Ghidra decompilation
 *
 * Function : disasm_thumb_instruction
 * Address  : 00187470
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void disasm_thumb_instruction(ulong param_1,undefined8 *param_2,int param_3)

{
  undefined2 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  undefined auStack_108 [256];
  long local_8;
  
  uVar12 = param_1 & 0xffffffff;
  local_8 = ___stack_chk_guard;
  uVar5 = uVar12 >> 0xd & 7;
  uVar4 = (uint)uVar5;
  uVar11 = (uint)param_1;
  if (uVar4 == 4) {
    uVar5 = uVar12 >> 0xb & 1;
    if ((uVar11 >> 0xc & 1) != 0) {
      __sprintf_chk(param_2,1,0xffffffffffffffff,"%s %s, [sp, #%d]",
                    *(undefined8 *)(t_mem_op_table + uVar5 * 8),(&reg_names)[uVar12 >> 8 & 7],
                    (uVar11 & 0xff) << 2);
      goto LAB_001875a0;
    }
    puVar9 = (&reg_names)[uVar12 >> 3 & 7];
    uVar4 = ((uint)(uVar12 >> 6) & 0x1f) << 1;
    puVar8 = (&reg_names)[param_1 & 7];
    uVar6 = *(undefined8 *)(t_mem_op2_table + uVar5 * 8);
LAB_001874f4:
    __sprintf_chk(param_2,1,0xffffffffffffffff,"%s %s, [%s, #%d]",uVar6,puVar8,puVar9,uVar4);
    goto LAB_001875a0;
  }
  if (uVar4 < 5) {
    if (uVar4 == 2) {
      uVar4 = uVar11 >> 10;
      if ((uVar11 >> 0xc & 1) == 0) {
        if ((uVar4 & 6) == 0) {
          if ((uVar4 & 7) == 1) {
            uVar4 = (uint)(uVar12 >> 8) & 3;
            if (uVar4 == 3) {
              if ((uVar11 >> 7 & 1) == 0) {
                __sprintf_chk(param_2,1,0xffffffffffffffff,"bx %s");
              }
              else {
                __sprintf_chk(param_2,1,0xffffffffffffffff,"blx %s");
              }
            }
            else {
              __sprintf_chk(param_2,1,0xffffffffffffffff,"%s %s, %s",
                            *(undefined8 *)(t_alu_op_hi_table + (ulong)uVar4 * 8),
                            (&reg_names)[(uVar11 >> 7 & 1) << 3 | uVar11 & 7],
                            (&reg_names)[uVar12 >> 3 & 0xf]);
            }
          }
          else {
            __sprintf_chk(param_2,1,0xffffffffffffffff,"%s %s, %s",
                          *(undefined8 *)(t_alu_op_table + (uVar12 >> 6 & 0xf) * 8),
                          (&reg_names)[param_1 & 7],(&reg_names)[uVar12 >> 3 & 7]);
          }
        }
        else {
          iVar3 = (uVar11 & 0xff) * 4;
          __sprintf_chk(param_2,1,0xffffffffffffffff,"ldr %s, [pc, #%d] (%08x)",
                        (&reg_names)[uVar12 >> 8 & 7],iVar3,param_3 + 4 + iVar3);
        }
      }
      else {
        if ((uVar11 >> 9 & 1) == 0) {
          puVar2 = t_mem_op_reg_table;
        }
        else {
          puVar2 = t_mem_op2_reg_table;
        }
        __sprintf_chk(param_2,1,0xffffffffffffffff,"%s %s, [%s, %s]",
                      *(undefined8 *)(puVar2 + (ulong)(uVar4 & 3) * 8),(&reg_names)[param_1 & 7],
                      (&reg_names)[uVar12 >> 3 & 7],(&reg_names)[uVar12 >> 6 & 7]);
      }
      goto LAB_001875a0;
    }
    if (uVar4 == 3) {
      uVar11 = (uint)(uVar12 >> 6) & 0x1f;
      uVar6 = *(undefined8 *)(t_mem_op_imm_table + (uVar12 >> 0xb & 3) * 8);
      uVar4 = uVar11 << 2;
      if ((param_1 & 0x1000) != 0) {
        uVar4 = uVar11;
      }
      puVar9 = (&reg_names)[uVar12 >> 3 & 7];
      puVar8 = (&reg_names)[param_1 & 7];
      goto LAB_001874f4;
    }
    if (uVar4 == 1) {
      __sprintf_chk(param_2,uVar5,0xffffffffffffffff,"%s %s, #%d",
                    *(undefined8 *)(t_alu_op_imm_table + (uVar12 >> 0xb & 3) * 8),
                    (&reg_names)[uVar12 >> 8 & 7],uVar11 & 0xff);
      goto LAB_001875a0;
    }
  }
  else {
    if (uVar4 == 6) {
      if ((uVar11 >> 0xc & 1) == 0) {
        get_rlist(uVar11 & 0xff,auStack_108);
        __sprintf_chk(param_2,1,0xffffffffffffffff,"%sia %s!, %s",
                      *(undefined8 *)(t_bmem_op_table + (uVar12 >> 0xb & 1) * 8),
                      (&reg_names)[(ulong)(uVar11 >> 8) & 7],auStack_108);
      }
      else {
        uVar4 = uVar11 >> 8 & 0xf;
        if (uVar4 == 0xf) {
          __sprintf_chk(param_2,1,0xffffffffffffffff,"swi %d",uVar11 & 0xff);
        }
        else {
          __sprintf_chk(param_2,1,0xffffffffffffffff,"b%s %x",
                        *(undefined8 *)(condition_table + (ulong)uVar4 * 8),
                        param_3 + 4 + (char)uVar12 * 2);
        }
      }
      goto LAB_001875a0;
    }
    if (uVar4 == 7) {
      uVar5 = uVar12 >> 0xb & 3;
      iVar3 = (int)uVar5;
      if (iVar3 == 2) {
        __sprintf_chk(param_2,1,0xffffffffffffffff,"bll %x",uVar11 & 0x7ff);
      }
      else if (iVar3 == 3) {
        __sprintf_chk(param_2,1,0xffffffffffffffff,"blh %x",uVar11 & 0x7ff);
      }
      else if (iVar3 == 1) {
        if ((param_1 & 1) == 0) {
          __sprintf_chk(param_2,uVar5,0xffffffffffffffff,"blhx %x",uVar11 & 0x7ff);
        }
        else {
          *param_2 = 0x656e696665646e75;
          *(undefined2 *)(param_2 + 1) = 100;
        }
      }
      else {
        __sprintf_chk(param_2,1,0xffffffffffffffff,&DAT_00224718,
                      param_3 + 4 + (int)((long)(uVar12 << 0x36) >> 0x36) * 2);
      }
      goto LAB_001875a0;
    }
    if (uVar4 == 5) {
      if ((uVar11 >> 0xc & 1) == 0) {
        puVar1 = (undefined2 *)&DAT_002245f0;
        if ((param_1 & 0x800) != 0) {
          puVar1 = &DAT_002245f8;
        }
        __sprintf_chk(param_2,1,0xffffffffffffffff,"add %s, %s, #%d",
                      (&reg_names)[(ulong)(uVar11 >> 8) & 7],puVar1,(uVar11 & 0xff) << 2);
      }
      else if ((uVar11 >> 8 & 0xf) == 0) {
        iVar3 = (uVar11 & 0x7f) << 2;
        if ((uVar11 >> 7 & 1) == 0) {
          __sprintf_chk(param_2,1,0xffffffffffffffff,"add sp, #%d",iVar3);
        }
        else {
          __sprintf_chk(param_2,1,0xffffffffffffffff,"add sp, #-%d",iVar3);
        }
      }
      else {
        uVar4 = uVar11 & 0xff;
        if ((uVar11 >> 0xb & 1) == 0) {
          if ((param_1 & 0x100) == 0) {
            puVar8 = &UNK_002245e8;
          }
          else {
            puVar8 = &UNK_002245e8;
            uVar4 = uVar4 | 0x4000;
          }
        }
        else if ((param_1 & 0x100) == 0) {
          puVar8 = &DAT_002245e0;
        }
        else {
          puVar8 = &DAT_002245e0;
          uVar4 = uVar4 | 0x8000;
        }
        get_rlist(uVar4,auStack_108);
        __sprintf_chk(param_2,1,0xffffffffffffffff,"%s %s",puVar8,auStack_108);
      }
      goto LAB_001875a0;
    }
  }
  uVar4 = (uint)(uVar12 >> 0xb) & 3;
  puVar8 = (&reg_names)[param_1 & 7];
  puVar9 = (&reg_names)[uVar12 >> 3 & 7];
  if (uVar4 == 3) {
    uVar4 = uVar11 >> 6 & 7;
    uVar10 = (ulong)uVar4;
    uVar5 = uVar12 >> 9 & 1;
    if ((uVar11 >> 10 & 1) == 0) {
      __sprintf_chk(param_2,1,0xffffffffffffffff,"%s %s, %s, %s",
                    *(undefined8 *)(t_add_sub_table + uVar5 * 8),puVar8,puVar9,(&reg_names)[uVar10])
      ;
      goto LAB_001875a0;
    }
    if (uVar4 == 0) {
      __sprintf_chk(param_2,1,0xffffffffffffffff,"mov %s, %s",puVar8,puVar9);
      goto LAB_001875a0;
    }
    puVar7 = *(undefined **)(t_add_sub_table + uVar5 * 8);
  }
  else {
    uVar10 = (ulong)(uVar11 >> 6 & 0x1f);
    puVar7 = (&shift_table)[uVar4];
  }
  __sprintf_chk(param_2,1,0xffffffffffffffff,"%s %s, %s, #%d",puVar7,puVar8,puVar9,uVar10);
LAB_001875a0:
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&__stack_chk_guard,local_8 - ___stack_chk_guard,0);
}


