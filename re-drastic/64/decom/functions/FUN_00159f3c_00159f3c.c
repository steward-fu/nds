/*
 * Ghidra decompilation
 *
 * Function : FUN_00159f3c
 * Address  : 00159f3c
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00159f3c(long param_1,ulong param_2,uint param_3)

{
  bool bVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  ulong uVar22;
  bool bVar23;
  bool bVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  bool bVar29;
  bool bVar30;
  bool bVar31;
  long lVar32;
  undefined2 *puVar33;
  long lVar34;
  int *piVar35;
  uint uVar36;
  undefined2 *puVar37;
  undefined8 *puVar38;
  undefined8 *puVar39;
  uint uVar40;
  undefined8 *puVar41;
  undefined4 *puVar42;
  long lVar43;
  undefined4 *puVar44;
  int *piVar45;
  ulong uVar46;
  ulong uVar47;
  undefined8 *puVar48;
  undefined8 *puVar49;
  long lVar50;
  undefined8 *puVar51;
  ulong uVar52;
  undefined8 *puVar53;
  undefined8 uVar54;
  undefined8 uVar55;
  undefined8 uVar56;
  undefined8 uVar57;
  undefined4 uVar58;
  undefined4 uVar59;
  undefined4 uVar60;
  undefined4 uVar61;
  undefined4 uVar62;
  undefined4 uVar63;
  undefined4 uVar64;
  undefined4 uVar65;
  undefined4 uVar66;
  undefined4 uVar67;
  undefined4 uVar68;
  undefined4 uVar69;
  int iVar70;
  int iVar71;
  int iVar72;
  int iVar73;
  undefined4 uVar74;
  undefined4 uVar75;
  undefined4 uVar76;
  undefined4 uVar77;
  undefined4 uVar78;
  undefined4 uVar79;
  undefined4 uVar80;
  undefined4 uVar81;
  undefined4 uVar82;
  undefined4 uVar83;
  int iVar84;
  int iVar85;
  int iVar86;
  int iVar87;
  undefined4 uVar88;
  undefined4 uVar89;
  undefined4 uVar90;
  undefined4 uVar91;
  
  lVar14 = ___stack_chk_guard;
  uVar40 = *(uint *)(param_1 + 0x64c);
  uVar52 = param_2 & 0xffffffff;
  lVar15 = (param_2 & 0x3fffffff) * 0x10;
  uVar46 = (ulong)*(byte *)(param_1 + 0x9ac0);
  lVar43 = uVar46 * 0x18004;
  uVar36 = *(uint *)(param_1 + uVar46 * 0x18004 + 0x21ad4);
  lVar16 = (ulong)uVar36 * 0x10;
  lVar17 = (ulong)uVar40 * 4;
  lVar34 = lVar43 + 0x9ad4 + lVar16;
  lVar4 = param_1 + 0x1354 + uVar52 * 2;
  puVar44 = (undefined4 *)(param_1 + 0x650 + lVar15);
  lVar2 = param_1 + 0x14dc + (param_2 & 0xffffffff) * 4;
  lVar5 = param_1 + 0x3070 + lVar17;
  lVar6 = param_1 + 0x48f0 + lVar17;
  lVar7 = param_1 + 0x6170 + lVar17;
  piVar45 = (int *)(param_1 + lVar34);
  uVar13 = 0x1800 - uVar36;
  if (uVar36 + param_3 < 0x1801) {
    uVar13 = param_3;
  }
  lVar8 = param_1 + 0x17f0 + lVar17;
  if (uVar13 != 0) {
    uVar47 = (ulong)uVar13;
    uVar22 = (uVar52 + 0x9aa + uVar47) * 2;
    uVar9 = lVar43 + 0x9ade + lVar16;
    lVar32 = (uVar47 + uVar52 + 0x537) * 4;
    lVar10 = lVar17 + 0x17f0;
    lVar50 = (((ulong)uVar36 - 1) + uVar47) * 0x10;
    bVar23 = false;
    bVar29 = false;
    if (uVar22 <= uVar9) {
      lVar12 = lVar32 - lVar34;
      bVar23 = lVar12 < 0;
      bVar29 = lVar12 == 0;
    }
    lVar12 = (ulong)uVar40 + 0x185c + uVar47;
    lVar11 = lVar43 + 0x9ad8 + lVar50;
    bVar23 = bVar23 == (uVar22 <= uVar9 && SBORROW8(lVar32,lVar34));
    bVar24 = false;
    if (bVar29 || !bVar23) {
      bVar24 = (long)(lVar10 + (uVar52 + 0x53f) * -4) < 0;
    }
    lVar32 = lVar12 * 4;
    bVar25 = false;
    if (lVar10 < lVar11) {
      bVar25 = lVar34 + lVar12 * -4 < 0;
    }
    bVar1 = lVar10 < lVar43 + 0x9ae0 + lVar50;
    bVar26 = false;
    if (bVar1) {
      bVar26 = (long)(uVar9 + lVar12 * -4) < 0;
    }
    lVar50 = lVar43 + 0x9ae4 + lVar50;
    lVar16 = lVar16 + lVar43 + 0x9ae0;
    bVar27 = false;
    bVar30 = true;
    if (lVar10 < lVar50) {
      bVar27 = lVar32 - lVar16 < 0;
      bVar30 = lVar32 - lVar16 == 0;
    }
    lVar43 = ((ulong)(uint)((int)param_2 << 2) + 0x194 + (ulong)uVar13 * 4) * 4;
    bVar27 = bVar27 != (lVar10 < lVar50 && SBORROW8(lVar32,lVar16));
    bVar28 = false;
    bVar31 = false;
    if (bVar30 || bVar27) {
      lVar50 = lVar43 - lVar10;
      bVar28 = lVar50 < 0;
      bVar31 = lVar50 == 0;
    }
    if (uVar13 - 1 < 7 ||
        (!bVar31 && bVar28 == ((bVar30 || bVar27) && SBORROW8(lVar43,lVar10)) ||
        (bVar24 != (!bVar29 && bVar23 || SBORROW8(lVar10,(uVar52 + 0x53f) * 4)) ||
        (bVar25 != (lVar10 < lVar11 && SBORROW8(lVar34,lVar32)) ||
        bVar26 != (bVar1 && SBORROW8(uVar9,lVar32)))))) {
      lVar34 = 0;
      do {
        iVar71 = puVar44[3];
        uVar18 = *(undefined4 *)(lVar2 + lVar34 * 4);
        *(undefined4 *)(lVar8 + lVar34 * 4) = *puVar44;
        *(undefined4 *)(lVar5 + lVar34 * 4) = puVar44[1];
        iVar70 = -iVar71;
        if (-1 < iVar71) {
          iVar70 = iVar71;
        }
        *(undefined4 *)(lVar6 + lVar34 * 4) = puVar44[2];
        *(int *)(lVar7 + lVar34 * 4) = iVar70;
        *(short *)(piVar45 + 3) = (short)uVar18;
        *(short *)((long)piVar45 + 0xe) = (short)((uint)uVar18 >> 0x10);
        *piVar45 = iVar71;
        *(undefined2 *)((long)piVar45 + 10) = *(undefined2 *)(lVar4 + lVar34 * 2);
        lVar34 = lVar34 + 1;
        puVar44 = puVar44 + 4;
        piVar45 = piVar45 + 4;
      } while ((uint)lVar34 < uVar13);
    }
    else {
      puVar41 = (undefined8 *)(param_1 + (uVar52 + 0x537) * 4);
      puVar3 = puVar41 + 4;
      puVar49 = (undefined8 *)(param_1 + lVar17 + 0x3070);
      puVar48 = (undefined8 *)(param_1 + lVar17 + 0x48f0);
      puVar38 = (undefined8 *)(param_1 + lVar17 + 0x6170);
      puVar42 = (undefined4 *)(param_1 + lVar15 + 0x650);
      puVar39 = (undefined8 *)(param_1 + lVar10);
      puVar33 = (undefined2 *)(param_1 + lVar16);
      puVar37 = (undefined2 *)(param_1 + uVar9);
      piVar35 = piVar45;
      puVar51 = puVar3;
      puVar53 = (undefined8 *)(param_1 + (uVar52 + 0x9aa) * 2);
      while( true ) {
        uVar57 = puVar41[1];
        uVar56 = *puVar41;
        uVar55 = puVar41[3];
        uVar54 = puVar41[2];
        uVar74 = *puVar42;
        uVar76 = puVar42[1];
        uVar80 = puVar42[2];
        iVar84 = puVar42[3];
        uVar75 = puVar42[4];
        uVar77 = puVar42[5];
        uVar81 = puVar42[6];
        iVar85 = puVar42[7];
        uVar78 = puVar42[9];
        uVar82 = puVar42[10];
        iVar86 = puVar42[0xb];
        uVar79 = puVar42[0xd];
        uVar83 = puVar42[0xe];
        iVar87 = puVar42[0xf];
        uVar58 = puVar42[0x10];
        uVar62 = puVar42[0x11];
        uVar66 = puVar42[0x12];
        iVar70 = puVar42[0x13];
        uVar59 = puVar42[0x14];
        uVar63 = puVar42[0x15];
        uVar67 = puVar42[0x16];
        iVar71 = puVar42[0x17];
        uVar60 = puVar42[0x18];
        uVar64 = puVar42[0x19];
        uVar68 = puVar42[0x1a];
        iVar72 = puVar42[0x1b];
        uVar61 = puVar42[0x1c];
        uVar65 = puVar42[0x1d];
        uVar69 = puVar42[0x1e];
        iVar73 = puVar42[0x1f];
        uVar88 = MP_INT_ABS(iVar84);
        uVar89 = MP_INT_ABS(iVar85);
        uVar90 = MP_INT_ABS(iVar86);
        uVar91 = MP_INT_ABS(iVar87);
        uVar18 = MP_INT_ABS(iVar70);
        uVar19 = MP_INT_ABS(iVar71);
        uVar20 = MP_INT_ABS(iVar72);
        uVar21 = MP_INT_ABS(iVar73);
        puVar39[1] = CONCAT44(puVar42[0xc],puVar42[8]);
        *puVar39 = CONCAT44(uVar75,uVar74);
        puVar39[3] = CONCAT44(uVar61,uVar60);
        puVar39[2] = CONCAT44(uVar59,uVar58);
        puVar49[1] = CONCAT44(uVar79,uVar78);
        *puVar49 = CONCAT44(uVar77,uVar76);
        puVar49[3] = CONCAT44(uVar65,uVar64);
        puVar49[2] = CONCAT44(uVar63,uVar62);
        puVar42 = puVar42 + 0x20;
        puVar48[1] = CONCAT44(uVar83,uVar82);
        *puVar48 = CONCAT44(uVar81,uVar80);
        puVar48[3] = CONCAT44(uVar69,uVar68);
        puVar48[2] = CONCAT44(uVar67,uVar66);
        puVar39 = puVar39 + 4;
        puVar38[1] = CONCAT44(uVar91,uVar90);
        *puVar38 = CONCAT44(uVar89,uVar88);
        puVar38[3] = CONCAT26((short)((uint)uVar21 >> 0x10),CONCAT24((short)uVar21,uVar20));
        puVar38[2] = CONCAT26((short)((uint)uVar19 >> 0x10),CONCAT24((short)uVar19,uVar18));
        puVar49 = puVar49 + 4;
        *piVar35 = iVar84;
        puVar48 = puVar48 + 4;
        piVar35[4] = iVar85;
        piVar35[8] = iVar86;
        piVar35[0xc] = iVar87;
        piVar35[0x10] = iVar70;
        piVar35[0x14] = iVar71;
        piVar35[0x18] = iVar72;
        piVar35[0x1c] = iVar73;
        *puVar33 = (short)uVar56;
        puVar33[8] = (short)((ulong)uVar56 >> 0x20);
        puVar33[0x10] = (short)uVar57;
        puVar33[0x18] = (short)((ulong)uVar57 >> 0x20);
        puVar33[0x20] = (short)uVar54;
        puVar33[0x28] = (short)((ulong)uVar54 >> 0x20);
        puVar33[0x30] = (short)uVar55;
        puVar33[0x38] = (short)((ulong)uVar55 >> 0x20);
        puVar33[1] = (short)((ulong)uVar56 >> 0x10);
        puVar33[9] = (short)((ulong)uVar56 >> 0x30);
        puVar33[0x11] = (short)((ulong)uVar57 >> 0x10);
        puVar33[0x19] = (short)((ulong)uVar57 >> 0x30);
        puVar33[0x21] = (short)((ulong)uVar54 >> 0x10);
        puVar33[0x29] = (short)((ulong)uVar54 >> 0x30);
        puVar33[0x31] = (short)((ulong)uVar55 >> 0x10);
        puVar33[0x39] = (short)((ulong)uVar55 >> 0x30);
        uVar55 = puVar53[1];
        uVar54 = *puVar53;
        *puVar37 = (short)uVar54;
        puVar37[8] = (short)((ulong)uVar54 >> 0x10);
        puVar37[0x10] = (short)((ulong)uVar54 >> 0x20);
        puVar37[0x18] = (short)((ulong)uVar54 >> 0x30);
        puVar37[0x20] = (short)uVar55;
        puVar37[0x28] = (short)((ulong)uVar55 >> 0x10);
        puVar37[0x30] = (short)((ulong)uVar55 >> 0x20);
        puVar37[0x38] = (short)((ulong)uVar55 >> 0x30);
        puVar38 = puVar38 + 4;
        piVar35 = piVar35 + 0x20;
        puVar33 = puVar33 + 0x40;
        puVar37 = puVar37 + 0x40;
        if (puVar51 == puVar3 + (ulong)((uVar13 >> 3) - 1) * 4) break;
        puVar41 = puVar51;
        puVar51 = puVar51 + 4;
        puVar53 = puVar53 + 2;
      }
      uVar52 = (ulong)uVar13 & 0xfffffff8;
      lVar43 = uVar52 * 4;
      lVar50 = uVar52 * 0x10;
      lVar34 = lVar8 + lVar43;
      lVar16 = lVar5 + lVar43;
      lVar15 = lVar6 + lVar43;
      lVar17 = lVar7 + lVar43;
      lVar43 = lVar2 + lVar43;
      lVar10 = lVar4 + uVar52 * 2;
      uVar40 = uVar13 & 0xfffffff8;
      if ((uVar13 & 7) != 0) {
        iVar72 = *(int *)(lVar2 + uVar52 * 4);
        iVar71 = puVar44[uVar52 * 4 + 3];
        *(undefined4 *)(lVar8 + uVar52 * 4) = puVar44[uVar52 * 4];
        *(undefined4 *)(lVar5 + uVar52 * 4) = puVar44[uVar52 * 4 + 1];
        iVar70 = -iVar71;
        if (-1 < iVar71) {
          iVar70 = iVar71;
        }
        *(undefined4 *)(lVar6 + uVar52 * 4) = puVar44[uVar52 * 4 + 2];
        *(int *)(lVar7 + uVar52 * 4) = iVar70;
        piVar45[uVar52 * 4] = iVar71;
        piVar45[uVar52 * 4 + 3] = iVar72;
        *(undefined2 *)((long)piVar45 + lVar50 + 10) = *(undefined2 *)(lVar4 + uVar52 * 2);
        if (uVar40 + 1 < uVar13) {
          iVar71 = puVar44[uVar52 * 4 + 7];
          iVar72 = *(int *)(lVar43 + 4);
          *(undefined4 *)(lVar34 + 4) = puVar44[uVar52 * 4 + 4];
          *(undefined4 *)(lVar16 + 4) = puVar44[uVar52 * 4 + 5];
          iVar70 = -iVar71;
          if (-1 < iVar71) {
            iVar70 = iVar71;
          }
          *(undefined4 *)(lVar15 + 4) = puVar44[uVar52 * 4 + 6];
          *(int *)(lVar17 + 4) = iVar70;
          piVar45[uVar52 * 4 + 7] = iVar72;
          piVar45[uVar52 * 4 + 4] = iVar71;
          *(undefined2 *)((long)piVar45 + lVar50 + 0x1a) = *(undefined2 *)(lVar10 + 2);
          if (uVar40 + 2 < uVar13) {
            iVar71 = puVar44[uVar52 * 4 + 0xb];
            iVar72 = *(int *)(lVar43 + 8);
            *(undefined4 *)(lVar34 + 8) = puVar44[uVar52 * 4 + 8];
            *(undefined4 *)(lVar16 + 8) = puVar44[uVar52 * 4 + 9];
            iVar70 = -iVar71;
            if (-1 < iVar71) {
              iVar70 = iVar71;
            }
            *(undefined4 *)(lVar15 + 8) = puVar44[uVar52 * 4 + 10];
            *(int *)(lVar17 + 8) = iVar70;
            piVar45[uVar52 * 4 + 0xb] = iVar72;
            piVar45[uVar52 * 4 + 8] = iVar71;
            *(undefined2 *)((long)piVar45 + lVar50 + 0x2a) = *(undefined2 *)(lVar10 + 4);
            if (uVar40 + 3 < uVar13) {
              iVar71 = puVar44[uVar52 * 4 + 0xf];
              iVar72 = *(int *)(lVar43 + 0xc);
              *(undefined4 *)(lVar34 + 0xc) = puVar44[uVar52 * 4 + 0xc];
              *(undefined4 *)(lVar16 + 0xc) = puVar44[uVar52 * 4 + 0xd];
              iVar70 = -iVar71;
              if (-1 < iVar71) {
                iVar70 = iVar71;
              }
              *(undefined4 *)(lVar15 + 0xc) = puVar44[uVar52 * 4 + 0xe];
              *(int *)(lVar17 + 0xc) = iVar70;
              piVar45[uVar52 * 4 + 0xf] = iVar72;
              piVar45[uVar52 * 4 + 0xc] = iVar71;
              *(undefined2 *)((long)piVar45 + lVar50 + 0x3a) = *(undefined2 *)(lVar10 + 6);
              if (uVar40 + 4 < uVar13) {
                iVar71 = puVar44[uVar52 * 4 + 0x13];
                iVar72 = *(int *)(lVar43 + 0x10);
                *(undefined4 *)(lVar34 + 0x10) = puVar44[uVar52 * 4 + 0x10];
                *(undefined4 *)(lVar16 + 0x10) = puVar44[uVar52 * 4 + 0x11];
                iVar70 = -iVar71;
                if (-1 < iVar71) {
                  iVar70 = iVar71;
                }
                *(undefined4 *)(lVar15 + 0x10) = puVar44[uVar52 * 4 + 0x12];
                *(int *)(lVar17 + 0x10) = iVar70;
                piVar45[uVar52 * 4 + 0x13] = iVar72;
                piVar45[uVar52 * 4 + 0x10] = iVar71;
                *(undefined2 *)((long)piVar45 + lVar50 + 0x4a) = *(undefined2 *)(lVar10 + 8);
                if (uVar40 + 5 < uVar13) {
                  iVar71 = puVar44[uVar52 * 4 + 0x17];
                  iVar72 = *(int *)(lVar43 + 0x14);
                  *(undefined4 *)(lVar34 + 0x14) = puVar44[uVar52 * 4 + 0x14];
                  *(undefined4 *)(lVar16 + 0x14) = puVar44[uVar52 * 4 + 0x15];
                  iVar70 = -iVar71;
                  if (-1 < iVar71) {
                    iVar70 = iVar71;
                  }
                  *(undefined4 *)(lVar15 + 0x14) = puVar44[uVar52 * 4 + 0x16];
                  *(int *)(lVar17 + 0x14) = iVar70;
                  piVar45[uVar52 * 4 + 0x17] = iVar72;
                  piVar45[uVar52 * 4 + 0x14] = iVar71;
                  *(undefined2 *)((long)piVar45 + lVar50 + 0x5a) = *(undefined2 *)(lVar10 + 10);
                  if (uVar40 + 6 < uVar13) {
                    iVar71 = puVar44[uVar52 * 4 + 0x1b];
                    iVar72 = *(int *)(lVar43 + 0x18);
                    *(undefined4 *)(lVar34 + 0x18) = puVar44[uVar52 * 4 + 0x18];
                    *(undefined4 *)(lVar16 + 0x18) = puVar44[uVar52 * 4 + 0x19];
                    iVar70 = -iVar71;
                    if (-1 < iVar71) {
                      iVar70 = iVar71;
                    }
                    *(undefined4 *)(lVar15 + 0x18) = puVar44[uVar52 * 4 + 0x1a];
                    *(int *)(lVar17 + 0x18) = iVar70;
                    piVar45[uVar52 * 4 + 0x1b] = iVar72;
                    piVar45[uVar52 * 4 + 0x18] = iVar71;
                    *(undefined2 *)((long)piVar45 + lVar50 + 0x6a) = *(undefined2 *)(lVar10 + 0xc);
                  }
                }
              }
            }
          }
        }
      }
    }
    uVar40 = uVar13 + *(int *)(param_1 + 0x64c);
    uVar36 = uVar13 + *(int *)(param_1 + uVar46 * 0x18004 + 0x21ad4);
  }
  *(uint *)(param_1 + 0x64c) = uVar40;
  lVar14 = lVar14 - ___stack_chk_guard;
  *(uint *)(param_1 + uVar46 * 0x18004 + 0x21ad4) = uVar36;
  if (lVar14 != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar14,0);
  }
  return;
}


