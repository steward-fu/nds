/*
 * Ghidra decompilation
 *
 * Function : FUN_08071770
 * Address  : 08071770
 * Program  : drastic16
 */


void FUN_08071770(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar5 = *param_1;
  uVar4 = 0;
  uVar6 = *(undefined4 *)(iVar5 + 0x20fc);
  FUN_0801b184(iVar5);
  iVar3 = *param_1 + 0x232c;
  do {
    putchar(0x20);
    iVar2 = 0;
    uVar1 = uVar4;
    do {
      if (uVar1 < 0xf) {
        printf("R%02d %08x ",uVar1,*(undefined4 *)(iVar3 + iVar2));
      }
      else {
        printf(" PC %08x ",param_1[0x48] & 0xfffffffe);
      }
      iVar2 = iVar2 + 4;
      uVar1 = uVar1 + 1;
    } while (iVar2 != 0x10);
    uVar4 = uVar4 + 4;
    putchar(10);
    iVar3 = iVar3 + 0x10;
  } while (uVar4 != 0x10);
  FUN_0801b184(iVar5,uVar6);
  return;
}


