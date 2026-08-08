/*
 * Ghidra decompilation
 *
 * Function : FUN_080bcd18
 * Address  : 080bcd18
 * Program  : drastic16
 */


void FUN_080bcd18(int param_1,int param_2,char param_3)

{
  undefined local_19;
  undefined auStack_18 [8];
  undefined auStack_10 [4];
  uint local_c;
  
  for (local_c = 0; local_c < 8; local_c = local_c + 1) {
    auStack_18[local_c] =
         (char)(*(uint *)(param_1 + ((local_c < 4) + 4) * 4 + 4) >> ((~local_c & 3) << 3));
  }
  local_19 = 0x80;
  FUN_080bcae4(param_1,&local_19,1,param_3);
  while ((*(uint *)(param_1 + 0x14) & 0x1f8) != 0x1c0) {
    local_19 = 0;
    FUN_080bcae4(param_1,&local_19,1,param_3);
  }
  FUN_080bcae4(param_1,auStack_18,8,param_3);
  for (local_c = 0; local_c < 5; local_c = local_c + 1) {
    *(undefined4 *)(param_2 + local_c * 4) = *(undefined4 *)(param_1 + local_c * 4);
  }
  FUN_080b7588(&local_c,4);
  FUN_080b7588(auStack_10,4);
  FUN_080b7588(param_1 + 0x1c,0x40);
  FUN_080b7588(param_1,0x14);
  FUN_080b7588(param_1 + 0x14,8);
  FUN_080b7588(auStack_18,8);
  if (param_3 != '\0') {
    memset((void *)(param_1 + 0x5c),0,0x40);
  }
  return;
}


