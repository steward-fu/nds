/*
 * Ghidra decompilation
 *
 * Function : FUN_080db7bc
 * Address  : 080db7bc
 * Program  : drastic16
 */


void FUN_080db7bc(int param_1,int param_2)

{
  if (param_2 == 2) {
    if (*(int *)(param_1 + 0xc23c) != 2) {
      FUN_080a6080(&DAT_080eead8,&DAT_080eeb30,4);
    }
    if (*(char *)(param_1 + 0xc292) != '\0') {
      FUN_080a6080(&DAT_080eead8,&DAT_080eeb40,4);
    }
    if (*(int *)(param_1 + 0x4010) != 1) {
      FUN_080a6080(&DAT_080eead8,&DAT_080eeb50,4);
    }
  }
  return;
}


