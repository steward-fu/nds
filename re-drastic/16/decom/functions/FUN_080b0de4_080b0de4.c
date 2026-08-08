/*
 * Ghidra decompilation
 *
 * Function : FUN_080b0de4
 * Address  : 080b0de4
 * Program  : drastic16
 */


ulonglong FUN_080b0de4(uint *param_1)

{
  uint *local_14;
  undefined8 local_10;
  
  local_10 = 0;
  for (local_14 = param_1; (0x2f < *local_14 && (*local_14 < 0x3a)); local_14 = local_14 + 1) {
    local_10 = (local_10 & 0xffffffff) * 10 + CONCAT44(local_10._4_4_ * 10,*local_14 - 0x30);
  }
  return local_10;
}


