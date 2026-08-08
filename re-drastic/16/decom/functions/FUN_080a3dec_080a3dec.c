/*
 * Ghidra decompilation
 *
 * Function : FUN_080a3dec
 * Address  : 080a3dec
 * Program  : drastic16
 */


char FUN_080a3dec(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  FILE *pFVar5;
  char acStack_81c [2051];
  char local_19;
  FILE *local_18;
  int local_14;
  int local_10;
  undefined local_b;
  char local_a;
  char local_9;
  
  *(undefined4 *)(param_1 + 0x2018) = 0;
  if ((*(char *)(param_1 + 0x15) == '\0') && ((param_3 & 4) == 0)) {
    local_9 = '\0';
  }
  else {
    local_9 = '\x01';
  }
  local_a = (param_3 & 1) != 0;
  local_b = (param_3 & 2) != 0;
  if ((bool)local_a) {
    local_10 = 2;
  }
  else if ((bool)local_b) {
    local_10 = 1;
  }
  else {
    local_10 = 0;
  }
  FUN_080afbc8(param_2,acStack_81c,0x800);
  local_14 = open64(acStack_81c,local_10);
  if ((((local_9 == '\x01') || (local_a == '\0')) || (local_14 < 0)) ||
     (iVar3 = flock(local_14,6), iVar3 != -1)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    close(local_14);
    local_19 = '\0';
  }
  else {
    if (local_14 == -1) {
      local_18 = (FILE *)0x0;
    }
    else {
      if (local_a == '\0') {
        uVar1 = 0xd57c;
      }
      else {
        uVar1 = 0xd578;
      }
      local_18 = fdopen(local_14,(char *)(uVar1 | 0x80e0000));
    }
    if ((local_18 == (FILE *)0x0) && (piVar4 = __errno_location(), *piVar4 == 2)) {
      *(undefined4 *)(param_1 + 0x2018) = 1;
    }
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined *)(param_1 + 0x10) = 0;
    pFVar5 = local_18;
    if (local_18 == (FILE *)0x0) {
      pFVar5 = (FILE *)0x0;
    }
    local_19 = (char)pFVar5;
    if (local_18 != (FILE *)0x0) {
      local_19 = '\x01';
    }
    if (local_19 != '\0') {
      *(FILE **)(param_1 + 4) = local_18;
      FUN_080a0620(param_1 + 0x18,param_2,0x800);
    }
  }
  return local_19;
}


