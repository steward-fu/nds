/*
 * Ghidra decompilation
 *
 * Function : _ZN8Rijndael4InitEbPKhjS1_
 * Address  : 001c56b0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Rijndael::Init(bool, unsigned char const*, unsigned int, unsigned char const*) */

void __thiscall
Rijndael::Init(Rijndael *this,bool param_1,uchar *param_2,uint param_3,uchar *param_4)

{
  unsigned_char *puVar1;
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
  ulong uVar35;
  ulong *puVar36;
  ulong uVar37;
  long lVar38;
  long lVar39;
  ulong uVar40;
  long lVar41;
  long lVar42;
  ulong uVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  long lVar50;
  long lVar51;
  long lVar52;
  long lVar53;
  long lVar54;
  int iVar55;
  undefined8 uVar56;
  unsigned_char local_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_3 == 0xc0) {
    uVar43 = 0x18;
    *(undefined4 *)this = 0xc;
LAB_001c5a90:
    uVar35 = 0;
    do {
      uVar37 = uVar35 & 0xfffffffc;
      uVar40 = uVar35 & 3;
      puVar1 = (unsigned_char *)(param_2 + uVar35);
      uVar35 = uVar35 + 1;
      local_28[uVar40 + uVar37] = *puVar1;
    } while (uVar35 != uVar43);
    if (this + 4 < (Rijndael *)(param_4 + 0x10) && param_4 < this + 0x14) {
LAB_001c5ad8:
      this[4] = (Rijndael)*param_4;
      this[5] = *(Rijndael *)(param_4 + 1);
      this[6] = *(Rijndael *)(param_4 + 2);
      this[7] = *(Rijndael *)(param_4 + 3);
      this[8] = *(Rijndael *)(param_4 + 4);
      this[9] = *(Rijndael *)(param_4 + 5);
      this[10] = *(Rijndael *)(param_4 + 6);
      this[0xb] = *(Rijndael *)(param_4 + 7);
      this[0xc] = *(Rijndael *)(param_4 + 8);
      this[0xd] = *(Rijndael *)(param_4 + 9);
      this[0xe] = *(Rijndael *)(param_4 + 10);
      this[0xf] = *(Rijndael *)(param_4 + 0xb);
      this[0x10] = *(Rijndael *)(param_4 + 0xc);
      this[0x11] = *(Rijndael *)(param_4 + 0xd);
      this[0x12] = *(Rijndael *)(param_4 + 0xe);
      this[0x13] = *(Rijndael *)(param_4 + 0xf);
      goto LAB_001c5718;
    }
  }
  else {
    if (param_3 == 0x100) {
      uVar43 = 0x20;
      *(undefined4 *)this = 0xe;
      goto LAB_001c5a90;
    }
    if (param_3 == 0x80) {
      uVar43 = 0x10;
      *(undefined4 *)this = 10;
      goto LAB_001c5a90;
    }
    if (this + 4 < (Rijndael *)(param_4 + 0x10) && param_4 < this + 0x14) goto LAB_001c5ad8;
  }
  uVar56 = *(undefined8 *)param_4;
  *(undefined8 *)(this + 0xc) = *(undefined8 *)(param_4 + 8);
  *(undefined8 *)(this + 4) = uVar56;
