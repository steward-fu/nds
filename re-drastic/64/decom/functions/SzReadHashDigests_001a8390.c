/*
 * Ghidra decompilation
 *
 * Function : SzReadHashDigests
 * Address  : 001a8390
 * Program  : drastic64
 */


undefined8
SzReadHashDigests(byte **param_1,ulong param_2,long *param_3,long *param_4,code **param_5)

{
  byte bVar1;
  ushort uVar2;
  uint3 uVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  ulong uVar11;
  
  if (param_1[1] == (byte *)0x0) {
LAB_001a8500:
    uVar7 = 0x10;
  }
  else {
    pbVar9 = *param_1;
    param_1[1] = param_1[1] + -1;
    *param_1 = pbVar9 + 1;
    if (*pbVar9 == 0) {
      if (param_2 == 0) goto LAB_001a8510;
      lVar6 = (**param_5)(param_5);
      *param_3 = lVar6;
      uVar5 = 0;
      if (lVar6 != 0) {
        while( true ) {
          uVar8 = 0x80;
          uVar11 = 0x40;
          if (param_1[1] == (byte *)0x0) break;
          pbVar9 = *param_1;
          param_1[1] = param_1[1] + -1;
          *param_1 = pbVar9 + 1;
          bVar1 = *pbVar9;
          while( true ) {
            *(bool *)(*param_3 + uVar5) = ((uint)uVar8 & (uint)bVar1) != 0;
            uVar5 = uVar5 + 1;
            if (param_2 == uVar5) goto LAB_001a8424;
            if ((int)uVar11 == 0) break;
            uVar8 = uVar11;
            uVar11 = uVar11 >> 1;
          }
        }
        goto LAB_001a8500;
      }
    }
    else {
      if (param_2 == 0) {
LAB_001a8510:
        *param_3 = 0;
        *param_4 = 0;
        return 0;
      }
      puVar4 = (undefined *)(**param_5)(param_5);
      *param_3 = (long)puVar4;
      if (puVar4 != (undefined *)0x0) {
        *puVar4 = 1;
        uVar5 = 1;
        if (param_2 != 1) {
          do {
            *(undefined *)(*param_3 + uVar5) = 1;
            uVar5 = uVar5 + 1;
          } while (param_2 != uVar5);
        }
LAB_001a8424:
        lVar6 = (**param_5)(param_5,param_2 << 2);
        *param_4 = lVar6;
        if (lVar6 != 0) {
          uVar5 = 0;
          while( true ) {
            while (*(char *)(*param_3 + uVar5) == '\0') {
              uVar5 = uVar5 + 1;
              if (param_2 <= uVar5) {
                return 0;
              }
            }
            pbVar9 = param_1[1];
            *(undefined4 *)(lVar6 + uVar5 * 4) = 0;
            if (pbVar9 == (byte *)0x0) break;
            pbVar10 = *param_1;
            *param_1 = pbVar10 + 1;
            param_1[1] = pbVar9 + -1;
            bVar1 = *pbVar10;
            *(uint *)(lVar6 + uVar5 * 4) = (uint)bVar1;
            if (pbVar9 + -1 == (byte *)0x0) break;
            *param_1 = pbVar10 + 2;
            param_1[1] = pbVar9 + -2;
            uVar2 = CONCAT11(pbVar10[1],bVar1);
            *(uint *)(lVar6 + uVar5 * 4) = (uint)uVar2;
            if (pbVar9 + -2 == (byte *)0x0) break;
            *param_1 = pbVar10 + 3;
            param_1[1] = pbVar9 + -3;
            uVar3 = CONCAT12(pbVar10[2],uVar2);
            *(uint *)(lVar6 + uVar5 * 4) = (uint)uVar3;
            if (pbVar9 + -3 == (byte *)0x0) break;
            *param_1 = pbVar10 + 4;
            param_1[1] = pbVar9 + -4;
            *(uint *)(lVar6 + uVar5 * 4) = CONCAT13(pbVar10[3],uVar3);
            uVar5 = uVar5 + 1;
            if (param_2 <= uVar5) {
              return 0;
            }
          }
          goto LAB_001a8500;
        }
      }
    }
    uVar7 = 2;
  }
  return uVar7;
}


