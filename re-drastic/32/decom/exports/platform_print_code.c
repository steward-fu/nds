/*
 * Ghidra decompilation
 *
 * Function : platform_print_code
 * Address  : 080a954c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void platform_print_code(char *str,u32 code)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  u32 js_number;
  
  if (code < 0x400) {
    uVar1 = SDL_GetKeyName(code & 0xff | (code >> 8) << 0x1e);
    __sprintf_chk(str,1,0xffffffff,"KB %s",uVar1);
    return;
  }
  if (code == 0xffff) {
    *(undefined4 *)str = 0x616d6e55;
    *(undefined4 *)(str + 4) = 0x64657070;
    str[8] = '\0';
    return;
  }
  uVar2 = (code << 0x18) >> 0x1e;
  uVar4 = (code << 0x16) >> 0x1e;
  uVar3 = code & 0x3f;
  if (uVar2 == 2) {
    __sprintf_chk(str,1,0xffffffff,"JS%d Axis+ %02x",uVar4,uVar3);
    return;
  }
  if (uVar2 != 3) {
    if (uVar2 != 1) {
      __sprintf_chk(str,1,0xffffffff,"JS%d Button %02x",uVar4,uVar3);
      return;
    }
    __sprintf_chk(str,1,0xffffffff,"JS%d Hat %02x",uVar4,uVar3);
    return;
  }
  __sprintf_chk(str,1,0xffffffff,"JS%d Axis- %02x",uVar4,uVar3);
  return;
}


