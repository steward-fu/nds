/*
 * Ghidra decompilation
 *
 * Function : touchscreen_transfer
 * Address  : 00170f40
 * Program  : drastic64
 */


uint touchscreen_transfer(long param_1,long param_2,uint param_3)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  short sVar4;
  uint uVar5;
  ulong uVar6;
  
  bVar1 = *(byte *)(param_1 + 0x10);
  cVar2 = *(char *)(param_1 + 0x11);
  uVar6 = (ulong)(bVar1 >> 4) & 7;
  uVar3 = *(ushort *)(param_1 + uVar6 * 2);
  if ((int)uVar6 == 6) {
    if (nds_system[param_2 + 0x10cb023] == '\0') {
      nds_system[param_2 + 0x10cb024] = 1;
    }
    sVar4 = spu_get_microphone_sample(param_2 + 0x1587000,*(undefined8 *)(param_2 + 8));
    *(short *)(param_1 + 0xc) = (short)(sVar4 + 0x8000 >> 4);
  }
  if (cVar2 == '\x01') {
    uVar5 = uVar3 & 0xfffffff0;
    if ((bVar1 & 8) == 0) {
      uVar5 = (uint)uVar3;
    }
    uVar5 = (uVar5 & 0x1f) << 3;
    *(undefined *)(param_1 + 0x11) = 2;
  }
  else {
    uVar5 = 0;
    if ((cVar2 != '\x02') && (uVar5 = uVar3 & 0xff, cVar2 == '\0')) {
      uVar5 = uVar3 >> 5 & 0xff;
      *(undefined *)(param_1 + 0x11) = 1;
    }
  }
  if ((param_3 & 0xff) >> 7 != 0) {
    *(char *)(param_1 + 0x10) = (char)param_3;
    *(undefined *)(param_1 + 0x11) = 0;
  }
  return uVar5;
}


