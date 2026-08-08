/*
 * Ghidra decompilation
 *
 * Function : load_io_register_arm7_16
 * Address  : 00112fd0
 * Program  : drastic64
 */


uint load_io_register_arm7_16(long param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  if (param_2 < 0x1ab) {
    if (param_2 < 0x1a0) {
      uVar1 = param_2 - 0x100;
      if ((uVar1 < 0xd) && ((1L << ((ulong)uVar1 & 0x3f) & 0x1111U) != 0)) {
        lVar4 = *(long *)(param_1 + 0xfba68) + (ulong)(uVar1 >> 2) * 0x20;
        if ((*(ushort *)(nds_system + lVar4 + 0x20d235a) >> 2 & 1) == 0) {
          if ((*(ushort *)(nds_system + lVar4 + 0x20d235a) >> 7 & 1) == 0) {
            return (uint)*(ushort *)(nds_system + lVar4 + 0x20d2358);
          }
          lVar3 = *(long *)(*(long *)(nds_system + lVar4 + 0x20d2340) + 0x2258);
          return ((uint)(((int)*(undefined8 *)(lVar3 + 8) -
                         *(int *)(*(long *)(nds_system + lVar4 + 0x20d2340) + 0x2290)) +
                        (*(int *)(lVar3 + 0x10) -
                        (int)*(undefined8 *)(nds_system + lVar4 + 0x20d2348))) >>
                 (ulong)((byte)nds_system[lVar4 + 0x20d235c] & 0x1f)) +
                 (uint)*(ushort *)(nds_system + lVar4 + 0x20d2358) & 0xffff;
        }
      }
    }
    else {
      uVar2 = 1L << ((ulong)(param_2 - 0x1a0) & 0x3f);
      if ((uVar2 & 0x505) != 0) {
        return (uint)*(ushort *)(param_1 + (ulong)param_2 + 0x1b070);
      }
      if (((uint)uVar2 >> 6 & 1) != 0) {
        lVar4 = *(long *)(param_1 + 0xfba68);
        uVar1 = *(uint *)(param_1 + 0x1b214) & 0xff7fffff;
        if (*(ulong *)(*(long *)(param_1 + 0xfd4b8) + 0x910) <=
            ((ulong)*(uint *)(lVar4 + 0x10) + *(long *)(lVar4 + 8)) -
            (long)*(int *)(nds_system + lVar4 + 0x10cdfe0)) {
          uVar1 = *(uint *)(param_1 + 0x1b214);
        }
        return uVar1 >> 0x10;
      }
    }
  }
  else {
    if (param_2 == 0x204) {
      return *(ushort *)(param_1 + 0x23274) & 0x3f | *(ushort *)(param_1 + 0x1b274) & 0xffffe880 |
             0x4000;
    }
    if (param_2 == 0x100000) {
      uVar1 = ipc_receive(param_1 + 0xfd458);
      return uVar1 & 0xffff;
    }
  }
  return (uint)*(ushort *)(param_1 + ((ulong)param_2 & 0x7fff) + 0x23070);
}


