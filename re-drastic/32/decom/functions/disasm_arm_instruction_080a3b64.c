/*
 * Ghidra decompilation
 *
 * Function : disasm_arm_instruction
 * Address  : 080a3b64
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void disasm_arm_instruction
               (u32 opcode,char *buffer,u32 pc,disasm_label_struct *disasm_labels,u32 num_labels)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  u32 pn;
  disasm_label_struct *pdVar4;
  char *pcVar5;
  char *memory_type;
  char *pcVar6;
  disasm_label_struct *pdVar7;
  char *pcVar8;
  char *op_double;
  char *pcVar9;
  u32 uVar10;
  u32 lsb;
  char *link_str;
  char *pcVar11;
  char *pcVar12;
  char *condition_str;
  u32 shift_op;
  void *pvVar13;
  u32 target_pc;
  u32 cm;
  u32 cn;
  uint uVar14;
  u32 shift;
  char *base_type;
  char *rd_name;
  uint uVar15;
  u32 rm;
  u32 coprocessor_information;
  char *pcVar16;
  u32 coprocessor_opcode;
  char *pcVar17;
  char *op_name [2];
  char imm_op [16];
  
  iVar1 = __stack_chk_guard;
  pcVar12 = condition_table[opcode >> 0x1c];
  __sprintf_chk(buffer,1,0xffffffff,"[error (%x)]",opcode);
  switch((opcode << 4) >> 0x1d) {
  case 1:
    uVar3 = (opcode << 0x14) >> 0x1c;
    __sprintf_chk(imm_op,1,0x10,&DAT_08140a6c,
                  (opcode & 0xff) >> uVar3 * 2 | (opcode & 0xff) << uVar3 * -2 + 0x20);
    if (((opcode << 7) >> 0x1e == 2) && ((opcode & 0x100000) == 0)) {
      uVar3 = (opcode << 9) >> 0x1e;
      if (uVar3 == 1) {
        __sprintf_chk(buffer,1,0xffffffff,"msr%s %s, %s",pcVar12,
                      psr_op_type[-((int)(opcode << 9) >> 0x1f)],imm_op);
      }
      else {
        if (uVar3 == 0) {
          pcVar9 = reg_names[(opcode << 0x10) >> 0x1c];
          uVar3 = opcode >> 4 & 0xf000 | opcode & 0xfff;
          pcVar5 = "movw%s %s, %08x";
        }
        else {
          if (uVar3 != 2) break;
          pcVar9 = reg_names[(opcode << 0x10) >> 0x1c];
          uVar3 = (opcode >> 4 & 0xf000 | opcode & 0xfff) << 0x10;
          pcVar5 = "movt%s %s, %08x";
        }
        __sprintf_chk(buffer,1,0xffffffff,pcVar5,pcVar12,pcVar9,uVar3);
      }
    }
    else {
      disasm_arm_data_proc(opcode,imm_op,buffer);
    }
    break;
  case 2:
    __sprintf_chk(imm_op,1,0x10,"#%d",opcode & 0xfff);
    disasm_arm_memory_transfer(opcode,imm_op,buffer);
    break;
  case 3:
    if ((opcode & 0x10) != 0) {
      if (((opcode << 7) >> 0x1c == 0xe) && ((opcode & 0x60) == 0)) {
        uVar3 = (opcode << 0x14) >> 0x1b;
        __sprintf_chk(buffer,1,0xffffffff,"bfi%s %s, %s, #%d, #%d",pcVar12,
                      reg_names[(opcode << 0x10) >> 0x1c],reg_names[opcode & 0xf],uVar3,
                      (((opcode << 0xb) >> 0x1b) + 1) - uVar3);
        break;
      }
switchD_080a40b8_caseD_2:
      *(undefined4 *)buffer = 0x65646e75;
      *(undefined4 *)(buffer + 4) = 0x656e6966;
      *(undefined2 *)(buffer + 8) = 100;
      break;
    }
    uVar14 = (opcode << 0x14) >> 0x1b;
    uVar3 = (opcode << 0x19) >> 0x1e;
    uVar15 = opcode & 0xf;
    if (uVar14 == 0) {
      if (uVar3 == 0) {
LAB_080a44f0:
        __sprintf_chk(imm_op,1,0x10,"%s",reg_names[uVar15]);
        goto LAB_080a4330;
      }
      if (uVar3 < 3) {
        uVar14 = 0x20;
        goto LAB_080a4330;
      }
      if (uVar3 != 3) goto LAB_080a44f0;
      __sprintf_chk(imm_op,1,0x10,"%s, rrx #1",reg_names[uVar15]);
    }
    else {
LAB_080a4330:
      __sprintf_chk(imm_op,1,0x10,"%s, %s #%d",reg_names[uVar15],shift_table[uVar3],uVar14);
    }
    disasm_arm_memory_transfer(opcode,imm_op,buffer);
    break;
  case 4:
    pcVar5 = block_memory_op_type[-((int)(opcode << 0xb) >> 0x1f)];
    pcVar9 = "!";
    if ((opcode & 0x200000) == 0) {
      pcVar9 = "";
    }
    pcVar6 = block_memory_table[(opcode << 7) >> 0x1e];
    pcVar11 = "";
    if ((opcode & 0x400000) != 0) {
      pcVar11 = "^";
    }
    get_rlist(opcode,imm_op);
    __sprintf_chk(buffer,1,0xffffffff,"%s%s%s %s%s, %s%s",pcVar5,pcVar12,pcVar6,
                  reg_names[(opcode << 0xc) >> 0x1c],pcVar9,imm_op,pcVar11);
    break;
  case 5:
    pcVar9 = "l";
    if ((opcode & 0x1000000) == 0) {
      pcVar9 = "";
    }
    pvVar13 = (void *)(pc + 8 + ((int)(opcode << 8) >> 8) * 4);
    if (opcode >> 0x1c == 0xf) {
      pvVar13 = (void *)((int)pvVar13 + ((int)(opcode << 7) >> 0x1f) * -2);
      pcVar9 = "lx";
      pcVar12 = "";
    }
    if (num_labels != 0) {
      if (disasm_labels->address == pvVar13) {
        uVar10 = 0;
        pdVar4 = disasm_labels;
      }
      else {
        uVar10 = 0;
        pdVar7 = disasm_labels + 1;
        do {
          uVar10 = uVar10 + 1;
          if (num_labels == uVar10) goto LAB_080a3edc;
          pdVar4 = pdVar7;
          pdVar7 = pdVar7 + 1;
        } while (disasm_labels[uVar10].address != pvVar13);
      }
      __sprintf_chk(buffer,1,0xffffffff,"b%s%s %s",pcVar9,pcVar12,pdVar4->name);
      if (num_labels != uVar10) break;
    }
LAB_080a3edc:
    __sprintf_chk(buffer,1,0xffffffff,"b%s%s %x",pcVar9,pcVar12,pvVar13);
    break;
  case 6:
    *(undefined4 *)buffer = 0x72706f63;
    *(undefined4 *)(buffer + 4) = 0x7365636f;
    *(undefined4 *)(buffer + 8) = 0x20726f73;
    *(undefined4 *)(buffer + 0xc) = 0x64616f6c;
    *(undefined4 *)(buffer + 0x10) = 0x6f74732f;
    *(undefined4 *)(buffer + 0x14) = 0x28206572;
    *(undefined4 *)(buffer + 0x18) = 0x6c706d69;
    *(undefined4 *)(buffer + 0x1c) = 0x6e656d65;
    *(undefined4 *)(buffer + 0x20) = 0x656d2074;
    *(undefined2 *)(buffer + 0x24) = 0x29;
    break;
  case 7:
    if ((opcode & 0x1000000) == 0) {
      uVar3 = opcode >> 0x15 & 7;
      if ((opcode & 0x10) == 0) {
        pcVar9 = "cdp";
        uVar14 = opcode >> 0x15 & 0xf;
      }
      else {
        pcVar9 = coprocessor_register_transfer_type[-((int)(opcode << 0xb) >> 0x1f)];
        uVar14 = uVar3;
      }
      __sprintf_chk(buffer,1,0xffffffff,"%s%s p%d, %d, %s, c%d, c%d, %d",pcVar9,pcVar12,
                    (opcode << 0x14) >> 0x1c,uVar3,reg_names[(opcode << 0x10) >> 0x1c],
                    (opcode << 0xc) >> 0x1c,opcode & 0xf,uVar14);
    }
    else {
      __sprintf_chk(buffer,1,0xffffffff,"swi%s 0x%x",pcVar12,opcode & 0xffffff);
    }
    break;
  default:
    if ((opcode & 0x90) != 0x90) {
      if (((opcode << 7) >> 0x1e != 2) || ((opcode & 0x100000) != 0)) {
        disasm_arm_reg_operand2(opcode & 0xfff,imm_op);
        disasm_arm_data_proc(opcode,imm_op,buffer);
        break;
      }
      if ((opcode & 0x90) != 0x80) {
        if ((opcode & 0x10) == 0) {
          if ((opcode & 0x200000) == 0) {
            __sprintf_chk(buffer,1,0xffffffff,"mrs%s %s, %s",pcVar12,
                          reg_names[(opcode << 0x10) >> 0x1c],
                          psr_op_type[-((int)(opcode << 9) >> 0x1f)]);
          }
          else {
            disasm_arm_reg_operand2(opcode & 0xfff,imm_op);
            __sprintf_chk(buffer,1,0xffffffff,"msr%s %s_%s, %s",pcVar12,
                          psr_op_type[-((int)(opcode << 9) >> 0x1f)],
                          psr_flags[(opcode << 0xc) >> 0x1c],imm_op);
          }
        }
        else {
          uVar3 = (opcode << 0x19) >> 0x1e;
          if (uVar3 == 2) {
            pcVar9 = "";
            if ((opcode & 0x400000) != 0) {
              pcVar9 = "d";
            }
            op_name[0] = "qadd";
            op_name[1] = "qsub";
            __sprintf_chk(buffer,1,0xffffffff,"%s%s%s %s, %s, %s",
                          op_name[-((int)(opcode << 10) >> 0x1f)],pcVar9,pcVar12,
                          reg_names[(opcode << 0x10) >> 0x1c],reg_names[opcode & 0xf],
                          reg_names[(opcode << 0xc) >> 0x1c]);
          }
          else if (uVar3 == 3) {
            __sprintf_chk(buffer,1,0xffffffff,"bkpt%s 0x%x",pcVar12,opcode & 0xffffff);
          }
          else if (uVar3 == 1) {
            __sprintf_chk(buffer,1,0xffffffff,"blx%s %s",pcVar12,reg_names[opcode & 0xf]);
          }
          else if ((opcode & 0x400000) == 0) {
            __sprintf_chk(buffer,1,0xffffffff,"bx%s %s",pcVar12,reg_names[opcode & 0xf]);
          }
          else {
            __sprintf_chk(buffer,1,0xffffffff,"clz%s %s, %s",pcVar12,
                          reg_names[(opcode << 0x10) >> 0x1c],reg_names[opcode & 0xf]);
          }
        }
        break;
      }
      uVar3 = (opcode << 9) >> 0x1e;
      iVar2 = -((int)(opcode << 0x19) >> 0x1f);
      pcVar9 = pcVar12;
      if (uVar3 == 2) {
        pcVar6 = reg_names[(opcode << 0x14) >> 0x1c];
        pcVar11 = (char *)(uint)(byte)(&DAT_08140bbc)[-((int)(opcode << 0x1a) >> 0x1f)];
        pcVar17 = reg_names[(opcode << 0xc) >> 0x1c];
        pcVar5 = reg_names[opcode & 0xf];
        pcVar8 = "smlal%c%c%s %s, %s, %s, %s";
        pcVar16 = reg_names[(opcode << 0x10) >> 0x1c];
        pcVar12 = (char *)(uint)(byte)(&DAT_08140bbc)[iVar2];
      }
      else if (uVar3 == 3) {
        pcVar6 = reg_names[(opcode << 0x10) >> 0x1c];
        pcVar11 = (char *)(uint)(byte)(&DAT_08140bbc)[-((int)(opcode << 0x1a) >> 0x1f)];
        pcVar17 = reg_names[opcode & 0xf];
        pcVar5 = reg_names[(opcode << 0x14) >> 0x1c];
        pcVar8 = "smul%c%c%s %s, %s, %s, %s";
        pcVar16 = reg_names[(opcode << 0xc) >> 0x1c];
        pcVar12 = (char *)(uint)(byte)(&DAT_08140bbc)[iVar2];
      }
      else {
        if (uVar3 == 1) {
          if ((opcode & 0x20) == 0) {
            pcVar9 = "smlaw%c%s %s, %s, %s, %s";
          }
          else {
            pcVar9 = "smulw%c%s %s, %s, %s, %s";
          }
          __sprintf_chk(buffer,1,0xffffffff,pcVar9,(&DAT_08140bbc)[iVar2],pcVar12,
                        reg_names[(opcode << 0xc) >> 0x1c],reg_names[opcode & 0xf],
                        reg_names[(opcode << 0x14) >> 0x1c],reg_names[(opcode << 0x10) >> 0x1c]);
          break;
        }
        pcVar6 = reg_names[(opcode << 0x10) >> 0x1c];
        pcVar11 = (char *)(uint)(byte)(&DAT_08140bbc)[-((int)(opcode << 0x1a) >> 0x1f)];
        pcVar17 = reg_names[opcode & 0xf];
        pcVar5 = reg_names[(opcode << 0x14) >> 0x1c];
        pcVar8 = "smla%c%c%s %s, %s, %s, %s";
        pcVar16 = reg_names[(opcode << 0xc) >> 0x1c];
        pcVar12 = (char *)(uint)(byte)(&DAT_08140bbc)[iVar2];
      }
LAB_080a4198:
      __sprintf_chk(buffer,1,0xffffffff,pcVar8,pcVar11,pcVar12,pcVar9,pcVar16,pcVar17,pcVar5,pcVar6)
      ;
      break;
    }
    if ((opcode & 0x60) != 0) {
      if ((opcode & 0x400000) == 0) {
        __sprintf_chk(imm_op,1,0x10,"%s",reg_names[opcode & 0xf]);
      }
      else {
        __sprintf_chk(imm_op,1,0x10,"#%d",opcode >> 4 & 0xf0 | opcode & 0xf);
      }
      disasm_arm_memory_transfer2(opcode,imm_op,buffer);
      break;
    }
    uVar3 = (opcode << 7) >> 0x1c;
    pcVar9 = "s";
    if ((opcode & 0x100000) == 0) {
      pcVar9 = "";
    }
    switch(uVar3) {
    case 0:
      __sprintf_chk(buffer,1,0xffffffff,"mul%s%s %s, %s, %s",pcVar12,pcVar9,
                    reg_names[(opcode << 0xc) >> 0x1c],reg_names[opcode & 0xf],
                    reg_names[(opcode << 0x14) >> 0x1c]);
      goto LAB_080a3c4c;
    case 1:
      __sprintf_chk(buffer,1,0xffffffff,"mla%s%s %s, %s, %s, %s",pcVar12,pcVar9,
                    reg_names[(opcode << 0xc) >> 0x1c],reg_names[opcode & 0xf],
                    reg_names[(opcode << 0x14) >> 0x1c],reg_names[(opcode << 0x10) >> 0x1c]);
      goto LAB_080a3c4c;
    default:
      goto switchD_080a40b8_caseD_2;
    case 4:
    case 5:
    case 6:
    case 7:
      pcVar6 = reg_names[(opcode << 0x14) >> 0x1c];
      pcVar11 = memory_transfer_op2_type[1][uVar3];
      pcVar17 = reg_names[(opcode << 0xc) >> 0x1c];
      pcVar5 = reg_names[opcode & 0xf];
      pcVar8 = "%s%s%s %s, %s, %s, %s";
      pcVar16 = reg_names[(opcode << 0x10) >> 0x1c];
      goto LAB_080a4198;
    case 8:
      pcVar5 = reg_names[(opcode << 0xc) >> 0x1c];
      pcVar11 = reg_names[opcode & 0xf];
      pcVar9 = "swp%s %s, %s, [%s]";
      break;
    case 10:
      pcVar11 = reg_names[opcode & 0xf];
      pcVar5 = reg_names[(opcode << 0xc) >> 0x1c];
      pcVar9 = "swpb%s %s, %s, [%s]";
    }
    __sprintf_chk(buffer,1,0xffffffff,pcVar9,pcVar12,reg_names[(opcode << 0x10) >> 0x1c],pcVar11,
                  pcVar5);
  }
LAB_080a3c4c:
  if (iVar1 == __stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