LAB_001c5718:
  keySched(this,local_28);
  if ((!param_1) && (1 < *(int *)this)) {
    puVar36 = (ulong *)(this + 0x24);
    iVar55 = 1;
    do {
      lVar54 = (ulong)*(byte *)puVar36 * 4;
      lVar53 = (ulong)*(byte *)((long)puVar36 + 1) * 4;
      lVar52 = (ulong)*(byte *)((long)puVar36 + 2) * 4;
      lVar51 = (ulong)*(byte *)((long)puVar36 + 3) * 4;
      lVar50 = (ulong)*(byte *)(puVar36 + 1) * 4;
      lVar49 = (ulong)*(byte *)((long)puVar36 + 9) * 4;
      lVar48 = (ulong)*(byte *)((long)puVar36 + 10) * 4;
      lVar47 = (ulong)*(byte *)((long)puVar36 + 0xb) * 4;
      bVar26 = (&U2)[lVar49];
      lVar46 = (ulong)*(byte *)((long)puVar36 + 4) * 4;
      bVar27 = (&U1)[lVar50];
      lVar45 = (ulong)*(byte *)((long)puVar36 + 5) * 4;
      bVar28 = (&U3)[lVar48];
      lVar44 = (ulong)*(byte *)((long)puVar36 + 6) * 4;
      bVar29 = (&U4)[lVar47];
      lVar42 = (ulong)*(byte *)((long)puVar36 + 7) * 4;
      lVar41 = (ulong)*(byte *)((long)puVar36 + 0xc) * 4;
      lVar39 = (ulong)*(byte *)((long)puVar36 + 0xd) * 4;
      lVar38 = (ulong)*(byte *)((long)puVar36 + 0xe) * 4;
      lVar34 = (ulong)*(byte *)((long)puVar36 + 0xf) * 4;
      bVar30 = (&U1)[lVar41];
      bVar31 = (&U2)[lVar39];
      bVar32 = (&U3)[lVar38];
      bVar33 = (&U4)[lVar34];
      bVar2 = (&DAT_004f8e71)[lVar50];
      bVar3 = (&DAT_004f9271)[lVar49];
      bVar4 = (&DAT_004f9a71)[lVar47];
      bVar5 = (&DAT_004f9671)[lVar48];
      bVar6 = (&DAT_004f8e71)[lVar41];
      bVar7 = (&DAT_004f9271)[lVar39];
      bVar8 = (&DAT_004f9671)[lVar38];
      bVar9 = (&DAT_004f9a71)[lVar34];
      bVar10 = *(byte *)(&DAT_004f9272 + (ulong)*(byte *)((long)puVar36 + 9) * 2);
      bVar11 = *(byte *)(&DAT_004f8e72 + (ulong)*(byte *)(puVar36 + 1) * 2);
      bVar12 = (&DAT_004f9672)[lVar48];
      bVar13 = (&DAT_004f9a72)[lVar47];
      bVar14 = *(byte *)(&DAT_004f8e72 + (ulong)*(byte *)((long)puVar36 + 0xc) * 2);
      bVar15 = *(byte *)(&DAT_004f9272 + (ulong)*(byte *)((long)puVar36 + 0xd) * 2);
      bVar16 = (&DAT_004f9672)[lVar38];
      bVar17 = (&DAT_004f9a72)[lVar34];
      bVar18 = *(byte *)((long)&DAT_004f8e72 + lVar50 + 1);
      bVar19 = (&DAT_004f9a73)[lVar47];
      bVar20 = *(byte *)((long)&DAT_004f9272 + lVar49 + 1);
      bVar21 = (&DAT_004f9673)[lVar48];
      bVar22 = *(byte *)((long)&DAT_004f9272 + lVar39 + 1);
      bVar23 = (&DAT_004f9a73)[lVar34];
      bVar24 = (&DAT_004f9673)[lVar38];
      bVar25 = *(byte *)((long)&DAT_004f8e72 + lVar41 + 1);
      *puVar36 = (ulong)(byte)((&U1)[lVar46] ^ (&U2)[lVar45] ^ (&U3)[lVar44] ^ (&U4)[lVar42]) <<
                 0x20 | (ulong)(byte)((&DAT_004f8e71)[lVar46] ^ (&DAT_004f9271)[lVar45] ^
                                     (&DAT_004f9671)[lVar44] ^ (&DAT_004f9a71)[lVar42]) << 0x28 |
                 (ulong)(byte)(*(byte *)(&DAT_004f8e72 + (ulong)*(byte *)((long)puVar36 + 4) * 2) ^
                               *(byte *)(&DAT_004f9272 + (ulong)*(byte *)((long)puVar36 + 5) * 2) ^
                              (&DAT_004f9672)[lVar44] ^ (&DAT_004f9a72)[lVar42]) << 0x30 |
                 (ulong)CONCAT13(*(byte *)((long)&DAT_004f8e72 + lVar54 + 1) ^
                                 *(byte *)((long)&DAT_004f9272 + lVar53 + 1) ^
                                 (&DAT_004f9673)[lVar52] ^ (&DAT_004f9a73)[lVar51],
                                 CONCAT12(*(byte *)(&DAT_004f8e72 + (ulong)*(byte *)puVar36 * 2) ^
                                          *(byte *)(&DAT_004f9272 +
                                                   (ulong)*(byte *)((long)puVar36 + 1) * 2) ^
                                          (&DAT_004f9672)[lVar52] ^ (&DAT_004f9a72)[lVar51],
                                          CONCAT11((&DAT_004f8e71)[lVar54] ^ (&DAT_004f9271)[lVar53]
                                                   ^ (&DAT_004f9671)[lVar52] ^
                                                     (&DAT_004f9a71)[lVar51],
                                                   (&U1)[lVar54] ^ (&U2)[lVar53] ^
                                                   (&U3)[lVar52] ^ (&U4)[lVar51]))) |
                 (ulong)(byte)(*(byte *)((long)&DAT_004f8e72 + lVar46 + 1) ^
                               *(byte *)((long)&DAT_004f9272 + lVar45 + 1) ^
                              (&DAT_004f9673)[lVar44] ^ (&DAT_004f9a73)[lVar42]) << 0x38;
      puVar36[1] = (ulong)(byte)(bVar30 ^ bVar31 ^ bVar32 ^ bVar33) << 0x20 |
                   (ulong)(byte)(bVar6 ^ bVar7 ^ bVar8 ^ bVar9) << 0x28 |
                   (ulong)(byte)(bVar14 ^ bVar15 ^ bVar16 ^ bVar17) << 0x30 |
                   (ulong)CONCAT13(bVar18 ^ bVar20 ^ bVar21 ^ bVar19,
                                   CONCAT12(bVar11 ^ bVar10 ^ bVar12 ^ bVar13,
                                            CONCAT11(bVar2 ^ bVar3 ^ bVar5 ^ bVar4,
                                                     bVar27 ^ bVar26 ^ bVar28 ^ bVar29))) |
                   (ulong)(byte)(bVar25 ^ bVar22 ^ bVar24 ^ bVar23) << 0x38;
      iVar55 = iVar55 + 1;
      puVar36 = puVar36 + 2;
    } while (iVar55 < *(int *)this);
  }
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&__stack_chk_guard,local_8 - ___stack_chk_guard,0);
}


