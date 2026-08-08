/*
 * Ghidra decompilation
 *
 * Function : key_map_shift
 * Address  : 080a933c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

u32 key_map_shift(u32 key,u32 mod)

{
  if ((mod & 3) != 0) {
    switch(key) {
    case 0x27:
      key = 0x22;
      break;
    case 0x2c:
      key = 0x3c;
      break;
    case 0x2d:
      key = 0x5f;
      break;
    case 0x2e:
      key = 0x3e;
      break;
    case 0x2f:
      key = 0x3f;
      break;
    case 0x30:
      key = 0x29;
      break;
    case 0x31:
      key = 0x21;
      break;
    case 0x32:
      key = 0x40;
      break;
    case 0x33:
      key = 0x23;
      break;
    case 0x34:
      key = 0x24;
      break;
    case 0x35:
      key = 0x25;
      break;
    case 0x36:
      key = 0x5e;
      break;
    case 0x37:
      key = 0x26;
      break;
    case 0x38:
      key = 0x2a;
      break;
    case 0x39:
      key = 0x28;
      break;
    case 0x3b:
      key = 0x3a;
      break;
    case 0x3d:
      key = 0x2b;
      break;
    case 0x5b:
      key = 0x7b;
      break;
    case 0x5d:
      key = 0x7d;
      break;
    case 0x60:
      key = 0x7e;
      break;
    case 0x61:
    case 0x62:
    case 99:
    case 100:
    case 0x65:
    case 0x66:
    case 0x67:
    case 0x68:
    case 0x69:
    case 0x6a:
    case 0x6b:
    case 0x6c:
    case 0x6d:
    case 0x6e:
    case 0x6f:
    case 0x70:
    case 0x71:
    case 0x72:
    case 0x73:
    case 0x74:
    case 0x75:
    case 0x76:
    case 0x77:
    case 0x78:
    case 0x79:
    case 0x7a:
      key = key - 0x20;
    }
  }
  return key;
}


