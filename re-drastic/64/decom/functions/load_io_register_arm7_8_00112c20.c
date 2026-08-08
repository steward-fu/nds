/*
 * Ghidra decompilation
 *
 * Function : load_io_register_arm7_8
 * Address  : 00112c20
 * Program  : drastic64
 */


uint load_io_register_arm7_8(long param_1,ulong param_2)

{
  ushort uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  
  uVar5 = (uint)param_2 & 0xfffffffe;
  if (uVar5 < 0x1ab) {
    if (uVar5 < 0x1a0) {
      uVar5 = uVar5 - 0x100;
      if ((uVar5 < 0xd) && ((1L << ((ulong)uVar5 & 0x3f) & 0x1111U) != 0)) {
        lVar6 = *(long *)(param_1 + 0xfba68) + (ulong)(uVar5 >> 2) * 0x20;
        if ((*(ushort *)(nds_system + lVar6 + 0x20d235a) >> 2 & 1) == 0) {
          uVar2 = (uint)(byte)(*(ushort *)(nds_system + lVar6 + 0x20d2358) >> 8);
          uVar5 = (uint)*(ushort *)(nds_system + lVar6 + 0x20d2358);
          if ((*(ushort *)(nds_system + lVar6 + 0x20d235a) >> 7 & 1) != 0) {
            lVar4 = *(long *)(*(long *)(nds_system + lVar6 + 0x20d2340) + 0x2258);
            uVar5 = ((uint)(((int)*(undefined8 *)(lVar4 + 8) -
                            *(int *)(*(long *)(nds_system + lVar6 + 0x20d2340) + 0x2290)) +
                           (*(int *)(lVar4 + 0x10) -
                           (int)*(undefined8 *)(nds_system + lVar6 + 0x20d2348))) >>
                    (ulong)((byte)nds_system[lVar6 + 0x20d235c] & 0x1f)) + uVar5;
            uVar2 = (uVar5 & 0xffff) >> 8;
            uVar5 = uVar5 & 0xffff;
          }
          goto LAB_00112c78;
        }
      }
    }
    else {
      uVar3 = 1L << ((ulong)(uVar5 - 0x1a0) & 0x3f);
      if ((uVar3 & 0x505) != 0) {
        uVar1 = *(ushort *)(param_1 + (ulong)uVar5 + 0x1b070);
        uVar5 = uVar1 & 0xff;
        if ((param_2 & 1) != 0) {
          uVar5 = (uint)(byte)(uVar1 >> 8);
        }
        return uVar5;
      }
      if (((uint)uVar3 >> 6 & 1) != 0) {
        lVar6 = *(long *)(param_1 + 0xfba68);
        uVar5 = *(uint *)(param_1 + 0x1b214) & 0xff7fffff;
        if (*(ulong *)(*(long *)(param_1 + 0xfd4b8) + 0x910) <=
            ((ulong)*(uint *)(lVar6 + 0x10) + *(long *)(lVar6 + 8)) -
            (long)*(int *)(nds_system + lVar6 + 0x10cdfe0)) {
          uVar5 = *(uint *)(param_1 + 0x1b214);
        }
        uVar2 = uVar5 >> 0x10 & 0xff;
        if ((param_2 & 1) != 0) {
          uVar2 = uVar5 >> 0x18;
        }
        return uVar2;
      }
    }
  }
  else {
    if (uVar5 == 0x204) {
      uVar5 = *(ushort *)(param_1 + 0x1b274) & 0x80 | *(ushort *)(param_1 + 0x23274) & 0x3f;
      if ((param_2 & 1) != 0) {
        uVar5 = (*(ushort *)(param_1 + 0x1b274) & 0xffffe880 | 0x4000) >> 8;
      }
      return uVar5;
    }
    if (uVar5 == 0x100000) {
      uVar2 = ipc_receive(param_1 + 0xfd458);
      uVar5 = uVar2 & 0xff;
      if ((param_2 & 1) != 0) {
        uVar5 = (uVar2 & 0xffff) >> 8;
      }
      return uVar5;
    }
  }
  uVar1 = *(ushort *)(param_1 + (param_2 & 0x7ffe) + 0x23070);
  uVar2 = (uint)(byte)(uVar1 >> 8);
  uVar5 = (uint)uVar1;
LAB_00112c78:
  uVar5 = uVar5 & 0xff;
  if ((param_2 & 1) != 0) {
    uVar5 = uVar2;
  }
  return uVar5;
}


