/*
 * Ghidra decompilation
 *
 * Function : SzReadBoolVector2
 * Address  : 001a85c0
 * Program  : drastic64
 */


undefined8 SzReadBoolVector2(byte **param_1,long param_2,long *param_3,code **param_4)

{
  byte bVar1;
  byte *pbVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_1[1] == (byte *)0x0) {
    return 0x10;
  }
  pbVar2 = *param_1;
  *param_1 = pbVar2 + 1;
  param_1[1] = param_1[1] + -1;
  if (*pbVar2 == 0) {
    if (param_2 == 0) goto LAB_001a8658;
    lVar5 = (**param_4)(param_4);
    *param_3 = lVar5;
    lVar4 = 0;
    if (lVar5 != 0) {
      do {
        uVar6 = 0x80;
        uVar7 = 0x40;
        if (param_1[1] == (byte *)0x0) {
          return 0x10;
        }
        pbVar2 = *param_1;
        param_1[1] = param_1[1] + -1;
        *param_1 = pbVar2 + 1;
        bVar1 = *pbVar2;
        while( true ) {
          *(bool *)(*param_3 + lVar4) = ((uint)uVar6 & (uint)bVar1) != 0;
          lVar4 = lVar4 + 1;
          if (param_2 == lVar4) {
            return 0;
          }
          if ((int)uVar7 == 0) break;
          uVar6 = uVar7;
          uVar7 = uVar7 >> 1;
        }
      } while( true );
    }
  }
  else {
    if (param_2 == 0) {
LAB_001a8658:
      *param_3 = 0;
      return 0;
    }
    puVar3 = (undefined *)(**param_4)(param_4);
    *param_3 = (long)puVar3;
    if (puVar3 != (undefined *)0x0) {
      *puVar3 = 1;
      lVar4 = 1;
      if (param_2 != 1) {
        do {
          *(undefined *)(*param_3 + lVar4) = 1;
          lVar4 = lVar4 + 1;
        } while (param_2 != lVar4);
      }
      return 0;
    }
  }
  return 2;
}


