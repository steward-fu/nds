/*
 * Ghidra decompilation
 *
 * Function : FUN_080716b8
 * Address  : 080716b8
 * Program  : drastic16
 */


void FUN_080716b8(int *param_1,undefined4 param_2,uint param_3,uint param_4)

{
  uint uVar1;
  char *__format;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = 0;
  iVar3 = *param_1 + 0x232c;
  do {
    putchar(0x20);
    iVar5 = 0;
    uVar2 = uVar4;
    do {
      uVar1 = 1 << (uVar2 & 0xff);
      if (uVar2 < 0xf) {
        __format = "R%02d %08x*";
        if ((param_3 & uVar1 | param_4 & (int)uVar1 >> 0x1f) != 0) {
          __format = "R%02d %08x ";
        }
        printf(__format,uVar2,*(undefined4 *)(iVar3 + iVar5));
      }
      else {
        printf(" PC %08x ",param_1[0x48] & 0xfffffffe);
      }
      iVar5 = iVar5 + 4;
      uVar2 = uVar2 + 1;
    } while (iVar5 != 0x10);
    uVar4 = uVar4 + 4;
    putchar(10);
    iVar3 = iVar3 + 0x10;
  } while (uVar4 != 0x10);
  return;
}


