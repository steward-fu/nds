/*
 * Ghidra decompilation
 *
 * Function : spu_render_capture
 * Address  : 0016c8e0
 * Program  : drastic64
 */


void spu_render_capture(long param_1,undefined8 param_2,int param_3,uint param_4)

{
  long lVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  
  lVar1 = param_1 + (ulong)param_4 * 0x20;
  bVar4 = *(byte *)(lVar1 + 0x40cc4);
  if (-1 < *(char *)(lVar1 + 0x40cc4)) {
    return;
  }
  bVar2 = bVar4 & 0xb;
  if (bVar2 == 8) {
    uVar3 = *(uint *)(lVar1 + 0x40cc0);
    uVar6 = *(ulong *)(lVar1 + 0x40ca8);
    lVar8 = *(long *)(lVar1 + 0x40cb0);
    lVar7 = *(long *)(lVar1 + 0x40cb8);
    if (param_3 != 0) {
      if ((bVar4 >> 2 & 1) == 0) {
        iVar5 = 0;
        do {
          uVar9 = uVar6 + lVar8;
          iVar5 = iVar5 + 1;
          *(undefined *)(lVar7 + (uVar6 >> 0x20)) = 0;
          uVar6 = uVar9 - ((ulong)uVar3 << 0x20);
          if (uVar9 >> 0x20 < (ulong)uVar3) {
            uVar6 = uVar9;
          }
        } while (param_3 != iVar5);
        *(ulong *)(lVar1 + 0x40ca8) = uVar6;
        return;
      }
      iVar5 = 0;
      do {
        uVar9 = uVar6 >> 0x20;
        uVar6 = uVar6 + lVar8;
        *(undefined *)(lVar7 + uVar9) = 0;
        iVar5 = iVar5 + 1;
        if ((ulong)uVar3 <= uVar6 >> 0x20) goto LAB_0016ca74;
      } while (param_3 != iVar5);
    }
  }
  else if (bVar2 < 9) {
    if ((bVar4 & 0xb) == 0) {
      uVar3 = *(uint *)(lVar1 + 0x40cc0);
      uVar6 = *(ulong *)(lVar1 + 0x40ca8);
      lVar8 = *(long *)(lVar1 + 0x40cb0);
      lVar7 = *(long *)(lVar1 + 0x40cb8);
      if (param_3 != 0) {
        if ((bVar4 >> 2 & 1) == 0) {
          iVar5 = 0;
          do {
            uVar9 = uVar6 + lVar8;
            iVar5 = iVar5 + 1;
            *(undefined2 *)(lVar7 + (uVar6 >> 0x20) * 2) = 0;
            uVar6 = uVar9 - ((ulong)uVar3 << 0x20);
            if (uVar9 >> 0x20 < (ulong)uVar3) {
              uVar6 = uVar9;
            }
          } while (param_3 != iVar5);
          *(ulong *)(lVar1 + 0x40ca8) = uVar6;
          return;
        }
        iVar5 = 0;
        do {
          uVar9 = uVar6 >> 0x20;
          uVar6 = uVar6 + lVar8;
          *(undefined2 *)(lVar7 + uVar9 * 2) = 0;
          iVar5 = iVar5 + 1;
          if ((ulong)uVar3 <= uVar6 >> 0x20) goto LAB_0016ca74;
        } while (param_3 != iVar5);
      }
    }
    else {
      if (bVar2 != 1) {
        return;
      }
      uVar3 = *(uint *)(lVar1 + 0x40cc0);
      uVar6 = *(ulong *)(lVar1 + 0x40ca8);
      if (param_3 != 0) {
        if ((bVar4 >> 2 & 1) == 0) {
          iVar5 = 0;
          do {
            uVar9 = uVar6 + *(long *)(lVar1 + 0x40cb0);
            iVar5 = iVar5 + 1;
            uVar6 = uVar9 - ((ulong)uVar3 << 0x20);
            if (uVar9 >> 0x20 < (ulong)uVar3) {
              uVar6 = uVar9;
            }
          } while (param_3 != iVar5);
        }
        else {
          iVar5 = 0;
          do {
            uVar6 = uVar6 + *(long *)(lVar1 + 0x40cb0);
            iVar5 = iVar5 + 1;
            if ((ulong)uVar3 <= uVar6 >> 0x20) {
LAB_0016ca74:
              *(byte *)(param_1 + (ulong)param_4 * 0x20 + 0x40cc4) = bVar4 & 0x7f;
              *(byte *)(*(long *)(param_1 + 0x40ce8) + (ulong)(param_4 + 0x108)) = bVar4 & 0x7f;
              *(ulong *)(lVar1 + 0x40ca8) = uVar6;
              return;
            }
          } while (param_3 != iVar5);
        }
      }
    }
  }
  else {
    if (bVar2 != 9) {
      return;
    }
    uVar3 = *(uint *)(lVar1 + 0x40cc0);
    uVar6 = *(ulong *)(lVar1 + 0x40ca8);
    if (param_3 != 0) {
      if ((bVar4 >> 2 & 1) == 0) {
        iVar5 = 0;
        do {
          uVar9 = uVar6 + *(long *)(lVar1 + 0x40cb0);
          iVar5 = iVar5 + 1;
          uVar6 = uVar9 - ((ulong)uVar3 << 0x20);
          if (uVar9 >> 0x20 < (ulong)uVar3) {
            uVar6 = uVar9;
          }
        } while (param_3 != iVar5);
        *(ulong *)(lVar1 + 0x40ca8) = uVar6;
        return;
      }
      iVar5 = 0;
      do {
        uVar6 = uVar6 + *(long *)(lVar1 + 0x40cb0);
        iVar5 = iVar5 + 1;
        if ((ulong)uVar3 <= uVar6 >> 0x20) goto LAB_0016ca74;
      } while (param_3 != iVar5);
    }
  }
  *(ulong *)(lVar1 + 0x40ca8) = uVar6;
  return;
}


