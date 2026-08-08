/*
 * Ghidra decompilation
 *
 * Function : FUN_080a0974
 * Address  : 080a0974
 * Program  : drastic16
 */


undefined * FUN_080a0974(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  
  DAT_081c509c = DAT_081c509c + 1;
  if (3 < DAT_081c509c) {
    DAT_081c509c = 0;
  }
  uVar2 = DAT_081c509c;
  iVar1 = DAT_081c509c * 0x2000;
  FUN_080afc9c(param_1,&DAT_081c50a0 + iVar1,0x800);
  (&DAT_081c709c)[uVar2 * 0x800] = 0;
  return &DAT_081c50a0 + iVar1;
}


