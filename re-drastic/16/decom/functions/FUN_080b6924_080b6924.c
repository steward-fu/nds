/*
 * Ghidra decompilation
 *
 * Function : FUN_080b6924
 * Address  : 080b6924
 * Program  : drastic16
 */


undefined4 FUN_080b6924(int param_1,uint param_2)

{
  bool bVar1;
  char cVar2;
  uint local_10;
  uint local_c;
  
  local_c = 0;
  do {
    if (param_2 <= local_c) {
      return 0;
    }
    if ((*(int *)(param_1 + local_c * 4) == 0x1b) && (*(int *)(param_1 + (local_c + 1) * 4) == 0x5b)
       ) {
      for (local_10 = local_c + 2; local_10 < param_2; local_10 = local_10 + 1) {
        if (*(int *)(param_1 + local_10 * 4) == 0x22) {
          return 1;
        }
        cVar2 = FUN_080a0128(*(undefined4 *)(param_1 + local_10 * 4));
        if ((cVar2 == '\x01') || (*(int *)(param_1 + local_10 * 4) == 0x3b)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) break;
      }
    }
    local_c = local_c + 1;
  } while( true );
}


