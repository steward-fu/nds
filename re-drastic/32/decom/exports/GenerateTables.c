/*
 * Ghidra decompilation
 *
 * Function : GenerateTables
 * Address  : 080e6a2c
 * Program  : drastic
 */


/* DWARF original prototype: void GenerateTables(Rijndael * this) */

void __thiscall Rijndael::GenerateTables(Rijndael *this)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  int i;
  int iVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  uint uVar9;
  int w;
  byte (*pabVar10) [4];
  byte (*pabVar11) [4];
  byte (*pabVar12) [4];
  byte *pbVar13;
  byte bVar14;
  uchar *puVar15;
  uchar *puVar16;
  byte (*pabVar17) [4];
  uchar log [256];
  uchar pow [512];
  int local_2c;
  
  uVar6 = 2;
  uVar9 = 1;
  puVar16 = pow + 0xff;
  uVar4 = 0;
  log[1] = '\0';
  pow[0] = '\x01';
  pow[255] = '\x01';
  local_2c = __stack_chk_guard;
  puVar15 = pow;
  while (uVar9 = uVar9 ^ uVar4 ^ uVar6, uVar9 != 1) {
    uVar4 = uVar9 & 0x80;
    uVar6 = uVar9 << 1;
    if (uVar4 != 0) {
      uVar4 = 0x11b;
    }
    puVar15 = puVar15 + 1;
    *puVar15 = (uchar)uVar9;
    puVar16 = puVar16 + 1;
    *puVar16 = (uchar)uVar9;
    log[uVar9] = (char)puVar15 - (char)pow;
  }
  pbVar8 = &DAT_083f1c47;
  uVar6 = 1;
  do {
    pbVar8 = pbVar8 + 1;
    *pbVar8 = (byte)uVar6;
    if ((uVar6 & 0x80) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = 0x11b;
    }
    uVar6 = uVar4 ^ uVar6 << 1;
  } while (pbVar8 != rcon + 0x1d);
  pabVar17 = T8;
  pbVar13 = (byte *)0x83f1c67;
  uVar6 = 0;
  pabVar12 = T7;
  pabVar11 = T6;
  pabVar10 = T5;
  pbVar8 = S5;
  iVar5 = 0;
  do {
    uVar4 = iVar5 << 3 ^ iVar5 << 1 ^ iVar5 << 6;
    uVar6 = uVar6 << 2 ^ uVar6 << 1 ^ uVar6 ^ uVar6 << 3 ^ uVar6 << 4;
    uVar4 = (uint)(char)((byte)uVar4 ^ (byte)(uVar4 >> 8));
    pbVar13 = pbVar13 + 1;
    *pbVar13 = (byte)uVar6 ^ 99 ^ (byte)(uVar6 >> 8);
    if (uVar4 == 5) {
      uVar6 = 0;
      *pbVar8 = 0;
LAB_080e6c74:
      (*pabVar10)[1] = '\0';
      (*pabVar10)[2] = '\0';
      bVar14 = '\0';
      (*pabVar10)[3] = '\0';
      (*pabVar11)[0] = '\0';
      U1[uVar6][1] = '\0';
      U1[uVar6][2] = '\0';
      U1[uVar6][3] = '\0';
      U2[uVar6][0] = '\0';
      U2[uVar6][2] = '\0';
      U2[uVar6][3] = '\0';
      U3[uVar6][0] = '\0';
      U3[uVar6][1] = '\0';
      U3[uVar6][3] = '\0';
      U4[uVar6][0] = '\0';
      U4[uVar6][1] = '\0';
      U4[uVar6][2] = '\0';
      (*pabVar11)[2] = '\0';
      (*pabVar11)[3] = '\0';
      (*pabVar12)[0] = '\0';
      (*pabVar12)[1] = '\0';
      (*pabVar12)[3] = '\0';
      (*pabVar17)[0] = '\0';
      (*pabVar17)[1] = '\0';
      (*pabVar17)[2] = '\0';
    }
    else {
      uVar6 = (uint)pow[0xff - (uint)log[(uVar4 ^ 5) & 0xff]];
      *pbVar8 = pow[0xff - (uint)log[(uVar4 ^ 5) & 0xff]];
      if (uVar6 == 0) goto LAB_080e6c74;
      uVar4 = (uint)log[uVar6];
      bVar1 = pow[uVar4 + 0x68];
      bVar2 = pow[uVar4 + 199];
      bVar3 = pow[uVar4 + 0xee];
      bVar14 = pow[uVar4 + 0xdf];
      (*pabVar11)[0] = bVar1;
      U1[uVar6][1] = bVar2;
      U1[uVar6][2] = bVar3;
      U1[uVar6][3] = bVar1;
      U2[uVar6][0] = bVar1;
      U2[uVar6][2] = bVar2;
      U2[uVar6][3] = bVar3;
      U3[uVar6][0] = bVar3;
      U3[uVar6][1] = bVar1;
      U3[uVar6][3] = bVar2;
      U4[uVar6][0] = bVar2;
      U4[uVar6][1] = bVar3;
      U4[uVar6][2] = bVar1;
      (*pabVar10)[1] = bVar2;
      (*pabVar10)[2] = bVar3;
      (*pabVar10)[3] = bVar1;
      (*pabVar11)[2] = bVar2;
      (*pabVar11)[3] = bVar3;
      (*pabVar12)[0] = bVar3;
      (*pabVar12)[1] = bVar1;
      (*pabVar12)[3] = bVar2;
      (*pabVar17)[0] = bVar2;
      (*pabVar17)[1] = bVar3;
      (*pabVar17)[2] = bVar1;
    }
    iVar7 = uVar6 * 4;
    (*pabVar10)[0] = bVar14;
    (*pabVar11)[1] = bVar14;
    (*pabVar12)[2] = bVar14;
    (*pabVar17)[3] = bVar14;
    U1[0][iVar7] = bVar14;
    U2[0][iVar7 + 1] = bVar14;
    U3[0][iVar7 + 2] = bVar14;
    U4[0][iVar7 + 3] = bVar14;
    if (iVar5 + 1 == 0x100) {
      if (local_2c != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    pabVar17 = pabVar17 + 1;
    pabVar12 = pabVar12 + 1;
    pabVar11 = pabVar11 + 1;
    pabVar10 = pabVar10 + 1;
    pbVar8 = pbVar8 + 1;
    uVar6 = (uint)pow[0xff - (uint)log[iVar5 + 1]];
    iVar5 = iVar5 + 1;
  } while( true );
}


