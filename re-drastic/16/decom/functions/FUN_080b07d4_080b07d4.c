/*
 * Ghidra decompilation
 *
 * Function : FUN_080b07d4
 * Address  : 080b07d4
 * Program  : drastic16
 */


undefined FUN_080b07d4(byte *param_1,uint *param_2,int param_3)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  uint *local_20;
  byte *local_1c;
  uint local_14;
  int local_10;
  undefined local_9;
  
  local_9 = 1;
  local_10 = param_3 + -1;
  local_20 = param_2;
  local_1c = param_1;
  do {
    if (*local_1c == 0) {
LAB_080b0ae4:
      if (local_20 != (uint *)0x0) {
        *local_20 = 0;
      }
      return local_9;
    }
    pbVar3 = local_1c + 1;
    bVar1 = *local_1c;
    local_14 = (uint)bVar1;
    if (0x7f < local_14) {
      if (bVar1 >> 5 == 6) {
        if ((*pbVar3 & 0xc0) != 0x80) {
          local_9 = 0;
          goto LAB_080b0ae4;
        }
        local_14 = (local_14 & 0x1f) << 6 | *pbVar3 & 0x3f;
        pbVar3 = local_1c + 2;
      }
      else if (bVar1 >> 4 == 0xe) {
        if (((*pbVar3 & 0xc0) != 0x80) || ((local_1c[2] & 0xc0) != 0x80)) {
          local_9 = 0;
          goto LAB_080b0ae4;
        }
        local_14 = (local_14 & 0xf) << 0xc | (*pbVar3 & 0x3f) << 6 | local_1c[2] & 0x3f;
        pbVar3 = local_1c + 3;
      }
      else {
        if (bVar1 >> 3 != 0x1e) {
          local_9 = 0;
          goto LAB_080b0ae4;
        }
        if ((((*pbVar3 & 0xc0) != 0x80) || ((local_1c[2] & 0xc0) != 0x80)) ||
           ((local_1c[3] & 0xc0) != 0x80)) {
          local_9 = 0;
          goto LAB_080b0ae4;
        }
        local_14 = (local_14 & 7) << 0x12 | (*pbVar3 & 0x3f) << 0xc | (local_1c[2] & 0x3f) << 6 |
                   local_1c[3] & 0x3f;
        pbVar3 = local_1c + 4;
      }
    }
    local_1c = pbVar3;
    if ((local_20 == (uint *)0x0) || (local_10 = local_10 + -1, -1 < local_10)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_080b0ae4;
    if (local_14 < 0x10000) {
      if (local_20 != (uint *)0x0) {
        *local_20 = local_14;
        local_20 = local_20 + 1;
      }
    }
    else {
      if ((local_20 == (uint *)0x0) || (local_10 = local_10 + -1, -1 < local_10)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) goto LAB_080b0ae4;
      if (local_14 < 0x110000) {
        if (local_20 != (uint *)0x0) {
          *local_20 = local_14;
          local_20 = local_20 + 1;
        }
      }
      else {
        local_9 = 0;
      }
    }
  } while( true );
}


