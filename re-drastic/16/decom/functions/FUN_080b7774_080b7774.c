/*
 * Ghidra decompilation
 *
 * Function : FUN_080b7774
 * Address  : 080b7774
 * Program  : drastic16
 */


size_t FUN_080b7774(undefined4 param_1)

{
  wchar_t awStack_20c [128];
  size_t local_c;
  
  FUN_080b7660(param_1,awStack_20c,0x80);
  local_c = wcslen(awStack_20c);
  FUN_080b7588(awStack_20c,0x80);
  return local_c;
}


