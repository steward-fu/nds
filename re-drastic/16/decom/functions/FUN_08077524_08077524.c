/*
 * Ghidra decompilation
 *
 * Function : FUN_08077524
 * Address  : 08077524
 * Program  : drastic16
 */


void FUN_08077524(undefined2 param_1,int param_2,int param_3,uint param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined2 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  iVar1 = FUN_0807b384(0);
  uVar2 = FUN_0807b3b0(0);
  puVar5 = (undefined2 *)((uVar2 >> 1) * param_3 * 2 + iVar1 + param_2 * 2);
  if (param_5 == 0) {
    return;
  }
  iVar1 = 0;
  do {
    if (param_4 != 0) {
      uVar3 = -((uint)((int)puVar5 << 0x1d) >> 0x1e) & 7;
      if (param_4 <= uVar3) {
        uVar3 = param_4;
      }
      uVar7 = param_4;
      if ((param_4 < 0xb) || (uVar7 = uVar3, uVar3 != 0)) {
        *puVar5 = param_1;
        uVar3 = uVar7;
        if ((((uVar7 != 1) &&
             (((puVar5[1] = param_1, uVar7 != 2 && (puVar5[2] = param_1, uVar7 != 3)) &&
              (puVar5[3] = param_1, uVar7 != 4)))) &&
            (((puVar5[4] = param_1, uVar7 != 5 && (puVar5[5] = param_1, uVar7 != 6)) &&
             (puVar5[6] = param_1, uVar7 != 7)))) && (puVar5[7] = param_1, uVar7 != 8)) {
          puVar5[8] = param_1;
          if (uVar7 == 10) {
            puVar5[9] = param_1;
          }
          else {
            uVar3 = 9;
          }
        }
        if (param_4 == uVar7) goto LAB_080776c8;
      }
      uVar8 = param_4 - uVar7;
      uVar6 = uVar8 & 0xfffffff8;
      if (uVar6 != 0) {
        puVar4 = (undefined8 *)(puVar5 + uVar7);
        uVar7 = 0;
        do {
          uVar7 = uVar7 + 1;
          *puVar4 = 0;
          puVar4[1] = 0;
          puVar4 = puVar4 + 2;
        } while (uVar7 < uVar8 >> 3);
        uVar3 = uVar3 + uVar6;
        if (uVar8 == uVar6) goto LAB_080776c8;
      }
      puVar5[uVar3] = param_1;
      if (uVar3 + 1 < param_4) {
        puVar5[uVar3 + 1] = param_1;
        if (uVar3 + 2 < param_4) {
          puVar5[uVar3 + 2] = param_1;
          if (uVar3 + 3 < param_4) {
            puVar5[uVar3 + 3] = param_1;
            if (uVar3 + 4 < param_4) {
              puVar5[uVar3 + 4] = param_1;
              if (uVar3 + 5 < param_4) {
                uVar6 = uVar3 + 6;
                uVar7 = uVar6;
                if (uVar6 < param_4) {
                  uVar7 = uVar6 * 2;
                }
                puVar5[uVar3 + 5] = param_1;
                if (uVar6 < param_4) {
                  *(undefined2 *)((int)puVar5 + uVar7) = param_1;
                }
              }
            }
          }
        }
      }
    }
LAB_080776c8:
    iVar1 = iVar1 + 1;
    puVar5 = (undefined2 *)((int)puVar5 + (uVar2 & 0xfffffffe));
    if (iVar1 == param_5) {
      return;
    }
  } while( true );
}


