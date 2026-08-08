/*
 * Ghidra decompilation
 *
 * Function : luaS_newudata
 * Address  : 002003f0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void luaS_newudata(undefined8 param_1,ulong param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  long lVar6;
  int iVar7;
  long *plVar8;
  uint uVar9;
  long lVar10;
  float fVar11;
  undefined auVar12 [16];
  int iStack_2c;
  long lStack_28;
  
  if (param_2 < 0x7fffffd8) {
    lVar6 = luaC_newobj(param_1,7,param_2 + 0x28);
    uVar4 = luaO_nilobject_;
    *(undefined8 *)(lVar6 + 0x10) = 0;
    *(ulong *)(lVar6 + 0x18) = param_2;
    *(char *)(lVar6 + 10) = (char)DAT_00229c08;
    *(undefined8 *)(lVar6 + 0x20) = uVar4;
    return;
  }
  auVar12 = luaM_toobig();
  plVar8 = auVar12._8_8_;
  lVar6 = auVar12._0_8_;
  lStack_28 = ___stack_chk_guard;
  uVar9 = *(uint *)(plVar8 + 1) & 0x3f;
  if (uVar9 == 4) {
    bVar1 = *(byte *)(lVar6 + 0xb);
    lVar6 = *(long *)(lVar6 + 0x18);
    uVar9 = *(uint *)(*plVar8 + 0xc);
LAB_002005dc:
    uVar9 = (1 << (ulong)(bVar1 & 0x1f)) - 1U & uVar9;
    lVar6 = lVar6 + (-(ulong)(uVar9 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar9 << 5);
  }
  else {
    if (uVar9 < 5) {
      if (uVar9 != 2) {
        if (uVar9 == 3) {
          fVar11 = frexpf(*(float *)plVar8,&iStack_2c);
          iStack_2c = (int)(fVar11 * 2.147483e+09) + iStack_2c;
          iVar7 = iStack_2c;
          if ((iStack_2c < 0) && (iVar7 = -iStack_2c, iStack_2c == iVar7)) {
            iVar7 = 0;
          }
          uVar9 = (1 << (ulong)(*(byte *)(lVar6 + 0xb) & 0x1f)) - 1U | 1;
          iVar2 = 0;
          if (uVar9 != 0) {
            iVar2 = iVar7 / (int)uVar9;
          }
          uVar9 = iVar7 - iVar2 * uVar9;
          lVar6 = *(long *)(lVar6 + 0x18) +
                  (-(ulong)(uVar9 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar9 << 5);
          goto LAB_002004f8;
        }
        if (uVar9 == 1) {
          uVar9 = (1 << (ulong)(*(byte *)(lVar6 + 0xb) & 0x1f)) - 1U & *(uint *)plVar8;
          lVar6 = *(long *)(lVar6 + 0x18) +
                  (-(ulong)(uVar9 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar9 << 5);
          goto LAB_002004f8;
        }
      }
    }
    else {
      if (uVar9 == 0x14) {
        lVar10 = *plVar8;
        uVar9 = *(uint *)(lVar10 + 0xc);
        if (*(char *)(lVar10 + 10) == '\0') {
          uVar5 = luaS_hash(lVar10 + 0x20,*(undefined8 *)(lVar10 + 0x10),uVar9,0);
          *(undefined *)(lVar10 + 10) = 1;
          *(undefined4 *)(lVar10 + 0xc) = uVar5;
          uVar9 = *(uint *)(*plVar8 + 0xc);
        }
        bVar1 = *(byte *)(lVar6 + 0xb);
        lVar6 = *(long *)(lVar6 + 0x18);
        goto LAB_002005dc;
      }
      if ((uVar9 != 0x16) && (uVar9 == 0x13)) {
        uVar9 = (1 << (ulong)(*(byte *)(lVar6 + 0xb) & 0x1f)) - 1U & *(uint *)plVar8;
        lVar6 = *(long *)(lVar6 + 0x18) +
                (-(ulong)(uVar9 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar9 << 5);
        goto LAB_002004f8;
      }
    }
    uVar9 = (1 << (ulong)(*(byte *)(lVar6 + 0xb) & 0x1f)) - 1U | 1;
    uVar3 = 0;
    if (uVar9 != 0) {
      uVar3 = (uint)*plVar8 / uVar9;
    }
    lVar6 = *(long *)(lVar6 + 0x18) + (ulong)((uint)*plVar8 - uVar3 * uVar9) * 0x20;
  }
LAB_002004f8:
  if (lStack_28 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar6,lStack_28 - ___stack_chk_guard,0);
  }
  return;
}


