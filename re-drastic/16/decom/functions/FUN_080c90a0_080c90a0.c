/*
 * Ghidra decompilation
 *
 * Function : FUN_080c90a0
 * Address  : 080c90a0
 * Program  : drastic16
 */


void FUN_080c90a0(int param_1,int param_2)

{
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x5774) = 0;
    *(undefined4 *)(param_1 + 0x5778) = *(undefined4 *)(param_1 + 0x5774);
    *(undefined4 *)(param_1 + 0x5770) = *(undefined4 *)(param_1 + 0x5778);
    *(undefined4 *)(param_1 + 0x576c) = *(undefined4 *)(param_1 + 0x5770);
    *(undefined4 *)(param_1 + 0x5768) = *(undefined4 *)(param_1 + 0x576c);
    *(undefined4 *)(param_1 + 0x5764) = *(undefined4 *)(param_1 + 0x5768);
    *(undefined4 *)(param_1 + 0x5760) = 0x3500;
    *(undefined4 *)(param_1 + 0x5790) = 0x2001;
    *(undefined4 *)(param_1 + 0x578c) = 0x80;
    *(undefined4 *)(param_1 + 0x5788) = *(undefined4 *)(param_1 + 0x578c);
  }
  *(undefined4 *)(param_1 + 0x5784) = 0;
  *(undefined4 *)(param_1 + 0x575c) = 0;
  *(undefined4 *)(param_1 + 0x577c) = 0;
  *(undefined4 *)(param_1 + 0x5780) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  return;
}


