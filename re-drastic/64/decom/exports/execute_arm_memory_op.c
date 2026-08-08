/*
 * Ghidra decompilation
 *
 * Function : execute_arm_memory_op
 * Address  : 00126800
 * Program  : drastic64
 */


void execute_arm_memory_op
               (long param_1,ulong param_2,int param_3,int param_4,int param_5,int param_6,
               int param_7,int param_8)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  bool bVar4;
  byte bVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  
  uVar2 = param_2 >> 0xc;
  if (((uint)(param_2 >> 0x1c) & 0xf) != 0xf) {
    lVar10 = param_1 + ((param_2 & 0xffffffff) >> 0x10 & 0xf) * 4;
    uVar1 = (uint)uVar2 & 0xf;
    uVar11 = (ulong)uVar1;
    uVar7 = *(uint *)(lVar10 + 0x2370);
    uVar8 = uVar7 - param_3;
    if ((param_2 & 0x800000) != 0) {
      uVar8 = uVar7 + param_3;
    }
    if (((uint)param_2 >> 0x18 & 1) == 0) {
      *(uint *)(lVar10 + 0x2370) = uVar8;
      uVar8 = uVar7;
    }
    else if (((uint)param_2 >> 0x15 & 1) != 0) {
      *(uint *)(lVar10 + 0x2370) = uVar8;
    }
    uVar3 = (ulong)uVar8;
    if (param_4 == 0) {
      if (param_7 == 0) {
        if (param_6 != 0) {
          store_memory16(param_1 + 0x23d0,uVar8 & 0xfffffffe,
                         *(undefined4 *)(param_1 + (uVar11 + 0x8dc) * 4));
          return;
        }
        if (param_5 != 0) {
          store_memory8();
          return;
        }
        store_memory32(param_1 + 0x23d0,uVar8 & 0xfffffffc);
        return;
      }
      if ((uVar2 & 1) == 0) {
        store_memory64(param_1 + 0x23d0,uVar3,
                       CONCAT44(*(undefined4 *)(param_1 + ((ulong)(uVar1 + 1) + 0x8dc) * 4),
                                *(undefined4 *)(param_1 + (uVar11 + 0x8dc) * 4)));
        return;
      }
LAB_00126968:
      execute_arm_raise_exception(param_1,1);
      return;
    }
    if (param_7 == 0) {
      bVar4 = *(int *)(param_1 + 0x210c) != 1;
      if (param_6 == 0) {
        if (param_5 == 0) {
          if ((bVar4) || ((uVar8 & 0xfc000003) != 0)) {
            if ((uVar8 & 3) == 0) {
              uVar8 = load_memory32(param_1 + 0x23d0);
            }
            else {
              uVar7 = load_memory32(param_1 + 0x23d0,uVar8 & 0xfffffffc);
              uVar8 = uVar7 >> (uVar8 & 3) * 8 | uVar7 << (uVar8 & 3) * -8 + 0x20;
            }
          }
          else {
            uVar8 = *(uint *)(*(long *)(*(long *)(param_1 + 0x2260) + 0xfd4f0) + uVar3);
          }
        }
        else if ((bVar4) || ((uVar8 & 0xfc000000) != 0)) {
          bVar5 = load_memory8(param_1 + 0x23d0);
          uVar8 = (int)(char)bVar5;
          if (param_8 == 0) {
            uVar8 = (uint)bVar5;
          }
        }
        else {
          lVar10 = *(long *)(*(long *)(param_1 + 0x2260) + 0xfd4f0);
          uVar8 = (int)*(char *)(lVar10 + uVar3);
          if (param_8 == 0) {
            uVar8 = (uint)*(byte *)(lVar10 + uVar3);
          }
        }
      }
      else if ((bVar4) || ((uVar8 & 0xfc000001) != 0)) {
        uVar6 = load_memory16(param_1 + 0x23d0,uVar8 & 0xfffffffe);
        uVar8 = (int)(short)uVar6;
        if (param_8 == 0) {
          uVar8 = (uint)uVar6;
        }
      }
      else {
        lVar10 = *(long *)(*(long *)(param_1 + 0x2260) + 0xfd4f0);
        uVar8 = (uint)*(short *)(lVar10 + uVar3);
        if (param_8 == 0) {
          uVar8 = (uint)*(ushort *)(lVar10 + uVar3);
        }
      }
      *(uint *)(param_1 + (uVar11 + 0x8dc) * 4) = uVar8;
    }
    else {
      if ((uVar2 & 1) != 0) goto LAB_00126968;
      uVar9 = load_memory64(param_1 + 0x23d0);
      *(int *)(param_1 + (uVar11 + 0x8dc) * 4) = (int)uVar9;
      *(int *)(param_1 + ((ulong)(uVar1 + 1) + 0x8dc) * 4) = (int)((ulong)uVar9 >> 0x20);
    }
    if (uVar1 == 0xf) {
      uVar1 = *(uint *)(param_1 + 0x23ac);
      *(uint *)(param_1 + 0x23bc) = uVar1;
      if (*(int *)(param_1 + 0x210c) == 1) {
        *(uint *)(param_1 + 0x23bc) = uVar1 & 0xfffffffe;
        *(uint *)(param_1 + 0x23c0) =
             *(uint *)(param_1 + 0x23c0) & 0xffffffc0 |
             *(uint *)(param_1 + 0x23c0) & 0x1f | (uVar1 & 1) << 5;
      }
    }
  }
  return;
}


