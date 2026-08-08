/*
 * Ghidra decompilation
 *
 * Function : FUN_0801d860
 * Address  : 0801d860
 * Program  : drastic16
 */


void FUN_0801d860(int param_1,undefined4 param_2)

{
  uint uVar1;
  byte bVar2;
  bool bVar3;
  
  if ((*(byte *)(param_1 + 0x4e) & 2) == 0) {
    bVar2 = *(byte *)(param_1 + 0x4e) & 0xfe;
    uVar1 = *(byte *)(param_1 + 0x4d) + 1 & 0xf;
    bVar3 = uVar1 == (*(byte *)(param_1 + 0x4c) - 1 & 0xf);
    *(undefined4 *)(param_1 + (uint)*(byte *)(param_1 + 0x4d) * 4 + 0xc) = param_2;
    *(byte *)(param_1 + 0x4e) = bVar2;
    if (bVar3) {
      bVar2 = bVar2 | 2;
    }
    *(char *)(param_1 + 0x4d) = (char)uVar1;
    if (bVar3) {
      *(byte *)(param_1 + 0x4e) = bVar2;
    }
  }
  return;
}


