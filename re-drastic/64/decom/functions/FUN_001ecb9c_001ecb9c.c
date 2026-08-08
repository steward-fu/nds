/*
 * Ghidra decompilation
 *
 * Function : FUN_001ecb9c
 * Address  : 001ecb9c
 * Program  : drastic64
 */


uint FUN_001ecb9c(long **param_1)

{
  ulong uVar1;
  uint uVar2;
  undefined8 uVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  
  plVar6 = *param_1;
  uVar3 = (**(code **)(*plVar6 + 0x20))(plVar6);
  File::Seek((File *)*param_1,(longlong)((long)param_1[0x209] + (long)param_1[0x20b]),0);
  uVar5 = 0x10000 - (long)param_1[0x20c];
  uVar1 = (long)param_1[0x20a] - (long)param_1[0x20b];
  if (uVar5 < (ulong)((long)param_1[0x20a] - (long)param_1[0x20b])) {
    uVar1 = uVar5;
  }
  uVar5 = uVar1 & 0xfffffffffffffff0;
  if (*(File *)((long)*param_1 + 0xeb63) == (File)0x0) {
    uVar5 = uVar1;
  }
  if (uVar5 != 0) {
    uVar2 = File::Read((File *)*param_1,(File *)((long)param_1[4] + (long)param_1[0x20c]),uVar5);
    if (0 < (int)uVar2) {
      plVar4 = param_1[0x20c];
      if (*(File *)((long)*param_1 + 0xeb63) != (File)0x0) {
        CryptData::DecryptBlock
                  ((CryptData *)(param_1 + 6),(uchar *)((long)param_1[4] + (long)plVar4),
                   (long)(int)(uVar2 & 0xfffffff0));
        plVar4 = param_1[0x20c];
      }
      param_1[0x20b] = (long *)((long)param_1[0x20b] + (long)(int)uVar2);
      param_1[0x20c] = (long *)((long)(int)uVar2 + (long)plVar4);
      goto LAB_001ecc24;
    }
  }
  uVar2 = 0;
LAB_001ecc24:
  (**(code **)(*plVar6 + 0x18))(plVar6,uVar3,0);
  return uVar2;
}


