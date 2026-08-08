/*
 * Ghidra decompilation
 *
 * Function : FUN_080d2708
 * Address  : 080d2708
 * Program  : drastic16
 */


void FUN_080d2708(short *param_1)

{
  byte bVar1;
  bool bVar2;
  
  if ((*(byte *)(param_1 + 1) < 7) &&
     (*(char *)((int)param_1 + 3) = *(char *)((int)param_1 + 3) + -1,
     *(char *)((int)param_1 + 3) == '\0')) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (bVar2) {
    *param_1 = *param_1 + *param_1;
    bVar1 = *(byte *)(param_1 + 1);
    *(byte *)(param_1 + 1) = bVar1 + 1;
    *(char *)((int)param_1 + 3) = (char)(3 << (uint)bVar1);
  }
  return;
}


