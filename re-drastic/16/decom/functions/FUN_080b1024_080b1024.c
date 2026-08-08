/*
 * Ghidra decompilation
 *
 * Function : FUN_080b1024
 * Address  : 080b1024
 * Program  : drastic16
 */


void FUN_080b1024(int param_1,char *param_2)

{
  byte bVar1;
  size_t sVar2;
  undefined4 uVar3;
  int local_c;
  
  FUN_080b3ecc(param_1 + 0xaec);
  sVar2 = strlen(param_2);
  uVar3 = FUN_080b4060(0xffffffff,param_2,sVar2);
  *(short *)(param_1 + 0x1000) = (short)uVar3;
  *(short *)(param_1 + 0x1002) = (short)((uint)uVar3 >> 0x10);
  *(undefined2 *)(param_1 + 0x1006) = 0;
  *(undefined2 *)(param_1 + 0x1004) = *(undefined2 *)(param_1 + 0x1006);
  for (local_c = 0; param_2[local_c] != '\0'; local_c = local_c + 1) {
    bVar1 = param_2[local_c];
    *(ushort *)(param_1 + 0x1004) =
         *(ushort *)(param_1 + 0x1004) ^
         (ushort)bVar1 ^ (ushort)*(undefined4 *)(param_1 + (bVar1 + 0x2ba) * 4 + 4);
    *(ushort *)(param_1 + 0x1006) =
         *(short *)(param_1 + 0x1006) +
         (ushort)bVar1 + (short)((uint)*(undefined4 *)(param_1 + (bVar1 + 0x2ba) * 4 + 4) >> 0x10);
  }
  return;
}


