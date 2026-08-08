/*
 * Ghidra decompilation
 *
 * Function : load_io_register_arm7_32
 * Address  : 00112e50
 * Program  : drastic64
 */


ulong load_io_register_arm7_32(long param_1,ulong param_2)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  
  uVar2 = (uint)param_2;
  if (uVar2 != 0x1a8) {
    if (uVar2 < 0x1a9) {
      if (uVar2 == 0x1a0) goto LAB_00112f08;
      if (uVar2 < 0x1a1) {
        uVar5 = uVar2 - 0x100;
        if ((uVar5 < 0xd) && ((1L << ((ulong)uVar5 & 0x3f) & 0x1111U) != 0)) {
          lVar4 = *(long *)(param_1 + 0xfba68) + (ulong)(uVar5 >> 2) * 0x20;
          if ((*(ushort *)(nds_system + lVar4 + 0x20d235a) >> 2 & 1) == 0) {
            uVar5 = (uint)*(ushort *)(nds_system + lVar4 + 0x20d2358);
            if ((*(ushort *)(nds_system + lVar4 + 0x20d235a) >> 7 & 1) != 0) {
              lVar3 = *(long *)(*(long *)(nds_system + lVar4 + 0x20d2340) + 0x2258);
              uVar5 = ((uint)(((int)*(undefined8 *)(lVar3 + 8) -
                              *(int *)(*(long *)(nds_system + lVar4 + 0x20d2340) + 0x2290)) +
                             (*(int *)(lVar3 + 0x10) -
                             (int)*(undefined8 *)(nds_system + lVar4 + 0x20d2348))) >>
                      (ulong)((byte)nds_system[lVar4 + 0x20d235c] & 0x1f)) + uVar5 & 0xffff;
            }
            return (ulong)(*(ushort *)(param_1 + (ulong)(uVar2 + 2) + 0x23070) | uVar5);
          }
        }
      }
      else if (uVar2 == 0x1a4) {
        lVar4 = *(long *)(param_1 + 0xfba68);
        uVar2 = *(uint *)(param_1 + 0x1b214) & 0xff7fffff;
        if (*(ulong *)(*(long *)(param_1 + 0xfd4b8) + 0x910) <=
            ((ulong)*(uint *)(lVar4 + 0x10) + *(long *)(lVar4 + 8)) -
            (long)*(int *)(nds_system + lVar4 + 0x10cdfe0)) {
          uVar2 = *(uint *)(param_1 + 0x1b214);
        }
        return (ulong)uVar2;
      }
    }
    else {
      if (uVar2 == 0x204) {
        return (ulong)(*(ushort *)(param_1 + 0x23274) & 0x3f |
                       *(ushort *)(param_1 + 0x1b274) & 0xffffe880 | 0x4000);
      }
      if (uVar2 == 0x100000) {
        uVar1 = ipc_receive(param_1 + 0xfd458);
        return uVar1;
      }
    }
    return (ulong)*(uint *)(param_1 + (param_2 & 0x7fff) + 0x23070);
  }
LAB_00112f08:
  return (ulong)*(uint *)(param_1 + (param_2 & 0xffffffff) + 0x1b070);
}


