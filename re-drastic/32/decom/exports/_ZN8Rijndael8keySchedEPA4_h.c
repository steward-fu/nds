/*
 * Ghidra decompilation
 *
 * Function : _ZN8Rijndael8keySchedEPA4_h
 * Address  : 080e48e8
 * Program  : drastic
 */


/* DWARF original prototype: void keySched(Rijndael * this, void * key) */

void __thiscall Rijndael::keySched(Rijndael *this,void *key)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte abVar5 [4];
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int uKeyColumns;
  uint uVar12;
  int iVar13;
  byte bVar14;
  byte bVar15;
  byte *pbVar16;
  byte bVar17;
  uint uVar18;
  undefined *puVar19;
  byte bVar20;
  int iVar21;
  int iVar22;
  bool bVar23;
  byte *local_5c;
  byte tempKey [8] [4];
  undefined auStack_28 [4];
  
  iVar6 = __stack_chk_guard;
  uVar10 = this->m_uRounds;
                    /* WARNING: Load size is inaccurate */
  tempKey[0] = *key;
  iVar22 = 0;
  tempKey[1] = *(byte (*) [4])((int)key + 4);
  tempKey[2] = *(byte (*) [4])((int)key + 8);
  tempKey[3] = *(byte (*) [4])((int)key + 0xc);
  tempKey[4] = *(byte (*) [4])((int)key + 0x10);
  tempKey[5] = *(byte (*) [4])((int)key + 0x14);
  iVar11 = uVar10 - 6;
  tempKey[6] = *(byte (*) [4])((int)key + 0x18);
  tempKey[7] = *(byte (*) [4])((int)key + 0x1c);
  uVar12 = 0;
  uVar18 = uVar10;
  iVar9 = 0;
  while( true ) {
    bVar23 = SBORROW4(iVar22,uVar10);
    iVar13 = iVar22 - uVar10;
    if (iVar22 <= (int)uVar10) {
      bVar23 = SBORROW4(iVar9,iVar11);
      iVar13 = iVar9 - iVar11;
    }
    if (iVar13 < 0 == bVar23) break;
    uVar8 = uVar12;
    iVar13 = iVar9;
    if ((int)uVar12 < 4) {
      uVar8 = uVar12 + 1;
      if ((int)uVar8 < 4) {
        uVar18 = 0;
      }
      if (uVar8 != 3 && (int)(uVar12 - 2) < 0 == SBORROW4(uVar8,3)) {
        uVar18 = 1;
      }
      bVar3 = tempKey[iVar9][1];
      bVar20 = tempKey[iVar9][2];
      bVar14 = tempKey[iVar9][3];
      this->m_expandedKey[iVar22][uVar12][0] = tempKey[iVar9][0];
      iVar13 = iVar9 + 1;
      if (iVar11 <= iVar13) {
        uVar18 = uVar18 | 1;
      }
      this->m_expandedKey[iVar22][uVar12][1] = bVar3;
      bVar23 = uVar18 == 0;
      uVar18 = (uint)bVar14;
      this->m_expandedKey[iVar22][uVar12][2] = bVar20;
      this->m_expandedKey[iVar22][uVar12][3] = bVar14;
      if (bVar23) {
        pbVar16 = this->m_initVector + iVar22 * 0x10 + uVar12 * 4;
        bVar3 = tempKey[iVar13][2];
        uVar8 = uVar12 + 2;
        if ((int)uVar8 < 4) {
          bVar20 = 0;
        }
        if (uVar8 != 3 && (int)(uVar12 - 1) < 0 == SBORROW4(uVar8,3)) {
          bVar20 = 1;
        }
        bVar1 = tempKey[iVar13][1];
        bVar2 = tempKey[iVar13][3];
        iVar7 = iVar9 + 2;
        if (iVar11 <= iVar7) {
          bVar20 = bVar20 | 1;
        }
        this->m_expandedKey[iVar22][uVar12 + 1][0] = tempKey[iVar13][0];
        pbVar16[0x15] = bVar1;
        pbVar16[0x16] = bVar3;
        pbVar16[0x17] = bVar2;
        uVar18 = uVar8;
        iVar13 = iVar7;
        if (bVar20 == 0) {
          uVar8 = uVar12 + 3;
          if ((int)uVar8 < 4) {
            pbVar16 = (byte *)0x0;
          }
          if (uVar8 != 3 && (int)uVar12 < 0 == SBORROW4(uVar8,3)) {
            pbVar16 = (byte *)0x1;
          }
          bVar3 = tempKey[iVar7][1];
          iVar13 = iVar9 + 3;
          bVar20 = tempKey[iVar7][2];
          uVar18 = (uint)bVar20;
          bVar1 = tempKey[iVar7][3];
          if (iVar11 <= iVar13) {
            pbVar16 = (byte *)((uint)pbVar16 | 1);
          }
          this->m_expandedKey[iVar22][uVar12 + 2][0] = tempKey[iVar7][0];
          this->m_expandedKey[iVar22][uVar12 + 2][1] = bVar3;
          this->m_expandedKey[iVar22][uVar12 + 2][2] = bVar20;
          this->m_expandedKey[iVar22][uVar12 + 2][3] = bVar1;
          if (pbVar16 == (byte *)0x0) {
            bVar20 = tempKey[iVar13][0];
            uVar8 = uVar12 + 4;
            bVar3 = tempKey[iVar13][1];
            bVar1 = tempKey[iVar13][2];
            bVar2 = tempKey[iVar13][3];
            this->m_expandedKey[iVar22][3][0] = bVar20;
            this->m_expandedKey[iVar22][3][1] = bVar3;
            this->m_expandedKey[iVar22][3][2] = bVar1;
            this->m_expandedKey[iVar22][3][3] = bVar2;
            uVar18 = (uint)bVar20;
            iVar13 = iVar9 + 4;
          }
        }
      }
    }
    uVar12 = uVar8;
    iVar9 = iVar13;
    if (uVar8 == 4) {
      iVar22 = iVar22 + 1;
      uVar12 = 0;
    }
  }
  local_5c = &DAT_083f1c47;
  iVar9 = uVar10 - 7;
  while (iVar22 <= (int)uVar10) {
    while( true ) {
      local_5c = local_5c + 1;
      bVar20 = *local_5c ^ tempKey[0][0] ^ S[tempKey[iVar9][1]];
      bVar14 = tempKey[0][1] ^ S[tempKey[iVar9][2]];
      bVar15 = tempKey[0][2] ^ S[tempKey[iVar9][3]];
      abVar5[2] = bVar15;
      abVar5[1] = bVar14;
      abVar5[0] = bVar20;
      bVar17 = tempKey[0][3] ^ S[tempKey[iVar9][0]];
      abVar5[3] = bVar17;
      tempKey[0][0] = abVar5[0];
      tempKey[0][1] = abVar5[1];
      tempKey[0][2] = abVar5[2];
      tempKey[0][3] = abVar5[3];
      if (iVar11 == 8) break;
      if (1 < iVar11) {
        bVar20 = tempKey[1][0] ^ bVar20;
        bVar14 = bVar14 ^ tempKey[1][1];
        bVar15 = bVar15 ^ tempKey[1][2];
        tempKey[1][3] = bVar17 ^ tempKey[1][3];
        tempKey[1]._0_2_ = CONCAT11(bVar14,bVar20);
        tempKey[1]._0_3_ = CONCAT12(bVar15,tempKey[1]._0_2_);
        if (iVar11 != 2) {
          bVar20 = tempKey[2][0] ^ bVar20;
          bVar14 = bVar14 ^ tempKey[2][1];
          bVar15 = bVar15 ^ tempKey[2][2];
          tempKey[2][3] = tempKey[1][3] ^ tempKey[2][3];
          tempKey[2]._0_2_ = CONCAT11(bVar14,bVar20);
          tempKey[2]._0_3_ = CONCAT12(bVar15,tempKey[2]._0_2_);
          if (iVar11 != 3) {
            bVar20 = bVar20 ^ tempKey[3][0];
            bVar14 = bVar14 ^ tempKey[3][1];
            bVar15 = bVar15 ^ tempKey[3][2];
            tempKey[3][3] = tempKey[2][3] ^ tempKey[3][3];
            tempKey[3]._0_2_ = CONCAT11(bVar14,bVar20);
            tempKey[3]._0_3_ = CONCAT12(bVar15,tempKey[3]._0_2_);
            if (iVar11 != 4) {
              bVar20 = bVar20 ^ tempKey[4][0];
              bVar14 = bVar14 ^ tempKey[4][1];
              bVar15 = bVar15 ^ tempKey[4][2];
              tempKey[4][3] = tempKey[3][3] ^ tempKey[4][3];
              tempKey[4]._0_2_ = CONCAT11(bVar14,bVar20);
              tempKey[4]._0_3_ = CONCAT12(bVar15,tempKey[4]._0_2_);
              if (iVar11 != 5) {
                bVar20 = bVar20 ^ tempKey[5][0];
                bVar14 = bVar14 ^ tempKey[5][1];
                bVar15 = bVar15 ^ tempKey[5][2];
                tempKey[5][3] = tempKey[5][3] ^ tempKey[4][3];
                tempKey[5]._0_2_ = CONCAT11(bVar14,bVar20);
                tempKey[5]._0_3_ = CONCAT12(bVar15,tempKey[5]._0_2_);
                if (iVar11 != 6) {
                  bVar20 = bVar20 ^ tempKey[6][0];
                  bVar14 = bVar14 ^ tempKey[6][1];
                  bVar15 = bVar15 ^ tempKey[6][2];
                  tempKey[6][3] = tempKey[6][3] ^ tempKey[5][3];
                  tempKey[6]._0_2_ = CONCAT11(bVar14,bVar20);
                  tempKey[6]._0_3_ = CONCAT12(bVar15,tempKey[6]._0_2_);
                  if (iVar11 != 7) {
                    tempKey[7]._0_2_ = CONCAT11(bVar14 ^ tempKey[7][1],bVar20 ^ tempKey[7][0]);
                    tempKey[7]._0_3_ = CONCAT12(bVar15 ^ tempKey[7][2],tempKey[7]._0_2_);
                    tempKey[7][3] = tempKey[6][3] ^ tempKey[7][3];
                  }
                }
              }
            }
          }
        }
        goto LAB_080e4d54;
      }
      if (0 < iVar11) goto LAB_080e4d54;
      if ((int)uVar10 < iVar22) goto LAB_080e5080;
    }
    bVar15 = bVar15 ^ tempKey[1][2];
    bVar14 = bVar14 ^ tempKey[1][1];
    bVar4 = bVar20 ^ tempKey[1][0] ^ tempKey[2][0];
    tempKey[1]._0_2_ = CONCAT11(bVar14,bVar20 ^ tempKey[1][0]);
    bVar14 = bVar14 ^ tempKey[2][1];
    tempKey[1]._0_3_ = CONCAT12(bVar15,tempKey[1]._0_2_);
    bVar20 = bVar4 ^ tempKey[3][0];
    bVar15 = bVar15 ^ tempKey[2][2];
    tempKey[2]._0_2_ = CONCAT11(bVar14,bVar4);
    bVar14 = bVar14 ^ tempKey[3][1];
    tempKey[2]._0_3_ = CONCAT12(bVar15,tempKey[2]._0_2_);
    bVar15 = bVar15 ^ tempKey[3][2];
    tempKey[3]._0_2_ = CONCAT11(bVar14,bVar20);
    tempKey[3]._0_3_ = CONCAT12(bVar15,tempKey[3]._0_2_);
    tempKey[1][3] = bVar17 ^ tempKey[1][3];
    bVar20 = S[bVar20] ^ tempKey[4][0];
    tempKey[2][3] = tempKey[1][3] ^ tempKey[2][3];
    bVar14 = tempKey[4][1] ^ S[bVar14];
    tempKey[3][3] = tempKey[2][3] ^ tempKey[3][3];
    bVar17 = tempKey[4][2] ^ S[bVar15];
    tempKey[4]._0_2_ = CONCAT11(bVar14,bVar20);
    tempKey[4]._0_3_ = CONCAT12(bVar17,tempKey[4]._0_2_);
    tempKey[4][3] = S[tempKey[3][3]] ^ tempKey[4][3];
    bVar14 = tempKey[5][1] ^ bVar14;
    bVar20 = bVar20 ^ tempKey[5][0];
    bVar17 = tempKey[5][2] ^ bVar17;
    tempKey[5][3] = tempKey[5][3] ^ tempKey[4][3];
    bVar15 = tempKey[6][1] ^ bVar14;
    tempKey[5]._0_2_ = CONCAT11(bVar14,bVar20);
    bVar20 = tempKey[6][0] ^ bVar20;
    tempKey[5]._0_3_ = CONCAT12(bVar17,tempKey[5]._0_2_);
    bVar17 = tempKey[6][2] ^ bVar17;
    tempKey[6][3] = tempKey[5][3] ^ tempKey[6][3];
    tempKey[6]._0_2_ = CONCAT11(bVar15,bVar20);
    tempKey[6]._0_3_ = CONCAT12(bVar17,tempKey[6]._0_2_);
    tempKey[7]._0_2_ = CONCAT11(tempKey[7][1] ^ bVar15,bVar20 ^ tempKey[7][0]);
    tempKey[7]._0_3_ = CONCAT12(tempKey[7][2] ^ bVar17,tempKey[7]._0_2_);
    tempKey[7][3] = tempKey[6][3] ^ tempKey[7][3];
LAB_080e4d54:
    uVar18 = uVar12;
    iVar13 = 0;
    do {
      uVar12 = uVar18;
      iVar7 = iVar13;
      if ((int)uVar18 < 4) {
        puVar19 = auStack_28 + iVar13 * 4;
        uVar12 = uVar18 + 1;
        bVar3 = tempKey[iVar13][1];
        bVar1 = tempKey[iVar13][2];
        bVar2 = tempKey[iVar13][3];
        if ((int)uVar12 < 4) {
          puVar19 = (undefined *)0x0;
        }
        this->m_expandedKey[iVar22][uVar18][0] = tempKey[iVar13][0];
        if (uVar12 != 3 && (int)(uVar18 - 2) < 0 == SBORROW4(uVar12,3)) {
          puVar19 = (undefined *)0x1;
        }
        iVar7 = iVar13 + 1;
        if (iVar11 <= iVar7) {
          puVar19 = (undefined *)((uint)puVar19 | 1);
        }
        this->m_expandedKey[iVar22][uVar18][1] = bVar3;
        this->m_expandedKey[iVar22][uVar18][2] = bVar1;
        this->m_expandedKey[iVar22][uVar18][3] = bVar2;
        if (puVar19 == (undefined *)0x0) {
          puVar19 = auStack_28 + iVar7 * 4;
          uVar12 = uVar18 + 2;
          bVar3 = tempKey[iVar7][1];
          bVar1 = tempKey[iVar7][2];
          bVar2 = tempKey[iVar7][3];
          if ((int)uVar12 < 4) {
            puVar19 = (undefined *)0x0;
          }
          if (uVar12 != 3 && (int)(uVar18 - 1) < 0 == SBORROW4(uVar12,3)) {
            puVar19 = (undefined *)0x1;
          }
          this->m_expandedKey[iVar22][uVar18 + 1][0] = tempKey[iVar7][0];
          iVar21 = iVar13 + 2;
          if (iVar11 <= iVar21) {
            puVar19 = (undefined *)((uint)puVar19 | 1);
          }
          this->m_expandedKey[iVar22][uVar18 + 1][1] = bVar3;
          this->m_expandedKey[iVar22][uVar18 + 1][2] = bVar1;
          this->m_expandedKey[iVar22][uVar18 + 1][3] = bVar2;
          iVar7 = iVar21;
          if (puVar19 == (undefined *)0x0) {
            iVar7 = iVar13 + 3;
            bVar3 = tempKey[iVar21][1];
            bVar1 = tempKey[iVar21][2];
            bVar2 = tempKey[iVar21][3];
            uVar12 = uVar18 + 3;
            bVar23 = SBORROW4(uVar12,3);
            uVar8 = uVar18;
            if ((int)uVar12 < 4) {
              bVar23 = SBORROW4(iVar7,iVar11);
              uVar8 = iVar7 - iVar11;
            }
            this->m_expandedKey[iVar22][uVar18 + 2][0] = tempKey[iVar21][0];
            this->m_expandedKey[iVar22][uVar18 + 2][1] = bVar3;
            this->m_expandedKey[iVar22][uVar18 + 2][2] = bVar1;
            this->m_expandedKey[iVar22][uVar18 + 2][3] = bVar2;
            if ((int)uVar8 < 0 != bVar23) {
              uVar12 = uVar18 + 4;
              bVar3 = tempKey[iVar7][1];
              bVar1 = tempKey[iVar7][2];
              bVar2 = tempKey[iVar7][3];
              this->m_expandedKey[iVar22][3][0] = tempKey[iVar7][0];
              this->m_expandedKey[iVar22][3][1] = bVar3;
              this->m_expandedKey[iVar22][3][2] = bVar1;
              this->m_expandedKey[iVar22][3][3] = bVar2;
              iVar7 = iVar13 + 4;
            }
          }
        }
      }
      if (uVar12 == 4) {
        iVar22 = iVar22 + 1;
        uVar12 = 0;
      }
    } while ((iVar7 < iVar11) && (uVar18 = uVar12, iVar13 = iVar7, iVar22 <= (int)uVar10));
  }
LAB_080e5080:
  if (iVar6 == __stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


