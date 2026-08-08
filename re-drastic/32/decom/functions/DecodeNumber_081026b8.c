/*
 * Ghidra decompilation
 *
 * Function : DecodeNumber
 * Address  : 081026b8
 * Program  : drastic
 */


/* DWARF original prototype: uint DecodeNumber(Unpack * this, BitInput * Inp, DecodeTable * Dec) */

uint __thiscall Unpack::DecodeNumber(Unpack *this,BitInput *Inp,DecodeTable *Dec)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint I;
  uint Pos;
  uint Code;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint BitField;
  byte *pbVar9;
  
  iVar4 = Inp->InAddr;
  iVar5 = Inp->InBit;
  uVar2 = Dec->QuickBits;
  iVar7 = uVar2 * 4;
  pbVar9 = Inp->InBuf + iVar4;
  uVar8 = ((uint)pbVar9[2] | (uint)*pbVar9 << 0x10 | (uint)pbVar9[1] << 8) >> (8U - iVar5 & 0xff) &
          0xfffe;
  if (uVar8 < Dec->DecodeLen[uVar2]) {
    uVar8 = uVar8 >> (0x10 - uVar2 & 0xff);
    uVar1 = Dec->QuickNum[uVar8];
    uVar8 = (uint)Dec->QuickLen[uVar8] + iVar5;
    Inp->InAddr = iVar4 + (uVar8 >> 3);
    Inp->InBit = uVar8 & 7;
    goto LAB_081028f8;
  }
  uVar3 = uVar2 + 1;
  if (uVar3 < 0xf) {
    if (uVar8 < Dec->DecodeLen[uVar2 + 1]) {
      uVar6 = 0x10 - uVar3;
    }
    else {
      uVar3 = uVar2 + 2;
      if (uVar3 == 0xf) {
LAB_0810293c:
        uVar6 = 1;
        iVar7 = 0x38;
      }
      else {
        if (Dec->DecodeLen[uVar2 + 2] <= uVar8) {
          uVar3 = uVar2 + 3;
          if (uVar3 == 0xf) goto LAB_0810293c;
          if (Dec->DecodeLen[uVar2 + 3] <= uVar8) {
            uVar3 = uVar2 + 4;
            if (uVar3 == 0xf) goto LAB_0810293c;
            if (Dec->DecodeLen[uVar2 + 4] <= uVar8) {
              uVar3 = uVar2 + 5;
              if (uVar3 == 0xf) goto LAB_0810293c;
              if (Dec->DecodeLen[uVar2 + 5] <= uVar8) {
                uVar3 = uVar2 + 6;
                if (uVar3 == 0xf) goto LAB_0810293c;
                if (Dec->DecodeLen[uVar2 + 6] <= uVar8) {
                  uVar3 = uVar2 + 7;
                  if (uVar3 == 0xf) goto LAB_0810293c;
                  if (Dec->DecodeLen[uVar2 + 7] <= uVar8) {
                    uVar3 = uVar2 + 8;
                    if (uVar3 == 0xf) goto LAB_0810293c;
                    if (Dec->DecodeLen[uVar2 + 8] <= uVar8) {
                      uVar3 = uVar2 + 9;
                      if (uVar3 == 0xf) goto LAB_0810293c;
                      if (Dec->DecodeLen[uVar2 + 9] <= uVar8) {
                        uVar3 = uVar2 + 10;
                        if (uVar3 == 0xf) goto LAB_0810293c;
                        if (Dec->DecodeLen[uVar2 + 10] <= uVar8) {
                          uVar3 = uVar2 + 0xb;
                          if (uVar3 == 0xf) goto LAB_0810293c;
                          if (Dec->DecodeLen[uVar2 + 0xb] <= uVar8) {
                            uVar3 = uVar2 + 0xc;
                            if (uVar3 == 0xf) goto LAB_0810293c;
                            if (Dec->DecodeLen[uVar2 + 0xc] <= uVar8) {
                              uVar3 = uVar2 + 0xd;
                              if (uVar3 == 0xf) goto LAB_0810293c;
                              if (Dec->DecodeLen[uVar2 + 0xd] <= uVar8) {
                                uVar3 = uVar2 + 0xe;
                                if (uVar3 == 0xf) goto LAB_0810293c;
                                if (Dec->DecodeLen[uVar2 + 0xe] <= uVar8) {
                                  if ((uVar2 == 0) || (Dec->DecodeLen[0xe] <= uVar8))
                                  goto LAB_081028a4;
                                  uVar3 = 0xe;
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
        uVar6 = 0x10 - uVar3;
        iVar7 = (uVar3 - 1) * 4;
      }
    }
  }
  else {
LAB_081028a4:
    uVar6 = 1;
    uVar3 = 0xf;
    iVar7 = 0x38;
  }
  Inp->InAddr = iVar4 + (iVar5 + uVar3 >> 3);
  Inp->InBit = iVar5 + uVar3 & 7;
  uVar8 = Dec->DecodePos[uVar3] + (uVar8 - *(int *)((int)Dec->DecodeLen + iVar7) >> (uVar6 & 0xff));
  if (Dec->MaxNum <= uVar8) {
    uVar8 = 0;
  }
  uVar1 = Dec->DecodeNum[uVar8];
LAB_081028f8:
  return (uint)uVar1;
}


