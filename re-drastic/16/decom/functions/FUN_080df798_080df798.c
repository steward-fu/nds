/*
 * Ghidra decompilation
 *
 * Function : FUN_080df798
 * Address  : 080df798
 * Program  : drastic16
 */


bool FUN_080df798(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  bool bVar2;
  
  bVar2 = *(char *)(param_1 + 0x1020) == '\x01';
  if (bVar2) {
    uVar1 = *(undefined4 *)(param_1 + 0x106c);
    *param_2 = *(undefined4 *)(param_1 + 0x1068);
    param_2[1] = uVar1;
  }
  return bVar2;
}


