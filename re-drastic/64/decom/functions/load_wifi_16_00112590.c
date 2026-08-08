/*
 * Ghidra decompilation
 *
 * Function : load_wifi_16
 * Address  : 00112590
 * Program  : drastic64
 */


ushort load_wifi_16(long param_1,uint param_2)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  
  uVar1 = param_2 & 0x3fff;
  if ((param_2 & 0xffff) - 0x4000 < 0x4000) {
    return *(ushort *)(param_1 + (ulong)uVar1 + 0x17070);
  }
  if (uVar1 == 0x15c) {
    uVar2 = *(ushort *)(param_1 + 0xfb710);
    uVar3 = uVar2 & 0x4000;
    if (((uVar2 >> 0xe & 1) != 0) && (uVar3 = 0, (uVar2 >> 0xc & 3) == 2)) {
      uVar3 = (ushort)*(byte *)(param_1 + ((ulong)uVar2 & 0x7f) + 0xfb9b8);
    }
  }
  else {
    if (uVar1 < 0x15d) {
      if (uVar1 == 4) {
        return 0;
      }
      if (uVar1 == 0x3c) {
        return 0x200;
      }
    }
    else {
      if (uVar1 == 0x15e) {
        return 0;
      }
      if (uVar1 == 0x180) {
        return 0;
      }
    }
    uVar3 = *(ushort *)(param_1 + (ulong)uVar1 + 0xfb5b8);
  }
  return uVar3;
}


