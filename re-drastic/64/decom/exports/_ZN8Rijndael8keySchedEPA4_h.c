/*
 * Ghidra decompilation
 *
 * Function : _ZN8Rijndael8keySchedEPA4_h
 * Address  : 001c4f80
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Rijndael::keySched(unsigned char (*) [4]) */

void __thiscall Rijndael::keySched(Rijndael *this,unsigned_char *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  Rijndael RVar12;
  Rijndael RVar13;
  Rijndael RVar14;
  undefined uVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  int iVar25;
  long lVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  undefined8 uVar34;
  bool bVar35;
  bool bVar36;
  bool bVar37;
  int iVar38;
  ulong uVar39;
  undefined8 uVar40;
  ulong uVar41;
  int iVar42;
  ulong uVar43;
  int iVar44;
  ulong uVar45;
  ulong uVar46;
  byte *pbVar47;
  uint uVar48;
  uint uVar49;
  uint uVar50;
  uint uVar51;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  lVar26 = ___stack_chk_guard;
  iVar11 = *(int *)this;
  local_8 = ___stack_chk_guard;
  uVar40 = *(undefined8 *)param_1;
  local_28 = uVar40;
  uVar40 = local_28;
  local_20 = *(undefined8 *)(param_1 + 8);
  iVar25 = iVar11 + -6;
  local_18 = *(undefined8 *)(param_1 + 0x10);
  local_10 = *(undefined8 *)(param_1 + 0x18);
  if (iVar25 < 1) {
    iVar42 = 0;
    uVar45 = 0;
LAB_001c5120:
    if ((int)uVar45 <= iVar11) {
      pbVar47 = &rcon;
      local_28._1_1_ = (byte)((ulong)uVar40 >> 8);
      uVar50 = (uint)local_28._1_1_;
      local_28._2_1_ = (byte)((ulong)uVar40 >> 0x10);
      uVar49 = (uint)local_28._2_1_;
      local_28._3_1_ = (byte)((ulong)uVar40 >> 0x18);
      uVar48 = (uint)local_28._3_1_;
      local_28._0_1_ = (byte)uVar40;
      uVar51 = (uint)(byte)local_28;
      uVar39 = -(ulong)(iVar11 - 7U >> 0x1f) & 0xfffffffc00000000 | (ulong)(iVar11 - 7U) << 2;
      local_28 = uVar40;
      do {
        uVar29 = local_10;
        uVar28 = local_18;
        uVar27 = local_20;
        uVar40 = local_28;
        uVar15 = (undefined)
                 (uVar51 ^ (byte)(&S)[(int)(uint)*(byte *)((long)&local_28 + uVar39 + 1)]);
        local_28 = CONCAT71(local_28._1_7_,uVar15);
        uVar51 = (uint)*pbVar47 ^
                 uVar51 ^ (byte)(&S)[(int)(uint)*(byte *)((long)&local_28 + uVar39 + 1)];
        uVar50 = uVar50 ^ (byte)(&S)[(int)(uint)*(byte *)((long)&local_28 + uVar39 + 2)];
        local_28._0_2_ = CONCAT11((byte)uVar50,uVar15);
        uVar49 = uVar49 ^ (byte)(&S)[(int)(uint)*(byte *)((long)&local_28 + uVar39 + 3)];
        local_28._0_3_ = CONCAT12((byte)uVar49,(undefined2)local_28);
        local_28 = CONCAT71(local_28._1_7_,(byte)uVar51);
        uVar34 = local_28;
        uVar48 = uVar48 ^ (byte)(&S)[(int)(uint)*(byte *)((long)&local_28 + uVar39)];
        local_28._4_4_ = SUB84(uVar40,4);
        uVar3 = local_28._4_4_;
        local_28._0_3_ = (undefined3)uVar34;
        local_28._0_4_ = CONCAT13((byte)uVar48,(undefined3)local_28);
        uVar34 = local_28;
        local_28._5_1_ = SUB81(uVar40,5);
        local_28._6_1_ = SUB81(uVar40,6);
        local_28._7_1_ = SUB81(uVar40,7);
        bVar18 = local_20._5_1_;
        bVar19 = local_20._6_1_;
        bVar20 = local_20._7_1_;
        bVar30 = local_10._4_1_;
        bVar31 = local_10._5_1_;
        bVar32 = local_10._6_1_;
        bVar33 = local_10._7_1_;
        bVar22 = local_18._5_1_;
        bVar23 = local_18._6_1_;
        bVar24 = local_18._7_1_;
        bVar21 = local_18._4_1_;
        bVar17 = local_20._4_1_;
        if (iVar25 == 8) {
          uVar4 = (uint)local_20._1_1_ ^ local_28._5_1_ ^ uVar50;
          uVar3 = uVar3 & 0xff ^ uVar51;
          uVar5 = (byte)local_20 ^ uVar3;
          uVar6 = local_20._5_1_ ^ uVar4;
          local_28._0_5_ = CONCAT14((char)uVar3,(undefined4)local_28);
          uVar3 = (uint)local_20._2_1_ ^ local_28._6_1_ ^ uVar49;
          uVar7 = local_20._4_1_ ^ uVar5;
          uVar8 = local_20._6_1_ ^ uVar3;
          local_28._0_6_ = CONCAT15((char)(local_28._5_1_ ^ uVar50),(undefined5)local_28);
          uVar9 = (uint)local_20._3_1_ ^ local_28._7_1_ ^ uVar48;
          local_28._0_7_ = CONCAT16((char)(local_28._6_1_ ^ uVar49),(undefined6)local_28);
          local_28 = CONCAT17((char)(local_28._7_1_ ^ uVar48),(undefined7)local_28);
          uVar10 = local_20._7_1_ ^ uVar9;
          local_18._1_1_ = local_18._1_1_ ^ (&S)[(int)uVar6];
          local_20._0_3_ = CONCAT12((char)uVar3,CONCAT11((char)uVar4,(char)uVar5));
          local_18._0_1_ = (byte)local_18 ^ (&S)[(int)uVar7];
          local_20._0_4_ = CONCAT13((char)uVar9,(undefined3)local_20);
          local_18._2_1_ = local_18._2_1_ ^ (&S)[(int)uVar8];
          local_20._0_5_ = CONCAT14((char)uVar7,(undefined4)local_20);
          local_20._0_6_ = CONCAT15((char)uVar6,(undefined5)local_20);
          local_20._0_7_ = CONCAT16((char)uVar8,(undefined6)local_20);
          local_20 = CONCAT17((char)uVar10,(undefined7)local_20);
          local_18._4_1_ = local_18._4_1_ ^ (byte)local_18;
          local_18._5_1_ = local_18._5_1_ ^ local_18._1_1_;
          local_18._6_1_ = local_18._6_1_ ^ local_18._2_1_;
          local_18._7_1_ = local_18._7_1_ ^ local_18._3_1_ ^ (&S)[(int)uVar10];
          local_10._0_1_ = (byte)local_10 ^ local_18._4_1_;
          local_10._1_1_ = local_10._1_1_ ^ local_18._5_1_;
          local_18._0_4_ = CONCAT13(local_18._3_1_ ^ (&S)[(int)uVar10],(undefined3)local_18);
          local_10._2_1_ = local_10._2_1_ ^ local_18._6_1_;
          local_10._3_1_ = local_10._3_1_ ^ local_18._7_1_;
          local_10._0_5_ = CONCAT14((byte)local_10 ^ local_10._4_1_,(undefined4)local_10);
          local_10._0_6_ = CONCAT15(local_10._1_1_ ^ local_10._5_1_,(undefined5)local_10);
          local_10._0_7_ = CONCAT16(local_10._2_1_ ^ local_10._6_1_,(undefined6)local_10);
          local_10 = CONCAT17(local_10._3_1_ ^ local_10._7_1_,(undefined7)local_10);
          uVar34 = local_28;
        }
        else if (1 < iVar25) {
          bVar16 = (byte)((ulong)uVar40 >> 0x20) ^ (byte)uVar51;
          local_28._5_1_ = local_28._5_1_ ^ (byte)uVar50;
          local_28._6_1_ = local_28._6_1_ ^ (byte)uVar49;
          local_28._7_1_ = local_28._7_1_ ^ (byte)uVar48;
          local_28._0_5_ = CONCAT14(bVar16,(undefined4)local_28);
          uVar34 = local_28;
          if (iVar25 != 2) {
            local_20._0_1_ = (byte)local_20 ^ bVar16;
            local_20._1_1_ = local_20._1_1_ ^ local_28._5_1_;
            local_20._2_1_ = local_20._2_1_ ^ local_28._6_1_;
            local_20._3_1_ = local_20._3_1_ ^ local_28._7_1_;
            if (iVar25 != 3) {
              bVar17 = bVar17 ^ (byte)local_20;
              bVar18 = bVar18 ^ local_20._1_1_;
              bVar19 = bVar19 ^ local_20._2_1_;
              bVar20 = bVar20 ^ local_20._3_1_;
              local_20._0_5_ = CONCAT14(bVar17,(undefined4)local_20);
              local_20._0_6_ = CONCAT15(bVar18,(undefined5)local_20);
              local_20._0_7_ = CONCAT16(bVar19,(undefined6)local_20);
              local_20 = CONCAT17(bVar20,(undefined7)local_20);
              if (iVar25 != 4) {
                local_18._0_1_ = (byte)local_18 ^ bVar17;
                local_18._1_1_ = local_18._1_1_ ^ bVar18;
                local_18._2_1_ = local_18._2_1_ ^ bVar19;
                local_18._3_1_ = local_18._3_1_ ^ bVar20;
                if (iVar25 != 5) {
                  bVar21 = bVar21 ^ (byte)local_18;
                  bVar22 = bVar22 ^ local_18._1_1_;
                  bVar23 = bVar23 ^ local_18._2_1_;
                  bVar24 = bVar24 ^ local_18._3_1_;
                  local_18._0_5_ = CONCAT14(bVar21,(undefined4)local_18);
                  local_18._0_6_ = CONCAT15(bVar22,(undefined5)local_18);
                  local_18._0_7_ = CONCAT16(bVar23,(undefined6)local_18);
                  local_18 = CONCAT17(bVar24,(undefined7)local_18);
                  if (iVar25 != 6) {
                    local_10._0_1_ = (byte)local_10 ^ bVar21;
                    local_10._1_1_ = local_10._1_1_ ^ bVar22;
                    local_10._2_1_ = local_10._2_1_ ^ bVar23;
                    local_10._3_1_ = local_10._3_1_ ^ bVar24;
                    if (iVar25 != 7) {
                      local_10._0_5_ = CONCAT14((byte)local_10 ^ bVar30,(undefined4)local_10);
                      local_10._0_6_ = CONCAT15(local_10._1_1_ ^ bVar31,(undefined5)local_10);
                      local_10._0_7_ = CONCAT16(local_10._2_1_ ^ bVar32,(undefined6)local_10);
                      local_10 = CONCAT17(local_10._3_1_ ^ bVar33,(undefined7)local_10);
                    }
                  }
                }
              }
            }
          }
        }
        local_28 = uVar34;
        bVar35 = false;
        bVar36 = true;
        if (0 < iVar25) {
          bVar36 = SBORROW4(iVar11,(int)uVar45);
          bVar35 = iVar11 - (int)uVar45 < 0;
        }
        if (bVar35 == bVar36) {
          uVar46 = 0;
          do {
            iVar38 = (int)uVar46;
            bVar35 = iVar25 <= iVar38;
            if (iVar38 < iVar25) {
              uVar43 = -(uVar45 >> 0x1f) & 0xfffffffc00000000 | uVar45 << 2;
              lVar1 = uVar43 + (long)iVar42;
              uVar41 = -(uVar46 >> 0x1f) & 0xfffffffc00000000 | uVar46 << 2;
              uVar3 = iVar38 + 1;
              uVar46 = (ulong)uVar3;
              RVar12 = *(Rijndael *)((long)&local_28 + uVar41 + 1);
              this[lVar1 * 4 + 0x14] = *(Rijndael *)((long)&local_28 + uVar41);
              RVar13 = *(Rijndael *)((long)&local_28 + uVar41 + 3);
              RVar14 = *(Rijndael *)((long)&local_28 + uVar41 + 2);
              this[lVar1 * 4 + 0x15] = RVar12;
              this[lVar1 * 4 + 0x16] = RVar14;
              this[lVar1 * 4 + 0x17] = RVar13;
              iVar2 = iVar42 + 1;
              bVar35 = false;
              if ((int)uVar3 < iVar25) {
                bVar35 = iVar42 + -2 < 0;
              }
              iVar44 = (int)uVar45;
              if ((int)uVar3 < iVar25 && iVar2 == 3 ||
                  bVar35 != ((int)uVar3 < iVar25 && SBORROW4(iVar2,3))) {
                lVar1 = uVar43 + (long)iVar2;
                uVar41 = -(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | uVar46 << 2;
                uVar3 = iVar38 + 2;
                uVar46 = (ulong)uVar3;
                RVar12 = *(Rijndael *)((long)&local_28 + uVar41 + 1);
                this[lVar1 * 4 + 0x14] = *(Rijndael *)((long)&local_28 + uVar41);
                RVar13 = *(Rijndael *)((long)&local_28 + uVar41 + 2);
                RVar14 = *(Rijndael *)((long)&local_28 + uVar41 + 3);
                this[lVar1 * 4 + 0x15] = RVar12;
                this[lVar1 * 4 + 0x16] = RVar13;
                this[lVar1 * 4 + 0x17] = RVar14;
                iVar2 = iVar42 + 2;
                bVar35 = false;
                if ((int)uVar3 < iVar25) {
                  bVar35 = iVar42 + -1 < 0;
                }
                if ((iVar25 <= (int)uVar3 || iVar2 != 3) &&
                    bVar35 == ((int)uVar3 < iVar25 && SBORROW4(iVar2,3))) goto LAB_001c54fc;
                lVar1 = uVar43 + (long)iVar2;
                uVar41 = -(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | uVar46 << 2;
                uVar3 = iVar38 + 3;
                uVar46 = (ulong)uVar3;
                RVar12 = *(Rijndael *)((long)&local_28 + uVar41 + 1);
                this[lVar1 * 4 + 0x14] = *(Rijndael *)((long)&local_28 + uVar41);
                RVar13 = *(Rijndael *)((long)&local_28 + uVar41 + 2);
                RVar14 = *(Rijndael *)((long)&local_28 + uVar41 + 3);
                this[lVar1 * 4 + 0x15] = RVar12;
                this[lVar1 * 4 + 0x16] = RVar13;
                this[lVar1 * 4 + 0x17] = RVar14;
                iVar2 = iVar42 + 3;
                if ((iVar25 <= (int)uVar3 || iVar2 != 3) &&
                    ((int)uVar3 < iVar25 && iVar42 < 0) ==
                    ((int)uVar3 < iVar25 && SBORROW4(iVar2,3))) goto LAB_001c54fc;
                uVar45 = -(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | uVar46 << 2;
                uVar46 = (ulong)(iVar38 + 4U);
                RVar12 = *(Rijndael *)((long)&local_28 + uVar45 + 1);
                RVar13 = *(Rijndael *)((long)&local_28 + uVar45 + 2);
                bVar35 = iVar25 <= (int)(iVar38 + 4U);
                RVar14 = *(Rijndael *)((long)&local_28 + uVar45 + 3);
                this[(long)iVar44 * 0x10 + 0x20] = *(Rijndael *)((long)&local_28 + uVar45);
                this[(long)iVar44 * 0x10 + 0x21] = RVar12;
                this[(long)iVar44 * 0x10 + 0x22] = RVar13;
                this[(long)iVar44 * 0x10 + 0x23] = RVar14;
              }
              else {
LAB_001c54fc:
                bVar35 = iVar25 <= (int)uVar3;
                iVar42 = iVar2;
                if (iVar2 != 4) goto LAB_001c54a4;
              }
              uVar45 = (ulong)(iVar44 + 1);
              iVar42 = 0;
            }
LAB_001c54a4:
            bVar36 = false;
            bVar37 = true;
            if (!bVar35) {
              bVar37 = SBORROW4(iVar11,(int)uVar45);
              bVar36 = iVar11 - (int)uVar45 < 0;
            }
          } while (bVar36 == bVar37);
        }
        pbVar47 = pbVar47 + 1;
      } while ((int)uVar45 <= iVar11);
    }
  }
  else if (-1 < iVar11) {
    iVar42 = 0;
    uVar45 = 0;
    uVar39 = 0;
    do {
      iVar38 = (int)uVar39;
      if (iVar38 < iVar25) {
        uVar46 = -(uVar45 >> 0x1f) & 0xfffffffc00000000 | uVar45 << 2;
        lVar1 = uVar46 + (long)iVar42;
        uVar39 = -(uVar39 >> 0x1f) & 0xfffffffc00000000 | uVar39 << 2;
        RVar12 = *(Rijndael *)((long)&local_28 + uVar39 + 1);
        this[lVar1 * 4 + 0x14] = *(Rijndael *)((long)&local_28 + uVar39);
        RVar13 = *(Rijndael *)((long)&local_28 + uVar39 + 3);
        RVar14 = *(Rijndael *)((long)&local_28 + uVar39 + 2);
        uVar51 = iVar38 + 1;
        uVar39 = (ulong)uVar51;
        this[lVar1 * 4 + 0x15] = RVar12;
        this[lVar1 * 4 + 0x16] = RVar14;
        this[lVar1 * 4 + 0x17] = RVar13;
        iVar2 = iVar42 + 1;
        bVar35 = false;
        if ((int)uVar51 < iVar25) {
          bVar35 = iVar42 + -2 < 0;
        }
        iVar44 = (int)uVar45;
        if ((int)uVar51 < iVar25 && iVar2 == 3 ||
            bVar35 != ((int)uVar51 < iVar25 && SBORROW4(iVar2,3))) {
          lVar1 = uVar46 + (long)iVar2;
          uVar39 = -(ulong)(uVar51 >> 0x1f) & 0xfffffffc00000000 | uVar39 << 2;
          RVar12 = *(Rijndael *)((long)&local_28 + uVar39 + 1);
          this[lVar1 * 4 + 0x14] = *(Rijndael *)((long)&local_28 + uVar39);
          RVar13 = *(Rijndael *)((long)&local_28 + uVar39 + 2);
          RVar14 = *(Rijndael *)((long)&local_28 + uVar39 + 3);
          uVar51 = iVar38 + 2;
          uVar39 = (ulong)uVar51;
          this[lVar1 * 4 + 0x15] = RVar12;
          this[lVar1 * 4 + 0x16] = RVar13;
          this[lVar1 * 4 + 0x17] = RVar14;
          iVar2 = iVar42 + 2;
          bVar35 = false;
          if ((int)uVar51 < iVar25) {
            bVar35 = iVar42 + -1 < 0;
          }
          if ((iVar25 <= (int)uVar51 || iVar2 != 3) &&
              bVar35 == ((int)uVar51 < iVar25 && SBORROW4(iVar2,3))) goto LAB_001c5110;
          lVar1 = uVar46 + (long)iVar2;
          uVar39 = -(ulong)(uVar51 >> 0x1f) & 0xfffffffc00000000 | uVar39 << 2;
          RVar12 = *(Rijndael *)((long)&local_28 + uVar39 + 1);
          this[lVar1 * 4 + 0x14] = *(Rijndael *)((long)&local_28 + uVar39);
          RVar13 = *(Rijndael *)((long)&local_28 + uVar39 + 2);
          RVar14 = *(Rijndael *)((long)&local_28 + uVar39 + 3);
          uVar51 = iVar38 + 3;
          uVar39 = (ulong)uVar51;
          this[lVar1 * 4 + 0x15] = RVar12;
          this[lVar1 * 4 + 0x16] = RVar13;
          this[lVar1 * 4 + 0x17] = RVar14;
          iVar2 = iVar42 + 3;
          if ((iVar25 <= (int)uVar51 || iVar2 != 3) &&
              ((int)uVar51 < iVar25 && iVar42 < 0) == ((int)uVar51 < iVar25 && SBORROW4(iVar2,3)))
          goto LAB_001c5110;
          uVar45 = -(ulong)(uVar51 >> 0x1f) & 0xfffffffc00000000 | uVar39 << 2;
          uVar39 = (ulong)(iVar38 + 4);
          RVar12 = *(Rijndael *)((long)&local_28 + uVar45 + 1);
          RVar13 = *(Rijndael *)((long)&local_28 + uVar45 + 2);
          RVar14 = *(Rijndael *)((long)&local_28 + uVar45 + 3);
          this[(long)iVar44 * 0x10 + 0x20] = *(Rijndael *)((long)&local_28 + uVar45);
          this[(long)iVar44 * 0x10 + 0x21] = RVar12;
          this[(long)iVar44 * 0x10 + 0x22] = RVar13;
          this[(long)iVar44 * 0x10 + 0x23] = RVar14;
LAB_001c509c:
          uVar45 = (ulong)(iVar44 + 1);
          iVar42 = 0;
          goto LAB_001c50a4;
        }
LAB_001c5110:
        if (iVar2 == 4) goto LAB_001c509c;
        iVar38 = (int)uVar39;
        iVar42 = iVar2;
      }
      else {
LAB_001c50a4:
        iVar38 = (int)uVar39;
      }
      if (iVar25 <= iVar38) goto LAB_001c5120;
    } while ((int)uVar45 <= iVar11);
  }
  if (lVar26 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar26 - ___stack_chk_guard,0);
  }
  return;
}


