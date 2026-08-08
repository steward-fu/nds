/*
 * Ghidra decompilation
 *
 * Function : FUN_080cf4e4
 * Address  : 080cf4e4
 * Program  : drastic16
 */


void FUN_080cf4e4(undefined4 param_1,int param_2,int param_3,uint param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  uint local_24;
  uint local_10;
  uint local_c;
  
  uVar2 = param_4;
  if ((int)param_4 < 0) {
    uVar2 = param_4 + 7;
  }
  iVar1 = (int)uVar2 >> 3;
  local_c = ~((0xffffffffU >> (0x20U - param_5 & 0xff)) << (param_4 & 7));
  local_24 = param_3 << (param_4 & 7);
  for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
    *(byte *)(param_2 + iVar1 + local_10) = *(byte *)(param_2 + iVar1 + local_10) & (byte)local_c;
    *(byte *)(param_2 + iVar1 + local_10) = *(byte *)(param_2 + iVar1 + local_10) | (byte)local_24;
    local_c = local_c >> 8 | 0xff000000;
    local_24 = local_24 >> 8;
  }
  return;
}


