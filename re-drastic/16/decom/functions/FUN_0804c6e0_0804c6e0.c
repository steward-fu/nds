/*
 * Ghidra decompilation
 *
 * Function : FUN_0804c6e0
 * Address  : 0804c6e0
 * Program  : drastic16
 */


void FUN_0804c6e0(int param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  char unaff_r8;
  char cVar4;
  
  uVar2 = param_3 & 0x1f;
  cVar3 = (char)uVar2 * '\x02';
  if (uVar2 != 0) {
    unaff_r8 = cVar3 + '\x01';
  }
  if (uVar2 == 0) {
    unaff_r8 = cVar3;
  }
  cVar3 = (byte)((param_3 << 0x16) >> 0x1b) * '\x02';
  cVar4 = (byte)((param_3 << 0x11) >> 0x1b) * '\x02';
  iVar1 = param_1 + param_2;
  if ((param_3 << 0x16) >> 0x1b != 0) {
    cVar3 = cVar3 + '\x01';
  }
  *(short *)(param_1 + (param_2 + 0x4c88) * 2) = (short)param_3;
  if ((param_3 << 0x11) >> 0x1b != 0) {
    cVar4 = cVar4 + '\x01';
  }
  *(char *)(iVar1 + 0x99a0) = unaff_r8;
  *(char *)(iVar1 + 0x99a8) = cVar3;
  *(char *)(iVar1 + 0x99b0) = cVar4;
  return;
}


