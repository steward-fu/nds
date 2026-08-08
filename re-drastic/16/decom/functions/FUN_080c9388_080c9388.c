/*
 * Ghidra decompilation
 *
 * Function : FUN_080c9388
 * Address  : 080c9388
 * Program  : drastic16
 */


void FUN_080c9388(undefined4 param_1,ushort *param_2,void *param_3)

{
  ushort *local_18;
  int local_10;
  int local_c;
  
  local_18 = param_2;
  for (local_c = 7; -1 < local_c; local_c = local_c + -1) {
    for (local_10 = 0; local_10 < 0x20; local_10 = local_10 + 1) {
      *local_18 = *local_18 & 0xff00 | (ushort)local_c;
      local_18 = local_18 + 1;
    }
  }
  memset(param_3,0,0x100);
  for (local_c = 6; -1 < local_c; local_c = local_c + -1) {
    *(char *)((int)param_3 + local_c) = (char)((7U - local_c & 0xff) << 5);
  }
  return;
}


