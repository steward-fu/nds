/*
 * Ghidra decompilation
 *
 * Function : keyEncToDec
 * Address  : 001c5b90
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Rijndael::keyEncToDec() */

void Rijndael::keyEncToDec(void)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  long lVar34;
  int *in_x0;
  ulong *puVar35;
  long lVar36;
  byte bVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  long lVar50;
  long lVar51;
  long lVar52;
  int iVar53;
  
  lVar34 = ___stack_chk_guard;
  iVar53 = 1;
  bVar37 = 0;
  puVar35 = (ulong *)(in_x0 + 9);
  iVar1 = *in_x0;
  if (1 < iVar1) {
    do {
      lVar50 = (ulong)*(byte *)((long)puVar35 + 2) * 4;
      lVar49 = (ulong)*(byte *)((long)puVar35 + 3) * 4;
      lVar52 = (ulong)*(byte *)puVar35 * 4;
      lVar51 = (ulong)*(byte *)((long)puVar35 + 1) * 4;
      lVar48 = (ulong)*(byte *)((long)puVar35 + 10) * 4;
      lVar47 = (ulong)*(byte *)((long)puVar35 + 0xb) * 4;
      lVar46 = (ulong)*(byte *)(puVar35 + 1) * 4;
      lVar45 = (ulong)*(byte *)((long)puVar35 + 9) * 4;
      bVar26 = (&U4)[lVar47];
      lVar42 = (ulong)*(byte *)((long)puVar35 + 6) * 4;
      bVar27 = (&U3)[lVar48];
      lVar41 = (ulong)*(byte *)((long)puVar35 + 7) * 4;
      bVar28 = (&U1)[lVar46];
      lVar44 = (ulong)*(byte *)((long)puVar35 + 4) * 4;
      bVar29 = (&U2)[lVar45];
      lVar43 = (ulong)*(byte *)((long)puVar35 + 5) * 4;
      lVar38 = (ulong)*(byte *)((long)puVar35 + 0xe) * 4;
      lVar36 = (ulong)*(byte *)((long)puVar35 + 0xf) * 4;
      lVar40 = (ulong)*(byte *)((long)puVar35 + 0xc) * 4;
      lVar39 = (ulong)*(byte *)((long)puVar35 + 0xd) * 4;
      bVar30 = (&U3)[lVar38];
      bVar31 = (&U4)[lVar36];
      bVar32 = (&U2)[lVar39];
      bVar33 = (&U1)[lVar40];
      bVar2 = (&DAT_004f9671)[lVar48];
      bVar3 = (&DAT_004f9a71)[lVar47];
      bVar4 = (&DAT_004f9271)[lVar45];
      bVar5 = (&DAT_004f8e71)[lVar46];
      bVar6 = (&DAT_004f9671)[lVar38];
      bVar7 = (&DAT_004f9a71)[lVar36];
      bVar8 = (&DAT_004f9271)[lVar39];
      bVar9 = (&DAT_004f8e71)[lVar40];
      bVar10 = *(byte *)(&DAT_004f9272 + (ulong)*(byte *)((long)puVar35 + 9) * 2);
      bVar11 = *(byte *)(&DAT_004f8e72 + (ulong)*(byte *)(puVar35 + 1) * 2);
      bVar12 = (&DAT_004f9672)[lVar48];
      bVar13 = (&DAT_004f9a72)[lVar47];
      bVar14 = *(byte *)(&DAT_004f8e72 + (ulong)*(byte *)((long)puVar35 + 0xc) * 2);
      bVar15 = *(byte *)(&DAT_004f9272 + (ulong)*(byte *)((long)puVar35 + 0xd) * 2);
      bVar16 = (&DAT_004f9672)[lVar38];
      bVar17 = (&DAT_004f9a72)[lVar36];
      bVar18 = *(byte *)((long)&DAT_004f9272 + lVar45 + 1);
      bVar19 = *(byte *)((long)&DAT_004f8e72 + lVar46 + 1);
      bVar20 = (&DAT_004f9673)[lVar48];
      bVar21 = (&DAT_004f9a73)[lVar47];
      bVar22 = *(byte *)((long)&DAT_004f9272 + lVar39 + 1);
      bVar23 = (&DAT_004f9673)[lVar38];
      bVar24 = (&DAT_004f9a73)[lVar36];
      bVar25 = *(byte *)((long)&DAT_004f8e72 + lVar40 + 1);
      bVar37 = *(byte *)((long)&DAT_004f8e72 + lVar44 + 1) ^
               *(byte *)((long)&DAT_004f9272 + lVar43 + 1) ^
               (&DAT_004f9673)[lVar42] ^ (&DAT_004f9a73)[lVar41];
      *puVar35 = (ulong)(byte)((&U3)[lVar42] ^ (&U4)[lVar41] ^ (&U1)[lVar44] ^ (&U2)[lVar43]) <<
                 0x20 | (ulong)(byte)((&DAT_004f9671)[lVar42] ^ (&DAT_004f9a71)[lVar41] ^
                                     (&DAT_004f8e71)[lVar44] ^ (&DAT_004f9271)[lVar43]) << 0x28 |
                 (ulong)(byte)(*(byte *)(&DAT_004f8e72 + (ulong)*(byte *)((long)puVar35 + 4) * 2) ^
                               *(byte *)(&DAT_004f9272 + (ulong)*(byte *)((long)puVar35 + 5) * 2) ^
                              (&DAT_004f9672)[lVar42] ^ (&DAT_004f9a72)[lVar41]) << 0x30 |
                 (ulong)CONCAT13(*(byte *)((long)&DAT_004f8e72 + lVar52 + 1) ^
                                 *(byte *)((long)&DAT_004f9272 + lVar51 + 1) ^
                                 (&DAT_004f9673)[lVar50] ^ (&DAT_004f9a73)[lVar49],
                                 CONCAT12((&DAT_004f9672)[lVar50] ^ (&DAT_004f9a72)[lVar49] ^
                                          *(byte *)(&DAT_004f8e72 + (ulong)*(byte *)puVar35 * 2) ^
                                          *(byte *)(&DAT_004f9272 +
                                                   (ulong)*(byte *)((long)puVar35 + 1) * 2),
                                          CONCAT11((&DAT_004f9671)[lVar50] ^ (&DAT_004f9a71)[lVar49]
                                                   ^ (&DAT_004f8e71)[lVar52] ^
                                                     (&DAT_004f9271)[lVar51],
                                                   (&U3)[lVar50] ^ (&U4)[lVar49] ^
                                                   (&U1)[lVar52] ^ (&U2)[lVar51]))) |
                 (ulong)bVar37 << 0x38;
      puVar35[1] = (ulong)(byte)(bVar30 ^ bVar31 ^ bVar33 ^ bVar32) << 0x20 |
                   (ulong)(byte)(bVar6 ^ bVar7 ^ bVar9 ^ bVar8) << 0x28 |
                   (ulong)(byte)(bVar14 ^ bVar15 ^ bVar16 ^ bVar17) << 0x30 |
                   (ulong)CONCAT13(bVar20 ^ bVar21 ^ bVar19 ^ bVar18,
                                   CONCAT12(bVar11 ^ bVar10 ^ bVar12 ^ bVar13,
                                            CONCAT11(bVar2 ^ bVar3 ^ bVar5 ^ bVar4,
                                                     bVar27 ^ bVar26 ^ bVar28 ^ bVar29))) |
                   (ulong)(byte)(bVar25 ^ bVar22 ^ bVar23 ^ bVar24) << 0x38;
      iVar53 = iVar53 + 1;
      puVar35 = puVar35 + 2;
      iVar1 = *in_x0;
    } while (iVar53 < iVar1);
  }
  if (lVar34 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(&__stack_chk_guard,lVar34 - ___stack_chk_guard,0,iVar1,bVar37);
  }
  return;
}


