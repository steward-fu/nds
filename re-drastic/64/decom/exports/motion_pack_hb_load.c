/*
 * Ghidra decompilation
 *
 * Function : motion_pack_hb_load
 * Address  : 0016f190
 * Program  : drastic64
 */


uint motion_pack_hb_load(byte *param_1,byte param_2)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  
  bVar2 = *param_1;
  iVar1 = bVar2 + 1;
  if (bVar2 != 0) {
    bVar3 = param_1[1];
    uVar4 = 0xff;
    if ((bVar3 - 2 < 9) && ((bVar3 & 1) == 0)) {
      uVar4 = (int)(uint)*(ushort *)(param_1 + (ulong)((bVar3 >> 1) - 1) * 2 + 2) >>
              ((2 - (uint)bVar2) * 8 & 0x1f) & 0xff;
    }
    bVar2 = (byte)iVar1;
    if (iVar1 == 3) {
      bVar2 = 0;
    }
    *param_1 = bVar2;
    return uVar4;
  }
  *param_1 = 1;
  param_1[1] = param_2;
  return 0xff;
}


