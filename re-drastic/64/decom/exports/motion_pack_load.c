/*
 * Ghidra decompilation
 *
 * Function : motion_pack_load
 * Address  : 0016f080
 * Program  : drastic64
 */


uint motion_pack_load(byte *param_1)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  
  bVar3 = *param_1;
  iVar1 = bVar3 + 1;
  if (bVar3 != 0) {
    bVar4 = param_1[(ulong)(bVar3 - 1 >> 2) + 1];
    bVar2 = (byte)iVar1;
    if (iVar1 == 0x11) {
      bVar2 = 0;
    }
    *param_1 = bVar2;
    return (int)(uint)bVar4 >> ((-(uint)bVar3 & 3) << 1) & 3;
  }
  *param_1 = 1;
  return 0;
}


