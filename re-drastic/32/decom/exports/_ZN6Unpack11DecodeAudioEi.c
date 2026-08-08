/*
 * Ghidra decompilation
 *
 * Function : _ZN6Unpack11DecodeAudioEi
 * Address  : 080f0ea0
 * Program  : drastic
 */


/* DWARF original prototype: byte DecodeAudio(Unpack * this, int Delta) */

byte __thiscall Unpack::DecodeAudio(Unpack *this,int Delta)

{
  int iVar1;
  int iVar2;
  int D;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint MinDif;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  undefined uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  uint Ch;
  byte local_40;
  
  iVar18 = this->UnpCurChannel;
  local_40 = (byte)Delta;
  iVar19 = this->AudV[iVar18].LastDelta;
  iVar1 = this->AudV[iVar18].LastChar;
  iVar6 = this->AudV[iVar18].K1;
  uVar9 = (char)local_40 * 8;
  iVar16 = this->AudV[iVar18].K2;
  iVar2 = this->AudV[iVar18].D1;
  this->AudV[iVar18].D1 = iVar19;
  uVar15 = this->AudV[iVar18].ByteCount;
  iVar3 = this->AudV[iVar18].K3;
  iVar2 = iVar19 - iVar2;
  iVar14 = this->AudV[iVar18].K4;
  iVar21 = this->AudV[iVar18].D2;
  this->AudV[iVar18].D2 = iVar2;
  iVar11 = this->AudV[iVar18].K5;
  iVar7 = this->AudV[iVar18].D3;
  this->AudV[iVar18].ByteCount = uVar15 + 1;
  this->AudV[iVar18].D3 = iVar21;
  this->AudV[iVar18].D4 = iVar7;
  iVar10 = this->UnpChannelDelta;
  iVar20 = uVar9 + iVar19;
  uVar15 = (int)(uVar9 - iVar19) >> 0x1f;
  if (iVar20 < 0) {
    iVar20 = -iVar20;
  }
  this->AudV[iVar18].Dif[0] =
       this->AudV[iVar18].Dif[0] + ((uVar9 ^ (int)uVar9 >> 0x1f) - ((int)uVar9 >> 0x1f));
  iVar6 = ((uint)((iVar11 * iVar10 +
                  iVar7 * iVar14 + iVar21 * iVar3 + iVar2 * iVar16 + iVar6 * iVar19 + iVar1 * 8) *
                 0x200000) >> 0x18) - Delta;
  iVar3 = uVar9 - iVar7;
  iVar7 = uVar9 + iVar7;
  uVar12 = this->AudV[iVar18].Dif[2];
  if (iVar3 < 0) {
    iVar3 = -iVar3;
  }
  uVar8 = this->AudV[iVar18].Dif[3];
  this->AudV[iVar18].Dif[1] = ((uVar9 - iVar19 ^ uVar15) - uVar15) + this->AudV[iVar18].Dif[1];
  uVar4 = this->AudV[iVar18].Dif[4];
  uVar13 = this->AudV[iVar18].Dif[5];
  this->AudV[iVar18].Dif[2] = iVar20 + uVar12;
  iVar20 = uVar9 + iVar2;
  uVar15 = (int)(uVar9 - iVar2) >> 0x1f;
  if (iVar7 < 0) {
    iVar7 = -iVar7;
  }
  if (iVar20 < 0) {
    iVar20 = -iVar20;
  }
  uVar5 = this->AudV[iVar18].Dif[6];
  this->AudV[iVar18].Dif[3] = ((uVar9 - iVar2 ^ uVar15) - uVar15) + uVar8;
  uVar15 = (int)(uVar9 + iVar21) >> 0x1f;
  uVar12 = (int)(uVar9 - iVar21) >> 0x1f;
  this->AudV[iVar18].Dif[4] = iVar20 + uVar4;
  this->AudV[iVar18].Dif[5] = ((uVar9 - iVar21 ^ uVar12) - uVar12) + uVar13;
  this->AudV[iVar18].Dif[6] = ((uVar9 + iVar21 ^ uVar15) - uVar15) + uVar5;
  local_40 = (byte)iVar6;
  uVar15 = this->AudV[iVar18].Dif[9];
  uVar12 = this->AudV[iVar18].Dif[8];
  iVar1 = (int)(char)(local_40 - (char)iVar1);
  iVar20 = uVar9 - iVar10;
  iVar10 = iVar10 + uVar9;
  if (iVar20 < 0) {
    iVar20 = -iVar20;
  }
  if (iVar10 < 0) {
    iVar10 = -iVar10;
  }
  this->AudV[iVar18].Dif[7] = iVar3 + this->AudV[iVar18].Dif[7];
  this->AudV[iVar18].Dif[8] = iVar7 + uVar12;
  uVar9 = this->AudV[iVar18].Dif[10];
  this->AudV[iVar18].LastDelta = iVar1;
  this->AudV[iVar18].Dif[9] = iVar20 + uVar15;
  this->AudV[iVar18].Dif[10] = iVar10 + uVar9;
  this->UnpChannelDelta = iVar1;
  uVar9 = this->AudV[iVar18].ByteCount;
  this->AudV[iVar18].LastChar = iVar6;
  if ((uVar9 & 0x1f) != 0) {
    return local_40;
  }
  uVar12 = this->AudV[iVar18].Dif[0];
  this->AudV[iVar18].Dif[0] = 0;
  uVar15 = this->AudV[iVar18].Dif[1];
  this->AudV[iVar18].Dif[1] = 0;
  uVar8 = this->AudV[iVar18].Dif[2];
  this->AudV[iVar18].Dif[2] = 0;
  uVar4 = this->AudV[iVar18].Dif[3];
  uVar9 = uVar15;
  if (uVar12 < uVar15) {
    uVar9 = uVar12;
  }
  this->AudV[iVar18].Dif[3] = 0;
  uVar13 = this->AudV[iVar18].Dif[4];
  uVar17 = uVar15 < uVar12;
  this->AudV[iVar18].Dif[4] = 0;
  uVar15 = uVar9;
  if (uVar8 <= uVar9) {
    uVar15 = uVar8;
  }
  if (uVar8 < uVar9) {
    uVar17 = 2;
  }
  uVar9 = uVar15;
  if (uVar4 <= uVar15) {
    uVar9 = uVar4;
  }
  uVar12 = this->AudV[iVar18].Dif[5];
  this->AudV[iVar18].Dif[5] = 0;
  if (uVar4 < uVar15) {
    uVar17 = 3;
  }
  uVar4 = this->AudV[iVar18].Dif[6];
  this->AudV[iVar18].Dif[6] = 0;
  uVar15 = uVar13;
  if (uVar9 < uVar13) {
    uVar15 = uVar9;
  }
  if (uVar13 < uVar9) {
    uVar17 = 4;
  }
  uVar9 = uVar15;
  if (uVar12 <= uVar15) {
    uVar9 = uVar12;
  }
  uVar8 = this->AudV[iVar18].Dif[7];
  this->AudV[iVar18].Dif[7] = 0;
  if (uVar12 < uVar15) {
    uVar17 = 5;
  }
  uVar12 = this->AudV[iVar18].Dif[8];
  this->AudV[iVar18].Dif[8] = 0;
  uVar15 = uVar9;
  if (uVar4 <= uVar9) {
    uVar15 = uVar4;
  }
  uVar13 = this->AudV[iVar18].Dif[9];
  if (uVar4 < uVar9) {
    uVar17 = 6;
  }
  this->AudV[iVar18].Dif[9] = 0;
  uVar9 = uVar15;
  if (uVar8 <= uVar15) {
    uVar9 = uVar8;
  }
  if (uVar8 < uVar15) {
    uVar17 = 7;
  }
  uVar4 = this->AudV[iVar18].Dif[10];
  uVar15 = uVar9;
  if (uVar12 <= uVar9) {
    uVar15 = uVar12;
  }
  this->AudV[iVar18].Dif[10] = 0;
  if (uVar12 < uVar9) {
    uVar17 = 8;
  }
  if (uVar13 < uVar15) {
    uVar17 = 9;
  }
  if (uVar15 < uVar13) {
    uVar13 = uVar15;
  }
  if (uVar4 < uVar13) {
    uVar17 = 10;
  }
  switch(uVar17) {
  case 1:
    iVar20 = 0x9758;
    break;
  case 2:
    iVar20 = 0x9758;
    goto LAB_080f12fc;
  case 3:
    iVar20 = 0x975c;
    break;
  case 4:
    iVar20 = 0x975c;
    goto LAB_080f12fc;
  case 5:
    iVar20 = 0x9760;
    break;
  case 6:
    iVar20 = 0x9760;
    goto LAB_080f12fc;
  case 7:
    iVar20 = 0x9764;
    break;
  case 8:
    iVar20 = 0x9764;
    goto LAB_080f12fc;
  case 9:
    iVar20 = 0x9768;
    break;
  case 10:
    iVar20 = 0x9768;
LAB_080f12fc:
    iVar7 = *(int *)((int)this->OldDist + iVar20 + iVar18 * 0x5c + -0x54);
    if (iVar7 < 0x10) {
      *(int *)((int)this->OldDist + iVar20 + iVar18 * 0x5c + -0x54) = iVar7 + 1;
    }
  default:
    goto switchD_080f12c4_caseD_a;
  }
  iVar7 = *(int *)((int)this->OldDist + iVar20 + iVar18 * 0x5c + -0x54);
  if (iVar7 + 0x10 < 0 == SCARRY4(iVar7,0x10)) {
    *(int *)((int)this->OldDist + iVar20 + iVar18 * 0x5c + -0x54) = iVar7 + -1;
  }
switchD_080f12c4_caseD_a:
  return local_40;
}


