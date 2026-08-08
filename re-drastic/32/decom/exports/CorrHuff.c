/*
 * Ghidra decompilation
 *
 * Function : CorrHuff
 * Address  : 080eee7c
 * Program  : drastic
 */


/* DWARF original prototype: void CorrHuff(Unpack * this, ushort * CharSet, byte * NumToPlace) */

void __thiscall Unpack::CorrHuff(Unpack *this,ushort *CharSet,byte *NumToPlace)

{
  ushort uVar1;
  undefined auVar2 [16];
  ushort *puVar3;
  undefined (*pauVar4) [16];
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined auVar11 [16];
  undefined auVar12 [16];
  undefined auVar13 [16];
  undefined auVar14 [16];
  
  iVar10 = 7;
  do {
    uVar1 = (ushort)iVar10;
    uVar5 = -((uint)((int)CharSet << 0x1d) >> 0x1e) & 7;
    if (uVar5 == 0) {
      iVar9 = 0x20;
      iVar6 = 4;
      puVar3 = CharSet;
      iVar8 = iVar9;
      iVar7 = iVar9;
    }
    else {
      puVar3 = CharSet + 1;
      *CharSet = uVar1 | *CharSet & 0xff00;
      if (uVar5 == 1) {
        iVar8 = 0x1f;
      }
      else {
        puVar3 = CharSet + 2;
        CharSet[1] = uVar1 | CharSet[1] & 0xff00;
        if (uVar5 == 2) {
          iVar8 = 0x1e;
        }
        else {
          puVar3 = CharSet + 3;
          CharSet[2] = uVar1 | CharSet[2] & 0xff00;
          if (uVar5 == 3) {
            iVar8 = 0x1d;
          }
          else {
            puVar3 = CharSet + 4;
            CharSet[3] = uVar1 | CharSet[3] & 0xff00;
            if (uVar5 == 4) {
              iVar8 = 0x1c;
            }
            else {
              puVar3 = CharSet + 5;
              CharSet[4] = uVar1 | CharSet[4] & 0xff00;
              if (uVar5 == 5) {
                iVar8 = 0x1b;
              }
              else {
                puVar3 = CharSet + 6;
                CharSet[5] = uVar1 | CharSet[5] & 0xff00;
                if (uVar5 == 6) {
                  iVar8 = 0x1a;
                }
                else {
                  puVar3 = CharSet + 7;
                  iVar8 = 0x19;
                  CharSet[6] = uVar1 | CharSet[6] & 0xff00;
                }
              }
            }
          }
        }
      }
      iVar9 = 0x20 - uVar5;
      iVar7 = 0x18;
      iVar6 = 3;
    }
    pauVar4 = (undefined (*) [16])(CharSet + uVar5);
    auVar12._4_4_ = CONCAT22(uVar1,uVar1);
    auVar12._0_4_ = CONCAT22(uVar1,uVar1);
    auVar12._8_8_ = 0;
    auVar12 = auVar12 & auVar12 << 0x40;
    auVar11 = SIMDExpandImmediate(1,9,0xff);
    auVar13 = SIMDExpandImmediate(1,9,0xff);
    auVar2 = SIMDExpandImmediate(1,9,0xff);
    auVar14 = *pauVar4 & ~auVar11 | auVar12;
    auVar13 = pauVar4[1] & ~auVar13 | auVar12;
    auVar11 = pauVar4[2] & ~auVar2 | auVar12;
    *(longlong *)*pauVar4 = auVar14._0_8_;
    *(longlong *)((int)*pauVar4 + 8) = auVar14._8_8_;
    *(longlong *)pauVar4[1] = auVar13._0_8_;
    *(longlong *)((int)pauVar4[1] + 8) = auVar13._8_8_;
    *(longlong *)pauVar4[2] = auVar11._0_8_;
    *(longlong *)((int)pauVar4[2] + 8) = auVar11._8_8_;
    if (iVar6 != 3) {
      auVar11 = SIMDExpandImmediate(1,9,0xff);
      auVar12 = pauVar4[3] & ~auVar11 | auVar12;
      *(longlong *)pauVar4[3] = auVar12._0_8_;
      *(longlong *)((int)pauVar4[3] + 8) = auVar12._8_8_;
    }
    iVar8 = iVar8 - iVar7;
    if ((((iVar7 != iVar9) && (puVar3[iVar7] = uVar1 | puVar3[iVar7] & 0xff00, iVar8 != 1)) &&
        (puVar3[iVar7 + 1] = uVar1 | puVar3[iVar7 + 1] & 0xff00, iVar8 != 2)) &&
       (((puVar3[iVar7 + 2] = uVar1 | puVar3[iVar7 + 2] & 0xff00, iVar8 != 3 &&
         (puVar3[iVar7 + 3] = uVar1 | puVar3[iVar7 + 3] & 0xff00, iVar8 != 4)) &&
        ((puVar3[iVar7 + 4] = uVar1 | puVar3[iVar7 + 4] & 0xff00, iVar8 != 5 &&
         (puVar3[iVar7 + 5] = uVar1 | puVar3[iVar7 + 5] & 0xff00, iVar8 != 6)))))) {
      puVar3[iVar7 + 6] = uVar1 | puVar3[iVar7 + 6] & 0xff00;
    }
    iVar10 = iVar10 + -1;
    CharSet = CharSet + 0x20;
  } while (iVar10 != -1);
  memset(NumToPlace,0,0x100);
  NumToPlace[5] = '@';
  *NumToPlace = 0xe0;
  NumToPlace[1] = 0xc0;
  NumToPlace[2] = 0xa0;
  NumToPlace[3] = 0x80;
  NumToPlace[4] = '`';
  NumToPlace[6] = ' ';
  return;
}


