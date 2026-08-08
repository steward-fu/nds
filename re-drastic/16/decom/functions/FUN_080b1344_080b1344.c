/*
 * Ghidra decompilation
 *
 * Function : FUN_080b1344
 * Address  : 080b1344
 * Program  : drastic16
 */


void FUN_080b1344(int param_1,byte *param_2,int param_3)

{
  int local_14;
  byte *local_10;
  
  local_14 = param_3;
  local_10 = param_2;
  while (local_14 != 0) {
    *(short *)(param_1 + 0x1000) = *(short *)(param_1 + 0x1000) + 0x1234;
    *(ushort *)(param_1 + 0x1002) =
         *(ushort *)(param_1 + 0x1002) ^
         (ushort)*(undefined4 *)
                  (param_1 + (((int)(*(ushort *)(param_1 + 0x1000) & 0x1fe) >> 1) + 0x2ba) * 4 + 4);
    *(short *)(param_1 + 0x1004) =
         *(short *)(param_1 + 0x1004) -
         (short)((uint)*(undefined4 *)
                        (param_1 + (((int)(*(ushort *)(param_1 + 0x1000) & 0x1fe) >> 1) + 0x2ba) * 4
                        + 4) >> 0x10);
    *(ushort *)(param_1 + 0x1000) = *(ushort *)(param_1 + 0x1000) ^ *(ushort *)(param_1 + 0x1004);
    *(ushort *)(param_1 + 0x1006) =
         ((ushort)((int)(uint)*(ushort *)(param_1 + 0x1006) >> 1) |
         (ushort)((*(ushort *)(param_1 + 0x1006) & 1) << 0xf)) ^ *(ushort *)(param_1 + 0x1002);
    *(ushort *)(param_1 + 0x1006) =
         (ushort)((int)(uint)*(ushort *)(param_1 + 0x1006) >> 1) |
         (ushort)((*(ushort *)(param_1 + 0x1006) & 1) << 0xf);
    *(ushort *)(param_1 + 0x1000) = *(ushort *)(param_1 + 0x1000) ^ *(ushort *)(param_1 + 0x1006);
    *local_10 = *local_10 ^ (byte)((ushort)*(undefined2 *)(param_1 + 0x1000) >> 8);
    local_10 = local_10 + 1;
    local_14 = local_14 + -1;
  }
  return;
}


