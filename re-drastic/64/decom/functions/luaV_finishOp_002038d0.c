/*
 * Ghidra decompilation
 *
 * Function : luaV_finishOp
 * Address  : 002038d0
 * Program  : drastic64
 */


void luaV_finishOp(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  
  lVar9 = *(long *)(param_1 + 0x20);
  lVar7 = *(long *)(lVar9 + 0x20);
  uVar3 = *(uint *)(*(long *)(lVar9 + 0x28) + -4);
  uVar2 = uVar3 & 0x3f;
  if (uVar2 < 0x22) {
    if (uVar2 < 0x1f) {
      if (uVar2 == 0x1d) {
        lVar6 = *(long *)(param_1 + 0x10);
        *(undefined8 *)(lVar6 + -0x30) = *(undefined8 *)(lVar6 + -0x10);
        *(undefined8 *)(lVar6 + -0x28) = *(undefined8 *)(lVar6 + -8);
        if (1 < (int)((long)((lVar6 + -0x20) - (lVar7 + (ulong)(uVar3 >> 0x17) * 0x10)) >> 4)) {
          *(long *)(param_1 + 0x10) = lVar6 + -0x20;
          luaV_concat();
          lVar6 = *(long *)(param_1 + 0x10);
          lVar7 = *(long *)(lVar9 + 0x20);
        }
        uVar8 = *(undefined8 *)(lVar6 + -8);
        puVar1 = (undefined8 *)(lVar7 + ((ulong)(uVar3 >> 6) & 0xff) * 0x10);
        uVar5 = *(undefined8 *)(lVar9 + 8);
        *puVar1 = *(undefined8 *)(lVar6 + -0x10);
        puVar1[1] = uVar8;
        *(undefined8 *)(param_1 + 0x10) = uVar5;
        return;
      }
      if (uVar2 != 0x1e) {
        if (uVar2 < 0x1b) {
          if ((uVar2 < 0xc) && (1 < uVar2 - 6)) {
            return;
          }
        }
        else if (uVar2 != 0x1c) {
          return;
        }
        lVar9 = *(long *)(param_1 + 0x10);
        puVar1 = (undefined8 *)(lVar7 + ((ulong)(uVar3 >> 6) & 0xff) * 0x10);
        *(long *)(param_1 + 0x10) = lVar9 + -0x10;
        uVar5 = *(undefined8 *)(lVar9 + -8);
        *puVar1 = *(undefined8 *)(lVar9 + -0x10);
        puVar1[1] = uVar5;
        return;
      }
    }
    else {
      lVar6 = *(long *)(param_1 + 0x10);
      uVar10 = *(uint *)(lVar6 + -8);
      uVar11 = 1;
      if (uVar10 != 0) {
        if (uVar10 == 1) {
          bVar4 = *(int *)(lVar6 + -0x10) == 0;
          uVar11 = (uint)bVar4;
          uVar10 = (uint)!bVar4;
        }
        else {
          uVar11 = 0;
          uVar10 = 1;
        }
      }
      *(long *)(param_1 + 0x10) = lVar6 + -0x10;
      if ((uVar2 == 0x21) &&
         (lVar7 = luaT_gettmbyobj(param_1,lVar7 + (ulong)(uVar3 >> 0x17) * 0x10,0x15),
         *(int *)(lVar7 + 8) == 0)) {
        uVar10 = uVar11;
      }
      if ((uVar3 >> 6 & 0xff) != uVar10) {
        *(long *)(lVar9 + 0x28) = *(long *)(lVar9 + 0x28) + 4;
        return;
      }
    }
  }
  else if (uVar2 == 0x24) {
    if ((uVar3 & 0x7fc000) != 0) goto LAB_00203934;
  }
  else if (uVar2 == 0x29) {
LAB_00203934:
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(lVar9 + 8);
    return;
  }
  return;
}


