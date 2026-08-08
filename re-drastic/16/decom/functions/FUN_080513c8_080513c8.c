/*
 * Ghidra decompilation
 *
 * Function : FUN_080513c8
 * Address  : 080513c8
 * Program  : drastic16
 */


int FUN_080513c8(int param_1,undefined8 *param_2,uint param_3)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  byte *pbVar14;
  byte *pbVar15;
  int iVar16;
  uint uVar17;
  uint *puVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  uint local_64;
  uint local_60;
  byte *local_5c;
  
  bVar2 = *(byte *)(param_1 + 0x9a86);
  uVar6 = (uint)bVar2;
  local_5c = *(byte **)(param_1 + 0x9a48);
  puVar11 = *(undefined8 **)(param_1 + 0x9a4c);
  local_64 = param_3;
  if (uVar6 != 0) {
    if (param_3 < uVar6) {
      if (param_3 != 0) {
        if (param_3 < 7 || param_2 < puVar11 + 2 && puVar11 < param_2 + 2) {
          puVar18 = (uint *)((int)param_2 + -4);
          uVar6 = 0;
          puVar10 = puVar11;
          do {
            uVar6 = uVar6 + 1;
            puVar18 = puVar18 + 1;
            *(uint *)puVar10 = *puVar18;
            puVar10 = (undefined8 *)((int)puVar10 + 4);
          } while (uVar6 != param_3);
        }
        else {
          uVar8 = 0;
          uVar6 = param_3 & 0xfffffffc;
          puVar10 = puVar11;
          puVar12 = param_2;
          do {
            uVar8 = uVar8 + 1;
            uVar19 = *puVar12;
            uVar20 = puVar12[1];
            puVar12 = puVar12 + 2;
            *puVar10 = uVar19;
            puVar10[1] = uVar20;
            puVar10 = puVar10 + 2;
          } while (uVar8 < param_3 >> 2);
          iVar16 = uVar6 * 4;
          if (((param_3 != uVar6) &&
              (*(uint *)((int)puVar11 + uVar6 * 4) = *(uint *)((int)param_2 + uVar6 * 4),
              uVar6 + 1 < param_3)) &&
             (*(undefined4 *)((int)puVar11 + iVar16 + 4) =
                   *(undefined4 *)((int)param_2 + iVar16 + 4), uVar6 + 2 < param_3)) {
            *(undefined4 *)((int)puVar11 + iVar16 + 8) = *(undefined4 *)((int)param_2 + iVar16 + 8);
          }
        }
        puVar11 = (undefined8 *)((int)puVar11 + param_3 * 4);
      }
      *(undefined8 **)(param_1 + 0x9a4c) = puVar11;
      *(byte *)(param_1 + 0x9a86) = bVar2 - (char)param_3;
      return 0;
    }
    if (uVar6 < 7 || param_2 < puVar11 + 2 && puVar11 < param_2 + 2) {
      puVar18 = (uint *)((int)param_2 + -4);
      uVar8 = 0;
      puVar10 = puVar11;
      do {
        uVar8 = uVar8 + 1;
        puVar18 = puVar18 + 1;
        *(uint *)puVar10 = *puVar18;
        puVar10 = (undefined8 *)((int)puVar10 + 4);
      } while (uVar8 < uVar6);
    }
    else {
      uVar9 = (uint)(bVar2 >> 2);
      uVar7 = 0;
      uVar8 = uVar9 * 4;
      puVar10 = param_2;
      puVar12 = puVar11;
      do {
        uVar7 = uVar7 + 1;
        uVar19 = *puVar10;
        uVar20 = puVar10[1];
        puVar10 = puVar10 + 2;
        *puVar12 = uVar19;
        puVar12[1] = uVar20;
        puVar12 = puVar12 + 2;
      } while (uVar7 < uVar9);
      if (((uVar6 != uVar8) &&
          (*(uint *)(puVar11 + uVar9 * 2) = *(uint *)(param_2 + uVar9 * 2), uVar8 + 1 < uVar6)) &&
         (*(undefined4 *)((int)puVar11 + uVar9 * 0x10 + 4) =
               *(undefined4 *)((int)param_2 + uVar9 * 0x10 + 4), uVar8 + 2 < uVar6)) {
        *(uint *)(puVar11 + uVar9 * 2 + 1) = *(uint *)(param_2 + uVar9 * 2 + 1);
      }
    }
    local_64 = param_3 - uVar6;
    puVar11 = (undefined8 *)((int)puVar11 + uVar6 * 4);
    param_2 = (undefined8 *)((int)param_2 + uVar6 * 4);
    if (local_64 == 0) {
      *(undefined *)(param_1 + 0x9a86) = 0;
      *(undefined8 **)(param_1 + 0x9a4c) = puVar11;
      *(undefined8 **)(param_1 + 0x9a44) = puVar11;
      *(byte **)(param_1 + 0x9a40) = local_5c;
      return 0;
    }
  }
  iVar16 = 0;
  local_60 = (int)local_5c - (int)(byte *)(param_1 + 0x61ab0);
  do {
    uVar8 = *(uint *)param_2;
    uVar17 = (uVar8 << 0x11) >> 0x19;
    uVar7 = uVar8 & 0x7f;
    uVar6 = (uVar8 << 9) >> 0x19;
    uVar9 = (uVar8 << 1) >> 0x19;
    bVar2 = (&DAT_080e6df8)[uVar6];
    bVar3 = (&DAT_080e6df8)[uVar17];
    iVar16 = (uint)*(ushort *)(&DAT_080e6e78 + uVar7 * 2) + iVar16 +
             (uint)*(ushort *)(&DAT_080e6e78 + uVar17 * 2) +
             (uint)*(ushort *)(&DAT_080e6e78 + uVar6 * 2) +
             (uint)*(ushort *)(&DAT_080e6e78 + uVar9 * 2);
    bVar4 = (&DAT_080e6df8)[uVar9];
    bVar5 = (&DAT_080e6df8)[uVar7];
    pbVar14 = local_5c;
    if (uVar7 != 0) {
      pbVar14 = local_5c + 1;
      *local_5c = (byte)uVar7;
    }
    pbVar15 = pbVar14;
    if (uVar17 != 0) {
      pbVar15 = pbVar14 + 1;
      *pbVar14 = (byte)((uVar8 << 0x11) >> 0x19);
    }
    pbVar14 = pbVar15;
    if (uVar6 != 0) {
      pbVar14 = pbVar15 + 1;
      *pbVar15 = (byte)((uVar8 << 9) >> 0x19);
    }
    pbVar15 = pbVar14;
    if (uVar9 != 0) {
      pbVar15 = pbVar14 + 1;
      *pbVar14 = (byte)((uVar8 << 1) >> 0x19);
    }
    uVar6 = (uint)bVar3 + (uint)bVar2 + (uint)bVar5 + (uint)bVar4;
    local_64 = local_64 - 1;
    puVar10 = (undefined8 *)((int)param_2 + 4);
    if (local_64 < uVar6) {
      *(undefined8 **)(param_1 + 0x9a44) = puVar11;
      if (local_64 != 0) {
        if (local_64 < 7 || puVar10 < puVar11 + 2 && puVar11 < (undefined8 *)((int)param_2 + 0x14U))
        {
          uVar8 = 0;
          puVar10 = puVar11;
          do {
            uVar8 = uVar8 + 1;
            param_2 = (undefined8 *)((int)param_2 + 4);
            *(uint *)puVar10 = *(uint *)param_2;
            puVar10 = (undefined8 *)((int)puVar10 + 4);
          } while (uVar8 != local_64);
        }
        else {
          uVar9 = 0;
          uVar8 = local_64 & 0xfffffffc;
          puVar12 = puVar10;
          puVar13 = puVar11;
          do {
            uVar9 = uVar9 + 1;
            uVar19 = *puVar12;
            uVar20 = puVar12[1];
            puVar12 = puVar12 + 2;
            *puVar13 = uVar19;
            puVar13[1] = uVar20;
            puVar13 = puVar13 + 2;
          } while (uVar9 < local_64 >> 2);
          iVar1 = uVar8 * 4;
          if (((uVar8 != local_64) &&
              (*(uint *)((int)puVar11 + uVar8 * 4) = *(uint *)((int)puVar10 + uVar8 * 4),
              uVar8 + 1 < local_64)) &&
             (*(undefined4 *)((int)puVar11 + iVar1 + 4) = *(undefined4 *)((int)puVar10 + iVar1 + 4),
             uVar8 + 2 < local_64)) {
            *(undefined4 *)((int)puVar11 + iVar1 + 8) = *(undefined4 *)((int)puVar10 + iVar1 + 8);
          }
        }
        puVar11 = (undefined8 *)((int)puVar11 + local_64 * 4);
      }
      *(byte **)(param_1 + 0x9a40) = local_5c;
      *(char *)(param_1 + 0x9a86) = (char)uVar6 - (char)local_64;
      *(byte **)(param_1 + 0x9a48) = pbVar15;
      *(undefined8 **)(param_1 + 0x9a4c) = puVar11;
      return iVar16;
    }
    if (uVar6 != 0) {
      if (uVar6 < 7 || puVar10 < puVar11 + 2 && puVar11 < (undefined8 *)((int)param_2 + 0x14U)) {
        uVar8 = 0;
        puVar12 = puVar11;
        do {
          uVar8 = uVar8 + 1;
          param_2 = (undefined8 *)((int)param_2 + 4);
          *(uint *)puVar12 = *(uint *)param_2;
          puVar12 = (undefined8 *)((int)puVar12 + 4);
        } while (uVar8 != uVar6);
      }
      else {
        uVar9 = 0;
        uVar8 = uVar6 & 0xfffffffc;
        puVar12 = puVar10;
        puVar13 = puVar11;
        do {
          uVar9 = uVar9 + 1;
          uVar19 = *puVar12;
          uVar20 = puVar12[1];
          puVar12 = puVar12 + 2;
          *puVar13 = uVar19;
          puVar13[1] = uVar20;
          puVar13 = puVar13 + 2;
        } while (uVar9 < uVar6 >> 2);
        iVar1 = uVar8 * 4;
        if (((uVar6 != uVar8) &&
            (*(uint *)((int)puVar11 + uVar8 * 4) = *(uint *)((int)puVar10 + uVar8 * 4),
            uVar8 + 1 < uVar6)) &&
           (*(undefined4 *)((int)puVar11 + iVar1 + 4) = *(undefined4 *)((int)puVar10 + iVar1 + 4),
           uVar8 + 2 < uVar6)) {
          *(undefined4 *)((int)puVar11 + iVar1 + 8) = *(undefined4 *)((int)puVar10 + iVar1 + 8);
        }
      }
      puVar11 = (undefined8 *)((int)puVar11 + uVar6 * 4);
      puVar10 = (undefined8 *)((int)puVar10 + uVar6 * 4);
    }
    local_64 = local_64 - uVar6;
    local_60 = local_60 + 1;
    local_5c = pbVar15;
    if (0x3ff < local_60) {
      *(ulonglong *)(param_1 + 0x9a40) = CONCAT44(puVar11,pbVar15);
      *(ulonglong *)(param_1 + 0x9a48) = CONCAT44(puVar11,pbVar15);
      FUN_08050498(param_1);
      local_60 = 0;
      puVar11 = (undefined8 *)(param_1 + 0x69ab0);
      local_5c = (byte *)(param_1 + 0x61ab0);
    }
    param_2 = puVar10;
  } while (local_64 != 0);
  *(ulonglong *)(param_1 + 0x9a40) = CONCAT44(puVar11,local_5c);
  *(ulonglong *)(param_1 + 0x9a48) = CONCAT44(puVar11,local_5c);
  *(undefined *)(param_1 + 0x9a86) = 0;
  return iVar16;
}


