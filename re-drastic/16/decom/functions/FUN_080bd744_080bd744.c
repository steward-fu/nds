/*
 * Ghidra decompilation
 *
 * Function : FUN_080bd744
 * Address  : 080bd744
 * Program  : drastic16
 */


void FUN_080bd744(int param_1,int param_2)

{
  uint local_1c;
  uint local_18;
  uint local_14;
  undefined8 local_10;
  
  *(int *)(param_1 + 0x28) = param_1 + 0x2c;
  local_10 = VectorShiftLeft(*(undefined8 *)(param_1 + 0x20),3,0x40,0);
  local_14 = *(uint *)(param_1 + 0x20) & 0x3f;
  *(undefined *)(param_1 + local_14 + 0x2c) = 0x80;
  while (local_14 = local_14 + 1, local_14 != 0x38) {
    local_14 = local_14 & 0x3f;
    if (local_14 == 0) {
      FUN_080bcfb0(param_1);
    }
    *(undefined *)(param_1 + local_14 + 0x2c) = 0;
  }
  for (local_18 = 0; local_18 < 8; local_18 = local_18 + 1) {
    *(char *)(param_1 + local_14 + 0x2c) = (char)((ulonglong)local_10 >> 0x38);
    local_10 = VectorShiftLeft(local_10,8,0x40,0);
    local_14 = local_14 + 1;
  }
  FUN_080bcfb0(param_1);
  for (local_1c = 0; local_1c < 0x20; local_1c = local_1c + 1) {
    *(char *)(param_2 + local_1c) =
         (char)(*(uint *)(param_1 + (local_1c & 0xfffffffc)) >> ((~local_1c & 3) << 3));
  }
  FUN_080bcf08(param_1);
  FUN_080bcfb0(0);
  FUN_080b7588(param_1 + 0x2c,0x40);
  return;
}


