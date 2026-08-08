/*
 * Ghidra decompilation
 *
 * Function : FUN_0804c65c
 * Address  : 0804c65c
 * Program  : drastic16
 */


void FUN_0804c65c(int param_1,int param_2,uint param_3)

{
  int iVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  
  cVar4 = (char)(param_3 & 0x1f) * '\x02';
  cVar2 = (byte)((param_3 << 0x11) >> 0x1b) * '\x02';
  cVar3 = (byte)((param_3 << 0x16) >> 0x1b) * '\x02';
  if ((param_3 & 0x1f) != 0) {
    cVar4 = cVar4 + '\x01';
  }
  if ((param_3 << 0x16) >> 0x1b != 0) {
    cVar3 = cVar3 + '\x01';
  }
  iVar1 = param_1 + param_2;
  if ((param_3 << 0x11) >> 0x1b != 0) {
    cVar2 = cVar2 + '\x01';
  }
  *(short *)(param_1 + (param_2 + 0x4c90) * 2) = (short)param_3;
  *(char *)(iVar1 + 0x99b8) = cVar4;
  *(char *)(iVar1 + 0x99d8) = cVar3;
  *(char *)(iVar1 + 0x99f8) = cVar2;
  return;
}


