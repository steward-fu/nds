/*
 * Ghidra decompilation
 *
 * Function : MakeDecodeTables
 * Address  : 001e52a0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Unpack::MakeDecodeTables(unsigned char*, DecodeTable*, unsigned int) */

void __thiscall
Unpack::MakeDecodeTables(Unpack *this,uchar *param_1,DecodeTable *param_2,uint param_3)

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
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  ulong uVar16;
  uint uVar17;
  size_t __n;
  long lVar18;
  byte *pbVar19;
  ulong uVar21;
  uint uVar22;
  ulong uVar23;
  uint uVar24;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  byte *pbVar20;
  
  uVar23 = (ulong)param_3;
  local_8 = ___stack_chk_guard;
  *(uint *)param_2 = param_3;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  local_50 = 0;
  if (uVar23 == 0) {
    __n = 0;
  }
  else {
    pbVar20 = param_1;
    do {
      pbVar19 = pbVar20 + 1;
      *(int *)((long)&local_88 + ((ulong)*pbVar20 & 0xf) * 4) =
           *(int *)((long)&local_88 + ((ulong)*pbVar20 & 0xf) * 4) + 1;
      pbVar20 = pbVar19;
    } while (pbVar19 != param_1 + uVar23);
    __n = uVar23 * 2;
  }
  local_88 = local_88 & 0xffffffff00000000;
  memset(param_2 + 0xc88,0,__n);
  *(undefined4 *)(param_2 + 4) = 0;
  *(undefined4 *)(param_2 + 0x44) = 0;
  iVar14 = (int)uStack_80 + local_88._4_4_ * 2;
  iVar1 = uStack_80._4_4_ + iVar14 * 2;
  iVar2 = (int)local_78 + iVar1 * 2;
  iVar3 = local_78._4_4_ + iVar2 * 2;
  iVar4 = (int)uStack_70 + iVar3 * 2;
  iVar5 = uStack_70._4_4_ + iVar4 * 2;
  iVar6 = local_88._4_4_ + (int)uStack_80 + uStack_80._4_4_;
  iVar7 = (int)local_68 + iVar5 * 2;
  iVar8 = local_68._4_4_ + iVar7 * 2;
  iVar9 = iVar6 + (int)local_78;
  iVar10 = (int)uStack_60 + iVar8 * 2;
  iVar11 = uStack_60._4_4_ + iVar10 * 2;
  iVar12 = iVar9 + local_78._4_4_;
  iVar13 = (int)local_58 + iVar11 * 2;
  *(int *)(param_2 + 0x14) = iVar2 * 0x1000;
  *(int *)(param_2 + 0x18) = iVar3 * 0x800;
  *(int *)(param_2 + 0x24) = iVar7 * 0x100;
  *(int *)(param_2 + 0x28) = iVar8 * 0x80;
  iVar2 = iVar12 + (int)uStack_70;
  iVar3 = iVar2 + uStack_70._4_4_;
  *(int *)(param_2 + 0x1c) = iVar4 * 0x400;
  *(int *)(param_2 + 0x20) = iVar5 * 0x200;
  iVar4 = local_58._4_4_ + iVar13 * 2;
  iVar5 = iVar3 + (int)local_68;
  *(int *)(param_2 + 0xc) = iVar14 * 0x4000;
  *(int *)(param_2 + 0x10) = iVar1 * 0x2000;
  iVar14 = iVar5 + local_68._4_4_;
  *(int *)(param_2 + 0x30) = iVar11 * 0x20;
  *(int *)(param_2 + 0x34) = iVar13 * 0x10;
  iVar1 = (int)local_50 + iVar4 * 2;
  iVar7 = iVar14 + (int)uStack_60;
  iVar8 = iVar7 + uStack_60._4_4_;
  iVar11 = iVar8 + (int)local_58;
  *(int *)(param_2 + 0x38) = iVar4 * 8;
  *(int *)(param_2 + 0x3c) = iVar1 * 4;
  iVar4 = iVar11 + local_58._4_4_;
  *(int *)(param_2 + 8) = local_88._4_4_ << 0xf;
  *(int *)(param_2 + 0x2c) = iVar10 * 0x40;
  *(int *)(param_2 + 0x40) = (local_50._4_4_ + iVar1 * 2) * 2;
  *(undefined4 *)(param_2 + 0x48) = 0;
  *(int *)(param_2 + 0x4c) = local_88._4_4_;
  *(int *)(param_2 + 0x50) = local_88._4_4_ + (int)uStack_80;
  *(int *)(param_2 + 0x54) = iVar6;
  *(int *)(param_2 + 0x58) = iVar9;
  *(int *)(param_2 + 0x5c) = iVar12;
  *(int *)(param_2 + 0x60) = iVar2;
  *(int *)(param_2 + 100) = iVar3;
  *(int *)(param_2 + 0x68) = iVar5;
  *(int *)(param_2 + 0x6c) = iVar14;
  *(int *)(param_2 + 0x70) = iVar7;
  *(int *)(param_2 + 0x74) = iVar8;
  *(int *)(param_2 + 0x78) = iVar11;
  *(int *)(param_2 + 0x7c) = iVar4;
  *(int *)(param_2 + 0x80) = iVar4 + (int)local_50;
  local_48 = *(undefined8 *)(param_2 + 0x44);
  uStack_40 = *(undefined8 *)(param_2 + 0x4c);
  local_38 = *(undefined8 *)(param_2 + 0x54);
  uStack_30 = *(undefined8 *)(param_2 + 0x5c);
  local_28 = *(undefined8 *)(param_2 + 100);
  uStack_20 = *(undefined8 *)(param_2 + 0x6c);
  local_18 = *(undefined8 *)(param_2 + 0x74);
  uStack_10 = *(undefined8 *)(param_2 + 0x7c);
  if (param_3 == 0) {
LAB_001e5734:
    uVar24 = 0x80;
    lVar18 = 9;
    *(undefined4 *)(param_2 + 0x84) = 7;
  }
  else {
    lVar18 = 0;
    do {
      if ((param_1[lVar18] & 0xf) != 0) {
        lVar15 = (long)(int)(param_1[lVar18] & 0xf);
        uVar24 = *(uint *)((long)&local_48 + lVar15 * 4);
        *(uint *)((long)&local_48 + lVar15 * 4) = uVar24 + 1;
        *(short *)(param_2 + (ulong)uVar24 * 2 + 0xc88) = (short)lVar18;
      }
      lVar18 = lVar18 + 1;
    } while ((uint)lVar18 < param_3);
    if (param_3 < 300) {
      if (param_3 < 0x12a) goto LAB_001e5734;
    }
    else if (param_3 != 0x132) goto LAB_001e5734;
    uVar24 = 0x400;
    lVar18 = 6;
    *(undefined4 *)(param_2 + 0x84) = 10;
  }
  lVar15 = 0;
  uVar16 = 1;
  uVar23 = 1;
