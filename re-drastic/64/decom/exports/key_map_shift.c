/*
 * Ghidra decompilation
 *
 * Function : key_map_shift
 * Address  : 0018b330
 * Program  : drastic64
 */


ulong key_map_shift(ulong param_1,ulong param_2)

{
  if ((param_2 & 3) != 0) {
    switch((int)param_1) {
    case 0x27:
      return 0x22;
    case 0x2c:
      return 0x3c;
    case 0x2d:
      return 0x5f;
    case 0x2e:
      return 0x3e;
    case 0x2f:
      return 0x3f;
    case 0x30:
      return 0x29;
    case 0x31:
      return 0x21;
    case 0x32:
      return 0x40;
    case 0x33:
      return 0x23;
    case 0x34:
      return 0x24;
    case 0x35:
      return 0x25;
    case 0x36:
      return 0x5e;
    case 0x37:
      return 0x26;
    case 0x38:
      return 0x2a;
    case 0x39:
      return 0x28;
    case 0x3b:
      return 0x3a;
    case 0x3d:
      return 0x2b;
    case 0x5b:
      return 0x7b;
    case 0x5d:
      return 0x7d;
    case 0x60:
      param_1 = 0x7e;
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
      return (ulong)((int)param_1 - 0x20);
    }
  }
  return param_1;
}


