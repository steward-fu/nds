/*
 * Ghidra decompilation
 *
 * Function : FUN_080a4b08
 * Address  : 080a4b08
 * Program  : drastic16
 */


longlong FUN_080a4b08(int param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (*(int *)(param_1 + 4) == 0) {
    if (*(char *)(param_1 + 0x14) == '\0') {
      lVar1 = SIMDExpandImmediate(0,0xe,0xff);
      return lVar1;
    }
    FUN_080b701c(&DAT_081cd0a0,param_1 + 0x18);
  }
  uVar2 = ftello64(*(FILE **)(param_1 + 4));
  return (uVar2 & 0xffffffff00000000) + (uVar2 & 0xffffffff);
}


