/*
 * Ghidra decompilation
 *
 * Function : _ZN6Unpack12ReadTables20Ev
 * Address  : 001d1360
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Unpack::ReadTables20() */

void Unpack::ReadTables20(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ushort uVar11;
  byte bVar12;
  char cVar13;
  int iVar14;
  int iVar15;
  long in_x0;
  undefined8 uVar16;
  long lVar17;
  int iVar18;
  ulong uVar19;
  uint uVar20;
  int iVar21;
  byte *pbVar22;
  uint uVar23;
  long lVar24;
  ulong uVar25;
  uint uVar26;
  byte *pbVar27;
  int iVar28;
  ulong uVar29;
  undefined *puVar30;
  undefined *puVar31;
  uint uVar32;
  long lVar33;
  long lVar34;
  undefined8 *puVar35;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  undefined8 local_498;
  undefined8 uStack_490;
  undefined8 local_488;
  undefined8 uStack_480;
  undefined8 local_478;
  undefined8 local_470;
  undefined8 local_468;
  undefined8 uStack_460;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined8 local_438;
  undefined8 uStack_430;
  byte local_428 [19];
  byte abStack_415 [4];
  byte local_411 [299];
  byte local_2e6 [48];
  byte local_2b6 [28];
  byte abStack_29a [658];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar15 = *(int *)(in_x0 + 8);
  if (*(int *)(in_x0 + 0xd0) + -0x18 <= iVar15) {
    cVar13 = UnpReadBuf();
    if (cVar13 == '\0') {
LAB_001d23d8:
      uVar16 = 0;
      goto LAB_001d2124;
    }
    iVar15 = *(int *)(in_x0 + 8);
  }
  iVar14 = *(int *)(in_x0 + 0xc);
  lVar34 = *(long *)(in_x0 + 0x18);
  uVar20 = ((uint)*(byte *)(lVar34 + iVar15 + 2) | (uint)*(byte *)(lVar34 + iVar15) << 0x10 |
           (uint)*(byte *)(lVar34 + iVar15 + 1) << 8) >> (ulong)(8U - iVar14 & 0x1f);
  *(uint *)(in_x0 + 0x98a8) = uVar20 & 0x8000;
  if ((uVar20 >> 0xe & 1) == 0) {
    memset((void *)(in_x0 + 0x94a4),0,0x404);
  }
  uVar26 = iVar14 + 2;
  uVar23 = uVar26 & 7;
  iVar15 = iVar15 + (uVar26 >> 3);
  *(int *)(in_x0 + 8) = iVar15;
  *(uint *)(in_x0 + 0xc) = uVar23;
  iVar14 = 0x176;
  if ((uVar20 & 0x8000) != 0) {
    iVar14 = ((uVar20 & 0xffff) >> 0xc & 3) + 1;
    *(int *)(in_x0 + 0x98ac) = iVar14;
    if (iVar14 <= *(int *)(in_x0 + 0x98b0)) {
      *(undefined4 *)(in_x0 + 0x98b0) = 0;
    }
    iVar14 = iVar14 * 0x101;
    iVar15 = iVar15 + (uVar23 + 2 >> 3);
    uVar23 = uVar23 + 2 & 7;
    *(int *)(in_x0 + 8) = iVar15;
    *(uint *)(in_x0 + 0xc) = uVar23;
  }
  pbVar22 = local_428;
  do {
    lVar33 = (long)iVar15;
    lVar24 = (long)iVar15;
    uVar20 = 8 - uVar23;
    iVar15 = iVar15 + (uVar23 + 4 >> 3);
    uVar23 = uVar23 + 4 & 7;
    pbVar27 = pbVar22 + 1;
    *pbVar22 = (byte)((((uint)*(byte *)(lVar34 + lVar33 + 2) |
                        (uint)*(byte *)(lVar34 + lVar24) << 0x10 |
                       (uint)*(byte *)(lVar34 + lVar33 + 1) << 8) >> (ulong)(uVar20 & 0x1f)) >> 0xc)
               & 0xf;
    *(int *)(in_x0 + 8) = iVar15;
    *(uint *)(in_x0 + 0xc) = uVar23;
    pbVar22 = pbVar27;
  } while (abStack_415 != pbVar27);
  local_4a8 = 0;
  uStack_4a0 = 0;
  local_498 = 0;
  uStack_490 = 0;
  local_488 = 0;
  uStack_480 = 0;
  *(undefined4 *)(in_x0 + 0x3c9c) = 0x13;
  local_478 = 0;
  local_470 = 0;
  pbVar22 = local_428;
  do {
    pbVar27 = pbVar22 + 1;
    *(int *)((long)&local_4a8 + ((ulong)*pbVar22 & 0xf) * 4) =
         *(int *)((long)&local_4a8 + ((ulong)*pbVar22 & 0xf) * 4) + 1;
    pbVar22 = pbVar27;
  } while (abStack_415 != pbVar27);
  uVar20 = local_4a8._4_4_;
  iVar18 = (int)uStack_4a0 + local_4a8._4_4_ * 2;
  iVar28 = uStack_4a0._4_4_ + iVar18 * 2;
  iVar21 = (int)local_498 + iVar28 * 2;
  iVar1 = local_498._4_4_ + iVar21 * 2;
  iVar2 = (int)uStack_490 + iVar1 * 2;
  iVar3 = uStack_490._4_4_ + iVar2 * 2;
  *(undefined8 *)(in_x0 + 0x4924) = 0;
  *(undefined8 *)(in_x0 + 0x492c) = 0;
  iVar4 = (int)local_488 + iVar3 * 2;
  *(undefined8 *)(in_x0 + 0x4934) = 0;
  *(undefined8 *)(in_x0 + 0x493c) = 0;
  iVar5 = local_488._4_4_ + iVar4 * 2;
  iVar6 = (int)uStack_480 + iVar5 * 2;
  *(undefined4 *)(in_x0 + 0x4944) = 0;
  *(undefined2 *)(in_x0 + 0x4948) = 0;
  *(undefined4 *)(in_x0 + 0x3ca0) = 0;
  *(uint *)(in_x0 + 0x3ca4) = local_4a8._4_4_ << 0xf;
  *(undefined4 *)(in_x0 + 0x3ce0) = 0;
  *(int *)(in_x0 + 0x3cac) = iVar28 * 0x2000;
  iVar28 = uStack_480._4_4_ + iVar6 * 2;
  *(int *)(in_x0 + 0x3cb4) = iVar1 * 0x800;
  *(int *)(in_x0 + 0x3cbc) = iVar3 * 0x200;
  iVar1 = (int)local_478 + iVar28 * 2;
  *(int *)(in_x0 + 0x3cc4) = iVar5 * 0x80;
  iVar3 = local_478._4_4_ + iVar1 * 2;
  local_4a8 = (ulong)local_4a8._4_4_ << 0x20;
  *(int *)(in_x0 + 0x3ca8) = iVar18 * 0x4000;
  *(int *)(in_x0 + 0x3cb0) = iVar21 * 0x1000;
  *(int *)(in_x0 + 0x3cb8) = iVar2 * 0x400;
  *(int *)(in_x0 + 0x3cc0) = iVar4 * 0x100;
  *(int *)(in_x0 + 0x3cc8) = iVar6 * 0x40;
  *(int *)(in_x0 + 0x3ccc) = iVar28 * 0x20;
  *(int *)(in_x0 + 0x3cd0) = iVar1 * 0x10;
  *(int *)(in_x0 + 0x3cd4) = iVar3 * 8;
  iVar18 = *(int *)(in_x0 + 0x3ce0) + uVar20;
  iVar28 = iVar18 + (int)uStack_4a0;
  iVar21 = iVar28 + uStack_4a0._4_4_;
  iVar1 = iVar21 + (int)local_498;
  iVar2 = iVar1 + local_498._4_4_;
  iVar4 = iVar2 + (int)uStack_490;
  iVar5 = iVar4 + uStack_490._4_4_;
  iVar6 = iVar5 + (int)local_488;
  iVar3 = (int)local_470 + iVar3 * 2;
  iVar7 = iVar6 + local_488._4_4_;
  iVar8 = iVar7 + (int)uStack_480;
  iVar9 = iVar8 + uStack_480._4_4_;
  iVar10 = iVar9 + (int)local_478;
  *(int *)(in_x0 + 0x3cd8) = iVar3 * 4;
  *(int *)(in_x0 + 0x3cdc) = (local_470._4_4_ + iVar3 * 2) * 2;
  iVar3 = iVar10 + local_478._4_4_;
  *(int *)(in_x0 + 0x3ce4) = *(int *)(in_x0 + 0x3ce0);
  *(int *)(in_x0 + 0x3ce8) = iVar18;
  *(int *)(in_x0 + 0x3cec) = iVar28;
  *(int *)(in_x0 + 0x3cf0) = iVar21;
  *(int *)(in_x0 + 0x3cf4) = iVar1;
  *(int *)(in_x0 + 0x3cf8) = iVar2;
  *(int *)(in_x0 + 0x3cfc) = iVar4;
  *(int *)(in_x0 + 0x3d00) = iVar5;
  *(int *)(in_x0 + 0x3d04) = iVar6;
  *(int *)(in_x0 + 0x3d08) = iVar7;
  *(int *)(in_x0 + 0x3d0c) = iVar8;
  *(int *)(in_x0 + 0x3d10) = iVar9;
  *(int *)(in_x0 + 0x3d14) = iVar10;
  *(int *)(in_x0 + 0x3d18) = iVar3;
  *(int *)(in_x0 + 0x3d1c) = iVar3 + (int)local_470;
  local_468 = *(undefined8 *)(in_x0 + 0x3ce0);
  uStack_460 = *(undefined8 *)(in_x0 + 0x3ce8);
  lVar33 = 1;
  local_458 = *(undefined8 *)(in_x0 + 0x3cf0);
  uStack_450 = *(undefined8 *)(in_x0 + 0x3cf8);
  local_448 = *(undefined8 *)(in_x0 + 0x3d00);
  uStack_440 = *(undefined8 *)(in_x0 + 0x3d08);
  local_438 = *(undefined8 *)(in_x0 + 0x3d10);
  uStack_430 = *(undefined8 *)(in_x0 + 0x3d18);
  do {
    if ((local_428[lVar33 + -1] & 0xf) != 0) {
      lVar24 = (long)(int)(local_428[lVar33 + -1] & 0xf);
      uVar20 = *(uint *)((long)&local_468 + lVar24 * 4);
      *(uint *)((long)&local_468 + lVar24 * 4) = uVar20 + 1;
      *(short *)(in_x0 + (ulong)uVar20 * 2 + 0x4924) = (short)lVar33 + -1;
    }
    lVar33 = lVar33 + 1;
  } while (lVar33 != 0x14);
  lVar33 = in_x0 + 0x3c9c;
  puVar30 = (undefined *)(in_x0 + 0x3d24);
  uVar20 = 0;
  uVar19 = 1;
  uVar29 = 1;
  *(undefined4 *)(in_x0 + 0x3d20) = 7;
LAB_001d16e8:
  if ((int)uVar19 == 0x10) goto LAB_001d2208;
LAB_001d16f0:
  if (uVar20 < *(uint *)(lVar33 + uVar29 * 4 + 4)) {
LAB_001d2218:
    uVar25 = (ulong)((int)uVar19 - 1);
    goto LAB_001d18b8;
  }
  iVar18 = (int)uVar19;
  uVar26 = iVar18 + 1;
  if (iVar18 == 0xf) {
LAB_001d2278:
    uVar19 = (ulong)uVar26;
    uVar25 = 0xf;
    uVar29 = 0x10;
  }
  else {
    uVar29 = (ulong)uVar26;
    if (*(uint *)(lVar33 + (ulong)uVar26 * 4 + 4) <= uVar20) {
      uVar26 = iVar18 + 2;
      if (iVar18 == 0xe) goto LAB_001d2278;
      uVar29 = (ulong)uVar26;
      if (*(uint *)(lVar33 + (ulong)uVar26 * 4 + 4) <= uVar20) {
        uVar26 = iVar18 + 3;
        if (iVar18 == 0xd) goto LAB_001d2278;
        uVar29 = (ulong)uVar26;
        if (*(uint *)(lVar33 + (ulong)uVar26 * 4 + 4) <= uVar20) {
          uVar26 = iVar18 + 4;
          if (iVar18 == 0xc) {
LAB_001d2394:
            uVar19 = (ulong)uVar26;
            uVar29 = 0x10;
            uVar25 = 0xf;
            goto LAB_001d18b8;
          }
          if (uVar20 < *(uint *)(lVar33 + (ulong)uVar26 * 4 + 4)) {
LAB_001d23a4:
            uVar19 = (ulong)uVar26;
            uVar25 = (ulong)(uVar26 - 1);
            uVar29 = uVar19;
            goto LAB_001d18b8;
          }
          uVar26 = iVar18 + 5;
          if (iVar18 == 0xb) goto LAB_001d2278;
          uVar29 = (ulong)uVar26;
          if (*(uint *)(lVar33 + (ulong)uVar26 * 4 + 4) <= uVar20) {
            uVar26 = iVar18 + 6;
            if (iVar18 == 10) goto LAB_001d2278;
            uVar29 = (ulong)uVar26;
            if (*(uint *)(lVar33 + (ulong)uVar26 * 4 + 4) <= uVar20) {
              uVar26 = iVar18 + 7;
              if (iVar18 == 9) goto LAB_001d2278;
              uVar29 = (ulong)uVar26;
              if (*(uint *)(lVar33 + (ulong)uVar26 * 4 + 4) <= uVar20) {
                uVar26 = iVar18 + 8;
                if (iVar18 == 8) goto LAB_001d2278;
                uVar29 = (ulong)uVar26;
                if (*(uint *)(lVar33 + (ulong)uVar26 * 4 + 4) <= uVar20) {
                  uVar26 = iVar18 + 9;
                  if (iVar18 == 7) goto LAB_001d2394;
                  if (uVar20 < *(uint *)(lVar33 + (ulong)uVar26 * 4 + 4)) goto LAB_001d23a4;
                  uVar26 = iVar18 + 10;
                  if (iVar18 == 6) goto LAB_001d2278;
                  uVar29 = (ulong)uVar26;
                  if (*(uint *)(lVar33 + (ulong)uVar26 * 4 + 4) <= uVar20) {
                    uVar26 = iVar18 + 0xb;
                    if (iVar18 == 5) goto LAB_001d2278;
                    uVar29 = (ulong)uVar26;
                    if (*(uint *)(lVar33 + (ulong)uVar26 * 4 + 4) <= uVar20) {
                      uVar26 = iVar18 + 0xc;
                      if (iVar18 == 4) goto LAB_001d2278;
                      uVar29 = (ulong)uVar26;
                      if (*(uint *)(lVar33 + (ulong)uVar26 * 4 + 4) <= uVar20) {
                        uVar26 = iVar18 + 0xd;
                        if (iVar18 == 3) goto LAB_001d2278;
                        uVar29 = (ulong)uVar26;
                        if (*(uint *)(lVar33 + (ulong)uVar26 * 4 + 4) <= uVar20) {
                          if (iVar18 == 2) {
                            uVar25 = 0xf;
                            uVar19 = 0x10;
                            uVar29 = 0x10;
                            goto LAB_001d18b8;
                          }
                          uVar25 = 0xf;
                          uVar19 = 0x10;
                          uVar29 = 0x10;
                          if (*(uint *)(in_x0 + 0x3cdc) <= uVar20) goto LAB_001d18b8;
                          uVar19 = 0xf;
                          uVar29 = 0xf;
                          goto LAB_001d2218;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    uVar19 = (ulong)uVar26;
    uVar25 = (ulong)(uVar26 - 1);
  }
LAB_001d18b8:
  do {
    *puVar30 = (char)uVar19;
    uVar26 = (uVar20 - *(int *)(lVar33 + uVar25 * 4 + 4) >> (ulong)(0x10U - (int)uVar19 & 0x1f)) +
             *(int *)(lVar33 + uVar29 * 4 + 0x44);
    if (uVar26 < 0x13) {
      uVar20 = uVar20 + 0x200;
      *(undefined2 *)((-0x3924 - in_x0) + (long)puVar30 * 2) =
           *(undefined2 *)(lVar33 + (ulong)uVar26 * 2 + 0xc88);
      puVar30 = puVar30 + 1;
      if ((undefined *)(in_x0 + 0x3da4) != puVar30) goto LAB_001d16e8;
LAB_001d1900:
      iVar28 = *(int *)(in_x0 + 0xd0);
      uVar20 = 7;
      iVar18 = 0;
      break;
    }
    *(undefined2 *)((-0x3924 - in_x0) + (long)puVar30 * 2) = 0;
    puVar30 = puVar30 + 1;
    uVar20 = uVar20 + 0x200;
    if ((undefined *)(in_x0 + 0x3da4) == puVar30) goto LAB_001d1900;
    if ((int)uVar19 != 0x10) goto LAB_001d16f0;
LAB_001d2208:
    uVar25 = 0xf;
  } while( true );
  while (iVar18 < iVar14) {
LAB_001d1918:
    if (iVar28 + -4 <= iVar15) {
      cVar13 = UnpReadBuf();
      if (cVar13 == '\0') goto LAB_001d23d8;
      iVar28 = *(int *)(in_x0 + 0xd0);
      uVar20 = *(uint *)(in_x0 + 0x3d20);
      iVar15 = *(int *)(in_x0 + 8);
      lVar34 = *(long *)(in_x0 + 0x18);
    }
    lVar33 = in_x0 + 0x3c9c;
    iVar21 = *(int *)(in_x0 + 0xc);
    uVar26 = ((uint)*(byte *)(lVar34 + iVar15 + 2) | (uint)*(byte *)(lVar34 + iVar15) << 0x10 |
             (uint)*(byte *)(lVar34 + iVar15 + 1) << 8) >> (ulong)(8U - iVar21 & 0x1f) & 0xfffe;
    if (uVar26 < *(uint *)(lVar33 + (ulong)uVar20 * 4 + 4)) {
      uVar29 = (ulong)(uVar26 >> (ulong)(0x10 - uVar20 & 0x1f));
      uVar11 = *(ushort *)(lVar33 + uVar29 * 2 + 0x488);
      uVar26 = (uint)*(byte *)(lVar33 + uVar29 + 0x88) + iVar21;
      uVar23 = uVar26 & 7;
      iVar15 = iVar15 + (uVar26 >> 3);
      *(int *)(in_x0 + 8) = iVar15;
      *(uint *)(in_x0 + 0xc) = uVar23;
    }
    else {
      uVar23 = uVar20 + 1;
      if (uVar23 < 0xf) {
        uVar29 = (ulong)uVar23;
        if (*(uint *)(lVar33 + (ulong)uVar23 * 4 + 4) <= uVar26) {
          uVar23 = uVar20 + 2;
          if (uVar20 == 0xd) {
LAB_001d2268:
            uVar32 = 1;
            uVar19 = 0xe;
            uVar29 = 0xf;
            goto LAB_001d1b68;
          }
          uVar29 = (ulong)uVar23;
          if (*(uint *)(lVar33 + (ulong)uVar23 * 4 + 4) <= uVar26) {
            uVar23 = uVar20 + 3;
            if (uVar20 == 0xc) goto LAB_001d2268;
            uVar29 = (ulong)uVar23;
            if (*(uint *)(lVar33 + (ulong)uVar23 * 4 + 4) <= uVar26) {
              uVar23 = uVar20 + 4;
              if (uVar20 == 0xb) goto LAB_001d2268;
              uVar29 = (ulong)uVar23;
              if (*(uint *)(lVar33 + (ulong)uVar23 * 4 + 4) <= uVar26) {
                uVar23 = uVar20 + 5;
                if (uVar20 == 10) goto LAB_001d2268;
                lVar33 = in_x0 + 0x3c9c;
                uVar29 = (ulong)uVar23;
                if (*(uint *)(lVar33 + (ulong)uVar23 * 4 + 4) <= uVar26) {
                  uVar23 = uVar20 + 6;
                  if (uVar20 == 9) goto LAB_001d2268;
                  uVar29 = (ulong)uVar23;
                  if (*(uint *)(lVar33 + (ulong)uVar23 * 4 + 4) <= uVar26) {
                    uVar23 = uVar20 + 7;
                    if (uVar20 == 8) goto LAB_001d2268;
                    uVar29 = (ulong)uVar23;
                    if (*(uint *)(lVar33 + (ulong)uVar23 * 4 + 4) <= uVar26) {
                      uVar23 = uVar20 + 8;
                      if (uVar20 == 7) goto LAB_001d2268;
                      uVar29 = (ulong)uVar23;
                      if (*(uint *)(lVar33 + (ulong)uVar23 * 4 + 4) <= uVar26) {
                        uVar23 = uVar20 + 9;
                        if (uVar20 == 6) goto LAB_001d2268;
                        uVar29 = (ulong)uVar23;
                        if (*(uint *)(lVar33 + (ulong)uVar23 * 4 + 4) <= uVar26) {
                          uVar23 = uVar20 + 10;
                          if (uVar20 == 5) goto LAB_001d2268;
                          lVar33 = in_x0 + 0x3c9c;
                          uVar29 = (ulong)uVar23;
                          if (*(uint *)(lVar33 + (ulong)uVar23 * 4 + 4) <= uVar26) {
                            uVar23 = uVar20 + 0xb;
                            if (uVar20 == 4) goto LAB_001d2268;
                            uVar29 = (ulong)uVar23;
                            if (*(uint *)(lVar33 + (ulong)uVar23 * 4 + 4) <= uVar26) {
                              uVar23 = uVar20 + 0xc;
                              if (uVar20 == 3) goto LAB_001d2268;
                              uVar29 = (ulong)uVar23;
                              if (*(uint *)(lVar33 + (ulong)uVar23 * 4 + 4) <= uVar26) {
                                uVar23 = uVar20 + 0xd;
                                if (uVar20 == 2) goto LAB_001d2268;
                                uVar29 = (ulong)uVar23;
                                if (*(uint *)(lVar33 + (ulong)uVar23 * 4 + 4) <= uVar26) {
                                  uVar23 = uVar20 + 0xe;
                                  if (uVar20 == 1) goto LAB_001d2268;
                                  uVar29 = (ulong)uVar23;
                                  if (*(uint *)(lVar33 + (ulong)uVar23 * 4 + 4) <= uVar26) {
                                    if ((uVar20 == 0) || (*(uint *)(in_x0 + 0x3cd8) <= uVar26))
                                    goto LAB_001d1b58;
                                    uVar23 = 0xe;
                                    uVar29 = 0xe;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        uVar19 = (ulong)(uVar23 - 1);
        uVar32 = 0x10 - uVar23;
      }
      else {
LAB_001d1b58:
        uVar32 = 1;
        uVar19 = 0xe;
        uVar23 = 0xf;
        uVar29 = 0xf;
      }
LAB_001d1b68:
      lVar33 = in_x0 + 0x3c9c;
      iVar15 = iVar15 + (uVar23 + iVar21 >> 3);
      uVar23 = uVar23 + iVar21 & 7;
      *(int *)(in_x0 + 8) = iVar15;
      *(uint *)(in_x0 + 0xc) = uVar23;
      uVar26 = (uVar26 - *(int *)(lVar33 + uVar19 * 4 + 4) >> (ulong)(uVar32 & 0x1f)) +
               *(int *)(lVar33 + uVar29 * 4 + 0x44);
      if (*(uint *)(in_x0 + 0x3c9c) <= uVar26) {
        uVar26 = 0;
      }
      uVar11 = *(ushort *)(lVar33 + (ulong)uVar26 * 2 + 0xc88);
    }
    if (uVar11 < 0x10) {
      local_411[(long)iVar18 + 1] = (char)uVar11 + *(char *)(in_x0 + iVar18 + 0x94a4) & 0xf;
      iVar18 = iVar18 + 1;
    }
    else {
      uVar26 = ((uint)*(byte *)(lVar34 + iVar15 + 2) | (uint)*(byte *)(lVar34 + iVar15) << 0x10 |
               (uint)*(byte *)(lVar34 + iVar15 + 1) << 8) >> (ulong)(8 - uVar23 & 0x1f);
      if (uVar11 == 0x10) {
        iVar15 = iVar15 + (uVar23 + 2 >> 3);
        *(int *)(in_x0 + 8) = iVar15;
        *(uint *)(in_x0 + 0xc) = uVar23 + 2 & 7;
        if (iVar18 == 0) goto LAB_001d1918;
        if (iVar14 <= iVar18) break;
        iVar21 = iVar18 + 3;
        bVar12 = local_411[iVar18];
        lVar33 = (long)(iVar18 + 1);
        do {
          iVar18 = (int)lVar33;
          local_411[lVar33] = bVar12;
          lVar33 = lVar33 + 1;
        } while (0 < (int)(iVar21 + ((uVar26 >> 0xe & 3) - iVar18)) && iVar18 < iVar14);
      }
      else {
        if (uVar11 == 0x11) {
          uVar23 = uVar23 + 3;
          iVar21 = (uVar26 >> 0xd & 7) + 3;
        }
        else {
          uVar23 = uVar23 + 7;
          iVar21 = (uVar26 >> 9 & 0x7f) + 0xb;
        }
        iVar15 = iVar15 + (uVar23 >> 3);
        *(int *)(in_x0 + 8) = iVar15;
        *(uint *)(in_x0 + 0xc) = uVar23 & 7;
        if (iVar14 <= iVar18) break;
        iVar21 = iVar18 + iVar21;
        lVar33 = (long)(iVar18 + 1);
        do {
          iVar18 = (int)lVar33;
          local_411[lVar33] = 0;
          lVar33 = lVar33 + 1;
        } while (0 < iVar21 - iVar18 && iVar18 < iVar14);
      }
    }
  }
  uVar16 = 1;
  if (iVar15 <= iVar28) {
    if (*(int *)(in_x0 + 0x98a8) == 0) {
      local_4a8 = 0;
      uStack_4a0 = 0;
      local_498 = 0;
      uStack_490 = 0;
      local_488 = 0;
      uStack_480 = 0;
      local_478 = 0;
      local_470 = 0;
      *(undefined4 *)(in_x0 + 0xec) = 0x12a;
      pbVar22 = local_411 + 1;
      do {
        pbVar27 = pbVar22 + 1;
        *(int *)((long)&local_4a8 + ((ulong)*pbVar22 & 0xf) * 4) =
             *(int *)((long)&local_4a8 + ((ulong)*pbVar22 & 0xf) * 4) + 1;
        pbVar22 = pbVar27;
      } while (pbVar27 != local_2e6);
      local_4a8 = local_4a8 & 0xffffffff00000000;
      memset((void *)(in_x0 + 0xd74),0,0x254);
      iVar15 = (int)uStack_4a0 + local_4a8._4_4_ * 2;
      iVar14 = uStack_4a0._4_4_ + iVar15 * 2;
      iVar18 = (int)local_498 + iVar14 * 2;
      iVar28 = local_498._4_4_ + iVar18 * 2;
      iVar21 = (int)uStack_490 + iVar28 * 2;
      uStack_4a0._4_4_ = local_4a8._4_4_ + (int)uStack_4a0 + uStack_4a0._4_4_;
      iVar1 = uStack_490._4_4_ + iVar21 * 2;
      local_498._0_4_ = uStack_4a0._4_4_ + (int)local_498;
      iVar2 = (int)local_488 + iVar1 * 2;
      lVar34 = in_x0 + 0xec;
      iVar3 = local_488._4_4_ + iVar2 * 2;
      local_498._4_4_ = (int)local_498 + local_498._4_4_;
      uStack_490._0_4_ = local_498._4_4_ + (int)uStack_490;
      iVar4 = (int)uStack_480 + iVar3 * 2;
      uStack_490._4_4_ = (int)uStack_490 + uStack_490._4_4_;
      *(undefined4 *)(in_x0 + 0xf0) = 0;
      *(uint *)(in_x0 + 0xf4) = local_4a8._4_4_ << 0xf;
      *(undefined4 *)(in_x0 + 0x130) = 0;
      local_488._0_4_ = uStack_490._4_4_ + (int)local_488;
      *(int *)(in_x0 + 0xf8) = iVar15 * 0x4000;
      *(int *)(in_x0 + 0xfc) = iVar14 * 0x2000;
      local_488._4_4_ = (int)local_488 + local_488._4_4_;
      iVar15 = uStack_480._4_4_ + iVar4 * 2;
      uStack_480._0_4_ = local_488._4_4_ + (int)uStack_480;
      uStack_480._4_4_ = (int)uStack_480 + uStack_480._4_4_;
      *(int *)(in_x0 + 0x100) = iVar18 * 0x1000;
      *(int *)(in_x0 + 0x104) = iVar28 * 0x800;
      iVar14 = (int)local_478 + iVar15 * 2;
      local_478._0_4_ = uStack_480._4_4_ + (int)local_478;
      *(int *)(in_x0 + 0x108) = iVar21 * 0x400;
      *(int *)(in_x0 + 0x10c) = iVar1 * 0x200;
      iVar18 = (int)local_478 + local_478._4_4_;
      *(int *)(in_x0 + 0x110) = iVar2 * 0x100;
      local_478._4_4_ = local_478._4_4_ + iVar14 * 2;
      *(int *)(in_x0 + 0x11c) = iVar15 * 0x20;
      iVar15 = (int)local_470 + local_478._4_4_ * 2;
      *(int *)(in_x0 + 0x114) = iVar3 * 0x80;
      *(int *)(in_x0 + 0x118) = iVar4 * 0x40;
      *(int *)(in_x0 + 0x120) = iVar14 * 0x10;
      *(int *)(in_x0 + 0x124) = local_478._4_4_ * 8;
      *(int *)(in_x0 + 0x128) = iVar15 * 4;
      *(int *)(in_x0 + 300) = (local_470._4_4_ + iVar15 * 2) * 2;
      *(undefined4 *)(in_x0 + 0x134) = 0;
      *(uint *)(in_x0 + 0x138) = local_4a8._4_4_;
      *(uint *)(in_x0 + 0x13c) = local_4a8._4_4_ + (int)uStack_4a0;
      *(int *)(in_x0 + 0x140) = uStack_4a0._4_4_;
      *(int *)(in_x0 + 0x144) = (int)local_498;
      *(int *)(in_x0 + 0x148) = local_498._4_4_;
      *(int *)(in_x0 + 0x14c) = (int)uStack_490;
      *(int *)(in_x0 + 0x150) = uStack_490._4_4_;
      *(int *)(in_x0 + 0x154) = (int)local_488;
      *(int *)(in_x0 + 0x158) = local_488._4_4_;
      *(int *)(in_x0 + 0x15c) = (int)uStack_480;
      *(int *)(in_x0 + 0x160) = uStack_480._4_4_;
      *(int *)(in_x0 + 0x164) = (int)local_478;
      *(int *)(in_x0 + 0x168) = iVar18;
      *(int *)(in_x0 + 0x16c) = iVar18 + (int)local_470;
      local_458 = *(undefined8 *)(in_x0 + 0x140);
      uStack_450 = *(undefined8 *)(in_x0 + 0x148);
      lVar33 = 1;
      local_468 = *(undefined8 *)(in_x0 + 0x130);
      uStack_460 = *(undefined8 *)(in_x0 + 0x138);
      local_448 = *(undefined8 *)(in_x0 + 0x150);
      uStack_440 = *(undefined8 *)(in_x0 + 0x158);
      local_438 = *(undefined8 *)(in_x0 + 0x160);
      uStack_430 = *(undefined8 *)(in_x0 + 0x168);
      do {
        if ((local_411[lVar33] & 0xf) != 0) {
          lVar24 = (long)(int)(local_411[lVar33] & 0xf);
          uVar20 = *(uint *)((long)&local_468 + lVar24 * 4);
          *(uint *)((long)&local_468 + lVar24 * 4) = uVar20 + 1;
          *(short *)(lVar34 + (ulong)uVar20 * 2 + 0xc88) = (short)lVar33 + -1;
        }
        lVar33 = lVar33 + 1;
      } while (lVar33 != 299);
      puVar30 = (undefined *)(in_x0 + 0x174);
      uVar20 = 0;
      uVar19 = 1;
      uVar29 = 1;
      *(undefined4 *)(in_x0 + 0x170) = 10;
LAB_001d2628:
      do {
        iVar15 = (int)uVar19;
        if (iVar15 == 0x10) {
          uVar25 = 0xf;
        }
        else if (uVar20 < *(uint *)(lVar34 + uVar29 * 4 + 4)) {
LAB_001d3174:
          uVar25 = (ulong)((int)uVar19 - 1);
        }
        else {
          uVar26 = iVar15 + 1;
          if (iVar15 == 0xf) {
LAB_001d317c:
            uVar19 = (ulong)uVar26;
            uVar25 = 0xf;
            uVar29 = 0x10;
          }
          else {
            uVar29 = (ulong)uVar26;
            if (*(uint *)(lVar34 + (ulong)uVar26 * 4 + 4) <= uVar20) {
              uVar26 = iVar15 + 2;
              if (iVar15 == 0xe) goto LAB_001d317c;
              uVar29 = (ulong)uVar26;
              if (*(uint *)(lVar34 + (ulong)uVar26 * 4 + 4) <= uVar20) {
                uVar26 = iVar15 + 3;
                if (iVar15 == 0xd) goto LAB_001d317c;
                uVar29 = (ulong)uVar26;
                if (*(uint *)(lVar34 + (ulong)uVar26 * 4 + 4) <= uVar20) {
                  uVar26 = iVar15 + 4;
                  if (iVar15 == 0xc) {
LAB_001d31f0:
                    uVar19 = (ulong)uVar26;
                    uVar29 = 0x10;
                    uVar25 = 0xf;
                  }
                  else {
                    if (*(uint *)(lVar34 + (ulong)uVar26 * 4 + 4) <= uVar20) {
                      uVar26 = iVar15 + 5;
                      if (iVar15 == 0xb) goto LAB_001d317c;
                      uVar29 = (ulong)uVar26;
                      if (*(uint *)(lVar34 + (ulong)uVar26 * 4 + 4) <= uVar20) {
                        uVar26 = iVar15 + 6;
                        if (iVar15 == 10) goto LAB_001d317c;
                        uVar29 = (ulong)uVar26;
                        if (*(uint *)(lVar34 + (ulong)uVar26 * 4 + 4) <= uVar20) {
                          uVar26 = iVar15 + 7;
                          if (iVar15 == 9) goto LAB_001d317c;
                          uVar29 = (ulong)uVar26;
                          if (*(uint *)(lVar34 + (ulong)uVar26 * 4 + 4) <= uVar20) {
                            uVar26 = iVar15 + 8;
                            if (iVar15 == 8) goto LAB_001d317c;
                            uVar29 = (ulong)uVar26;
                            if (*(uint *)(lVar34 + (ulong)uVar26 * 4 + 4) <= uVar20) {
                              uVar26 = iVar15 + 9;
                              if (iVar15 == 7) goto LAB_001d31f0;
                              if (uVar20 < *(uint *)(lVar34 + (ulong)uVar26 * 4 + 4))
                              goto LAB_001d3228;
                              uVar26 = iVar15 + 10;
                              if (iVar15 == 6) goto LAB_001d317c;
                              uVar29 = (ulong)uVar26;
                              if (*(uint *)(lVar34 + (ulong)uVar26 * 4 + 4) <= uVar20) {
                                uVar26 = iVar15 + 0xb;
                                if (iVar15 == 5) goto LAB_001d317c;
                                uVar29 = (ulong)uVar26;
                                if (*(uint *)(lVar34 + (ulong)uVar26 * 4 + 4) <= uVar20) {
                                  uVar26 = iVar15 + 0xc;
                                  if (iVar15 == 4) goto LAB_001d317c;
                                  uVar29 = (ulong)uVar26;
                                  if (*(uint *)(lVar34 + (ulong)uVar26 * 4 + 4) <= uVar20) {
                                    uVar26 = iVar15 + 0xd;
                                    if (iVar15 == 3) goto LAB_001d317c;
                                    uVar29 = (ulong)uVar26;
                                    if (*(uint *)(lVar34 + (ulong)uVar26 * 4 + 4) <= uVar20) {
                                      if (iVar15 == 2) {
                                        uVar25 = 0xf;
                                        uVar19 = 0x10;
                                        uVar29 = 0x10;
                                      }
                                      else {
                                        uVar25 = 0xf;
                                        uVar19 = 0x10;
                                        uVar29 = 0x10;
                                        if (uVar20 < *(uint *)(in_x0 + 300)) {
                                          uVar19 = 0xf;
                                          uVar29 = 0xf;
                                          goto LAB_001d3174;
                                        }
                                      }
                                      goto LAB_001d27f8;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                      goto LAB_001d31c4;
                    }
LAB_001d3228:
                    uVar19 = (ulong)uVar26;
                    uVar25 = (ulong)(uVar26 - 1);
                    uVar29 = uVar19;
                  }
                  goto LAB_001d27f8;
                }
              }
            }
LAB_001d31c4:
            uVar19 = (ulong)uVar26;
            uVar25 = (ulong)(uVar26 - 1);
          }
        }
LAB_001d27f8:
        *puVar30 = (char)uVar19;
        uVar26 = (uVar20 - *(int *)(lVar34 + uVar25 * 4 + 4) >> (ulong)(0x10U - (int)uVar19 & 0x1f))
                 + *(int *)(lVar34 + uVar29 * 4 + 0x44);
        if (0x129 < uVar26) {
          *(undefined2 *)((0x28c - in_x0) + (long)puVar30 * 2) = 0;
          puVar30 = puVar30 + 1;
          uVar20 = uVar20 + 0x40;
          if (puVar30 == (undefined *)(in_x0 + 0x574)) break;
          goto LAB_001d2628;
        }
        uVar20 = uVar20 + 0x40;
        *(undefined2 *)((0x28c - in_x0) + (long)puVar30 * 2) =
             *(undefined2 *)(lVar34 + (ulong)uVar26 * 2 + 0xc88);
        puVar30 = puVar30 + 1;
      } while ((undefined *)(in_x0 + 0x574) != puVar30);
      local_4a8 = 0;
      uStack_4a0 = 0;
      local_498 = 0;
      uStack_490 = 0;
      local_488 = 0;
      uStack_480 = 0;
      local_478 = 0;
      local_470 = 0;
      *(undefined4 *)(in_x0 + 0xfd8) = 0x30;
      pbVar22 = local_2e6;
      do {
        pbVar27 = pbVar22 + 1;
        *(int *)((long)&local_4a8 + ((ulong)*pbVar22 & 0xf) * 4) =
             *(int *)((long)&local_4a8 + ((ulong)*pbVar22 & 0xf) * 4) + 1;
        pbVar22 = pbVar27;
      } while (pbVar27 != local_2b6);
      uVar20 = local_4a8._4_4_;
      lVar34 = in_x0 + 0xfd8;
      iVar15 = (int)uStack_4a0 + local_4a8._4_4_ * 2;
      iVar14 = uStack_4a0._4_4_ + iVar15 * 2;
      iVar18 = (int)local_498 + iVar14 * 2;
      iVar28 = local_498._4_4_ + iVar18 * 2;
      iVar21 = (int)uStack_490 + iVar28 * 2;
      *(undefined8 *)(in_x0 + 0x1c60) = 0;
      *(undefined8 *)(in_x0 + 0x1c68) = 0;
      iVar1 = uStack_490._4_4_ + iVar21 * 2;
      *(undefined8 *)(in_x0 + 0x1c70) = 0;
      *(undefined8 *)(in_x0 + 0x1c78) = 0;
      iVar2 = (int)local_488 + iVar1 * 2;
      *(undefined8 *)(in_x0 + 0x1c80) = 0;
      *(undefined8 *)(in_x0 + 0x1c88) = 0;
      iVar3 = local_488._4_4_ + iVar2 * 2;
      *(undefined8 *)(in_x0 + 0x1c90) = 0;
      *(undefined8 *)(in_x0 + 0x1c98) = 0;
      *(undefined8 *)(in_x0 + 0x1ca0) = 0;
      *(undefined8 *)(in_x0 + 0x1ca8) = 0;
      *(undefined8 *)(in_x0 + 0x1cb0) = 0;
      *(undefined8 *)(in_x0 + 0x1cb8) = 0;
      *(undefined4 *)(in_x0 + 0x101c) = 0;
      *(undefined4 *)(in_x0 + 0xfdc) = 0;
      *(uint *)(in_x0 + 0xfe0) = local_4a8._4_4_ << 0xf;
      *(int *)(in_x0 + 0xfec) = iVar18 * 0x1000;
      *(int *)(in_x0 + 0xff0) = iVar28 * 0x800;
      iVar18 = (int)uStack_480 + iVar3 * 2;
      *(int *)(in_x0 + 0xfe4) = iVar15 * 0x4000;
      *(int *)(in_x0 + 0xfe8) = iVar14 * 0x2000;
      *(int *)(in_x0 + 0xff4) = iVar21 * 0x400;
      *(int *)(in_x0 + 0xff8) = iVar1 * 0x200;
      iVar15 = uStack_480._4_4_ + iVar18 * 2;
      uStack_4a0._0_4_ = (int)uStack_4a0 + local_4a8._4_4_;
      uStack_4a0._4_4_ = (int)uStack_4a0 + uStack_4a0._4_4_;
      *(int *)(in_x0 + 0xffc) = iVar2 * 0x100;
      *(int *)(in_x0 + 0x1000) = iVar3 * 0x80;
      iVar14 = (int)local_478 + iVar15 * 2;
      local_498._0_4_ = uStack_4a0._4_4_ + (int)local_498;
      local_4a8 = (ulong)local_4a8._4_4_ << 0x20;
      *(int *)(in_x0 + 0x1004) = iVar18 * 0x40;
      *(int *)(in_x0 + 0x1008) = iVar15 * 0x20;
      local_498._4_4_ = (int)local_498 + local_498._4_4_;
      *(int *)(in_x0 + 0x100c) = iVar14 * 0x10;
      uStack_490._0_4_ = local_498._4_4_ + (int)uStack_490;
      uStack_490._4_4_ = (int)uStack_490 + uStack_490._4_4_;
      local_488._0_4_ = uStack_490._4_4_ + (int)local_488;
      *(int *)(in_x0 + 0x1028) = (int)uStack_4a0;
      *(int *)(in_x0 + 0x102c) = uStack_4a0._4_4_;
      iVar15 = local_478._4_4_ + iVar14 * 2;
      local_488._4_4_ = (int)local_488 + local_488._4_4_;
      uStack_480._0_4_ = local_488._4_4_ + (int)uStack_480;
      *(undefined4 *)(in_x0 + 0x1020) = 0;
      *(uint *)(in_x0 + 0x1024) = uVar20;
      uStack_480._4_4_ = (int)uStack_480 + uStack_480._4_4_;
      iVar14 = (int)local_470 + iVar15 * 2;
      *(int *)(in_x0 + 0x1030) = (int)local_498;
      *(int *)(in_x0 + 0x1034) = local_498._4_4_;
      *(int *)(in_x0 + 0x1038) = (int)uStack_490;
      *(int *)(in_x0 + 0x103c) = uStack_490._4_4_;
      local_478._0_4_ = uStack_480._4_4_ + (int)local_478;
      *(int *)(in_x0 + 0x1040) = (int)local_488;
      *(int *)(in_x0 + 0x1044) = local_488._4_4_;
      *(int *)(in_x0 + 0x1048) = (int)uStack_480;
      *(int *)(in_x0 + 0x104c) = uStack_480._4_4_;
      local_478._4_4_ = (int)local_478 + local_478._4_4_;
      *(int *)(in_x0 + 0x1010) = iVar15 * 8;
      *(int *)(in_x0 + 0x1050) = (int)local_478;
      *(int *)(in_x0 + 0x1014) = iVar14 * 4;
      *(int *)(in_x0 + 0x1018) = (local_470._4_4_ + iVar14 * 2) * 2;
      *(int *)(in_x0 + 0x1054) = local_478._4_4_;
      *(int *)(in_x0 + 0x1058) = local_478._4_4_ + (int)local_470;
      local_468 = *(undefined8 *)(in_x0 + 0x101c);
      uStack_460 = *(undefined8 *)(in_x0 + 0x1024);
      lVar33 = 0;
      local_458 = *(undefined8 *)(in_x0 + 0x102c);
      uStack_450 = *(undefined8 *)(in_x0 + 0x1034);
      local_448 = *(undefined8 *)(in_x0 + 0x103c);
      uStack_440 = *(undefined8 *)(in_x0 + 0x1044);
      local_438 = *(undefined8 *)(in_x0 + 0x104c);
      uStack_430 = *(undefined8 *)(in_x0 + 0x1054);
      do {
        if ((local_2e6[lVar33] & 0xf) != 0) {
          lVar24 = (long)(int)(local_2e6[lVar33] & 0xf);
          uVar20 = *(uint *)((long)&local_468 + lVar24 * 4);
          *(uint *)((long)&local_468 + lVar24 * 4) = uVar20 + 1;
          *(short *)(lVar34 + (ulong)uVar20 * 2 + 0xc88) = (short)lVar33;
        }
        lVar33 = lVar33 + 1;
      } while (lVar33 != 0x30);
      puVar30 = (undefined *)(in_x0 + 0x1060);
      uVar20 = 0;
      uVar19 = 1;
      uVar29 = 1;
      *(undefined4 *)(in_x0 + 0x105c) = 7;
LAB_001d2a70:
      do {
        iVar15 = (int)uVar19;
        if (iVar15 == 0x10) {
          uVar25 = 0xf;
        }
        else if (uVar20 < *(uint *)(lVar34 + uVar29 * 4 + 4)) {
LAB_001d3164:
          uVar25 = (ulong)((int)uVar19 - 1);
        }
        else {
          uVar26 = iVar15 + 1;
          if (iVar15 == 0xf) {
LAB_001d319c:
            uVar19 = (ulong)uVar26;
            uVar25 = 0xf;
            uVar29 = 0x10;
          }
          else {
            uVar29 = (ulong)uVar26;
            if (*(uint *)(lVar34 + (ulong)uVar26 * 4 + 4) <= uVar20) {
              uVar26 = iVar15 + 2;
              if (iVar15 == 0xe) goto LAB_001d319c;
              uVar29 = (ulong)uVar26;
              if (*(uint *)(lVar34 + (ulong)uVar26 * 4 + 4) <= uVar20) {
                uVar26 = iVar15 + 3;
                if (iVar15 == 0xd) goto LAB_001d319c;
                uVar29 = (ulong)uVar26;
                if (*(uint *)(lVar34 + (ulong)uVar26 * 4 + 4) <= uVar20) {
                  uVar26 = iVar15 + 4;
                  if (iVar15 == 0xc) {
LAB_001d3208:
                    uVar19 = (ulong)uVar26;
                    uVar29 = 0x10;
                    uVar25 = 0xf;
                  }
                  else {
                    if (*(uint *)(lVar34 + (ulong)uVar26 * 4 + 4) <= uVar20) {
                      uVar26 = iVar15 + 5;
                      if (iVar15 == 0xb) goto LAB_001d319c;
                      uVar29 = (ulong)uVar26;
                      if (*(uint *)(lVar34 + (ulong)uVar26 * 4 + 4) <= uVar20) {
                        uVar26 = iVar15 + 6;
                        if (iVar15 == 10) goto LAB_001d319c;
                        uVar29 = (ulong)uVar26;
                        if (*(uint *)(lVar34 + (ulong)uVar26 * 4 + 4) <= uVar20) {
                          uVar26 = iVar15 + 7;
                          if (iVar15 == 9) goto LAB_001d319c;
                          uVar29 = (ulong)uVar26;
                          if (*(uint *)(lVar34 + (ulong)uVar26 * 4 + 4) <= uVar20) {
                            uVar26 = iVar15 + 8;
                            if (iVar15 == 8) goto LAB_001d319c;
                            uVar29 = (ulong)uVar26;
                            if (*(uint *)(lVar34 + (ulong)uVar26 * 4 + 4) <= uVar20) {
                              uVar26 = iVar15 + 9;
                              if (iVar15 == 7) goto LAB_001d3208;
                              if (uVar20 < *(uint *)(lVar34 + (ulong)uVar26 * 4 + 4))
                              goto LAB_001d3248;
                              uVar26 = iVar15 + 10;
                              if (iVar15 == 6) goto LAB_001d319c;
                              uVar29 = (ulong)uVar26;
                              if (*(uint *)(lVar34 + (ulong)uVar26 * 4 + 4) <= uVar20) {
                                uVar26 = iVar15 + 0xb;
                                if (iVar15 == 5) goto LAB_001d319c;
                                uVar29 = (ulong)uVar26;
                                if (*(uint *)(lVar34 + (ulong)uVar26 * 4 + 4) <= uVar20) {
                                  uVar26 = iVar15 + 0xc;
                                  if (iVar15 == 4) goto LAB_001d319c;
                                  uVar29 = (ulong)uVar26;
                                  if (*(uint *)(lVar34 + (ulong)uVar26 * 4 + 4) <= uVar20) {
                                    uVar26 = iVar15 + 0xd;
                                    if (iVar15 == 3) goto LAB_001d319c;
                                    uVar29 = (ulong)uVar26;
                                    if (*(uint *)(lVar34 + (ulong)uVar26 * 4 + 4) <= uVar20) {
                                      if (iVar15 == 2) {
                                        uVar25 = 0xf;
                                        uVar19 = 0x10;
                                        uVar29 = 0x10;
                                      }
                                      else {
                                        uVar25 = 0xf;
                                        uVar19 = 0x10;
                                        uVar29 = 0x10;
                                        if (uVar20 < *(uint *)(in_x0 + 0x1018)) {
                                          uVar19 = 0xf;
                                          uVar29 = 0xf;
                                          goto LAB_001d3164;
                                        }
                                      }
                                      goto LAB_001d2c40;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                      goto LAB_001d31b8;
                    }
LAB_001d3248:
                    uVar19 = (ulong)uVar26;
                    uVar25 = (ulong)(uVar26 - 1);
                    uVar29 = uVar19;
                  }
                  goto LAB_001d2c40;
                }
              }
            }
LAB_001d31b8:
            uVar19 = (ulong)uVar26;
            uVar25 = (ulong)(uVar26 - 1);
          }
        }
LAB_001d2c40:
        *puVar30 = (char)uVar19;
        uVar26 = (uVar20 - *(int *)(lVar34 + uVar25 * 4 + 4) >> (ulong)(0x10U - (int)uVar19 & 0x1f))
                 + *(int *)(lVar34 + uVar29 * 4 + 0x44);
        if (0x2f < uVar26) {
          *(undefined2 *)((-0xc60 - in_x0) + (long)puVar30 * 2) = 0;
          puVar30 = puVar30 + 1;
          uVar20 = uVar20 + 0x200;
          if ((undefined *)(in_x0 + 0x10e0) == puVar30) break;
          goto LAB_001d2a70;
        }
        uVar20 = uVar20 + 0x200;
        *(undefined2 *)((-0xc60 - in_x0) + (long)puVar30 * 2) =
             *(undefined2 *)(lVar34 + (ulong)uVar26 * 2 + 0xc88);
        puVar30 = puVar30 + 1;
      } while ((undefined *)(in_x0 + 0x10e0) != puVar30);
      local_4a8 = 0;
      uStack_4a0 = 0;
      local_498 = 0;
      uStack_490 = 0;
      local_488 = 0;
      uStack_480 = 0;
      local_478 = 0;
      local_470 = 0;
      *(undefined4 *)(in_x0 + 0x2db0) = 0x1c;
      pbVar22 = local_2b6;
      do {
        pbVar27 = pbVar22 + 1;
        *(int *)((long)&local_4a8 + ((ulong)*pbVar22 & 0xf) * 4) =
             *(int *)((long)&local_4a8 + ((ulong)*pbVar22 & 0xf) * 4) + 1;
        pbVar22 = pbVar27;
      } while (abStack_29a != pbVar27);
      uVar20 = local_4a8._4_4_;
      iVar15 = (int)uStack_4a0 + local_4a8._4_4_ * 2;
      iVar14 = uStack_4a0._4_4_ + iVar15 * 2;
      iVar18 = (int)local_498 + iVar14 * 2;
      iVar28 = local_498._4_4_ + iVar18 * 2;
      iVar21 = (int)uStack_490 + iVar28 * 2;
      iVar1 = uStack_490._4_4_ + iVar21 * 2;
      *(undefined8 *)(in_x0 + 0x3a38) = 0;
      *(undefined8 *)(in_x0 + 0x3a40) = 0;
      iVar2 = (int)local_488 + iVar1 * 2;
      *(undefined8 *)(in_x0 + 0x3a48) = 0;
      *(undefined8 *)(in_x0 + 0x3a50) = 0;
      iVar3 = local_488._4_4_ + iVar2 * 2;
      *(undefined8 *)(in_x0 + 0x3a58) = 0;
      *(undefined8 *)(in_x0 + 0x3a60) = 0;
      iVar4 = (int)uStack_480 + iVar3 * 2;
      *(undefined8 *)(in_x0 + 0x3a68) = 0;
      *(undefined4 *)(in_x0 + 0x2db4) = 0;
      *(uint *)(in_x0 + 0x2db8) = local_4a8._4_4_ << 0xf;
      *(undefined4 *)(in_x0 + 0x2df4) = 0;
      *(int *)(in_x0 + 0x2dc0) = iVar14 * 0x2000;
      iVar14 = uStack_480._4_4_ + iVar4 * 2;
      *(int *)(in_x0 + 0x2dc8) = iVar28 * 0x800;
      *(int *)(in_x0 + 0x2dd0) = iVar1 * 0x200;
      iVar28 = (int)local_478 + iVar14 * 2;
      *(int *)(in_x0 + 0x2dcc) = iVar21 * 0x400;
      iVar21 = local_478._4_4_ + iVar28 * 2;
      local_4a8 = (ulong)local_4a8._4_4_ << 0x20;
      *(int *)(in_x0 + 0x2dbc) = iVar15 * 0x4000;
      *(int *)(in_x0 + 0x2dc4) = iVar18 * 0x1000;
      *(int *)(in_x0 + 0x2dd4) = iVar2 * 0x100;
      *(int *)(in_x0 + 0x2dd8) = iVar3 * 0x80;
      *(int *)(in_x0 + 0x2ddc) = iVar4 * 0x40;
      *(int *)(in_x0 + 0x2de0) = iVar14 * 0x20;
      *(int *)(in_x0 + 0x2de4) = iVar28 * 0x10;
      *(int *)(in_x0 + 0x2de8) = iVar21 * 8;
      iVar15 = uVar20 + *(int *)(in_x0 + 0x2df4);
      iVar14 = (int)uStack_4a0 + iVar15;
      iVar18 = uStack_4a0._4_4_ + iVar14;
      iVar28 = (int)local_498 + iVar18;
      iVar1 = local_498._4_4_ + iVar28;
      iVar2 = (int)uStack_490 + iVar1;
      iVar3 = uStack_490._4_4_ + iVar2;
      iVar4 = (int)local_488 + iVar3;
      iVar21 = (int)local_470 + iVar21 * 2;
      iVar5 = local_488._4_4_ + iVar4;
      iVar6 = (int)uStack_480 + iVar5;
      iVar7 = uStack_480._4_4_ + iVar6;
      iVar8 = (int)local_478 + iVar7;
      *(int *)(in_x0 + 0x2dec) = iVar21 * 4;
      *(int *)(in_x0 + 0x2df0) = (local_470._4_4_ + iVar21 * 2) * 2;
      iVar21 = local_478._4_4_ + iVar8;
      *(int *)(in_x0 + 0x2df8) = *(int *)(in_x0 + 0x2df4);
      *(int *)(in_x0 + 0x2dfc) = iVar15;
      *(int *)(in_x0 + 0x2e00) = iVar14;
      *(int *)(in_x0 + 0x2e04) = iVar18;
      *(int *)(in_x0 + 0x2e08) = iVar28;
      *(int *)(in_x0 + 0x2e0c) = iVar1;
      *(int *)(in_x0 + 0x2e10) = iVar2;
      *(int *)(in_x0 + 0x2e14) = iVar3;
      *(int *)(in_x0 + 0x2e18) = iVar4;
      *(int *)(in_x0 + 0x2e1c) = iVar5;
      *(int *)(in_x0 + 0x2e20) = iVar6;
      *(int *)(in_x0 + 0x2e24) = iVar7;
      *(int *)(in_x0 + 0x2e28) = iVar8;
      *(int *)(in_x0 + 0x2e2c) = iVar21;
      *(int *)(in_x0 + 0x2e30) = (int)local_470 + iVar21;
      local_468 = *(undefined8 *)(in_x0 + 0x2df4);
      uStack_460 = *(undefined8 *)(in_x0 + 0x2dfc);
      lVar34 = 0;
      local_458 = *(undefined8 *)(in_x0 + 0x2e04);
      uStack_450 = *(undefined8 *)(in_x0 + 0x2e0c);
      local_448 = *(undefined8 *)(in_x0 + 0x2e14);
      uStack_440 = *(undefined8 *)(in_x0 + 0x2e1c);
      local_438 = *(undefined8 *)(in_x0 + 0x2e24);
      uStack_430 = *(undefined8 *)(in_x0 + 0x2e2c);
      do {
        if ((local_2b6[lVar34] & 0xf) != 0) {
          lVar33 = (long)(int)(local_2b6[lVar34] & 0xf);
          uVar20 = *(uint *)((long)&local_468 + lVar33 * 4);
          *(uint *)((long)&local_468 + lVar33 * 4) = uVar20 + 1;
          *(short *)(in_x0 + (ulong)uVar20 * 2 + 0x3a38) = (short)lVar34;
        }
        lVar34 = lVar34 + 1;
      } while (lVar34 != 0x1c);
      lVar34 = in_x0 + 0x2db0;
      puVar30 = (undefined *)(in_x0 + 0x2e38);
      uVar20 = 0;
      uVar19 = 1;
      uVar29 = 1;
      *(undefined4 *)(in_x0 + 0x2e34) = 7;
LAB_001d2ee8:
      do {
        iVar15 = (int)uVar19;
        if (iVar15 == 0x10) {
          uVar25 = 0xf;
        }
        else if (uVar20 < *(uint *)(lVar34 + uVar29 * 4 + 4)) {
LAB_001d3154:
          uVar25 = (ulong)((int)uVar19 - 1);
        }
        else {
          uVar26 = iVar15 + 1;
          if (iVar15 == 0xf) {
LAB_001d318c:
            uVar19 = (ulong)uVar26;
            uVar25 = 0xf;
            uVar29 = 0x10;
          }
          else {
            uVar29 = (ulong)uVar26;
            if (*(uint *)(lVar34 + (ulong)uVar26 * 4 + 4) <= uVar20) {
              uVar26 = iVar15 + 2;
              if (iVar15 == 0xe) goto LAB_001d318c;
              uVar29 = (ulong)uVar26;
              if (*(uint *)(lVar34 + (ulong)uVar26 * 4 + 4) <= uVar20) {
                uVar26 = iVar15 + 3;
                if (iVar15 == 0xd) goto LAB_001d318c;
                uVar29 = (ulong)uVar26;
                if (*(uint *)(lVar34 + (ulong)uVar26 * 4 + 4) <= uVar20) {
                  uVar26 = iVar15 + 4;
                  if (iVar15 == 0xc) {
LAB_001d3218:
                    uVar19 = (ulong)uVar26;
                    uVar29 = 0x10;
                    uVar25 = 0xf;
                  }
                  else {
                    if (*(uint *)(lVar34 + (ulong)uVar26 * 4 + 4) <= uVar20) {
                      uVar26 = iVar15 + 5;
                      if (iVar15 == 0xb) goto LAB_001d318c;
                      uVar29 = (ulong)uVar26;
                      if (*(uint *)(lVar34 + (ulong)uVar26 * 4 + 4) <= uVar20) {
                        uVar26 = iVar15 + 6;
                        if (iVar15 == 10) goto LAB_001d318c;
                        uVar29 = (ulong)uVar26;
                        if (*(uint *)(lVar34 + (ulong)uVar26 * 4 + 4) <= uVar20) {
                          uVar26 = iVar15 + 7;
                          if (iVar15 == 9) goto LAB_001d318c;
                          uVar29 = (ulong)uVar26;
                          if (*(uint *)(lVar34 + (ulong)uVar26 * 4 + 4) <= uVar20) {
                            uVar26 = iVar15 + 8;
                            if (iVar15 == 8) goto LAB_001d318c;
                            uVar29 = (ulong)uVar26;
                            if (*(uint *)(lVar34 + (ulong)uVar26 * 4 + 4) <= uVar20) {
                              uVar26 = iVar15 + 9;
                              if (iVar15 == 7) goto LAB_001d3218;
                              if (uVar20 < *(uint *)(lVar34 + (ulong)uVar26 * 4 + 4))
                              goto LAB_001d3238;
                              uVar26 = iVar15 + 10;
                              if (iVar15 == 6) goto LAB_001d318c;
                              uVar29 = (ulong)uVar26;
                              if (*(uint *)(lVar34 + (ulong)uVar26 * 4 + 4) <= uVar20) {
                                uVar26 = iVar15 + 0xb;
                                if (iVar15 == 5) goto LAB_001d318c;
                                uVar29 = (ulong)uVar26;
                                if (*(uint *)(lVar34 + (ulong)uVar26 * 4 + 4) <= uVar20) {
                                  uVar26 = iVar15 + 0xc;
                                  if (iVar15 == 4) goto LAB_001d318c;
                                  uVar29 = (ulong)uVar26;
                                  if (*(uint *)(lVar34 + (ulong)uVar26 * 4 + 4) <= uVar20) {
                                    uVar26 = iVar15 + 0xd;
                                    if (iVar15 == 3) goto LAB_001d318c;
                                    uVar29 = (ulong)uVar26;
                                    if (*(uint *)(lVar34 + (ulong)uVar26 * 4 + 4) <= uVar20) {
                                      if (iVar15 == 2) {
                                        uVar25 = 0xf;
                                        uVar19 = 0x10;
                                        uVar29 = 0x10;
                                      }
                                      else {
                                        uVar25 = 0xf;
                                        uVar19 = 0x10;
                                        uVar29 = 0x10;
                                        if (uVar20 < *(uint *)(in_x0 + 0x2df0)) {
                                          uVar19 = 0xf;
                                          uVar29 = 0xf;
                                          goto LAB_001d3154;
                                        }
                                      }
                                      goto LAB_001d30b8;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                      goto LAB_001d31ac;
                    }
LAB_001d3238:
                    uVar19 = (ulong)uVar26;
                    uVar25 = (ulong)(uVar26 - 1);
                    uVar29 = uVar19;
                  }
                  goto LAB_001d30b8;
                }
              }
            }
LAB_001d31ac:
            uVar19 = (ulong)uVar26;
            uVar25 = (ulong)(uVar26 - 1);
          }
        }
LAB_001d30b8:
        *puVar30 = (char)uVar19;
        uVar26 = (uVar20 - *(int *)(lVar34 + uVar25 * 4 + 4) >> (ulong)(0x10U - (int)uVar19 & 0x1f))
                 + *(int *)(lVar34 + uVar29 * 4 + 0x44);
        if (0x1b < uVar26) {
          *(undefined2 *)((-0x2a38 - in_x0) + (long)puVar30 * 2) = 0;
          puVar30 = puVar30 + 1;
          uVar20 = uVar20 + 0x200;
          if ((undefined *)(in_x0 + 0x2eb8) == puVar30) break;
          goto LAB_001d2ee8;
        }
        uVar20 = uVar20 + 0x200;
        *(undefined2 *)((-0x2a38 - in_x0) + (long)puVar30 * 2) =
             *(undefined2 *)(lVar34 + (ulong)uVar26 * 2 + 0xc88);
        puVar30 = puVar30 + 1;
      } while ((undefined *)(in_x0 + 0x2eb8) != puVar30);
    }
    else {
      pbVar22 = local_411 + 1;
      if (0 < *(int *)(in_x0 + 0x98ac)) {
        puVar30 = (undefined *)(in_x0 + 0x59fc);
        lVar34 = -0x557c - in_x0;
        puVar35 = (undefined8 *)(in_x0 + 0x5938);
        iVar15 = 0;
LAB_001d1c30:
        lVar33 = 0;
        *(undefined4 *)((long)puVar35 + -0x44) = 0x101;
        local_4a8 = 0;
        uStack_4a0 = 0;
        local_498 = 0;
        uStack_490 = 0;
        local_488 = 0;
        uStack_480 = 0;
        local_478 = 0;
        local_470 = 0;
        do {
          pbVar27 = pbVar22 + lVar33;
          lVar33 = lVar33 + 1;
          *(int *)((long)&local_4a8 + ((ulong)*pbVar27 & 0xf) * 4) =
               *(int *)((long)&local_4a8 + ((ulong)*pbVar27 & 0xf) * 4) + 1;
        } while (lVar33 != 0x101);
        local_4a8 = local_4a8 & 0xffffffff00000000;
        memset(puVar30 + 0xb80,0,0x202);
        *(undefined4 *)(puVar35 + -8) = 0;
        *(undefined4 *)puVar35 = 0;
        *(undefined4 *)((long)puVar35 + 4) = 0;
        iVar14 = (int)uStack_4a0 + local_4a8._4_4_ * 2;
        iVar18 = uStack_4a0._4_4_ + iVar14 * 2;
        iVar28 = (int)local_498 + iVar18 * 2;
        iVar21 = local_498._4_4_ + iVar28 * 2;
        iVar1 = (int)uStack_490 + iVar21 * 2;
        iVar2 = uStack_4a0._4_4_ + (int)uStack_4a0 + local_4a8._4_4_;
        iVar3 = uStack_490._4_4_ + iVar1 * 2;
        iVar4 = (int)local_498 + iVar2;
        iVar5 = (int)local_488 + iVar3 * 2;
        iVar6 = local_498._4_4_ + iVar4;
        *(int *)(puVar35 + -7) = iVar14 * 0x4000;
        *(int *)((long)puVar35 + -0x34) = iVar18 * 0x2000;
        iVar14 = local_488._4_4_ + iVar5 * 2;
        iVar18 = (int)uStack_490 + iVar6;
        iVar7 = uStack_490._4_4_ + iVar18;
        *(int *)(puVar35 + -5) = iVar1 * 0x400;
        *(int *)((long)puVar35 + -0x24) = iVar3 * 0x200;
        iVar1 = (int)uStack_480 + iVar14 * 2;
        iVar3 = (int)local_488 + iVar7;
        *(int *)(puVar35 + -4) = iVar5 * 0x100;
        *(int *)((long)puVar35 + -0x1c) = iVar14 * 0x80;
        iVar14 = local_488._4_4_ + iVar3;
        *(uint *)((long)puVar35 + -0x3c) = local_4a8._4_4_ << 0xf;
        *(int *)(puVar35 + -6) = iVar28 * 0x1000;
        *(int *)((long)puVar35 + -0x2c) = iVar21 * 0x800;
        *(int *)(puVar35 + -3) = iVar1 * 0x40;
        *(uint *)(puVar35 + 1) = local_4a8._4_4_;
        *(uint *)((long)puVar35 + 0xc) = (int)uStack_4a0 + local_4a8._4_4_;
        *(int *)(puVar35 + 2) = iVar2;
        *(int *)((long)puVar35 + 0x14) = iVar4;
        *(int *)(puVar35 + 3) = iVar6;
        *(int *)((long)puVar35 + 0x1c) = iVar18;
        *(int *)(puVar35 + 4) = iVar7;
        *(int *)((long)puVar35 + 0x24) = iVar3;
        *(int *)(puVar35 + 5) = iVar14;
        iVar14 = (int)uStack_480 + iVar14;
        lVar24 = (long)iVar15;
        iVar18 = uStack_480._4_4_ + iVar1 * 2;
        iVar28 = uStack_480._4_4_ + iVar14;
        iVar21 = (int)local_478 + iVar18 * 2;
        iVar1 = (int)local_478 + iVar28;
        iVar2 = local_478._4_4_ + iVar21 * 2;
        iVar3 = local_478._4_4_ + iVar1;
        iVar4 = (int)local_470 + iVar2 * 2;
        *(int *)((long)puVar35 + 0x2c) = iVar14;
        *(int *)(puVar35 + 6) = iVar28;
        *(int *)((long)puVar35 + 0x34) = iVar1;
        *(int *)(puVar35 + 7) = iVar3;
        *(int *)((long)puVar35 + 0x3c) = (int)local_470 + iVar3;
        *(int *)((long)puVar35 + -0x14) = iVar18 * 0x20;
        *(int *)(puVar35 + -2) = iVar21 * 0x10;
        lVar33 = 0;
        *(int *)((long)puVar35 + -0xc) = iVar2 * 8;
        *(int *)(puVar35 + -1) = iVar4 * 4;
        *(int *)((long)puVar35 + -4) = (local_470._4_4_ + iVar4 * 2) * 2;
        local_468 = *puVar35;
        uStack_460 = puVar35[1];
        local_458 = puVar35[2];
        uStack_450 = puVar35[3];
        local_448 = puVar35[4];
        uStack_440 = puVar35[5];
        local_438 = puVar35[6];
        uStack_430 = puVar35[7];
        do {
          if ((pbVar22[lVar33] & 0xf) != 0) {
            lVar17 = (long)(int)(pbVar22[lVar33] & 0xf);
            uVar20 = *(uint *)((long)&local_468 + lVar17 * 4);
            *(uint *)((long)&local_468 + lVar17 * 4) = uVar20 + 1;
            *(short *)(in_x0 + (lVar24 * 0x776 + (ulong)uVar20 + 0x32b8) * 2 + 0xc) = (short)lVar33;
          }
          lVar33 = lVar33 + 1;
        } while (lVar33 != 0x101);
        lVar33 = lVar24 * 0x3bb;
        puVar31 = puVar30 + -0x80;
        uVar20 = 0;
        uVar19 = 1;
        uVar29 = 1;
        *(undefined4 *)(puVar35 + 8) = 7;
LAB_001d1e3c:
        if ((int)uVar19 == 0x10) goto LAB_001d233c;
LAB_001d1e44:
        if (uVar20 < *(uint *)(in_x0 + (lVar33 + uVar29 + 0x163c) * 4 + 8)) {
LAB_001d2350:
          uVar25 = (ulong)((int)uVar19 - 1);
          goto LAB_001d2080;
        }
        iVar14 = (int)uVar19;
        uVar26 = iVar14 + 1;
        if (iVar14 == 0xf) {
LAB_001d2358:
          uVar19 = (ulong)uVar26;
          uVar25 = 0xf;
          uVar29 = 0x10;
        }
        else {
          uVar29 = (ulong)uVar26;
          if (*(uint *)(in_x0 + (lVar33 + uVar29 + 0x163c) * 4 + 8) <= uVar20) {
            uVar26 = iVar14 + 2;
            if (iVar14 == 0xe) goto LAB_001d2358;
            uVar29 = (ulong)uVar26;
            if (*(uint *)(in_x0 + (lVar33 + uVar29 + 0x163c) * 4 + 8) <= uVar20) {
              uVar26 = iVar14 + 3;
              if (iVar14 == 0xd) goto LAB_001d2358;
              uVar29 = (ulong)uVar26;
              if (*(uint *)(in_x0 + (lVar33 + uVar29 + 0x163c) * 4 + 8) <= uVar20) {
                uVar26 = iVar14 + 4;
                if (iVar14 == 0xc) {
LAB_001d2374:
                  uVar19 = (ulong)uVar26;
                  uVar29 = 0x10;
                  uVar25 = 0xf;
                  goto LAB_001d2080;
                }
                if (uVar20 < *(uint *)(in_x0 + (lVar33 + (ulong)uVar26 + 0x163c) * 4 + 8)) {
LAB_001d2384:
                  uVar19 = (ulong)uVar26;
                  uVar25 = (ulong)(uVar26 - 1);
                  uVar29 = uVar19;
                  goto LAB_001d2080;
                }
                uVar26 = iVar14 + 5;
                if (iVar14 == 0xb) goto LAB_001d2358;
                uVar29 = (ulong)uVar26;
                if (*(uint *)(in_x0 + (lVar33 + uVar29 + 0x163c) * 4 + 8) <= uVar20) {
                  uVar26 = iVar14 + 6;
                  if (iVar14 == 10) goto LAB_001d2358;
                  uVar29 = (ulong)uVar26;
                  if (*(uint *)(in_x0 + (lVar33 + uVar29 + 0x163c) * 4 + 8) <= uVar20) {
                    uVar26 = iVar14 + 7;
                    if (iVar14 == 9) goto LAB_001d2358;
                    uVar29 = (ulong)uVar26;
                    if (*(uint *)(in_x0 + (lVar33 + uVar29 + 0x163c) * 4 + 8) <= uVar20) {
                      uVar26 = iVar14 + 8;
                      if (iVar14 == 8) goto LAB_001d2358;
                      uVar29 = (ulong)uVar26;
                      if (*(uint *)(in_x0 + (lVar33 + uVar29 + 0x163c) * 4 + 8) <= uVar20) {
                        uVar26 = iVar14 + 9;
                        if (iVar14 == 7) goto LAB_001d2374;
                        if (uVar20 < *(uint *)(in_x0 + (lVar33 + (ulong)uVar26 + 0x163c) * 4 + 8))
                        goto LAB_001d2384;
                        uVar26 = iVar14 + 10;
                        if (iVar14 == 6) goto LAB_001d2358;
                        uVar29 = (ulong)uVar26;
                        if (*(uint *)(in_x0 + (lVar33 + uVar29 + 0x163c) * 4 + 8) <= uVar20) {
                          uVar26 = iVar14 + 0xb;
                          if (iVar14 == 5) goto LAB_001d2358;
                          uVar29 = (ulong)uVar26;
                          if (*(uint *)(in_x0 + (lVar33 + uVar29 + 0x163c) * 4 + 8) <= uVar20) {
                            uVar26 = iVar14 + 0xc;
                            if (iVar14 == 4) goto LAB_001d2358;
                            uVar29 = (ulong)uVar26;
                            if (*(uint *)(in_x0 + (lVar33 + uVar29 + 0x163c) * 4 + 8) <= uVar20) {
                              uVar26 = iVar14 + 0xd;
                              if (iVar14 == 3) goto LAB_001d2358;
                              uVar29 = (ulong)uVar26;
                              if (*(uint *)(in_x0 + (lVar33 + uVar29 + 0x163c) * 4 + 8) <= uVar20) {
                                if (iVar14 == 2) {
                                  uVar25 = 0xf;
                                  uVar19 = 0x10;
                                  uVar29 = 0x10;
                                  goto LAB_001d2080;
                                }
                                uVar25 = 0xf;
                                uVar19 = 0x10;
                                uVar29 = 0x10;
                                if (*(uint *)(in_x0 + lVar24 * 0xeec + 0x5934) <= uVar20)
                                goto LAB_001d2080;
                                uVar19 = 0xf;
                                uVar29 = 0xf;
                                goto LAB_001d2350;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          uVar19 = (ulong)uVar26;
          uVar25 = (ulong)(uVar26 - 1);
        }
LAB_001d2080:
        do {
          *puVar31 = (char)uVar19;
          uVar26 = (uVar20 - *(int *)(in_x0 + (lVar33 + uVar25 + 0x163c) * 4 + 8) >>
                   (ulong)(0x10U - (int)uVar19 & 0x1f)) +
                   *(int *)(in_x0 + (lVar33 + uVar29 + 0x164c) * 4 + 8);
          if (uVar26 < 0x101) {
            uVar20 = uVar20 + 0x200;
            *(undefined2 *)(lVar34 + (long)puVar31 * 2) =
                 *(undefined2 *)(in_x0 + (lVar24 * 0x776 + (ulong)uVar26 + 0x32b8) * 2 + 0xc);
            puVar31 = puVar31 + 1;
            if (puVar30 != puVar31) goto LAB_001d1e3c;
LAB_001d20e0:
            iVar15 = iVar15 + 1;
            lVar34 = lVar34 + -0xeec;
            puVar30 = puVar30 + 0xeec;
            pbVar22 = pbVar22 + 0x101;
            puVar35 = (undefined8 *)((long)puVar35 + 0xeec);
            if (*(int *)(in_x0 + 0x98ac) <= iVar15) break;
            goto LAB_001d1c30;
          }
          *(undefined2 *)(lVar34 + (long)puVar31 * 2) = 0;
          puVar31 = puVar31 + 1;
          uVar20 = uVar20 + 0x200;
          if (puVar31 == puVar30) goto LAB_001d20e0;
          if ((int)uVar19 != 0x10) goto LAB_001d1e44;
LAB_001d233c:
          uVar25 = 0xf;
        } while( true );
      }
    }
    memcpy((void *)(in_x0 + 0x94a4),local_411 + 1,0x404);
    uVar16 = 1;
  }
LAB_001d2124:
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar16,local_8 - ___stack_chk_guard,0);
  }
  return;
}


