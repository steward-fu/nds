/*
 * Ghidra decompilation
 *
 * Function : FUN_080a40ec
 * Address  : 080a40ec
 * Program  : drastic16
 */


bool FUN_080a40ec(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  FILE *pFVar2;
  char acStack_80c [2050];
  undefined local_a;
  char local_9;
  
  local_9 = (param_3 & 2) != 0;
  if (((param_3 & 8) == 0) && (*(char *)(param_1 + 0x15) == '\0')) {
    local_a = 0;
  }
  else {
    local_a = 1;
  }
  FUN_080afbc8(param_2,acStack_80c,0x800);
  if (local_9 == '\0') {
    uVar1 = 0xd584;
  }
  else {
    uVar1 = 0xd580;
  }
  pFVar2 = fopen64(acStack_80c,(char *)(uVar1 | 0x80e0000));
  *(FILE **)(param_1 + 4) = pFVar2;
  *(undefined *)(param_1 + 0x12) = 1;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined *)(param_1 + 0x10) = 0;
  FUN_080a0620(param_1 + 0x18,param_2,0x800);
  return *(int *)(param_1 + 4) != 0;
}


