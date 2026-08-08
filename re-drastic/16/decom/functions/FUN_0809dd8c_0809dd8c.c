/*
 * Ghidra decompilation
 *
 * Function : FUN_0809dd8c
 * Address  : 0809dd8c
 * Program  : drastic16
 */


int FUN_0809dd8c(int param_1,int param_2)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = FUN_080a8a90(param_1 + 0x167d8,2);
  *(undefined4 *)(param_1 + 0x31bb4) = uVar2;
  if (0 < *(int *)(param_1 + 0x31bb4)) {
    if ((*(int *)(param_1 + 0x31bb0) == 0) && (*(char *)(param_1 + 0x20c90) != '\0')) {
      iVar3 = FUN_0809eb48(param_1,0,0,0);
      if (iVar3 == 0) {
        iVar3 = FUN_0809dd8c(param_1,param_2);
        return iVar3;
      }
      return iVar3;
    }
    wcsncpy((wchar_t *)(param_2 + 0x400),(wchar_t *)(param_1 + 0x167f0),0x400);
    FUN_080afbc8(param_2 + 0x400,param_2,0x400);
    wcsncpy((wchar_t *)(param_2 + 0x1800),(wchar_t *)(param_1 + 0x1ec28),0x400);
    FUN_080afbc8(param_2 + 0x1800,param_2 + 0x1400,0x400);
    *(undefined *)(param_2 + 0x2800) = 0;
    *(undefined *)(param_2 + 0x2801) = 0;
    *(undefined *)(param_2 + 0x2802) = 0;
    *(undefined *)(param_2 + 0x2803) = 0;
    if (*(char *)(param_1 + 0x20c90) != '\0') {
      *(uint *)(param_2 + 0x2800) = *(uint *)(param_2 + 0x2800) | 1;
    }
    if (*(char *)(param_1 + 0x20c91) != '\0') {
      *(uint *)(param_2 + 0x2800) = *(uint *)(param_2 + 0x2800) | 2;
    }
    if (*(char *)(param_1 + 0x20c93) != '\0') {
      *(uint *)(param_2 + 0x2800) = *(uint *)(param_2 + 0x2800) | 4;
    }
    if (*(char *)(param_1 + 0x20ce8) != '\0') {
      *(uint *)(param_2 + 0x2800) = *(uint *)(param_2 + 0x2800) | 0x10;
    }
    if (*(char *)(param_1 + 0x20ce9) != '\0') {
      *(uint *)(param_2 + 0x2800) = *(uint *)(param_2 + 0x2800) | 0x20;
    }
    *(undefined4 *)(param_2 + 0x2804) = *(undefined4 *)(param_1 + 0x20c50);
    *(undefined4 *)(param_2 + 0x2808) = *(undefined4 *)(param_1 + 0x20c54);
    *(undefined4 *)(param_2 + 0x280c) = *(undefined4 *)(param_1 + 0x20c58);
    *(undefined4 *)(param_2 + 0x2810) = *(undefined4 *)(param_1 + 0x20c5c);
    if (*(int *)(param_1 + 0x20cf4) == 0) {
      uVar2 = 2;
    }
    else {
      uVar2 = 3;
    }
    *(undefined4 *)(param_2 + 0x2814) = uVar2;
    if (*(int *)(param_1 + 0x27670) == 3) {
      if (*(char *)(param_1 + 0x1ec21) == '\0') {
        uVar2 = 0x32;
      }
      else {
        uVar2 = 200;
      }
      *(undefined4 *)(param_2 + 0x2820) = uVar2;
    }
    else {
      *(uint *)(param_2 + 0x2820) = (uint)*(byte *)(param_1 + 0x1ec21);
    }
    *(undefined4 *)(param_2 + 0x2818) = *(undefined4 *)(param_1 + 0x20c6c);
    uVar2 = FUN_080b555c(param_1 + 0x20c38);
    *(undefined4 *)(param_2 + 0x281c) = uVar2;
    *(uint *)(param_2 + 0x2824) = *(byte *)(param_1 + 0x1ec22) + 0x30;
    *(undefined4 *)(param_2 + 0x2828) = *(undefined4 *)(param_1 + 0x1ec24);
    *(undefined *)(param_2 + 0x2834) = 0;
    *(undefined *)(param_2 + 0x2835) = 0;
    *(undefined *)(param_2 + 0x2836) = 0;
    *(undefined *)(param_2 + 0x2837) = 0;
    *(undefined *)(param_2 + 0x2838) = 0;
    *(undefined *)(param_2 + 0x2839) = 0;
    *(undefined *)(param_2 + 0x283a) = 0;
    *(undefined *)(param_2 + 0x283b) = 0;
    *(uint *)(param_2 + 0x283c) = *(uint *)(param_1 + 0x20cec) >> 10;
    iVar3 = *(int *)(param_1 + 0x20c68);
    if (0 < iVar3) {
      if (iVar3 < 3) {
        *(undefined *)(param_2 + 0x2840) = 1;
        *(undefined *)(param_2 + 0x2841) = 0;
        *(undefined *)(param_2 + 0x2842) = 0;
        *(undefined *)(param_2 + 0x2843) = 0;
        return 0;
      }
      if (iVar3 == 3) {
        *(undefined *)(param_2 + 0x2840) = 2;
        *(undefined *)(param_2 + 0x2841) = 0;
        *(undefined *)(param_2 + 0x2842) = 0;
        *(undefined *)(param_2 + 0x2843) = 0;
        memcpy((void *)(param_2 + 0x2844),(void *)(param_1 + 0x20c6c),0x20);
        return 0;
      }
    }
    *(undefined *)(param_2 + 0x2840) = 0;
    *(undefined *)(param_2 + 0x2841) = 0;
    *(undefined *)(param_2 + 0x2842) = 0;
    *(undefined *)(param_2 + 0x2843) = 0;
    return 0;
  }
  if (((*(char *)(param_1 + 0x27675) == '\0') ||
      (iVar3 = FUN_0809ee40(param_1 + 0x167d8), iVar3 != 5)) ||
     (*(char *)(param_1 + 0x22f24) == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    iVar3 = FUN_080c2c20(param_1 + 0x167d8,0,0,0x4c);
    if (iVar3 == 0) {
      return 0xf;
    }
    FUN_080a8424(param_1 + 0x167d8,param_1,*(undefined4 *)(param_1 + 0x27660),
                 *(undefined4 *)(param_1 + 0x27664),0);
    iVar3 = FUN_0809dd8c(param_1,param_2);
    return iVar3;
  }
  if (*(char *)(param_1 + 0x27684) != '\0') {
    return 0xc;
  }
  if (*(char *)(param_1 + 0x27685) == '\0') {
    return 10;
  }
  return 0x18;
}


