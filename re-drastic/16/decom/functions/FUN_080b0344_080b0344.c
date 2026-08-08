/*
 * Ghidra decompilation
 *
 * Function : FUN_080b0344
 * Address  : 080b0344
 * Program  : drastic16
 */


void FUN_080b0344(uint *param_1,byte *param_2,int param_3)

{
  bool bVar1;
  uint *puVar2;
  byte *pbVar3;
  byte *local_18;
  uint *local_14;
  uint local_10;
  int local_c;
  
  local_c = param_3 + -1;
  local_18 = param_2;
  local_14 = param_1;
  while( true ) {
    if ((*local_14 == 0) || (local_c = local_c + -1, local_c < 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) break;
    puVar2 = local_14 + 1;
    local_10 = *local_14;
    if (local_10 < 0x80) {
      *local_18 = (byte)local_10;
      local_18 = local_18 + 1;
      local_14 = puVar2;
    }
    else {
      if ((local_10 < 0x800) && (local_c = local_c + -1, -1 < local_c)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (bVar1) {
        pbVar3 = local_18 + 1;
        *local_18 = ~((byte)~(byte)(((local_10 >> 6) << 0x1a) >> 0x18) >> 2);
        local_18 = local_18 + 2;
        *pbVar3 = ~((byte)~(byte)(((local_10 & 0x3f) << 0x19) >> 0x18) >> 1);
        local_14 = puVar2;
      }
      else {
        if ((((0xd7ff < local_10) && (local_10 < 0xdc00)) && (0xdbff < *puVar2)) &&
           (*puVar2 < 0xe000)) {
          local_10 = (local_10 - 0xd800) * 0x400 + *puVar2 + 0x2400;
          puVar2 = local_14 + 2;
        }
        local_14 = puVar2;
        if ((local_10 < 0x10000) && (local_c = local_c + -2, -1 < local_c)) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (bVar1) {
          *local_18 = ~((byte)~(byte)(((local_10 >> 0xc) << 0x1b) >> 0x18) >> 3);
          pbVar3 = local_18 + 2;
          local_18[1] = ~((byte)~(byte)(((local_10 >> 6 & 0x3f) << 0x19) >> 0x18) >> 1);
          local_18 = local_18 + 3;
          *pbVar3 = ~((byte)~(byte)(((local_10 & 0x3f) << 0x19) >> 0x18) >> 1);
        }
        else {
          if ((local_10 < 0x200000) && (local_c = local_c + -3, -1 < local_c)) {
            bVar1 = true;
          }
          else {
            bVar1 = false;
          }
          if (bVar1) {
            *local_18 = ~((byte)~(byte)(((local_10 >> 0x12) << 0x1c) >> 0x18) >> 4);
            local_18[1] = ~((byte)~(byte)(((local_10 >> 0xc & 0x3f) << 0x19) >> 0x18) >> 1);
            pbVar3 = local_18 + 3;
            local_18[2] = ~((byte)~(byte)(((local_10 >> 6 & 0x3f) << 0x19) >> 0x18) >> 1);
            local_18 = local_18 + 4;
            *pbVar3 = ~((byte)~(byte)(((local_10 & 0x3f) << 0x19) >> 0x18) >> 1);
          }
        }
      }
    }
  }
  *local_18 = 0;
  return;
}


