/*
 * Ghidra decompilation
 *
 * Function : FUN_0801cd34
 * Address  : 0801cd34
 * Program  : drastic16
 */


uint FUN_0801cd34(uint param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  int aiStack_78 [23];
  undefined4 uStack_1c;
  
  *param_2 = 0;
  switch((param_1 << 0x10) >> 0x1d) {
  case 1:
    uVar2 = (param_1 << 0x15) >> 0x1d;
    aiStack_78[8] = 0xd;
    aiStack_78[9] = 10;
    aiStack_78[10] = 4;
    aiStack_78[11] = 2;
    if (aiStack_78[((param_1 << 0x13) >> 0x1e) + 8] == 0xd) {
      uVar2 = param_1 & 0xff | 0xe3b00000 | uVar2 << 0xc;
    }
    else {
      uVar2 = param_1 & 0xff | 0xe2100000 | uVar2 << 0xc | uVar2 << 0x10 |
              aiStack_78[((param_1 << 0x13) >> 0x1e) + 8] << 0x15;
    }
    return uVar2;
  case 2:
    uVar1 = param_1 >> 10;
    switch(uVar1 & 7) {
    case 1:
      uVar1 = (param_1 << 0x16) >> 0x1e;
      uVar2 = (param_1 << 0x19) >> 0x1c;
      if (uVar1 == 2) {
        uVar2 = uVar2 | 0xe1a00000 | (param_1 & 7 | ((param_1 << 0x18) >> 0x1f) << 3) << 0xc;
      }
      else if (uVar1 == 3) {
        uVar2 = uVar2 | 0xe12fff10 | ((param_1 << 0x18) >> 0x1f) << 5;
      }
      else if (uVar1 == 1) {
        uVar2 = uVar2 | 0xe1500000 | (param_1 & 7 | ((param_1 << 0x18) >> 0x1f) << 3) << 0x10;
      }
      else {
        uVar1 = param_1 & 7 | ((param_1 << 0x18) >> 0x1f) << 3;
        uVar2 = uVar2 | 0xe0800000 | uVar1 << 0xc | uVar1 << 0x10;
      }
      break;
    case 2:
    case 3:
      *param_2 = 1;
      uVar2 = (param_1 & 0xff) << 2 | 0xe59f0000 | ((param_1 << 0x15) >> 0x1d) << 0xc;
      break;
    case 4:
    case 5:
    case 6:
    case 7:
      uVar3 = (param_1 << 0x1a) >> 0x1d;
      uVar4 = (param_1 << 0x17) >> 0x1d;
      if ((param_1 & 0x200) == 0) {
        uVar2 = uVar4 | (param_1 & 7) << 0xc | 0xe7800000 | uVar3 << 0x10 |
                ((param_1 << 0x14) >> 0x1f) << 0x14 | (uVar1 & 1) << 0x16;
      }
      else {
        if ((uVar1 & 3) == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = 0x100000;
        }
        aiStack_78[8] = 1;
        aiStack_78[9] = 2;
        aiStack_78[10] = 1;
        aiStack_78[11] = 3;
        uVar2 = uVar4 | (param_1 & 7) << 0xc | 0xe1800090 | uVar3 << 0x10 |
                aiStack_78[(uVar1 & 3) + 8] << 5 | uVar2;
      }
      break;
    default:
      uVar2 = (param_1 << 0x16) >> 0x1c;
      uVar1 = param_1 & 7;
      uVar4 = (param_1 << 0x1a) >> 0x1d;
      switch(uVar2 - 2) {
      case 0:
      case 1:
      case 2:
      case 5:
        aiStack_78[8] = 0;
        aiStack_78[9] = 1;
        aiStack_78[10] = 2;
        aiStack_78[11] = 0;
        aiStack_78[12] = 0;
        aiStack_78[13] = 3;
        uVar2 = uVar1 | 0xe1b00010 | uVar1 << 0xc | uVar4 << 8 | aiStack_78[uVar2 + 6] << 5;
        break;
      default:
        aiStack_78[8] = 0;
        aiStack_78[9] = 1;
        aiStack_78[10] = 0;
        aiStack_78[11] = 0;
        aiStack_78[12] = 0;
        aiStack_78[13] = 5;
        aiStack_78[14] = 6;
        aiStack_78[15] = 0;
        aiStack_78[16] = 0;
        aiStack_78[17] = 0;
        aiStack_78[18] = 0;
        aiStack_78[19] = 0;
        aiStack_78[20] = 0xc;
        aiStack_78[21] = 0;
        aiStack_78[22] = 0xe;
        uStack_1c = 0;
        uVar2 = uVar4 | uVar1 << 0xc | 0xe0100000 | uVar1 << 0x10 | aiStack_78[uVar2 + 8] << 0x15;
        break;
      case 6:
      case 8:
      case 9:
        aiStack_78[8] = 8;
        aiStack_78[9] = 0;
        aiStack_78[10] = 10;
        aiStack_78[11] = 0xb;
        uVar2 = uVar4 | uVar1 << 0x10 | 0xe0100000 | aiStack_78[uVar2] << 0x15;
        break;
      case 7:
        uVar2 = uVar1 << 0xc | 0xe2700000 | uVar4 << 0x10;
        break;
      case 0xb:
        uVar2 = uVar1 | 0xe0100090 | uVar1 << 0x10 | uVar4 << 8;
        break;
      case 0xd:
        uVar2 = uVar4 | uVar1 << 0xc | 0xe1f00000;
      }
    }
    break;
  case 3:
    uVar2 = (param_1 << 0x15) >> 0x1b;
    if (-1 < (int)(param_1 << 0x13)) {
      uVar2 = uVar2 << 2;
    }
    return (param_1 & 7) << 0xc | 0xe5800000 | ((param_1 << 0x1a) >> 0x1d) << 0x10 |
           ((param_1 << 0x14) >> 0x1f) << 0x14 | ((int)(param_1 << 0x13) >> 0x1f) * -0x400000 |
           uVar2;
  case 4:
    uVar2 = (param_1 << 0x14) >> 0x1f;
    if ((param_1 & 0x1000) == 0) {
      uVar1 = ((param_1 << 0x15) >> 0x1b) << 1;
      uVar2 = (param_1 & 7) << 0xc | 0xe1c000b0 | ((param_1 << 0x1a) >> 0x1d) << 0x10 |
              uVar2 << 0x14 | uVar1 & 0xf | ((int)uVar1 >> 4) << 8;
    }
    else {
      uVar2 = (param_1 & 0xff) << 2 | 0xe58d0000 | ((param_1 << 0x15) >> 0x1d) << 0xc |
              uVar2 << 0x14;
    }
    break;
  case 5:
    if ((param_1 & 0x1000) == 0) {
      bVar5 = (param_1 & 0x800) == 0;
      if (bVar5) {
        uVar2 = param_1 & 0xff | 0xe28f0f00;
      }
      else {
        uVar2 = param_1 & 0xff | 0xe28d0f00;
      }
      if (bVar5) {
        *param_2 = (uint)bVar5;
      }
      uVar2 = uVar2 | ((param_1 << 0x15) >> 0x1d) << 0xc;
    }
    else if ((param_1 & 0xf00) == 0) {
      if ((param_1 & 0x80) == 0) {
        uVar2 = 0xe28ddf00;
      }
      else {
        uVar2 = 0xe24ddf00;
      }
      uVar2 = param_1 & 0x7f | uVar2;
    }
    else {
      uVar2 = param_1 & 0xff;
      if ((param_1 & 0x800) == 0) {
        if ((param_1 & 0x100) != 0) {
          uVar2 = uVar2 | 0x4000;
        }
        uVar2 = uVar2 | 0xe92d0000;
      }
      else {
        if ((param_1 & 0x100) != 0) {
          uVar2 = uVar2 | 0x8000;
        }
        uVar2 = uVar2 | 0xe8bd0000;
      }
    }
    break;
  case 6:
    if ((param_1 & 0x1000) == 0) {
      uVar2 = param_1 & 0xff | 0xe8a00000 | ((param_1 << 0x15) >> 0x1d) << 0x10 |
              ((param_1 << 0x14) >> 0x1f) << 0x14;
    }
    else if ((param_1 << 0x14) >> 0x1c == 0xf) {
      uVar2 = param_1 & 0xff | 0xef000000;
    }
    else {
      uVar2 = param_1 << 0x14 & 0xf0000000 | 0xa000000 | (int)(char)param_1 & 0xffffffU;
    }
    break;
  case 7:
    if (((param_1 << 0x13) >> 0x1e) - 1 < 3) {
      uVar2 = param_1 << 5 | 0xe6000010;
    }
    else {
      uVar2 = (int)(param_1 << 0x15) >> 0x15 & 0xffffffU | 0xea000000;
    }
    return uVar2;
  default:
    uVar2 = (param_1 << 0x13) >> 0x1e;
    if (uVar2 == 3) {
      uVar1 = (param_1 << 0x17) >> 0x1d | (param_1 & 7) << 0xc;
      if ((param_1 & 0x200) == 0) {
        uVar2 = 0x800000;
      }
      else {
        uVar2 = 0x400000;
      }
      if ((param_1 & 0x400) == 0) {
        uVar1 = uVar1 | 0xe0000000;
      }
      else {
        uVar1 = uVar1 | 0xe2000000;
      }
      uVar2 = uVar1 | 0x100000 | ((param_1 << 0x1a) >> 0x1d) << 0x10 | uVar2;
    }
    else {
      uVar2 = (param_1 << 0x1a) >> 0x1d | (param_1 & 7) << 0xc | 0xe1b00000 | uVar2 << 5 |
              ((param_1 << 0x15) >> 0x1b) << 7;
    }
  }
  return uVar2;
}