LAB_001e54e0:
  uVar17 = (int)lVar15 << lVar18;
  if ((int)uVar16 == 0x10) goto LAB_001e5764;
LAB_001e54ec:
  if (uVar17 < *(uint *)(param_2 + uVar23 * 4 + 4)) {
LAB_001e5774:
    uVar21 = (ulong)((int)uVar16 - 1);
    goto LAB_001e56b8;
  }
  iVar14 = (int)uVar16;
  uVar22 = iVar14 + 1;
  if (iVar14 == 0xf) {
LAB_001e577c:
    uVar16 = (ulong)uVar22;
    uVar21 = 0xf;
    uVar23 = 0x10;
  }
  else {
    uVar23 = (ulong)uVar22;
    if (*(uint *)(param_2 + (ulong)uVar22 * 4 + 4) <= uVar17) {
      uVar22 = iVar14 + 2;
      if (iVar14 == 0xe) goto LAB_001e577c;
      uVar23 = (ulong)uVar22;
      if (*(uint *)(param_2 + (ulong)uVar22 * 4 + 4) <= uVar17) {
        uVar22 = iVar14 + 3;
        if (iVar14 == 0xd) goto LAB_001e577c;
        uVar23 = (ulong)uVar22;
        if (*(uint *)(param_2 + (ulong)uVar22 * 4 + 4) <= uVar17) {
          uVar22 = iVar14 + 4;
          if (iVar14 == 0xc) {
LAB_001e5798:
            uVar16 = (ulong)uVar22;
            uVar21 = 0xf;
            uVar23 = 0x10;
            goto LAB_001e56b8;
          }
          if (uVar17 < *(uint *)(param_2 + (ulong)uVar22 * 4 + 4)) {
LAB_001e57a8:
            uVar16 = (ulong)uVar22;
            uVar21 = (ulong)(uVar22 - 1);
            uVar23 = uVar16;
            goto LAB_001e56b8;
          }
          uVar22 = iVar14 + 5;
          if (iVar14 == 0xb) goto LAB_001e577c;
          uVar23 = (ulong)uVar22;
          if (*(uint *)(param_2 + (ulong)uVar22 * 4 + 4) <= uVar17) {
            uVar22 = iVar14 + 6;
            if (iVar14 == 10) goto LAB_001e577c;
            uVar23 = (ulong)uVar22;
            if (*(uint *)(param_2 + (ulong)uVar22 * 4 + 4) <= uVar17) {
              uVar22 = iVar14 + 7;
              if (iVar14 == 9) goto LAB_001e577c;
              uVar23 = (ulong)uVar22;
              if (*(uint *)(param_2 + (ulong)uVar22 * 4 + 4) <= uVar17) {
                uVar22 = iVar14 + 8;
                if (iVar14 == 8) goto LAB_001e577c;
                uVar23 = (ulong)uVar22;
                if (*(uint *)(param_2 + (ulong)uVar22 * 4 + 4) <= uVar17) {
                  uVar22 = iVar14 + 9;
                  if (iVar14 == 7) goto LAB_001e5798;
                  if (uVar17 < *(uint *)(param_2 + (ulong)uVar22 * 4 + 4)) goto LAB_001e57a8;
                  uVar22 = iVar14 + 10;
                  if (iVar14 == 6) goto LAB_001e577c;
                  uVar23 = (ulong)uVar22;
                  if (*(uint *)(param_2 + (ulong)uVar22 * 4 + 4) <= uVar17) {
                    uVar22 = iVar14 + 0xb;
                    if (iVar14 == 5) goto LAB_001e577c;
                    uVar23 = (ulong)uVar22;
                    if (*(uint *)(param_2 + (ulong)uVar22 * 4 + 4) <= uVar17) {
                      uVar22 = iVar14 + 0xc;
                      if (iVar14 == 4) goto LAB_001e577c;
                      uVar23 = (ulong)uVar22;
                      if (*(uint *)(param_2 + (ulong)uVar22 * 4 + 4) <= uVar17) {
                        uVar22 = iVar14 + 0xd;
                        if (iVar14 == 3) goto LAB_001e577c;
                        uVar23 = (ulong)uVar22;
                        if (*(uint *)(param_2 + (ulong)uVar22 * 4 + 4) <= uVar17) {
                          if (iVar14 == 2) {
                            uVar21 = 0xf;
                            uVar16 = 0x10;
                            uVar23 = 0x10;
                            goto LAB_001e56b8;
                          }
                          uVar21 = 0xf;
                          uVar16 = 0x10;
                          uVar23 = 0x10;
                          if (*(uint *)(param_2 + 0x40) <= uVar17) goto LAB_001e56b8;
                          uVar16 = 0xf;
                          uVar23 = 0xf;
                          goto LAB_001e5774;
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
    uVar16 = (ulong)uVar22;
    uVar21 = (ulong)(uVar22 - 1);
  }
LAB_001e56b8:
  do {
    param_2[lVar15 + 0x88] = SUB81(uVar16,0);
    uVar17 = (uVar17 - *(int *)(param_2 + uVar21 * 4 + 4) >> (ulong)(0x10U - (int)uVar16 & 0x1f)) +
             *(int *)(param_2 + uVar23 * 4 + 0x44);
    if (uVar17 < param_3) {
      *(undefined2 *)(param_2 + lVar15 * 2 + 0x488) =
           *(undefined2 *)(param_2 + (ulong)uVar17 * 2 + 0xc88);
      lVar15 = lVar15 + 1;
      if (uVar24 <= (uint)lVar15) {
LAB_001e56fc:
        if (local_8 - ___stack_chk_guard == 0) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(local_8 - ___stack_chk_guard,0);
      }
      goto LAB_001e54e0;
    }
    *(undefined2 *)(param_2 + lVar15 * 2 + 0x488) = 0;
    lVar15 = lVar15 + 1;
    if (uVar24 <= (uint)lVar15) goto LAB_001e56fc;
    uVar17 = (uint)lVar15 << lVar18;
    if ((int)uVar16 != 0x10) goto LAB_001e54ec;
LAB_001e5764:
    uVar21 = 0xf;
  } while( true );
}


