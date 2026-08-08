/*
 * Ghidra decompilation
 *
 * Function : spi_data_write
 * Address  : 00171120
 * Program  : drastic64
 */


uint spi_data_write(long param_1,byte param_2)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  ushort uVar6;
  short sVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  
  uVar5 = *(ushort *)(param_1 + 0x2450);
  if (-1 < *(short *)(param_1 + 0x2450)) {
    return 0;
  }
  uVar6 = uVar5 >> 8 & 3;
  if (uVar6 == 1) {
    uVar8 = backup_transfer(param_1,param_2);
    if ((uVar5 >> 0xb & 1) != 0) {
      return uVar8 & 0xff;
    }
    backup_deselect(param_1);
    return uVar8 & 0xff;
  }
  if (uVar6 != 2) {
    if ((uVar5 >> 8 & 3) != 0) {
      return 0;
    }
    if (*(char *)(param_1 + 0x243a) == '\0') {
      *(byte *)(param_1 + 0x243b) = param_2;
      *(undefined *)(param_1 + 0x243a) = 1;
      bVar4 = 0;
    }
    else {
      bVar3 = *(byte *)(param_1 + 0x243b);
      lVar10 = param_1 + 0x243a + ((ulong)bVar3 & 0x7f);
      bVar1 = bVar3 >> 7 ^ 1;
      bVar4 = *(byte *)(lVar10 + 2);
      if ((bVar3 & 0x7f) == 1) {
        bVar1 = 0;
      }
      if (bVar1 != 0) {
        *(byte *)(lVar10 + 2) = param_2;
      }
      *(undefined *)(param_1 + 0x243a) = 0;
    }
    if ((uVar5 >> 0xb & 1) != 0) {
      return (uint)bVar4;
    }
    *(undefined *)(param_1 + 0x243a) = 0;
    return (uint)bVar4;
  }
  bVar1 = *(byte *)(param_1 + 0x2438);
  cVar2 = *(char *)(param_1 + 0x2439);
  uVar9 = (ulong)(bVar1 >> 4) & 7;
  uVar6 = *(ushort *)(param_1 + 0x2428 + uVar9 * 2);
  if ((int)uVar9 == 6) {
    lVar10 = *(long *)(param_1 + 0x2448);
    if (nds_system[lVar10 + 0x10cb023] == '\0') {
      nds_system[lVar10 + 0x10cb024] = 1;
    }
    sVar7 = spu_get_microphone_sample(lVar10 + 0x1587000,*(undefined8 *)(lVar10 + 8));
    *(short *)(param_1 + 0x2434) = (short)(sVar7 + 0x8000 >> 4);
  }
  if (cVar2 == '\x01') {
    uVar8 = uVar6 & 0xfffffff0;
    if ((bVar1 & 8) == 0) {
      uVar8 = (uint)uVar6;
    }
    *(undefined *)(param_1 + 0x2439) = 2;
    uVar8 = (uVar8 & 0x1f) << 3;
  }
  else {
    uVar8 = 0;
    if ((cVar2 != '\x02') && (uVar8 = uVar6 & 0xff, cVar2 == '\0')) {
      *(undefined *)(param_1 + 0x2439) = 1;
      uVar8 = uVar6 >> 5 & 0xff;
      bVar1 = -((char)param_2 >> 7);
      goto joined_r0x001712e4;
    }
  }
  bVar1 = param_2 >> 7;
joined_r0x001712e4:
  if (bVar1 != 0) {
    *(byte *)(param_1 + 0x2438) = param_2;
    *(undefined *)(param_1 + 0x2439) = 0;
  }
  if ((uVar5 >> 0xb & 1) == 0) {
    *(undefined *)(param_1 + 0x2439) = 0;
  }
  return uVar8;
}


