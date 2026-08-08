/*
 * Ghidra decompilation
 *
 * Function : GenerateTables
 * Address  : 001c6be0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Rijndael::GenerateTables() */

void Rijndael::GenerateTables(void)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  long lVar6;
  bool bVar7;
  undefined uVar8;
  undefined uVar9;
  undefined uVar10;
  undefined uVar11;
  uint uVar12;
  ulong uVar13;
  byte bVar14;
  byte *pbVar15;
  byte *pbVar16;
  uint uVar17;
  long lVar18;
  byte *pbVar19;
  byte *pbVar20;
  byte *pbVar21;
  undefined uVar22;
  undefined uVar23;
  byte local_308 [256];
  byte local_208 [255];
  undefined local_109;
  byte local_108 [256];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar12 = 3;
  local_308[1] = 0;
  local_208[0] = 1;
  local_109 = 1;
  pbVar15 = local_208;
  do {
    local_308[(int)uVar12] = ('\x01' - (char)local_208) + (char)pbVar15;
    pbVar15[1] = (byte)uVar12;
    pbVar15[0x100] = (byte)uVar12;
    uVar17 = uVar12 * 2;
    if ((uVar12 >> 7 & 1) != 0) {
      uVar17 = uVar17 ^ 0x11b;
    }
    uVar12 = uVar12 ^ uVar17;
    pbVar15 = pbVar15 + 1;
  } while (uVar12 != 1);
  bVar14 = 1;
  pbVar15 = &rcon;
  do {
    bVar4 = bVar14 * '\x02';
    pbVar16 = pbVar15 + 1;
    *pbVar15 = bVar14;
    bVar3 = bVar14 & 0x80;
    bVar14 = bVar4 ^ 0x1b;
    if (bVar3 == 0) {
      bVar14 = bVar4;
    }
    pbVar15 = pbVar16;
  } while (pbVar16 != (byte *)0x4f8d6e);
  pbVar15 = &T8;
  pbVar16 = &T7;
  pbVar19 = &T6;
  uVar17 = 0;
  uVar12 = 0;
  lVar18 = 0;
  bVar7 = false;
  pbVar20 = &T5;
  pbVar21 = local_308;
  uVar23 = U2;
  uVar22 = U4;
  uVar8 = DAT_004f9a72;
  uVar9 = DAT_004f9671;
  uVar10 = DAT_004f9a71;
  uVar11 = U3;
  do {
    uVar2 = uVar17 ^ uVar12 ^ (int)lVar18 << 1;
    uVar2 = (uint)(char)((byte)uVar2 ^ (byte)(uVar2 >> 8));
    if (lVar18 == 0) {
      S = 99;
LAB_001c6e34:
      bVar14 = local_208[(int)(0xff - (uint)local_308[(int)((uVar2 ^ 5) & 0xff)])];
      uVar13 = (ulong)bVar14;
      (&S5)[lVar18] = bVar14;
      if (bVar14 == 0) goto LAB_001c6d5c;
      bVar14 = local_308[(int)(uint)bVar14];
      lVar6 = uVar13 * 4;
      bVar3 = local_208[(int)(bVar14 + 0x68)];
      (&U2)[lVar6] = bVar3;
      bVar4 = local_208[(int)(bVar14 + 199)];
      (&DAT_004f9a72)[lVar6] = bVar3;
      bVar5 = local_208[(int)(bVar14 + 0xee)];
      (&U4)[lVar6] = bVar4;
      (&DAT_004f9671)[lVar6] = bVar3;
      (&DAT_004f9673)[lVar6] = bVar4;
      bVar14 = local_208[(int)(bVar14 + 0xdf)];
      *pbVar19 = bVar3;
      *pbVar15 = bVar4;
      *pbVar16 = bVar5;
      (&U3)[lVar6] = bVar5;
      pbVar16[1] = bVar3;
      pbVar20[1] = bVar4;
      (&DAT_004f9a71)[lVar6] = bVar5;
      pbVar15[1] = bVar5;
      (&DAT_004f8e71)[lVar6] = bVar4;
      pbVar15[2] = bVar3;
      pbVar19[2] = bVar4;
      pbVar20[2] = bVar5;
      *(byte *)(&DAT_004f9272 + uVar13 * 2) = bVar4;
      *(byte *)(&DAT_004f8e72 + uVar13 * 2) = bVar5;
      pbVar20[3] = bVar3;
      pbVar16[3] = bVar4;
      pbVar19[3] = bVar5;
      *(byte *)((long)&DAT_004f9272 + lVar6 + 1) = bVar5;
      *(byte *)((long)&DAT_004f8e72 + lVar6 + 1) = bVar3;
    }
    else {
      bVar14 = local_208[(int)(0xff - (uint)*pbVar21)];
      uVar1 = (uint)bVar14 << 2 ^ (uint)bVar14 << 1 ^ (uint)bVar14 << 4 ^ (uint)bVar14 << 3;
      (&S)[lVar18] = (byte)uVar1 ^ bVar14 ^ (byte)(uVar1 >> 8) ^ 99;
      if (uVar2 != 5) goto LAB_001c6e34;
      (&S5)[lVar18] = 0;
LAB_001c6d5c:
      uVar22 = 0;
      uVar23 = 0;
      bVar7 = true;
      uVar13 = 0;
      bVar14 = 0;
      *pbVar19 = 0;
      *pbVar15 = 0;
      *pbVar16 = 0;
      pbVar16[1] = 0;
      pbVar20[1] = 0;
      pbVar15[1] = 0;
      pbVar15[2] = 0;
      pbVar19[2] = 0;
      pbVar20[2] = 0;
      pbVar20[3] = 0;
      pbVar16[3] = 0;
      pbVar19[3] = 0;
      uVar11 = 0;
      uVar8 = 0;
      uVar10 = 0;
      uVar9 = 0;
      DAT_004f8e71 = 0;
      DAT_004f8e72 = 0;
      DAT_004f9272 = 0;
      DAT_004f9673 = 0;
    }
    lVar6 = uVar13 * 4;
    (&U1)[lVar6] = bVar14;
    pbVar19[1] = bVar14;
    pbVar16[2] = bVar14;
    (&DAT_004f9271)[lVar6] = bVar14;
    (&DAT_004f9672)[lVar6] = bVar14;
    pbVar15[3] = bVar14;
    (&DAT_004f9a73)[lVar6] = bVar14;
    *pbVar20 = bVar14;
    lVar18 = lVar18 + 1;
    uVar12 = uVar12 + 8;
    uVar17 = uVar17 + 0x40;
    pbVar15 = pbVar15 + 4;
    pbVar16 = pbVar16 + 4;
    pbVar19 = pbVar19 + 4;
    pbVar21 = pbVar21 + 1;
    pbVar20 = pbVar20 + 4;
    if (lVar18 == 0x100) {
      if (bVar7) {
        U2 = uVar23;
        U3 = uVar11;
        DAT_004f9671 = uVar9;
        U4 = uVar22;
        DAT_004f9a71 = uVar10;
        DAT_004f9a72 = uVar8;
      }
      if (local_8 - ___stack_chk_guard == 0) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(&__stack_chk_guard,local_8 - ___stack_chk_guard,0);
    }
  } while( true );
}


