/*
 * Ghidra decompilation
 *
 * Function : FUN_08050ea4
 * Address  : 08050ea4
 * Program  : drastic16
 */


void FUN_08050ea4(int param_1,undefined8 *param_2,uint param_3)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  byte *pbVar8;
  undefined8 *puVar9;
  uint *puVar10;
  undefined8 *puVar11;
  uint uVar12;
  byte *pbVar13;
  byte *pbVar14;
  uint uVar15;
  uint uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  uint local_5c;
  
  bVar2 = *(byte *)(param_1 + 0x9a86);
  uVar3 = (uint)bVar2;
  pbVar8 = *(byte **)(param_1 + 0x9a48);
  puVar9 = *(undefined8 **)(param_1 + 0x9a4c);
  if (uVar3 != 0) {
    if (param_3 < uVar3) {
      if (param_3 != 0) {
        if (param_3 < 7 || param_2 < puVar9 + 2 && puVar9 < param_2 + 2) {
          puVar10 = (uint *)((int)param_2 + -4);
          uVar3 = 0;
          puVar7 = puVar9;
          do {
            uVar3 = uVar3 + 1;
            puVar10 = puVar10 + 1;
            *(uint *)puVar7 = *puVar10;
            puVar7 = (undefined8 *)((int)puVar7 + 4);
          } while (uVar3 != param_3);
        }
        else {
          uVar5 = 0;
          uVar3 = param_3 & 0xfffffffc;
          puVar7 = puVar9;
          puVar4 = param_2;
          do {
            uVar5 = uVar5 + 1;
            uVar17 = *puVar4;
            uVar18 = puVar4[1];
            puVar4 = puVar4 + 2;
            *puVar7 = uVar17;
            puVar7[1] = uVar18;
            puVar7 = puVar7 + 2;
          } while (uVar5 < param_3 >> 2);
          iVar1 = uVar3 * 4;
          if (((param_3 != uVar3) &&
              (*(uint *)((int)puVar9 + uVar3 * 4) = *(uint *)((int)param_2 + uVar3 * 4),
              uVar3 + 1 < param_3)) &&
             (*(undefined4 *)((int)puVar9 + iVar1 + 4) = *(undefined4 *)((int)param_2 + iVar1 + 4),
             uVar3 + 2 < param_3)) {
            *(undefined4 *)((int)puVar9 + iVar1 + 8) = *(undefined4 *)((int)param_2 + iVar1 + 8);
          }
        }
        puVar9 = (undefined8 *)((int)puVar9 + param_3 * 4);
      }
      *(undefined8 **)(param_1 + 0x9a4c) = puVar9;
      *(byte *)(param_1 + 0x9a86) = bVar2 - (char)param_3;
      return;
    }
    if (uVar3 < 7 || param_2 < puVar9 + 2 && puVar9 < param_2 + 2) {
      puVar10 = (uint *)((int)param_2 + -4);
      uVar5 = 0;
      puVar7 = puVar9;
      do {
        uVar5 = uVar5 + 1;
        puVar10 = puVar10 + 1;
        *(uint *)puVar7 = *puVar10;
        puVar7 = (undefined8 *)((int)puVar7 + 4);
      } while (uVar5 < uVar3);
    }
    else {
      uVar6 = (uint)(bVar2 >> 2);
      uVar15 = 0;
      uVar5 = uVar6 * 4;
      puVar7 = puVar9;
      puVar4 = param_2;
      do {
        uVar15 = uVar15 + 1;
        uVar17 = *puVar4;
        uVar18 = puVar4[1];
        puVar4 = puVar4 + 2;
        *puVar7 = uVar17;
        puVar7[1] = uVar18;
        puVar7 = puVar7 + 2;
      } while (uVar15 < uVar6);
      if (((uVar3 != uVar5) &&
          (*(uint *)(puVar9 + uVar6 * 2) = *(uint *)(param_2 + uVar6 * 2), uVar5 + 1 < uVar3)) &&
         (*(undefined4 *)((int)puVar9 + uVar6 * 0x10 + 4) =
               *(undefined4 *)((int)param_2 + uVar6 * 0x10 + 4), uVar5 + 2 < uVar3)) {
        *(uint *)(puVar9 + uVar6 * 2 + 1) = *(uint *)(param_2 + uVar6 * 2 + 1);
      }
    }
    param_3 = param_3 - uVar3;
    puVar9 = (undefined8 *)((int)puVar9 + uVar3 * 4);
    param_2 = (undefined8 *)((int)param_2 + uVar3 * 4);
    if (param_3 == 0) {
      *(undefined *)(param_1 + 0x9a86) = 0;
      *(undefined8 **)(param_1 + 0x9a4c) = puVar9;
      *(undefined8 **)(param_1 + 0x9a44) = puVar9;
      *(byte **)(param_1 + 0x9a40) = pbVar8;
      return;
    }
  }
  local_5c = (int)pbVar8 - (int)(byte *)(param_1 + 0x61ab0);
  do {
    uVar5 = *(uint *)param_2;
    param_3 = param_3 - 1;
    uVar16 = (uVar5 << 0x11) >> 0x19;
    uVar3 = (uVar5 << 9) >> 0x19;
    uVar15 = uVar5 & 0x7f;
    uVar6 = (uVar5 << 1) >> 0x19;
    uVar12 = (uint)(byte)(&DAT_080e6df8)[uVar16] + (uint)(byte)(&DAT_080e6df8)[uVar3] +
             (uint)(byte)(&DAT_080e6df8)[uVar15] + (uint)(byte)(&DAT_080e6df8)[uVar6];
    pbVar13 = pbVar8;
    if (uVar15 != 0) {
      pbVar13 = pbVar8 + 1;
      *pbVar8 = (byte)uVar15;
    }
    pbVar14 = pbVar13;
    if (uVar16 != 0) {
      pbVar14 = pbVar13 + 1;
      *pbVar13 = (byte)((uVar5 << 0x11) >> 0x19);
    }
    pbVar13 = pbVar14;
    if (uVar3 != 0) {
      pbVar13 = pbVar14 + 1;
      *pbVar14 = (byte)((uVar5 << 9) >> 0x19);
    }
    pbVar14 = pbVar13;
    if (uVar6 != 0) {
      pbVar14 = pbVar13 + 1;
      *pbVar13 = (byte)((uVar5 << 1) >> 0x19);
    }
    puVar7 = (undefined8 *)((int)param_2 + 4);
    if (param_3 < uVar12) {
      *(undefined8 **)(param_1 + 0x9a44) = puVar9;
      if (param_3 != 0) {
        if (param_3 < 7 || puVar7 < puVar9 + 2 && puVar9 < (undefined8 *)((int)param_2 + 0x14U)) {
          uVar3 = 0;
          puVar7 = puVar9;
          do {
            uVar3 = uVar3 + 1;
            param_2 = (undefined8 *)((int)param_2 + 4);
            *(uint *)puVar7 = *(uint *)param_2;
            puVar7 = (undefined8 *)((int)puVar7 + 4);
          } while (uVar3 != param_3);
        }
        else {
          uVar5 = 0;
          uVar3 = param_3 & 0xfffffffc;
          puVar4 = puVar7;
          puVar11 = puVar9;
          do {
            uVar5 = uVar5 + 1;
            uVar17 = *puVar4;
            uVar18 = puVar4[1];
            puVar4 = puVar4 + 2;
            *puVar11 = uVar17;
            puVar11[1] = uVar18;
            puVar11 = puVar11 + 2;
          } while (uVar5 < param_3 >> 2);
          iVar1 = uVar3 * 4;
          if (((uVar3 != param_3) &&
              (*(uint *)((int)puVar9 + uVar3 * 4) = *(uint *)((int)puVar7 + uVar3 * 4),
              uVar3 + 1 < param_3)) &&
             (*(undefined4 *)((int)puVar9 + iVar1 + 4) = *(undefined4 *)((int)puVar7 + iVar1 + 4),
             uVar3 + 2 < param_3)) {
            *(undefined4 *)((int)puVar9 + iVar1 + 8) = *(undefined4 *)((int)puVar7 + iVar1 + 8);
          }
        }
        puVar9 = (undefined8 *)((int)puVar9 + param_3 * 4);
      }
      *(byte **)(param_1 + 0x9a40) = pbVar8;
      *(char *)(param_1 + 0x9a86) = (char)uVar12 - (char)param_3;
      *(byte **)(param_1 + 0x9a48) = pbVar14;
      *(undefined8 **)(param_1 + 0x9a4c) = puVar9;
      return;
    }
    if (uVar12 != 0) {
      if (uVar12 < 7 || puVar7 < puVar9 + 2 && puVar9 < (undefined8 *)((int)param_2 + 0x14)) {
        uVar3 = 0;
        puVar4 = puVar9;
        do {
          uVar3 = uVar3 + 1;
          param_2 = (undefined8 *)((int)param_2 + 4);
          *(uint *)puVar4 = *(uint *)param_2;
          puVar4 = (undefined8 *)((int)puVar4 + 4);
        } while (uVar3 != uVar12);
      }
      else {
        uVar5 = 0;
        uVar3 = uVar12 & 0xfffffffc;
        puVar4 = puVar7;
        puVar11 = puVar9;
        do {
          uVar5 = uVar5 + 1;
          uVar17 = *puVar4;
          uVar18 = puVar4[1];
          puVar4 = puVar4 + 2;
          *puVar11 = uVar17;
          puVar11[1] = uVar18;
          puVar11 = puVar11 + 2;
        } while (uVar5 < uVar12 >> 2);
        iVar1 = uVar3 * 4;
        if (((uVar3 != uVar12) &&
            (*(uint *)((int)puVar9 + uVar3 * 4) = *(uint *)((int)puVar7 + uVar3 * 4),
            uVar3 + 1 < uVar12)) &&
           (*(undefined4 *)((int)puVar9 + iVar1 + 4) = *(undefined4 *)((int)puVar7 + iVar1 + 4),
           uVar3 + 2 < uVar12)) {
          *(undefined4 *)((int)puVar9 + iVar1 + 8) = *(undefined4 *)((int)puVar7 + iVar1 + 8);
        }
      }
      puVar9 = (undefined8 *)((int)puVar9 + uVar12 * 4);
      puVar7 = (undefined8 *)((int)puVar7 + uVar12 * 4);
    }
    param_3 = param_3 - uVar12;
    local_5c = local_5c + 1;
    pbVar8 = pbVar14;
    if (0x3ff < local_5c) {
      *(ulonglong *)(param_1 + 0x9a40) = CONCAT44(puVar9,pbVar14);
      *(ulonglong *)(param_1 + 0x9a48) = CONCAT44(puVar9,pbVar14);
      FUN_08050498(param_1);
      local_5c = 0;
      puVar9 = (undefined8 *)(param_1 + 0x69ab0);
      pbVar8 = (byte *)(param_1 + 0x61ab0);
    }
    param_2 = puVar7;
  } while (param_3 != 0);
  *(ulonglong *)(param_1 + 0x9a40) = CONCAT44(puVar9,pbVar8);
  *(ulonglong *)(param_1 + 0x9a48) = CONCAT44(puVar9,pbVar8);
  *(undefined *)(param_1 + 0x9a86) = 0;
  return;
}


