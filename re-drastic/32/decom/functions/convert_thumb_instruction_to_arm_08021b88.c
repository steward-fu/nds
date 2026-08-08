/*
 * Ghidra decompilation
 *
 * Function : convert_thumb_instruction_to_arm
 * Address  : 08021b88
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

u32 convert_thumb_instruction_to_arm(u32 opcode,u32 *_align_pc)

{
  int iVar1;
  u32 uVar2;
  u32 dest;
  u32 dest_2;
  u32 dest_1;
  u32 dest_3;
  u32 dest_4;
  uint uVar3;
  u32 dest_5;
  uint uVar4;
  u32 sub_op;
  s32 _imm_1;
  u32 condition;
  s32 _imm;
  u32 rlist;
  u32 rm;
  uint uVar5;
  u32 size_op;
  uint uVar6;
  u32 size_op_1;
  u32 rd;
  int aiStack_84 [8];
  u32 op_table [4];
  
  iVar1 = __stack_chk_guard;
  *_align_pc = 0;
  switch((opcode << 0x10) >> 0x1d) {
  case 1:
    uVar4 = (opcode << 0x15) >> 0x1d;
    op_table[0] = 0xd;
    op_table[1] = 10;
    op_table[2] = 4;
    op_table[3] = 2;
    if (op_table[(opcode << 0x13) >> 0x1e] == 0xd) {
      uVar2 = opcode & 0xff | 0xe3b00000 | uVar4 << 0xc;
    }
    else {
      uVar2 = opcode & 0xff | 0xe2100000 | uVar4 << 0xc | uVar4 << 0x10 |
              op_table[(opcode << 0x13) >> 0x1e] << 0x15;
    }
    break;
  case 2:
    uVar4 = opcode >> 10;
    switch(uVar4 & 7) {
    case 1:
      uVar5 = (opcode << 0x16) >> 0x1e;
      uVar4 = (opcode << 0x19) >> 0x1c;
      if (uVar5 == 2) {
        uVar2 = uVar4 | 0xe1a00000 | (opcode & 7 | ((opcode << 0x18) >> 0x1f) << 3) << 0xc;
      }
      else if (uVar5 == 3) {
        uVar2 = uVar4 | 0xe12fff10 | ((opcode << 0x18) >> 0x1f) << 5;
      }
      else {
        uVar6 = (opcode << 0x18) >> 0x1f;
        if (uVar5 == 1) {
          uVar2 = uVar4 | 0xe1500000 | (opcode & 7 | uVar6 << 3) << 0x10;
        }
        else {
          uVar5 = opcode & 7 | uVar6 << 3;
          uVar2 = uVar4 | 0xe0800000 | uVar5 << 0xc | uVar5 << 0x10;
        }
      }
      break;
    case 2:
    case 3:
      uVar2 = (opcode & 0xff) << 2 | 0xe59f0000 | ((opcode << 0x15) >> 0x1d) << 0xc;
      *_align_pc = 1;
      break;
    case 4:
    case 5:
    case 6:
    case 7:
      uVar6 = (opcode << 0x1a) >> 0x1d;
      uVar5 = (opcode << 0x17) >> 0x1d;
      if ((opcode & 0x200) == 0) {
        uVar2 = uVar5 | (opcode & 7) << 0xc | 0xe7800000 | uVar6 << 0x10 |
                ((opcode << 0x14) >> 0x1f) << 0x14 | (uVar4 & 1) << 0x16;
      }
      else {
        uVar4 = uVar4 & 3;
        uVar3 = uVar4;
        if (uVar4 != 0) {
          uVar3 = 1;
        }
        op_table[0] = 1;
        op_table[1] = 2;
        op_table[2] = 1;
        op_table[3] = 3;
        uVar2 = uVar5 | (opcode & 7) << 0xc | 0xe1800090 | uVar6 << 0x10 | op_table[uVar4] << 5 |
                uVar3 << 0x14;
      }
      break;
    default:
      uVar5 = (opcode << 0x16) >> 0x1c;
      uVar6 = opcode & 7;
      uVar4 = (opcode << 0x1a) >> 0x1d;
      switch(uVar5 - 2) {
      case 0:
      case 1:
      case 2:
      case 5:
        op_table[0] = 0;
        op_table[1] = 1;
        op_table[2] = 2;
        op_table[3] = 0;
        uVar2 = uVar6 | 0xe1b00010 | uVar6 << 0xc | uVar4 << 8 | op_table[uVar5 - 2] << 5;
        break;
      default:
        op_table[0] = 0;
        op_table[1] = 1;
        op_table[2] = 0;
        op_table[3] = 0;
        uVar2 = uVar4 | uVar6 << 0xc | 0xe0100000 | uVar6 << 0x10 | op_table[uVar5] << 0x15;
        break;
      case 6:
      case 8:
      case 9:
        op_table[0] = 8;
        op_table[1] = 0;
        op_table[2] = 10;
        op_table[3] = 0xb;
        uVar2 = uVar4 | uVar6 << 0x10 | 0xe0100000 | aiStack_84[uVar5] << 0x15;
        break;
      case 7:
        uVar2 = uVar6 << 0xc | 0xe2700000 | uVar4 << 0x10;
        break;
      case 0xb:
        uVar2 = uVar6 | 0xe0100090 | uVar6 << 0x10 | uVar4 << 8;
        break;
      case 0xd:
        uVar2 = uVar4 | uVar6 << 0xc | 0xe1f00000;
      }
    }
    break;
  case 3:
    _imm = (opcode << 0x15) >> 0x1b;
    if (-1 < (int)(opcode << 0x13)) {
      _imm = _imm << 2;
    }
    uVar2 = (opcode & 7) << 0xc | 0xe5800000 | ((opcode << 0x1a) >> 0x1d) << 0x10 |
            ((opcode << 0x14) >> 0x1f) << 0x14 | ((int)(opcode << 0x13) >> 0x1f) * -0x400000 | _imm;
    break;
  case 4:
    uVar4 = (opcode << 0x14) >> 0x1f;
    if ((opcode & 0x1000) == 0) {
      uVar5 = ((opcode << 0x15) >> 0x1b) << 1;
      uVar2 = (opcode & 7) << 0xc | 0xe1c000b0 | ((opcode << 0x1a) >> 0x1d) << 0x10 | uVar4 << 0x14
              | uVar5 & 0xf | ((int)uVar5 >> 4) << 8;
    }
    else {
      uVar2 = (opcode & 0xff) << 2 | 0xe58d0000 | ((opcode << 0x15) >> 0x1d) << 0xc | uVar4 << 0x14;
    }
    break;
  case 5:
    if ((opcode & 0x1000) == 0) {
      uVar4 = (opcode << 0x15) >> 0x1d;
      if ((opcode & 0x800) == 0) {
        uVar2 = opcode & 0xff | 0xe28f0f00 | uVar4 << 0xc;
        *_align_pc = 1;
      }
      else {
        uVar2 = opcode & 0xff | 0xe28d0f00 | uVar4 << 0xc;
      }
    }
    else if ((opcode & 0xf00) == 0) {
      if ((opcode & 0x80) == 0) {
        uVar4 = 0xe28ddf00;
      }
      else {
        uVar4 = 0xe24ddf00;
      }
      uVar2 = opcode & 0x7f | uVar4;
    }
    else {
      uVar4 = opcode & 0xff;
      if ((opcode & 0x800) == 0) {
        if ((opcode & 0x100) != 0) {
          uVar4 = uVar4 | 0x4000;
        }
        uVar2 = uVar4 | 0xe92d0000;
      }
      else {
        if ((opcode & 0x100) != 0) {
          uVar4 = uVar4 | 0x8000;
        }
        uVar2 = uVar4 | 0xe8bd0000;
      }
    }
    break;
  case 6:
    if ((opcode & 0x1000) == 0) {
      uVar2 = opcode & 0xff | 0xe8a00000 | ((opcode << 0x15) >> 0x1d) << 0x10 |
              ((opcode << 0x14) >> 0x1f) << 0x14;
    }
    else if ((opcode << 0x14) >> 0x1c == 0xf) {
      uVar2 = (opcode & 0xff) << 0x10 | 0xef000000;
    }
    else {
      uVar2 = opcode << 0x14 & 0xf0000000 | 0xa000000 | (int)(char)opcode & 0xffffffU;
    }
    break;
  case 7:
    if (((opcode << 0x13) >> 0x1e) - 1 < 3) {
      uVar2 = opcode << 5 | 0xe6000010;
    }
    else {
      uVar2 = (int)(opcode << 0x15) >> 0x15 & 0xffffffU | 0xea000000;
    }
    break;
  default:
    uVar4 = (opcode << 0x13) >> 0x1e;
    if (uVar4 == 3) {
      if ((opcode & 0x200) == 0) {
        uVar4 = 0x800000;
      }
      else {
        uVar4 = 0x400000;
      }
      uVar5 = (opcode << 0x1a) >> 0x1d;
      if ((opcode & 0x400) == 0) {
        uVar2 = (opcode << 0x17) >> 0x1d | (opcode & 7) << 0xc | 0xe0100000 | uVar5 << 0x10 | uVar4;
      }
      else {
        uVar2 = (opcode << 0x17) >> 0x1d | (opcode & 7) << 0xc | 0xe2100000 | uVar5 << 0x10 | uVar4;
      }
    }
    else {
      uVar2 = (opcode << 0x1a) >> 0x1d | (opcode & 7) << 0xc | 0xe1b00000 | uVar4 << 5 |
              ((opcode << 0x15) >> 0x1b) << 7;
    }
  }
  if (iVar1 == __stack_chk_guard) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


