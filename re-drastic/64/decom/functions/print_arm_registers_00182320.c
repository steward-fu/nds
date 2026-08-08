/*
 * Ghidra decompilation
 *
 * Function : print_arm_registers
 * Address  : 00182320
 * Program  : drastic64
 */


int print_arm_registers(long *param_1,ulong param_2)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  
  lVar6 = *param_1;
  uVar5 = 4;
  do {
    putchar(0x20);
    uVar1 = uVar5 - 4;
    do {
      uVar4 = uVar1;
      if (uVar4 < 0xf) {
        pcVar3 = "R%02d %08x*";
        if (((long)(1 << (ulong)(uVar4 & 0x1f)) & param_2) != 0) {
          pcVar3 = "R%02d %08x ";
        }
        __printf_chk(1,pcVar3,uVar4,*(undefined4 *)(lVar6 + 0x2370 + (ulong)uVar4 * 4));
      }
      else {
        __printf_chk(1," PC %08x ",*(uint *)(param_1 + 0x24) & 0xfffffffe);
      }
      uVar1 = uVar4 + 1;
    } while (uVar1 != uVar5);
    iVar2 = putchar(10);
    uVar5 = uVar4 + 5;
  } while (uVar1 != 0x10);
  return iVar2;
}


