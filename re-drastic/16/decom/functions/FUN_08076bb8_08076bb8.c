/*
 * Ghidra decompilation
 *
 * Function : FUN_08076bb8
 * Address  : 08076bb8
 * Program  : drastic16
 */


void FUN_08076bb8(byte *param_1,uint param_2,uint param_3,int param_4,int param_5)

{
  ushort uVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ushort *puVar12;
  ushort *puVar13;
  int local_44;
  int local_3c;
  byte *local_34;
  
  local_3c = FUN_0807b384(0);
  if ((local_3c == 0) && (local_3c = FUN_0807b384(1), local_3c == 0)) {
    return;
  }
  uVar3 = FUN_0807b3b0(0);
  iVar4 = FUN_0807b3d4();
  puVar2 = DAT_080faac0;
  if (iVar4 == 2) {
    uVar6 = (uint)*param_1;
    if (uVar6 != 0) {
      uVar7 = DAT_080faac0[1];
      local_44 = param_4;
      local_34 = param_1;
      if (uVar6 == 10) goto LAB_08076e68;
      do {
        if (uVar7 == 0) {
          uVar10 = *puVar2;
        }
        else {
          puVar12 = (ushort *)((int)puVar2 + (puVar2[uVar6 + 0x802] + 3) * 2);
          uVar10 = *puVar2;
          puVar13 = (ushort *)((int)puVar2 + (puVar2[uVar6 + 0x802] + uVar7) * 2 + 6);
          iVar4 = local_3c + ((uVar3 >> 1) * param_5 + local_44) * 2;
          do {
            while( true ) {
              puVar12 = puVar12 + 1;
              uVar1 = *puVar12;
              if (uVar10 != 0) break;
LAB_08076e34:
              iVar4 = iVar4 + (uVar3 & 0xfffffffe);
              if (puVar12 == puVar13) goto LAB_08076e40;
            }
            if ((param_3 & 0x10000) == 0) {
              uVar6 = 0xf;
              iVar5 = 0;
              do {
                uVar9 = uVar6 & 0xff;
                uVar6 = uVar6 - 1;
                uVar11 = param_2;
                if ((uVar1 >> uVar9 & 1) == 0) {
                  uVar11 = param_3;
                }
                *(short *)(iVar4 + iVar5) = (short)uVar11;
                iVar5 = iVar5 + 2;
              } while (uVar6 != 0xf - uVar10);
              goto LAB_08076e34;
            }
            uVar6 = 0;
            do {
              uVar9 = 0xf - uVar6;
              iVar5 = uVar6 * 2;
              uVar6 = uVar6 + 1;
              if ((uVar1 >> (uVar9 & 0xff) & 1) != 0) {
                *(short *)(iVar4 + iVar5) = (short)param_2;
              }
            } while (uVar6 != uVar10);
            iVar4 = iVar4 + (uVar3 & 0xfffffffe);
          } while (puVar12 != puVar13);
        }
LAB_08076e40:
        local_44 = local_44 + uVar10;
        while( true ) {
          local_34 = local_34 + 1;
          uVar6 = (uint)*local_34;
          if (uVar6 == 0) {
            return;
          }
          if (uVar6 != 10) break;
LAB_08076e68:
          param_5 = param_5 + uVar7;
          local_44 = param_4;
        }
      } while( true );
    }
  }
  else {
    uVar7 = (uint)*param_1;
    uVar6 = (param_3 & 0x1f) << 3;
    uVar10 = (param_3 & 0x7e0) << 5 | ((param_3 << 0x10) >> 0x1b) << 0x13 | uVar6;
    if (uVar7 != 0) {
      uVar9 = DAT_080faac0[1];
      iVar4 = param_4;
      do {
        if (uVar7 == 10) {
          param_5 = param_5 + uVar9;
          iVar4 = param_4;
        }
        else {
          if (uVar9 == 0) {
            uVar6 = *puVar2;
          }
          if (uVar9 != 0) {
            uVar11 = 0;
            puVar12 = (ushort *)((int)puVar2 + (puVar2[uVar7 + 0x802] + 3) * 2);
            uVar6 = *puVar2;
            iVar5 = local_3c + ((uVar3 >> 2) * param_5 + iVar4) * 4;
            do {
              puVar12 = puVar12 + 1;
              uVar1 = *puVar12;
              if (uVar6 != 0) {
                iVar8 = 0;
                uVar7 = 0;
                do {
                  uVar9 = 0xf - uVar7;
                  uVar7 = uVar7 + 1;
                  uVar6 = uVar10;
                  if ((uVar1 >> (uVar9 & 0xff) & 1) != 0) {
                    uVar6 = (param_2 & 0x7e0) << 5 | ((param_2 << 0x10) >> 0x1b) << 0x13 |
                            (param_2 & 0x1f) << 3;
                  }
                  *(uint *)(iVar5 + iVar8) = uVar6;
                  uVar6 = *puVar2;
                  iVar8 = iVar8 + 4;
                } while (uVar7 < uVar6);
                uVar9 = puVar2[1];
              }
              uVar11 = uVar11 + 1;
              iVar5 = iVar5 + (uVar3 & 0xfffffffc);
            } while (uVar11 < uVar9);
          }
          iVar4 = iVar4 + uVar6;
        }
        param_1 = param_1 + 1;
        uVar7 = (uint)*param_1;
      } while (uVar7 != 0);
    }
  }
  return;
}


