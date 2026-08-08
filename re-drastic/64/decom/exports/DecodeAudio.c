/*
 * Ghidra decompilation
 *
 * Function : DecodeAudio
 * Address  : 001cfb40
 * Program  : drastic64
 */


/* Unpack::DecodeAudio(int) */

void __thiscall Unpack::DecodeAudio(Unpack *this,int param_1)

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
  uint uVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  byte bVar16;
  uint uVar17;
  long lVar18;
  
  iVar5 = *(int *)(this + 0x98b0);
  uVar10 = -((uint)param_1 >> 7 & 1) & 0xfffff800 | (param_1 & 0xffU) << 3;
  lVar18 = (long)iVar5;
  uVar17 = -uVar10;
  if (-1 < (int)uVar10) {
    uVar17 = uVar10;
  }
  iVar6 = *(int *)(this + lVar18 * 0x5c + 0x98dc);
  iVar7 = *(int *)(this + lVar18 * 0x5c + 0x98d4);
  iVar8 = *(int *)(this + lVar18 * 0x5c + 0x98d0);
  iVar12 = iVar6 - *(int *)(this + lVar18 * 0x5c + 0x98cc);
  *(int *)(this + lVar18 * 0x5c + 0x98cc) = iVar6;
  *(int *)(this + lVar18 * 0x5c + 0x98d0) = iVar12;
  *(int *)(this + lVar18 * 0x5c + 0x98d4) = iVar8;
  *(int *)(this + lVar18 * 0x5c + 0x98d8) = iVar7;
  *(int *)(this + lVar18 * 0x5c + 0x990c) = *(int *)(this + lVar18 * 0x5c + 0x990c) + 1;
  iVar9 = *(int *)(this + 0x98b4);
  iVar13 = uVar10 - iVar6;
  iVar4 = -iVar13;
  if (-1 < iVar13) {
    iVar4 = iVar13;
  }
  iVar13 = uVar10 + iVar6;
  iVar1 = -iVar13;
  if (-1 < iVar13) {
    iVar1 = iVar13;
  }
  iVar14 = uVar10 - iVar12;
  iVar13 = -iVar14;
  if (-1 < iVar14) {
    iVar13 = iVar14;
  }
  iVar14 = uVar10 + iVar12;
  iVar2 = -iVar14;
  if (-1 < iVar14) {
    iVar2 = iVar14;
  }
  iVar15 = uVar10 - iVar8;
  iVar14 = -iVar15;
  if (-1 < iVar15) {
    iVar14 = iVar15;
  }
  iVar15 = uVar10 + iVar8;
  iVar3 = -iVar15;
  if (-1 < iVar15) {
    iVar3 = iVar15;
  }
  iVar15 = uVar10 - iVar7;
  iVar8 = ((uint)(iVar6 * *(int *)(this + lVar18 * 0x5c + 0x98b8) +
                  *(int *)(this + lVar18 * 0x5c + 0x9910) * 8 +
                  *(int *)(this + lVar18 * 0x5c + 0x98bc) * iVar12 +
                  *(int *)(this + lVar18 * 0x5c + 0x98c0) * iVar8 +
                  *(int *)(this + lVar18 * 0x5c + 0x98c4) * iVar7 +
                 iVar9 * *(int *)(this + lVar18 * 0x5c + 0x98c8)) >> 3 & 0xff) - param_1;
  iVar6 = -iVar15;
  if (-1 < iVar15) {
    iVar6 = iVar15;
  }
  iVar7 = uVar10 + iVar7;
  iVar12 = -iVar7;
  if (-1 < iVar7) {
    iVar12 = iVar7;
  }
  iVar15 = uVar10 - iVar9;
  *(uint *)(this + lVar18 * 0x5c + 0x98e0) = *(int *)(this + lVar18 * 0x5c + 0x98e0) + uVar17;
  *(int *)(this + lVar18 * 0x5c + 0x98e4) = iVar4 + *(int *)(this + lVar18 * 0x5c + 0x98e4);
  *(int *)(this + lVar18 * 0x5c + 0x98e8) = iVar1 + *(int *)(this + lVar18 * 0x5c + 0x98e8);
  iVar7 = -iVar15;
  if (-1 < iVar15) {
    iVar7 = iVar15;
  }
  iVar9 = iVar9 + uVar10;
  *(int *)(this + lVar18 * 0x5c + 0x98ec) = iVar13 + *(int *)(this + lVar18 * 0x5c + 0x98ec);
  *(int *)(this + lVar18 * 0x5c + 0x98f0) = iVar2 + *(int *)(this + lVar18 * 0x5c + 0x98f0);
  *(int *)(this + lVar18 * 0x5c + 0x98f4) = iVar14 + *(int *)(this + lVar18 * 0x5c + 0x98f4);
  *(int *)(this + lVar18 * 0x5c + 0x98f8) = iVar3 + *(int *)(this + lVar18 * 0x5c + 0x98f8);
  iVar4 = -iVar9;
  if (-1 < iVar9) {
    iVar4 = iVar9;
  }
  iVar9 = (int)(char)((char)iVar8 - (char)*(int *)(this + lVar18 * 0x5c + 0x9910));
  *(int *)(this + lVar18 * 0x5c + 0x98dc) = iVar9;
  *(int *)(this + lVar18 * 0x5c + 0x98fc) = iVar6 + *(int *)(this + lVar18 * 0x5c + 0x98fc);
  *(int *)(this + lVar18 * 0x5c + 0x9900) = iVar12 + *(int *)(this + lVar18 * 0x5c + 0x9900);
  *(int *)(this + lVar18 * 0x5c + 0x9904) = iVar7 + *(int *)(this + lVar18 * 0x5c + 0x9904);
  *(int *)(this + lVar18 * 0x5c + 0x9908) = iVar4 + *(int *)(this + lVar18 * 0x5c + 0x9908);
  *(int *)(this + 0x98b4) = iVar9;
  *(int *)(this + lVar18 * 0x5c + 0x9910) = iVar8;
  if ((*(uint *)(this + lVar18 * 0x5c + 0x990c) & 0x1f) != 0) {
    return;
  }
  uVar17 = *(uint *)(this + lVar18 * 0x5c + 0x98e0);
  *(undefined4 *)(this + lVar18 * 0x5c + 0x98e0) = 0;
  bVar16 = *(uint *)(this + lVar18 * 0x5c + 0x98e4) < uVar17;
  if ((bool)bVar16) {
    uVar17 = *(uint *)(this + lVar18 * 0x5c + 0x98e4);
  }
  lVar11 = (long)iVar5;
  *(undefined4 *)(this + lVar18 * 0x5c + 0x98e4) = 0;
  if (*(uint *)(this + lVar11 * 0x5c + 0x98e8) < uVar17) {
    bVar16 = 2;
    uVar17 = *(uint *)(this + lVar11 * 0x5c + 0x98e8);
  }
  *(undefined4 *)(this + lVar11 * 0x5c + 0x98e8) = 0;
  if (*(uint *)(this + lVar11 * 0x5c + 0x98ec) < uVar17) {
    bVar16 = 3;
    uVar17 = *(uint *)(this + lVar11 * 0x5c + 0x98ec);
  }
  *(undefined4 *)(this + lVar11 * 0x5c + 0x98ec) = 0;
  if (*(uint *)(this + lVar11 * 0x5c + 0x98f0) < uVar17) {
    bVar16 = 4;
    uVar17 = *(uint *)(this + lVar11 * 0x5c + 0x98f0);
  }
  *(undefined4 *)(this + lVar11 * 0x5c + 0x98f0) = 0;
  if (*(uint *)(this + lVar11 * 0x5c + 0x98f4) < uVar17) {
    bVar16 = 5;
    uVar17 = *(uint *)(this + lVar11 * 0x5c + 0x98f4);
  }
  *(undefined4 *)(this + lVar11 * 0x5c + 0x98f4) = 0;
  if (*(uint *)(this + lVar11 * 0x5c + 0x98f8) < uVar17) {
    bVar16 = 6;
    uVar17 = *(uint *)(this + lVar11 * 0x5c + 0x98f8);
  }
  *(undefined4 *)(this + lVar11 * 0x5c + 0x98f8) = 0;
  if (*(uint *)(this + lVar11 * 0x5c + 0x98fc) < uVar17) {
    bVar16 = 7;
    uVar17 = *(uint *)(this + lVar11 * 0x5c + 0x98fc);
  }
  *(undefined4 *)(this + lVar11 * 0x5c + 0x98fc) = 0;
  if (*(uint *)(this + lVar11 * 0x5c + 0x9900) < uVar17) {
    bVar16 = 8;
    uVar17 = *(uint *)(this + lVar11 * 0x5c + 0x9900);
  }
  *(undefined4 *)(this + lVar11 * 0x5c + 0x9900) = 0;
  if (*(uint *)(this + lVar11 * 0x5c + 0x9904) < uVar17) {
    bVar16 = 9;
    uVar17 = *(uint *)(this + lVar11 * 0x5c + 0x9904);
  }
  *(undefined4 *)(this + lVar11 * 0x5c + 0x9904) = 0;
  uVar10 = *(uint *)(this + lVar11 * 0x5c + 0x9908);
  *(undefined4 *)(this + lVar11 * 0x5c + 0x9908) = 0;
  if (uVar17 <= uVar10) {
    if (bVar16 == 6) {
      if (0xf < *(int *)(this + lVar18 * 0x5c + 0x98c0)) {
        return;
      }
      *(int *)(this + lVar18 * 0x5c + 0x98c0) = *(int *)(this + lVar18 * 0x5c + 0x98c0) + 1;
      return;
    }
    if (bVar16 < 7) {
      if (bVar16 == 3) {
        iVar5 = *(int *)(this + lVar18 * 0x5c + 0x98bc);
        if (iVar5 + 0x10 < 0 != SCARRY4(iVar5,0x10)) {
          return;
        }
        *(int *)(this + lVar18 * 0x5c + 0x98bc) = iVar5 + -1;
        return;
      }
      if (bVar16 < 4) {
        if (bVar16 == 1) {
          iVar5 = *(int *)(this + lVar18 * 0x5c + 0x98b8);
          if (iVar5 + 0x10 < 0 != SCARRY4(iVar5,0x10)) {
            return;
          }
          *(int *)(this + lVar18 * 0x5c + 0x98b8) = iVar5 + -1;
          return;
        }
        if (bVar16 != 2) {
          return;
        }
        if (0xf < *(int *)(this + lVar18 * 0x5c + 0x98b8)) {
          return;
        }
        *(int *)(this + lVar18 * 0x5c + 0x98b8) = *(int *)(this + lVar18 * 0x5c + 0x98b8) + 1;
        return;
      }
      if (bVar16 == 4) {
        if (0xf < *(int *)(this + lVar18 * 0x5c + 0x98bc)) {
          return;
        }
        *(int *)(this + lVar18 * 0x5c + 0x98bc) = *(int *)(this + lVar18 * 0x5c + 0x98bc) + 1;
        return;
      }
      if (bVar16 != 5) {
        return;
      }
      iVar5 = *(int *)(this + lVar18 * 0x5c + 0x98c0);
      if (iVar5 + 0x10 < 0 != SCARRY4(iVar5,0x10)) {
        return;
      }
      *(int *)(this + lVar18 * 0x5c + 0x98c0) = iVar5 + -1;
      return;
    }
    if (bVar16 == 9) {
      iVar5 = *(int *)(this + lVar18 * 0x5c + 0x98c8);
      if (iVar5 + 0x10 < 0 != SCARRY4(iVar5,0x10)) {
        return;
      }
      *(int *)(this + lVar18 * 0x5c + 0x98c8) = iVar5 + -1;
      return;
    }
    if (bVar16 != 10) {
      if (bVar16 == 7) {
        iVar5 = *(int *)(this + lVar18 * 0x5c + 0x98c4);
        if (iVar5 + 0x10 < 0 != SCARRY4(iVar5,0x10)) {
          return;
        }
        *(int *)(this + lVar18 * 0x5c + 0x98c4) = iVar5 + -1;
        return;
      }
      if (bVar16 != 8) {
        return;
      }
      if (0xf < *(int *)(this + lVar18 * 0x5c + 0x98c4)) {
        return;
      }
      *(int *)(this + lVar18 * 0x5c + 0x98c4) = *(int *)(this + lVar18 * 0x5c + 0x98c4) + 1;
      return;
    }
  }
  if (*(int *)(this + lVar18 * 0x5c + 0x98c8) < 0x10) {
    *(int *)(this + lVar18 * 0x5c + 0x98c8) = *(int *)(this + lVar18 * 0x5c + 0x98c8) + 1;
  }
  return;
}


