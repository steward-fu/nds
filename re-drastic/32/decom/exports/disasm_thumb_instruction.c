/*
 * Ghidra decompilation
 *
 * Function : disasm_thumb_instruction
 * Address  : 080a4720
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void disasm_thumb_instruction
               (u32 opcode,char *buffer,u32 pc,disasm_label_struct *disasm_labels,u32 num_labels)

{
  int iVar1;
  int iVar2;
  u32 rlist;
  u32 cond;
  char *pcVar3;
  u32 imm;
  uint uVar4;
  u32 sub_op;
  u32 offset;
  u32 sub_op_1;
  char *pcVar5;
  undefined *puVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char rlist_str [256];
  
  iVar2 = __stack_chk_guard;
  switch((opcode << 0x10) >> 0x1d) {
  case 1:
    __sprintf_chk(buffer,1,0xffffffff,"%s %s, #%d",t_alu_op_imm_table[(opcode << 0x13) >> 0x1e],
                  reg_names[(opcode << 0x15) >> 0x1d],opcode & 0xff);
    break;
  case 2:
    switch(opcode >> 10 & 7) {
    case 1:
      uVar4 = (opcode << 0x16) >> 0x1e;
      if (uVar4 == 3) {
        uVar4 = (opcode << 0x19) >> 0x1c;
        if ((opcode & 0x80) == 0) {
          __sprintf_chk(buffer,1,0xffffffff,"bx %s",reg_names[uVar4]);
        }
        else {
          __sprintf_chk(buffer,1,0xffffffff,"blx %s",reg_names[uVar4]);
        }
      }
      else {
        __sprintf_chk(buffer,1,0xffffffff,"%s %s, %s",t_alu_op_hi_table[uVar4],
                      reg_names[opcode & 7 | ((opcode << 0x18) >> 0x1f) << 3],
                      reg_names[(opcode << 0x19) >> 0x1c]);
      }
      break;
    case 2:
    case 3:
      __sprintf_chk(buffer,1,0xffffffff,"ldr %s, [pc, #%d]",reg_names[(opcode << 0x15) >> 0x1d],
                    (opcode & 0xff) << 2);
      break;
    case 4:
    case 5:
    case 6:
    case 7:
      uVar4 = opcode >> 10 & 3;
      pcVar3 = reg_names[(opcode << 0x17) >> 0x1d];
      pcVar7 = reg_names[(opcode << 0x1a) >> 0x1d];
      if ((opcode & 0x200) == 0) {
        pcVar9 = t_mem_op_reg_table[uVar4];
      }
      else {
        pcVar9 = t_mem_op2_reg_table[uVar4];
      }
      pcVar8 = reg_names[opcode & 7];
      pcVar5 = "%s %s, [%s, %s]";
      goto LAB_080a491c;
    default:
      __sprintf_chk(buffer,1,0xffffffff,"%s %s, %s",t_alu_op_table[(opcode << 0x16) >> 0x1c],
                    reg_names[opcode & 7],reg_names[(opcode << 0x1a) >> 0x1d]);
    }
    break;
  case 3:
    pcVar3 = (char *)((opcode << 0x15) >> 0x1b);
    if ((opcode & 0x1000) == 0) {
      pcVar3 = (char *)((int)pcVar3 << 2);
    }
    pcVar7 = reg_names[(opcode << 0x1a) >> 0x1d];
    pcVar8 = reg_names[opcode & 7];
    pcVar9 = t_mem_op_imm_table[(opcode << 0x13) >> 0x1e];
    pcVar5 = "%s %s, [%s, #%d]";
    goto LAB_080a491c;
  case 4:
    iVar1 = (int)(opcode << 0x14) >> 0x1f;
    if ((opcode & 0x1000) == 0) {
      __sprintf_chk(buffer,1,0xffffffff,"%s %s, [%s, #%d]",t_mem_op2_table[-iVar1],
                    reg_names[opcode & 7],reg_names[(opcode << 0x1a) >> 0x1d],
                    ((opcode << 0x15) >> 0x1b) << 1);
    }
    else {
      __sprintf_chk(buffer,1,0xffffffff,"%s %s, [sp, #%d]",t_mem_op_table[-iVar1],
                    reg_names[(opcode << 0x15) >> 0x1d],(opcode & 0xff) << 2);
    }
    break;
  case 5:
    if ((opcode & 0x1000) == 0) {
      puVar6 = &DAT_08140d58;
      if ((opcode & 0x800) == 0) {
        puVar6 = &DAT_08140d54;
      }
      __sprintf_chk(buffer,1,0xffffffff,"add %s, %s, #%d",reg_names[(opcode << 0x15) >> 0x1d],puVar6
                    ,(opcode & 0xff) << 2);
    }
    else if ((opcode & 0xf00) == 0) {
      if ((opcode & 0x80) == 0) {
        __sprintf_chk(buffer,1,0xffffffff,"add sp, #%d",(opcode & 0x7f) << 2);
      }
      else {
        __sprintf_chk(buffer,1,0xffffffff,"add sp, #-%d",(opcode & 0x7f) << 2);
      }
    }
    else {
      uVar4 = opcode & 0xff;
      if ((opcode & 0x800) == 0) {
        if ((opcode & 0x100) != 0) {
          uVar4 = uVar4 | 0x4000;
        }
        puVar6 = &UNK_08140d4c;
      }
      else if ((opcode & 0x100) == 0) {
        puVar6 = &UNK_08140d48;
      }
      else {
        uVar4 = uVar4 | 0x8000;
        puVar6 = &UNK_08140d48;
      }
      get_rlist(uVar4,rlist_str);
      __sprintf_chk(buffer,1,0xffffffff,"%s %s",puVar6,rlist_str);
    }
    break;
  case 6:
    if ((opcode & 0x1000) == 0) {
      get_rlist(opcode & 0xff,rlist_str);
      __sprintf_chk(buffer,1,0xffffffff,"%sia %s!, %s",
                    t_bmem_op_table[-((int)(opcode << 0x14) >> 0x1f)],
                    reg_names[(opcode << 0x15) >> 0x1d],rlist_str);
    }
    else {
      uVar4 = (opcode << 0x14) >> 0x1c;
      if (uVar4 == 0xf) {
        __sprintf_chk(buffer,1,0xffffffff,"swi %d",opcode & 0xff);
      }
      else {
        __sprintf_chk(buffer,1,0xffffffff,"b%s %x",condition_table[uVar4],pc + 4 + (char)opcode * 2)
        ;
      }
    }
    break;
  case 7:
    uVar4 = (opcode << 0x13) >> 0x1e;
    if (uVar4 == 2) {
      __sprintf_chk(buffer,1,0xffffffff,"bll %x",opcode & 0x7ff);
    }
    else if (uVar4 == 3) {
      __sprintf_chk(buffer,1,0xffffffff,"blh %x",opcode & 0x7ff);
    }
    else if (uVar4 == 1) {
      if ((opcode & 1) == 0) {
        __sprintf_chk(buffer,1,0xffffffff,"blhx %x",opcode & 0x7ff);
      }
      else {
        *(undefined4 *)buffer = 0x65646e75;
        *(undefined4 *)(buffer + 4) = 0x656e6966;
        *(undefined2 *)(buffer + 8) = 100;
      }
    }
    else {
      __sprintf_chk(buffer,1,0xffffffff,&DAT_08140e2c,pc + 4 + ((int)(opcode << 0x16) >> 0x16) * 2);
    }
    break;
  default:
    uVar4 = (opcode << 0x13) >> 0x1e;
    if (uVar4 != 3) {
      __sprintf_chk(buffer,1,0xffffffff,"%s %s, %s, #%d",shift_table[uVar4],reg_names[opcode & 7],
                    reg_names[(opcode << 0x1a) >> 0x1d],(opcode << 0x15) >> 0x1b);
      break;
    }
    iVar1 = (int)(opcode << 0x16) >> 0x1f;
    if ((opcode & 0x400) != 0) {
      uVar4 = (opcode << 0x17) >> 0x1d;
      if (uVar4 == 0) {
        __sprintf_chk(buffer,1,0xffffffff,"mov %s, %s",reg_names[opcode & 7],
                      reg_names[(opcode << 0x1a) >> 0x1d]);
      }
      else {
        __sprintf_chk(buffer,1,0xffffffff,"%s %s, %s, #%d",t_add_sub_table[-iVar1],
                      reg_names[opcode & 7],reg_names[(opcode << 0x1a) >> 0x1d],uVar4);
      }
      break;
    }
    pcVar3 = reg_names[(opcode << 0x17) >> 0x1d];
    pcVar7 = reg_names[(opcode << 0x1a) >> 0x1d];
    pcVar9 = t_add_sub_table[-iVar1];
    pcVar8 = reg_names[opcode & 7];
    pcVar5 = "%s %s, %s, %s";
LAB_080a491c:
    __sprintf_chk(buffer,1,0xffffffff,pcVar5,pcVar9,pcVar8,pcVar7,pcVar3);
  }
  if (iVar2 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


