/*
 * Ghidra decompilation
 *
 * Function : clearvalues
 * Address  : 001f87d0
 * Program  : drastic64
 */


void clearvalues(undefined8 param_1,long param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *extraout_x8;
  long *plVar6;
  long *extraout_x8_00;
  long extraout_x9;
  long extraout_x9_00;
  uint uVar7;
  long extraout_x11;
  long extraout_x11_00;
  undefined8 uVar8;
  undefined8 extraout_x12;
  undefined8 extraout_x12_00;
  undefined8 uVar9;
  undefined8 extraout_x13;
  undefined8 extraout_x13_00;
  undefined8 extraout_x14;
  undefined8 extraout_x14_00;
  
  if (param_2 == param_3) {
    return;
  }
  uVar8 = 1;
  uVar9 = 10;
  do {
    uVar7 = *(uint *)(param_2 + 0xc);
    plVar4 = *(long **)(param_2 + 0x18);
    uVar1 = (int)uVar8 << (ulong)(*(byte *)(param_2 + 0xb) & 0x1f);
    plVar6 = (long *)((long)plVar4 +
                     (-(ulong)(uVar1 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar1 << 5));
    if (uVar7 != 0) {
      uVar5 = 0;
      do {
        while( true ) {
          lVar3 = *(long *)(param_2 + 0x10) + uVar5 * 0x10;
          uVar1 = *(uint *)(lVar3 + 8);
          if ((uVar1 >> 6 & 1) != 0) break;
LAB_001f882c:
          uVar1 = (int)uVar5 + 1;
          uVar5 = (ulong)uVar1;
          if (uVar7 <= uVar1) goto LAB_001f8888;
        }
        lVar2 = *(long *)(*(long *)(param_2 + 0x10) + uVar5 * 0x10);
        if ((uVar1 & 0xf) != 4) {
          if ((*(byte *)(lVar2 + 9) & 3) != 0) {
            *(undefined4 *)(lVar3 + 8) = 0;
          }
          goto LAB_001f882c;
        }
        if ((lVar2 == 0) || ((*(byte *)(lVar2 + 9) & 3) == 0)) goto LAB_001f882c;
        reallymarkobject(param_1);
        uVar7 = *(uint *)(extraout_x9 + 0xc);
        uVar1 = (int)uVar5 + 1;
        uVar5 = (ulong)uVar1;
        plVar6 = extraout_x8;
        param_2 = extraout_x9;
        param_3 = extraout_x11;
        uVar8 = extraout_x12;
        uVar9 = extraout_x13;
        param_1 = extraout_x14;
      } while (uVar1 < uVar7);
LAB_001f8888:
      plVar4 = *(long **)(param_2 + 0x18);
    }
    if (plVar4 < plVar6) {
      do {
        uVar7 = *(uint *)(plVar4 + 1);
        if ((uVar7 != 0) && ((uVar7 >> 6 & 1) != 0)) {
          lVar3 = *plVar4;
          if ((uVar7 & 0xf) == 4) {
            if ((lVar3 != 0) && ((*(byte *)(lVar3 + 9) & 3) != 0)) {
              reallymarkobject(param_1);
              plVar6 = extraout_x8_00;
              param_2 = extraout_x9_00;
              param_3 = extraout_x11_00;
              uVar8 = extraout_x12_00;
              uVar9 = extraout_x13_00;
              param_1 = extraout_x14_00;
            }
          }
          else if ((((*(byte *)(lVar3 + 9) & 3) != 0) &&
                   (*(undefined4 *)(plVar4 + 1) = 0, (*(uint *)(plVar4 + 3) >> 6 & 1) != 0)) &&
                  ((*(byte *)(plVar4[2] + 9) & 3) != 0)) {
            *(int *)(plVar4 + 3) = (int)uVar9;
          }
        }
        plVar4 = plVar4 + 4;
      } while (plVar4 < plVar6);
    }
    param_2 = *(long *)(param_2 + 0x30);
    if (param_3 == param_2) {
      return;
    }
  } while( true );
}


