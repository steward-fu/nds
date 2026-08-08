/*
 * Ghidra decompilation
 *
 * Function : FUN_080aeec0
 * Address  : 080aeec0
 * Program  : drastic16
 */


void FUN_080aeec0(int param_1,int param_2)

{
  int *local_c;
  
  if (((*(int *)(param_1 + 0x10e98) == 2) && (*(byte *)(param_2 + 0x19) < 0x14)) &&
     ((*(uint *)(param_2 + 0x1c) & 0x10) != 0)) {
    *(undefined *)(param_2 + 0x20e1) = 1;
  }
  if (*(int *)(param_2 + 0x20ec) == 2) {
    if (*(char *)(param_2 + 0x20e1) == '\0') {
      *(undefined4 *)(param_2 + 0x1c) = 0x20;
    }
    else {
      *(undefined4 *)(param_2 + 0x1c) = 0x10;
    }
  }
  for (local_c = (int *)(param_2 + 0x20); *local_c != 0; local_c = local_c + 1) {
    if (((*local_c == 0x5c) && (*(int *)(param_1 + 0x10e98) == 3)) &&
       (*(int *)(param_2 + 0x20ec) == 0)) {
      *local_c = 0x5f;
    }
    if ((*local_c == 0x2f) || ((*local_c == 0x5c && (*(int *)(param_1 + 0x10e98) != 3)))) {
      *local_c = 0x2f;
    }
  }
  return;
}


