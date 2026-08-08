/*
 * Ghidra decompilation
 *
 * Function : platform_print_code
 * Address  : 0018b410
 * Program  : drastic64
 */


void platform_print_code(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar2 = (uint)param_2;
  if (uVar2 < 0x400) {
    uVar1 = SDL_GetKeyName(uVar2 & 0xff | (uVar2 >> 8) << 0x1e);
    __sprintf_chk(param_1,1,0xffffffffffffffff,"KB %s",uVar1);
    return;
  }
  if (uVar2 == 0xffff) {
    *param_1 = 0x64657070616d6e55;
    *(char *)(param_1 + 1) = '\0';
    return;
  }
  uVar4 = param_2 >> 6 & 3;
  iVar3 = (int)uVar4;
  uVar5 = param_2 >> 8 & 3;
  uVar2 = uVar2 & 0x3f;
  if (iVar3 == 2) {
    __sprintf_chk(param_1,1,0xffffffffffffffff,"JS%d Axis+ %02x",uVar5,uVar2);
    return;
  }
  if (iVar3 != 3) {
    if (iVar3 != 1) {
      __sprintf_chk(param_1,1,0xffffffffffffffff,"JS%d Button %02x",uVar5,uVar2);
      return;
    }
    __sprintf_chk(param_1,uVar4,0xffffffffffffffff,"JS%d Hat %02x",uVar5,uVar2);
    return;
  }
  __sprintf_chk(param_1,1,0xffffffffffffffff,"JS%d Axis- %02x",uVar5,uVar2);
  return;
}


