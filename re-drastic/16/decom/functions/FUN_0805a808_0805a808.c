/*
 * Ghidra decompilation
 *
 * Function : FUN_0805a808
 * Address  : 0805a808
 * Program  : drastic16
 */


void FUN_0805a808(int param_1,uint param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  
  if (*(char *)(param_1 + 0x418) == '\x01') {
    *(char *)(*(int *)(param_1 + 0x404) + (param_2 & *(int *)(param_1 + 0x40c) - 1U)) =
         (char)param_3;
    *(undefined4 *)(param_1 + 0x414) = 0x3c;
    return;
  }
  if (*(char *)(param_1 + 0x418) != '\x03') {
    return;
  }
  cVar1 = *(char *)(param_1 + 0x419);
  if (cVar1 == '\x02') {
    if (param_3 == 0xf0) {
      *(undefined *)(param_1 + 0x419) = 0;
      return;
    }
    if (param_2 == 0x5555) {
LAB_0805a938:
      if (*(char *)(param_1 + 0x41a) == '\0') {
        if (param_3 == 0xaa) {
          *(undefined *)(param_1 + 0x41a) = 1;
        }
        return;
      }
      if (*(char *)(param_1 + 0x41a) == '\x02') {
        if (param_3 == 0x90) {
          if (cVar1 == '\0') {
            *(undefined *)(param_1 + 0x419) = 2;
          }
        }
        else if (param_3 < 0x91) {
          if (param_3 == 0x10) {
            if (cVar1 == '\x01') {
              memset(*(void **)(param_1 + 0x404),0,*(size_t *)(param_1 + 0x40c));
              *(undefined *)(param_1 + 0x419) = 0;
              *(undefined4 *)(param_1 + 0x414) = 0x3c;
            }
          }
          else if ((param_3 == 0x80) && (cVar1 == '\0')) {
            *(undefined *)(param_1 + 0x419) = 1;
          }
        }
        else if (param_3 == 0xa0) {
          if (cVar1 == '\0') {
            *(undefined *)(param_1 + 0x419) = 3;
          }
        }
        else if (((param_3 == 0xb0) && (*(int *)(param_1 + 0x40c) == 0x20000)) && (cVar1 == '\0')) {
          *(undefined *)(param_1 + 0x419) = 4;
        }
        *(undefined *)(param_1 + 0x41a) = 0;
        return;
      }
      return;
    }
  }
  else if (param_2 == 0x5555) {
    if (cVar1 != '\x03') goto LAB_0805a938;
    goto LAB_0805a860;
  }
  if ((param_2 == 0x2aaa && param_3 == 0x55) && (*(char *)(param_1 + 0x41a) == '\x01')) {
    *(undefined *)(param_1 + 0x41a) = 2;
    return;
  }
LAB_0805a860:
  uVar2 = *(uint *)(param_1 + 0x418) & 0xffff00;
  if (uVar2 == 0x20100) {
    if (param_3 == 0x30) {
      memset((void *)(*(int *)(param_1 + 0x404) + (param_2 & 0xf000) + *(int *)(param_1 + 0x410)),
             0xff,0x1000);
      *(undefined *)(param_1 + 0x419) = 0;
      *(undefined *)(param_1 + 0x41a) = 0;
      *(undefined4 *)(param_1 + 0x414) = 0x3c;
      return;
    }
    return;
  }
  if (uVar2 == 0x400) {
    if (param_2 == 0) {
      *(undefined *)(param_1 + 0x419) = 0;
      *(uint *)(param_1 + 0x410) = (param_3 & 1) << 0x10;
    }
    return;
  }
  if (uVar2 == 0x300) {
    *(char *)(*(int *)(param_1 + 0x404) + param_2 + *(int *)(param_1 + 0x410)) = (char)param_3;
    *(undefined *)(param_1 + 0x419) = 0;
    *(undefined4 *)(param_1 + 0x414) = 0x3c;
    return;
  }
  return;
}


