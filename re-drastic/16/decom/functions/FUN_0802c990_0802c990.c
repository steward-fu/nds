/*
 * Ghidra decompilation
 *
 * Function : FUN_0802c990
 * Address  : 0802c990
 * Program  : drastic16
 */


/* WARNING: Control flow encountered unimplemented instructions */

void FUN_0802c990(int param_1,int param_2,void *param_3)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  ushort uVar5;
  undefined2 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  uint uVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined2 *puVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  undefined2 *puVar21;
  undefined8 *puVar22;
  int iVar23;
  int iVar24;
  uint uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 *local_2d0;
  undefined8 *local_278;
  undefined4 uStack_26c;
  undefined8 local_268;
  undefined4 local_260;
  uint local_25c [126];
  
  iVar23 = (int)*(short *)(param_1 + 0x76);
  iVar24 = (int)*(short *)(param_1 + 0x78);
  uVar19 = (uint)*(byte *)(param_1 + 0x82);
  iVar13 = *(int *)(param_1 + 0x68);
  iVar14 = *(int *)(param_1 + 0x6c);
  uVar9 = (uint)(iVar24 == 0 && iVar23 == 0x100);
  iVar17 = *(int *)(param_1 + 0x1c);
  iVar18 = *(int *)(param_1 + 4);
  uVar20 = (uint)*(ushort *)(param_1 + 0x7e);
  uVar25 = (uint)*(ushort *)(param_1 + 0x80);
  uVar5 = *(ushort *)(param_1 + 0x70);
  if (iVar24 != 0 || iVar23 != 0x100) {
    if ((uVar5 & 0x2000) != 0) {
      do {
        uVar16 = iVar14 >> 8;
        uVar15 = iVar13 >> 8;
        iVar14 = iVar14 + iVar24;
        iVar13 = iVar13 + iVar23;
        uVar6 = *(undefined2 *)
                 (iVar18 + iVar17 + ((uVar20 & uVar15) + ((uVar25 & uVar16) << uVar19)) * 2);
        *(undefined2 *)((int)&local_268 + uVar9) = uVar6;
        *(undefined2 *)(param_2 + uVar9) = uVar6;
        uVar9 = uVar9 + 2;
      } while (uVar9 != 0x200);
      SIMDExpandImmediate(0,10,0x80);
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
      halt_unimplemented();
    }
    if (*(char *)(param_1 + 0x86) != '\0') {
      FUN_0802bc38();
    }
    uVar25 = *(int *)(param_1 + 0x34) + *(int *)(param_1 + 0x3c) +
             (uint)CARRY4(*(uint *)(param_1 + 0x30),*(uint *)(param_1 + 0x38));
    uVar9 = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54) +
            (uint)CARRY4(*(uint *)(param_1 + 0x48),*(uint *)(param_1 + 0x50));
    uVar20 = *(uint *)(param_1 + 0x34);
    uStack_26c = *(int *)(param_1 + 0x44) + uVar20 +
                 (uint)CARRY4(*(uint *)(param_1 + 0x40),*(uint *)(param_1 + 0x30));
    if ((int)uVar20 < (int)*(uint *)(param_1 + 0x4c)) {
      uVar20 = *(uint *)(param_1 + 0x4c);
    }
    uVar16 = *(uint *)(param_1 + 0x48);
    *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x58) + uVar16;
    *(uint *)(param_1 + 0x4c) =
         *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 0x4c) +
         (uint)CARRY4(*(uint *)(param_1 + 0x58),uVar16);
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x40) + *(uint *)(param_1 + 0x30);
    *(int *)(param_1 + 0x34) = uStack_26c;
    if ((int)uVar25 <= (int)uVar9) {
      uVar9 = uVar25;
    }
    memset(param_3,0,0x20);
    if ((((int)uVar20 <= (int)uVar9) && (-1 < (int)uVar9)) &&
       (uVar20 = uVar20 & ~((int)uVar20 >> 0x1f), (int)uVar20 < 0x100)) {
      iVar13 = iVar23 * uVar20 + iVar13;
      if (0xfe < (int)uVar9) {
        uVar9 = 0xff;
      }
      puVar11 = &local_268;
      iVar14 = iVar24 * uVar20 + iVar14;
      iVar10 = (uVar20 & 7) * 2;
      if (-1 < (int)(uVar9 - uVar20)) {
        puVar12 = (undefined2 *)((int)&uStack_26c + iVar10 + 2);
        puVar21 = (undefined2 *)(param_2 + uVar20 * 2);
        do {
          iVar1 = iVar14 >> 8;
          iVar2 = iVar13 >> 8;
          iVar14 = iVar14 + iVar24;
          iVar13 = iVar13 + iVar23;
          uVar6 = *(undefined2 *)(iVar18 + iVar17 + (iVar2 + (iVar1 << uVar19)) * 2);
          puVar12 = puVar12 + 1;
          *puVar12 = uVar6;
          *puVar21 = uVar6;
          puVar21 = puVar21 + 1;
        } while (puVar12 != (undefined2 *)((int)puVar11 + (uVar9 - uVar20) * 2 + iVar10));
      }
      uVar19 = (int)uVar9 >> 3;
      uVar25 = (int)uVar20 >> 3;
      for (uVar16 = uVar25; uVar16 <= uVar19; uVar16 = uVar16 + 1) {
        puVar3 = (uint *)((int)puVar11 + 4);
        uVar15 = *(uint *)puVar11;
        puVar7 = puVar11 + 1;
        puVar4 = (uint *)((int)puVar11 + 0xc);
        puVar11 = puVar11 + 2;
        uVar15 = (*puVar3 & 0x80008000) >> 0xd | (uVar15 & 0x80008000) >> 0xf |
                 (*(uint *)puVar7 & 0x80008000) >> 0xb | (*puVar4 & 0x80008000) >> 9;
        *(byte *)((int)param_3 + uVar16) = (byte)uVar15 | (byte)(uVar15 >> 0xf);
      }
      *(byte *)((int)param_3 + uVar25) =
           *(byte *)((int)param_3 + uVar25) & (byte)(0xff << (uVar20 & 7));
      *(byte *)((int)param_3 + uVar19) =
           *(byte *)((int)param_3 + uVar19) & ~(byte)(0xfe << (uVar9 & 7));
      fflush(stdout);
      return;
    }
  }
  else {
    uVar9 = iVar14 >> 8;
    uVar16 = iVar13 >> 8;
    if ((uVar5 & 0x2000) != 0) {
      iVar13 = 0;
      do {
        uVar15 = uVar20 & uVar16;
        uVar16 = uVar15 + 1;
        uVar6 = *(undefined2 *)(iVar18 + iVar17 + (uVar15 + ((uVar25 & uVar9) << uVar19)) * 2);
        *(undefined2 *)((int)&local_268 + iVar13) = uVar6;
        *(undefined2 *)(param_2 + iVar13) = uVar6;
        iVar13 = iVar13 + 2;
      } while (iVar13 != 0x200);
      SIMDExpandImmediate(0,10,0x80);
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
      halt_unimplemented();
    }
    memset(param_3,uVar5 & 0x2000,0x20);
    uVar15 = uVar9 >> 0x1f;
    if (uVar25 < uVar9) {
      uVar15 = 1;
    }
    if (uVar15 == 0) {
      puVar11 = &local_268;
      iVar13 = uVar20 - uVar16;
      uVar20 = -uVar16 & ~((int)-uVar16 >> 0x1f);
      if (0xfe < iVar13) {
        iVar13 = 0xff;
      }
      iVar14 = iVar13 - uVar20;
      puVar7 = (undefined8 *)((int)puVar11 + (uVar20 & 7) * 2);
      puVar22 = (undefined8 *)(param_2 + uVar20 * 2);
      if (-1 < iVar14) {
        iVar23 = uVar9 << uVar19;
        uVar9 = iVar14 + 1;
        local_2d0 = (undefined8 *)(iVar18 + iVar17 + (uVar20 + uVar16 + iVar23) * 2);
        if (uVar9 < 8 || local_2d0 < puVar22 + 2 && puVar22 < local_2d0 + 2) {
          iVar14 = 0;
          do {
            uVar6 = *(undefined2 *)((int)local_2d0 + iVar14);
            *(undefined2 *)((int)puVar7 + iVar14) = uVar6;
            *(undefined2 *)((int)puVar22 + iVar14) = uVar6;
            iVar14 = iVar14 + 2;
          } while (iVar14 != uVar9 * 2);
        }
        else {
          uVar19 = uVar9 & 0xfffffff8;
          uVar25 = 0;
          puVar8 = puVar7;
          local_278 = puVar22;
          do {
            uVar25 = uVar25 + 1;
            uVar26 = *local_2d0;
            uVar27 = local_2d0[1];
            local_2d0 = local_2d0 + 2;
            *puVar8 = uVar26;
            puVar8[1] = uVar27;
            puVar8 = puVar8 + 2;
            *local_278 = uVar26;
            local_278[1] = uVar27;
            local_278 = local_278 + 2;
          } while (uVar25 < uVar9 >> 3);
          iVar24 = uVar19 * 2;
          iVar10 = uVar20 + uVar16 + uVar19;
          iVar14 = iVar14 - uVar19;
          if (uVar19 != uVar9) {
            uVar6 = *(undefined2 *)(iVar18 + iVar17 + (iVar10 + iVar23) * 2);
            *(undefined2 *)((int)puVar7 + iVar24) = uVar6;
            *(undefined2 *)((int)puVar22 + iVar24) = uVar6;
            if (-1 < iVar14 + -1) {
              uVar6 = *(undefined2 *)(iVar18 + iVar17 + (iVar10 + 1 + iVar23) * 2);
              *(undefined2 *)((int)puVar7 + iVar24 + 2) = uVar6;
              *(undefined2 *)((int)puVar22 + iVar24 + 2) = uVar6;
              if (iVar14 != 1) {
                uVar6 = *(undefined2 *)(iVar18 + iVar17 + (iVar10 + 2 + iVar23) * 2);
                *(undefined2 *)((int)puVar7 + iVar24 + 4) = uVar6;
                *(undefined2 *)((int)puVar22 + iVar24 + 4) = uVar6;
                if (iVar14 != 2) {
                  uVar6 = *(undefined2 *)(iVar18 + iVar17 + (iVar10 + 3 + iVar23) * 2);
                  *(undefined2 *)((int)puVar7 + iVar24 + 6) = uVar6;
                  *(undefined2 *)((int)puVar22 + iVar24 + 6) = uVar6;
                  if (iVar14 != 3) {
                    uVar6 = *(undefined2 *)(iVar18 + iVar17 + (iVar10 + 4 + iVar23) * 2);
                    *(undefined2 *)((int)puVar7 + iVar24 + 8) = uVar6;
                    *(undefined2 *)((int)puVar22 + iVar24 + 8) = uVar6;
                    if (iVar14 != 4) {
                      uVar6 = *(undefined2 *)(iVar18 + iVar17 + (iVar10 + 5 + iVar23) * 2);
                      *(undefined2 *)((int)puVar7 + iVar24 + 10) = uVar6;
                      *(undefined2 *)((int)puVar22 + iVar24 + 10) = uVar6;
                      if (iVar14 != 5) {
                        uVar6 = *(undefined2 *)(iVar18 + iVar17 + (iVar10 + 6 + iVar23) * 2);
                        *(undefined2 *)((int)puVar7 + iVar24 + 0xc) = uVar6;
                        *(undefined2 *)((int)puVar22 + iVar24 + 0xc) = uVar6;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        uVar9 = (int)uVar20 >> 3;
        iVar14 = iVar13 + 7;
        if (-1 < iVar13) {
          iVar14 = iVar13;
        }
        uVar19 = iVar14 >> 3;
        for (uVar25 = uVar9; uVar25 <= uVar19; uVar25 = uVar25 + 1) {
          puVar3 = (uint *)((int)puVar11 + 4);
          uVar16 = *(uint *)puVar11;
          puVar7 = puVar11 + 1;
          puVar4 = (uint *)((int)puVar11 + 0xc);
          puVar11 = puVar11 + 2;
          uVar16 = (*puVar3 & 0x80008000) >> 0xd | (uVar16 & 0x80008000) >> 0xf |
                   (*(uint *)puVar7 & 0x80008000) >> 0xb | (*puVar4 & 0x80008000) >> 9;
          *(byte *)((int)param_3 + uVar25) = (byte)uVar16 | (byte)(uVar16 >> 0xf);
        }
        *(byte *)((int)param_3 + uVar9) =
             *(byte *)((int)param_3 + uVar9) & (byte)(0xff << (uVar20 & 7));
        *(byte *)((int)param_3 + uVar19) =
             *(byte *)((int)param_3 + uVar19) & ~(byte)(0xfe << (iVar13 % 8 & 0xffU));
      }
    }
  }
  return;
}


