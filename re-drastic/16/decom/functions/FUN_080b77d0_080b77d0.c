/*
 * Ghidra decompilation
 *
 * Function : FUN_080b77d0
 * Address  : 080b77d0
 * Program  : drastic16
 */


undefined FUN_080b77d0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  bool bVar2;
  wchar_t awStack_40c [128];
  wchar_t awStack_20c [128];
  undefined local_9;
  
  FUN_080b7660(param_1,awStack_40c,0x80);
  FUN_080b7660(param_2,awStack_20c,0x80);
  iVar1 = wcscmp(awStack_40c,awStack_20c);
  bVar2 = iVar1 != 0;
  if (bVar2) {
    iVar1 = 0;
  }
  local_9 = (undefined)iVar1;
  if (!bVar2) {
    local_9 = 1;
  }
  FUN_080b7588(awStack_40c,0x80);
  FUN_080b7588(awStack_20c,0x80);
  return local_9;
}


