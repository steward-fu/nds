/*
 * Ghidra decompilation
 *
 * Function : LzmaDec_DecodeReal2
 * Address  : 080ccbc0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int LzmaDec_DecodeReal2(CLzmaDec *p,SizeT limit,Byte *bufLimit)

{
  Byte *pBVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  short sVar5;
  UInt32 UVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  SizeT SVar10;
  SizeT dicBufSize_1;
  UInt16 *probLen;
  Byte *pBVar11;
  Byte *dest;
  UInt32 t;
  uint uVar12;
  uint state;
  UInt32 rep0;
  UInt32 rep1;
  UInt32 rep2;
  uint uVar13;
  UInt32 bound;
  SizeT pos;
  UInt16 *pUVar14;
  uint uVar15;
  Byte *pBVar16;
  UInt32 code;
  Byte *dic_1;
  Byte *pBVar17;
  UInt32 range;
  uint uVar18;
  SizeT SVar19;
  UInt32 rem;
  UInt16 *pUVar20;
  uint uVar21;
  Byte *pBVar22;
  Byte *pBVar23;
  uint bit;
  uint uVar24;
  uint posState;
  UInt16 *pUVar25;
  int numDirectBits;
  int iVar26;
  undefined8 *puVar27;
  uint matchByte;
  Byte *buf;
  uint i;
  int iVar28;
  UInt16 *probLit;
  UInt32 mask;
  SizeT dicPos;
  SizeT dicPos_1;
  uint ttt;
  uint symbol;
  Byte *pBVar29;
  undefined8 *puVar30;
  UInt32 UVar31;
  UInt16 *probs;
  SizeT SVar32;
  int iVar33;
  Byte *pBVar34;
  uint posSlot;
  Byte *pBVar35;
  Byte *lim;
  bool bVar36;
  bool bVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  UInt32 processedPos;
  uint local_84;
  Byte *dic;
  UInt32 rep0_1;
  SizeT limit2;
  UInt32 checkDicSize;
  SizeT dicBufSize;
  uint pbMask;
  uint len;
  uint local_5c;
  UInt32 local_58;
  uint lc;
  UInt32 local_50;
  UInt32 rep3;
  uint lpMask;
  UInt32 local_44;
  
  buf = p->buf;
  dicPos = p->dicPos;
  do {
    pBVar17 = (Byte *)p->checkDicSize;
    dicBufSize = limit;
    if (pBVar17 == (Byte *)0x0) {
      dic = (Byte *)p->processedPos;
      uVar7 = (p->prop).dicSize - (int)dic;
      if (uVar7 < limit - dicPos) {
        dicBufSize = uVar7 + dicPos;
      }
    }
    else {
      dic = (Byte *)p->processedPos;
    }
    uVar12 = (p->prop).lp;
    uVar7 = (p->prop).pb;
    local_5c = 0;
    pUVar14 = p->probs;
    range = p->range;
    uVar21 = p->dicBufSize;
    uVar15 = (p->prop).lc;
    pBVar16 = p->dic;
    local_84 = p->state;
    code = p->code;
    state = (uint)(pUVar14 + 0x332);
    checkDicSize = p->reps[0];
    local_58 = p->reps[1];
    local_50 = p->reps[2];
    local_44 = p->reps[3];
    do {
      UVar6 = local_58;
      UVar31 = checkDicSize;
      uVar24 = (1 << (uVar7 & 0xff)) - 1U & (uint)dic;
      iVar8 = uVar24 + local_84 * 0x10;
      uVar3 = pUVar14[iVar8];
      if (range < 0x1000000) {
        bVar2 = *buf;
        range = range << 8;
        buf = buf + 1;
        code = (uint)bVar2 | code << 8;
      }
      uVar13 = (range >> 0xb) * (uint)uVar3;
      if (uVar13 < code || uVar13 - code == 0) {
        uVar9 = range - uVar13;
        code = code - uVar13;
        iVar33 = local_84 + 0xc0;
        pUVar14[iVar8] = uVar3 - (uVar3 >> 5);
        uVar3 = pUVar14[iVar33];
        if (uVar9 < 0x1000000) {
          bVar2 = *buf;
          uVar9 = uVar9 * 0x100;
          buf = buf + 1;
          code = (uint)bVar2 | code * 0x100;
        }
        uVar13 = (uVar9 >> 0xb) * (uint)uVar3;
        if (uVar13 < code || uVar13 - code == 0) {
          uVar9 = uVar9 - uVar13;
          code = code - uVar13;
          pUVar14[iVar33] = uVar3 - (uVar3 >> 5);
          if (((uint)pBVar17 | (uint)dic) == 0) {
            return 1;
          }
          uVar3 = pUVar14[local_84 + 0xcc];
          if (uVar9 < 0x1000000) {
            bVar2 = *buf;
            uVar9 = uVar9 * 0x100;
            buf = buf + 1;
            code = (uint)bVar2 | code * 0x100;
          }
          uVar13 = (uVar9 >> 0xb) * (uint)uVar3;
          if (uVar13 < code || uVar13 - code == 0) {
            uVar9 = uVar9 - uVar13;
            code = code - uVar13;
            pUVar14[local_84 + 0xcc] = uVar3 - (uVar3 >> 5);
            uVar3 = pUVar14[local_84 + 0xd8];
            if (uVar9 < 0x1000000) {
              bVar2 = *buf;
              uVar9 = uVar9 * 0x100;
              buf = buf + 1;
              code = (uint)bVar2 | code * 0x100;
            }
            uVar13 = (uVar9 >> 0xb) * (uint)uVar3;
            if (uVar13 < code || uVar13 - code == 0) {
              uVar9 = uVar9 - uVar13;
              code = code - uVar13;
              pUVar14[local_84 + 0xd8] = uVar3 - (uVar3 >> 5);
              uVar3 = pUVar14[local_84 + 0xe4];
              if (uVar9 < 0x1000000) {
                bVar2 = *buf;
                uVar9 = uVar9 * 0x100;
                buf = buf + 1;
                code = (uint)bVar2 | code * 0x100;
              }
              uVar13 = (uVar9 >> 0xb) * (uint)uVar3;
              if (uVar13 < code || uVar13 - code == 0) {
                code = code - uVar13;
                uVar13 = uVar9 - uVar13;
                checkDicSize = local_44;
                local_44 = local_50;
                local_58 = UVar31;
                local_50 = UVar6;
                pUVar14[local_84 + 0xe4] = uVar3 - (uVar3 >> 5);
              }
              else {
                checkDicSize = local_50;
                local_50 = local_58;
                pUVar14[local_84 + 0xe4] = uVar3 + (short)(0x800 - uVar3 >> 5);
                local_58 = UVar31;
              }
            }
            else {
              checkDicSize = local_58;
              local_58 = UVar31;
              pUVar14[local_84 + 0xd8] = uVar3 + (short)(0x800 - uVar3 >> 5);
            }
          }
          else {
            iVar8 = uVar24 + (local_84 + 0xf) * 0x10;
            pUVar14[local_84 + 0xcc] = uVar3 + (short)(0x800 - uVar3 >> 5);
            uVar3 = pUVar14[iVar8];
            if (uVar13 < 0x1000000) {
              bVar2 = *buf;
              uVar13 = uVar13 * 0x100;
              buf = buf + 1;
              code = (uint)bVar2 | code << 8;
            }
            range = (uVar13 >> 0xb) * (uint)uVar3;
            if (code <= range && range - code != 0) {
              dic = dic + 1;
              uVar24 = uVar21;
              if (checkDicSize <= dicPos) {
                uVar24 = 0;
              }
              pUVar14[iVar8] = uVar3 + (short)(0x800 - uVar3 >> 5);
              if (local_84 < 7) {
                local_84 = 9;
              }
              else {
                local_84 = 0xb;
              }
              pBVar16[dicPos] = pBVar16[uVar24 + (dicPos - checkDicSize)];
              uVar24 = dicPos + 1;
              goto LAB_080cce18;
            }
            uVar13 = uVar13 - range;
            code = code - range;
            pUVar14[iVar8] = uVar3 - (uVar3 >> 5);
          }
          probLen = pUVar14 + 0x534;
          if (local_84 < 7) {
            local_84 = 8;
          }
          else {
            local_84 = 0xb;
          }
        }
        else {
          local_84 = local_84 + 0xc;
          pUVar14[iVar33] = uVar3 + (short)(0x800 - uVar3 >> 5);
          probLen = (UInt16 *)state;
        }
        uVar3 = *probLen;
        if (uVar13 < 0x1000000) {
          bVar2 = *buf;
          uVar13 = uVar13 << 8;
          buf = buf + 1;
          code = (uint)bVar2 | code << 8;
        }
        range = (uVar13 >> 0xb) * (uint)uVar3;
        if (range < code || range - code == 0) {
          uVar13 = uVar13 - range;
          uVar4 = probLen[1];
          code = code - range;
          *probLen = uVar3 - (uVar3 >> 5);
          if (uVar13 < 0x1000000) {
            bVar2 = *buf;
            uVar13 = uVar13 * 0x100;
            buf = buf + 1;
            code = (uint)bVar2 | code * 0x100;
          }
          range = (uVar13 >> 0xb) * (uint)uVar4;
          if (range < code || range - code == 0) {
            code = code - range;
            pUVar20 = probLen + 0x102;
            range = uVar13 - range;
            iVar8 = -0xf0;
            uVar24 = 0x100;
            probLen[1] = uVar4 - (uVar4 >> 5);
          }
          else {
            pUVar20 = probLen + uVar24 * 8 + 0x82;
            iVar8 = 0;
            uVar24 = 8;
            probLen[1] = uVar4 + (short)(0x800 - uVar4 >> 5);
          }
        }
        else {
          pUVar20 = probLen + uVar24 * 8 + 2;
          iVar8 = -8;
          uVar24 = 8;
          *probLen = uVar3 + (short)(0x800 - uVar3 >> 5);
        }
        local_5c = 1;
        do {
          uVar13 = local_5c * 2;
          pUVar25 = pUVar20 + local_5c;
          uVar3 = pUVar20[local_5c];
          if (range < 0x1000000) {
            bVar2 = *buf;
            range = range << 8;
            buf = buf + 1;
            code = (uint)bVar2 | code << 8;
          }
          uVar9 = (range >> 0xb) * (uint)uVar3;
          bVar36 = uVar9 - code != 0;
          uVar18 = range - uVar9;
          sVar5 = -(uVar3 >> 5);
          if (code <= uVar9 && bVar36) {
            sVar5 = (short)(0x800 - uVar3 >> 5);
          }
          local_5c = uVar13;
          range = uVar9;
          if (code > uVar9 || !bVar36) {
            code = code - uVar9;
            local_5c = uVar13 + 1;
            range = uVar18;
          }
          *pUVar25 = uVar3 + sVar5;
        } while (local_5c < uVar24);
        local_5c = local_5c + iVar8;
        if (0xb < local_84) {
          if (local_5c < 4) {
            iVar8 = local_5c * 0x80 + 0x360;
          }
          else {
            iVar8 = 0x4e0;
          }
          uVar3 = *(ushort *)((int)pUVar14 + iVar8 + 2);
          if (range < 0x1000000) {
            bVar2 = *buf;
            range = range << 8;
            buf = buf + 1;
            code = (uint)bVar2 | code << 8;
          }
          uVar24 = (range >> 0xb) * (uint)uVar3;
          if (uVar24 < code || uVar24 - code == 0) {
            sVar5 = -(uVar3 >> 5);
            code = code - uVar24;
            uVar24 = range - uVar24;
            iVar33 = 6;
          }
          else {
            iVar33 = 4;
            sVar5 = (short)(0x800 - uVar3 >> 5);
          }
          *(ushort *)((int)pUVar14 + iVar8 + 2) = uVar3 + sVar5;
          uVar3 = *(ushort *)((int)pUVar14 + iVar33 + iVar8);
          iVar26 = iVar33 + iVar8;
          if (uVar24 < 0x1000000) {
            bVar2 = *buf;
            uVar24 = uVar24 << 8;
            buf = buf + 1;
            code = (uint)bVar2 | code << 8;
          }
          uVar13 = (uVar24 >> 0xb) * (uint)uVar3;
          if (uVar13 < code || uVar13 - code == 0) {
            sVar5 = -(uVar3 >> 5);
            code = code - uVar13;
            iVar33 = iVar33 + 1;
            uVar13 = uVar24 - uVar13;
          }
          else {
            sVar5 = (short)(0x800 - uVar3 >> 5);
          }
          iVar33 = iVar33 * 2;
          *(ushort *)((int)pUVar14 + iVar26) = uVar3 + sVar5;
          uVar3 = *(ushort *)((int)pUVar14 + iVar33 + iVar8);
          if (uVar13 < 0x1000000) {
            bVar2 = *buf;
            uVar13 = uVar13 << 8;
            buf = buf + 1;
            code = (uint)bVar2 | code << 8;
          }
          uVar24 = (uVar13 >> 0xb) * (uint)uVar3;
          if (uVar24 < code || uVar24 - code == 0) {
            sVar5 = -(uVar3 >> 5);
            code = code - uVar24;
            uVar24 = uVar13 - uVar24;
            iVar26 = iVar33 + 1;
          }
          else {
            sVar5 = (short)(0x800 - uVar3 >> 5);
            iVar26 = iVar33;
          }
          iVar26 = iVar26 * 2;
          *(ushort *)((int)pUVar14 + iVar33 + iVar8) = uVar3 + sVar5;
          uVar3 = *(ushort *)((int)pUVar14 + iVar26 + iVar8);
          if (uVar24 < 0x1000000) {
            bVar2 = *buf;
            uVar24 = uVar24 << 8;
            buf = buf + 1;
            code = (uint)bVar2 | code << 8;
          }
          uVar13 = (uVar24 >> 0xb) * (uint)uVar3;
          if (uVar13 < code || uVar13 - code == 0) {
            sVar5 = -(uVar3 >> 5);
            code = code - uVar13;
            iVar33 = iVar26 + 1;
            uVar13 = uVar24 - uVar13;
          }
          else {
            sVar5 = (short)(0x800 - uVar3 >> 5);
            iVar33 = iVar26;
          }
          iVar33 = iVar33 * 2;
          *(ushort *)((int)pUVar14 + iVar26 + iVar8) = uVar3 + sVar5;
          uVar3 = *(ushort *)((int)pUVar14 + iVar33 + iVar8);
          if (uVar13 < 0x1000000) {
            bVar2 = *buf;
            uVar13 = uVar13 << 8;
            buf = buf + 1;
            code = (uint)bVar2 | code << 8;
          }
          uVar24 = (uVar13 >> 0xb) * (uint)uVar3;
          if (uVar24 < code || uVar24 - code == 0) {
            sVar5 = -(uVar3 >> 5);
            code = code - uVar24;
            iVar26 = iVar33 + 1;
            uVar24 = uVar13 - uVar24;
          }
          else {
            sVar5 = (short)(0x800 - uVar3 >> 5);
            iVar26 = iVar33;
          }
          iVar26 = iVar26 * 2;
          *(ushort *)((int)pUVar14 + iVar33 + iVar8) = uVar3 + sVar5;
          uVar3 = *(ushort *)((int)pUVar14 + iVar26 + iVar8);
          if (uVar24 < 0x1000000) {
            bVar2 = *buf;
            uVar24 = uVar24 << 8;
            buf = buf + 1;
            code = (uint)bVar2 | code << 8;
          }
          range = (uVar24 >> 0xb) * (uint)uVar3;
          if (range < code || range - code == 0) {
            sVar5 = -(uVar3 >> 5);
            code = code - range;
            iVar33 = iVar26 + 1;
            range = uVar24 - range;
          }
          else {
            sVar5 = (short)(0x800 - uVar3 >> 5);
            iVar33 = iVar26;
          }
          pBVar34 = (Byte *)(iVar33 - 0x40);
          *(ushort *)((int)pUVar14 + iVar26 + iVar8) = uVar3 + sVar5;
          if ((Byte *)0x3 < pBVar34) {
            uVar13 = ((uint)pBVar34 >> 1) - 1;
            uVar24 = (uint)pBVar34 & 1 | 2;
            if (pBVar34 < (Byte *)0xe) {
              pBVar22 = (Byte *)(uVar24 << (uVar13 & 0xff));
              pBVar11 = pBVar22 + (0x2af - (int)pBVar34);
              mask = 1;
              i = 1;
              pBVar34 = pBVar22;
              do {
                uVar24 = i * 2;
                uVar3 = pUVar14[(int)(pBVar11 + i)];
                uVar9 = range;
                if (range < 0x1000000) {
                  bVar2 = *buf;
                  uVar9 = range << 8;
                  buf = buf + 1;
                  code = (uint)bVar2 | code << 8;
                }
                range = (uVar9 >> 0xb) * (uint)uVar3;
                sVar5 = (short)(0x800 - uVar3 >> 5);
                if (range < code || range - code == 0) {
                  pBVar34 = (Byte *)((uint)pBVar34 | mask);
                  code = code - range;
                  range = uVar9 - range;
                  uVar24 = uVar24 + 1;
                  sVar5 = -(uVar3 >> 5);
                }
                uVar13 = uVar13 - 1;
                pUVar14[(int)(pBVar11 + i)] = uVar3 + sVar5;
                mask = mask << 1;
                i = uVar24;
              } while (uVar13 != 0);
            }
            else {
              iVar8 = ((uint)pBVar34 >> 1) - 5;
              do {
                if (range < 0x1000000) {
                  bVar2 = *buf;
                  range = range << 8;
                  buf = buf + 1;
                  code = (uint)bVar2 | code << 8;
                }
                range = range >> 1;
                iVar8 = iVar8 + -1;
                uVar13 = (int)(code - range) >> 0x1f;
                code = (uVar13 & range) + (code - range);
                uVar24 = uVar13 + uVar24 * 2 + 1;
              } while (iVar8 != 0);
              pBVar34 = (Byte *)(uVar24 * 0x10);
              uVar3 = pUVar14[0x323];
              if (range < 0x1000000) {
                bVar2 = *buf;
                range = range << 8;
                buf = buf + 1;
                code = (uint)bVar2 | code * 0x100;
              }
              uVar24 = (range >> 0xb) * (uint)uVar3;
              if (uVar24 < code || uVar24 - code == 0) {
                sVar5 = -(uVar3 >> 5);
                code = code - uVar24;
                pBVar34 = (Byte *)((uint)pBVar34 | 1);
                uVar24 = range - uVar24;
                iVar8 = 6;
              }
              else {
                iVar8 = 4;
                sVar5 = (short)(0x800 - uVar3 >> 5);
              }
              pUVar14[0x323] = uVar3 + sVar5;
              iVar33 = iVar8 + 0x644;
              uVar3 = *(ushort *)((int)pUVar14 + iVar8 + 0x644);
              if (uVar24 < 0x1000000) {
                bVar2 = *buf;
                uVar24 = uVar24 << 8;
                buf = buf + 1;
                code = (uint)bVar2 | code << 8;
              }
              uVar13 = (uVar24 >> 0xb) * (uint)uVar3;
              if (uVar13 < code || uVar13 - code == 0) {
                sVar5 = -(uVar3 >> 5);
                code = code - uVar13;
                iVar8 = iVar8 + 1;
                pBVar34 = (Byte *)((uint)pBVar34 | 2);
                uVar13 = uVar24 - uVar13;
              }
              else {
                sVar5 = (short)(0x800 - uVar3 >> 5);
              }
              iVar26 = iVar8 * 2;
              *(ushort *)((int)pUVar14 + iVar33) = uVar3 + sVar5;
              uVar3 = pUVar14[iVar8 + 0x322];
              if (uVar13 < 0x1000000) {
                bVar2 = *buf;
                uVar13 = uVar13 << 8;
                buf = buf + 1;
                code = (uint)bVar2 | code << 8;
              }
              uVar24 = (uVar13 >> 0xb) * (uint)uVar3;
              if (uVar24 < code || uVar24 - code == 0) {
                sVar5 = -(uVar3 >> 5);
                code = code - uVar24;
                pBVar34 = (Byte *)((uint)pBVar34 | 4);
                uVar24 = uVar13 - uVar24;
                iVar26 = iVar26 + 1;
              }
              else {
                sVar5 = (short)(0x800 - uVar3 >> 5);
              }
              pUVar14[iVar8 + 0x322] = uVar3 + sVar5;
              uVar3 = pUVar14[iVar26 + 0x322];
              if (uVar24 < 0x1000000) {
                bVar2 = *buf;
                uVar24 = uVar24 << 8;
                buf = buf + 1;
                code = (uint)bVar2 | code << 8;
              }
              range = (uVar24 >> 0xb) * (uint)uVar3;
              if (range < code || range - code == 0) {
                sVar5 = -(uVar3 >> 5);
                code = code - range;
                pBVar34 = (Byte *)((uint)pBVar34 | 8);
                range = uVar24 - range;
              }
              else {
                sVar5 = (short)(0x800 - uVar3 >> 5);
              }
              pUVar14[iVar26 + 0x322] = uVar3 + sVar5;
              if (pBVar34 == (Byte *)0xffffffff) {
                local_84 = local_84 - 0xc;
                local_5c = local_5c + 0x112;
                break;
              }
            }
          }
          pBVar22 = pBVar17;
          if (pBVar17 == (Byte *)0x0) {
            pBVar22 = dic;
          }
          if (pBVar22 <= pBVar34) {
            return 1;
          }
          local_44 = local_50;
          if (local_84 < 0x13) {
            local_84 = 7;
          }
          else {
            local_84 = 10;
          }
          local_50 = local_58;
          local_58 = checkDicSize;
          checkDicSize = (UInt32)(pBVar34 + 1);
        }
        local_5c = local_5c + 2;
        if (dicBufSize == dicPos) {
          return 1;
        }
        uVar13 = dicBufSize - dicPos;
        if (local_5c <= dicBufSize - dicPos) {
          uVar13 = local_5c;
        }
        uVar9 = uVar21;
        if (checkDicSize <= dicPos) {
          uVar9 = 0;
        }
        uVar9 = (dicPos - checkDicSize) + uVar9;
        local_5c = local_5c - uVar13;
        dic = dic + uVar13;
        if (uVar21 < uVar13 + uVar9) {
          uVar24 = dicPos + uVar13;
          pBVar34 = pBVar16 + dicPos;
          do {
            pBVar22 = pBVar16 + uVar9;
            uVar9 = uVar9 + 1;
            if (uVar21 == uVar9) {
              uVar9 = 0;
            }
            pBVar11 = pBVar34 + 1;
            *pBVar34 = *pBVar22;
            pBVar34 = pBVar11;
          } while (pBVar16 + uVar24 != pBVar11);
        }
        else {
          iVar26 = dicPos + 0x10;
          iVar33 = uVar9 - dicPos;
          iVar28 = dicPos + iVar33;
          bVar36 = SBORROW4(iVar28,iVar26);
          iVar8 = iVar28 - iVar26;
          if (iVar28 < iVar26) {
            bVar36 = SBORROW4(dicPos,iVar26 + iVar33);
            iVar8 = dicPos - (iVar26 + iVar33);
          }
          uVar24 = dicPos + uVar13;
          pBVar34 = pBVar16 + dicPos;
          pBVar35 = pBVar34 + uVar13;
          pBVar22 = pBVar34 + 1;
          pBVar11 = pBVar35 + (1 - (int)pBVar22);
          if (pBVar11 < (Byte *)0x16 || iVar8 < 0 != bVar36) {
            pBVar11 = pBVar34 + iVar33;
            while( true ) {
              *pBVar34 = *pBVar11;
              if (pBVar35 == pBVar22) break;
              pBVar34 = pBVar22;
              pBVar11 = pBVar11 + 1;
              pBVar22 = pBVar22 + 1;
            }
          }
          else {
            pBVar29 = (Byte *)(-((uint)(pBVar16 + iVar28) & 7) & 0xf);
            if (pBVar11 <= pBVar29) {
              pBVar29 = pBVar11;
            }
            pBVar23 = pBVar34;
            if ((pBVar29 != (Byte *)0x0) &&
               (*pBVar34 = pBVar34[iVar33], pBVar23 = pBVar22, pBVar29 != (Byte *)0x1)) {
              pBVar23 = pBVar34 + 2;
              pBVar34[1] = pBVar22[iVar33];
              if (pBVar29 != (Byte *)0x2) {
                pBVar1 = pBVar23 + iVar33;
                pBVar23 = pBVar34 + 3;
                pBVar34[2] = *pBVar1;
                if (pBVar29 != (Byte *)0x3) {
                  pBVar1 = pBVar23 + iVar33;
                  pBVar23 = pBVar34 + 4;
                  pBVar34[3] = *pBVar1;
                  if (pBVar29 != (Byte *)0x4) {
                    pBVar1 = pBVar23 + iVar33;
                    pBVar23 = pBVar34 + 5;
                    pBVar34[4] = *pBVar1;
                    if (pBVar29 != (Byte *)0x5) {
                      pBVar1 = pBVar23 + iVar33;
                      pBVar23 = pBVar34 + 6;
                      pBVar34[5] = *pBVar1;
                      if (pBVar29 != (Byte *)0x6) {
                        pBVar1 = pBVar23 + iVar33;
                        pBVar23 = pBVar34 + 7;
                        pBVar34[6] = *pBVar1;
                        if (pBVar29 != (Byte *)0x7) {
                          pBVar1 = pBVar23 + iVar33;
                          pBVar23 = pBVar34 + 8;
                          pBVar34[7] = *pBVar1;
                          if (pBVar29 != (Byte *)0x8) {
                            pBVar1 = pBVar23 + iVar33;
                            pBVar23 = pBVar34 + 9;
                            pBVar34[8] = *pBVar1;
                            if (pBVar29 != (Byte *)0x9) {
                              pBVar1 = pBVar23 + iVar33;
                              pBVar23 = pBVar34 + 10;
                              pBVar34[9] = *pBVar1;
                              if (pBVar29 != (Byte *)0xa) {
                                pBVar1 = pBVar23 + iVar33;
                                pBVar23 = pBVar34 + 0xb;
                                pBVar34[10] = *pBVar1;
                                if (pBVar29 != (Byte *)0xb) {
                                  pBVar1 = pBVar23 + iVar33;
                                  pBVar23 = pBVar34 + 0xc;
                                  pBVar34[0xb] = *pBVar1;
                                  if (pBVar29 != (Byte *)0xc) {
                                    pBVar1 = pBVar23 + iVar33;
                                    pBVar23 = pBVar34 + 0xd;
                                    pBVar34[0xc] = *pBVar1;
                                    if (pBVar29 != (Byte *)0xd) {
                                      pBVar1 = pBVar23 + iVar33;
                                      pBVar23 = pBVar34 + 0xe;
                                      pBVar34[0xd] = *pBVar1;
                                      if (pBVar29 == (Byte *)0xf) {
                                        pBVar34[0xe] = pBVar23[iVar33];
                                        pBVar23 = pBVar34 + 0xf;
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
            uVar13 = (((int)pBVar11 - (int)pBVar29) - 0x10U >> 4) + 1;
            iVar8 = uVar13 * 0x10;
            if ((Byte *)0xe < pBVar35 + (-(int)pBVar29 - (int)pBVar22)) {
              puVar27 = (undefined8 *)(pBVar16 + (int)(pBVar29 + iVar28));
              puVar30 = (undefined8 *)(pBVar16 + (int)(pBVar29 + dicPos));
              uVar9 = 0;
              do {
                uVar38 = *puVar27;
                uVar39 = puVar27[1];
                uVar9 = uVar9 + 1;
                puVar27 = puVar27 + 2;
                *puVar30 = uVar38;
                puVar30[1] = uVar39;
                puVar30 = puVar30 + 2;
              } while (uVar9 < uVar13);
              pBVar23 = pBVar23 + iVar8;
              if (iVar8 - ((int)pBVar11 - (int)pBVar29) == 0) goto LAB_080cce18;
            }
            *pBVar23 = pBVar23[iVar33];
            if (pBVar35 != pBVar23 + 1) {
              pBVar23[1] = (pBVar23 + 1)[iVar33];
              if (pBVar35 != pBVar23 + 2) {
                pBVar23[2] = (pBVar23 + 2)[iVar33];
                if (pBVar35 != pBVar23 + 3) {
                  pBVar23[3] = (pBVar23 + 3)[iVar33];
                  if (pBVar35 != pBVar23 + 4) {
                    pBVar23[4] = (pBVar23 + 4)[iVar33];
                    if (pBVar35 != pBVar23 + 5) {
                      pBVar23[5] = (pBVar23 + 5)[iVar33];
                      if (pBVar35 != pBVar23 + 6) {
                        pBVar23[6] = (pBVar23 + 6)[iVar33];
                        if (pBVar35 != pBVar23 + 7) {
                          pBVar23[7] = (pBVar23 + 7)[iVar33];
                          if (pBVar35 != pBVar23 + 8) {
                            pBVar23[8] = (pBVar23 + 8)[iVar33];
                            if (pBVar35 != pBVar23 + 9) {
                              pBVar23[9] = (pBVar23 + 9)[iVar33];
                              if (pBVar35 != pBVar23 + 10) {
                                pBVar23[10] = (pBVar23 + 10)[iVar33];
                                if (pBVar35 != pBVar23 + 0xb) {
                                  pBVar23[0xb] = (pBVar23 + 0xb)[iVar33];
                                  if (pBVar35 != pBVar23 + 0xc) {
                                    pBVar23[0xc] = (pBVar23 + 0xc)[iVar33];
                                    if (pBVar35 != pBVar23 + 0xd) {
                                      pBVar23[0xd] = (pBVar23 + 0xd)[iVar33];
                                      if (pBVar35 != pBVar23 + 0xe) {
                                        pBVar23[0xe] = (pBVar23 + 0xe)[iVar33];
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
          }
        }
      }
      else {
        pUVar14[iVar8] = uVar3 + (short)(0x800 - uVar3 >> 5);
        pUVar20 = pUVar14 + 0x736;
        if (((uint)pBVar17 | (uint)dic) != 0) {
          uVar24 = uVar21;
          if (dicPos != 0) {
            uVar24 = dicPos;
          }
          pUVar20 = pUVar20 + ((((1 << (uVar12 & 0xff)) - 1U & (uint)dic) << (uVar15 & 0xff)) +
                              ((int)(uint)pBVar16[uVar24 - 1] >> (8 - uVar15 & 0xff))) * 0x300;
        }
        if (local_84 < 7) {
          if (local_84 < 4) {
            local_84 = 0;
          }
          else {
            local_84 = local_84 - 3;
          }
          symbol = 1;
          do {
            uVar24 = symbol * 2;
            pUVar25 = pUVar20 + symbol;
            uVar3 = pUVar20[symbol];
            if (uVar13 < 0x1000000) {
              bVar2 = *buf;
              uVar13 = uVar13 << 8;
              buf = buf + 1;
              code = (uint)bVar2 | code << 8;
            }
            uVar9 = (uVar13 >> 0xb) * (uint)uVar3;
            bVar36 = uVar9 - code != 0;
            uVar18 = uVar13 - uVar9;
            sVar5 = -(uVar3 >> 5);
            if (code <= uVar9 && bVar36) {
              sVar5 = (short)(0x800 - uVar3 >> 5);
            }
            symbol = uVar24;
            uVar13 = uVar9;
            if (code > uVar9 || !bVar36) {
              code = code - uVar9;
              symbol = uVar24 + 1;
              uVar13 = uVar18;
            }
            *pUVar25 = uVar3 + sVar5;
            range = uVar13;
          } while (symbol < 0x100);
        }
        else {
          uVar9 = 0x100;
          uVar24 = uVar21;
          if (checkDicSize <= dicPos) {
            uVar24 = 0;
          }
          if (local_84 < 10) {
            iVar8 = 3;
          }
          else {
            iVar8 = 6;
          }
          local_84 = local_84 - iVar8;
          symbol = 1;
          uVar24 = (uint)p->dic[uVar24 + (dicPos - checkDicSize)];
          range = uVar13;
          do {
            while( true ) {
              uVar24 = uVar24 << 1;
              uVar18 = uVar24 & uVar9;
              iVar8 = uVar9 + symbol + uVar18;
              uVar3 = pUVar20[iVar8];
              uVar13 = range;
              if (range < 0x1000000) {
                bVar2 = *buf;
                uVar13 = range << 8;
                buf = buf + 1;
                code = (uint)bVar2 | code << 8;
              }
              range = (uVar13 >> 0xb) * (uint)uVar3;
              uVar13 = uVar13 - range;
              if (code <= range && range - code != 0) break;
              symbol = symbol * 2 + 1;
              uVar9 = uVar9 & uVar18;
              pUVar20[iVar8] = uVar3 - (uVar3 >> 5);
              code = code - range;
              range = uVar13;
              if (0xff < symbol) goto LAB_080cce00;
            }
            symbol = symbol * 2;
            uVar9 = uVar9 & ~uVar18;
            pUVar20[iVar8] = uVar3 + (short)(0x800 - uVar3 >> 5);
          } while (symbol < 0x100);
        }
LAB_080cce00:
        pBVar16[dicPos] = (Byte)symbol;
        uVar24 = dicPos + 1;
        dic = dic + 1;
      }
LAB_080cce18:
      bVar37 = uVar24 <= dicBufSize;
      bVar36 = dicBufSize == uVar24;
      if (bVar37 && !bVar36) {
        bVar37 = buf <= bufLimit;
        bVar36 = bufLimit == buf;
      }
      dicPos = uVar24;
    } while (bVar37 && !bVar36);
    if (range < 0x1000000) {
      bVar2 = *buf;
      range = range << 8;
      buf = buf + 1;
      code = (uint)bVar2 | code << 8;
    }
    pBVar17 = (Byte *)(p->prop).dicSize;
    p->buf = buf;
    p->range = range;
    p->code = code;
    p->dicPos = dicPos;
    p->processedPos = (UInt32)dic;
    if (pBVar17 <= dic) {
      p->checkDicSize = (UInt32)pBVar17;
    }
    p->state = local_84;
    p->reps[0] = checkDicSize;
    p->reps[1] = local_58;
    p->reps[2] = local_50;
    p->reps[3] = local_44;
    p->remainLen = local_5c;
    if (local_5c - 1 < 0x111) {
      pBVar16 = p->dic;
      uVar7 = limit - dicPos;
      if (local_5c < limit - dicPos) {
        uVar7 = local_5c;
      }
      SVar10 = p->dicBufSize;
      if ((p->checkDicSize == 0) && ((uint)((int)pBVar17 - (int)dic) <= uVar7)) {
        p->checkDicSize = (UInt32)pBVar17;
      }
      local_5c = local_5c - uVar7;
      p->processedPos = (UInt32)(dic + uVar7);
      p->remainLen = local_5c;
      if (uVar7 != 0) {
        SVar32 = dicPos + uVar7;
        pBVar17 = pBVar16 + dicPos;
        do {
          iVar8 = dicPos - checkDicSize;
          SVar19 = SVar10;
          if (checkDicSize <= dicPos) {
            SVar19 = 0;
          }
          dicPos = dicPos + 1;
          *pBVar17 = pBVar16[iVar8 + SVar19];
          pBVar17 = pBVar17 + 1;
        } while (dicPos != SVar32);
        local_5c = p->remainLen;
      }
      p->dicPos = dicPos;
    }
    if (((limit <= dicPos) || (buf = p->buf, bufLimit <= buf)) || (0x111 < local_5c)) {
      if (0x112 < local_5c) {
        p->remainLen = 0x112;
      }
      return 0;
    }
  } while( true );
}


