/*
 * Ghidra decompilation
 *
 * Function : LzmaDec_TryDummy
 * Address  : 080cc5cc
 * Program  : drastic
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Unknown calling convention */
/* Local variable bufLimit:Byte *[r2:4] conflicts with parameter, skipped. */

ELzmaDummy LzmaDec_TryDummy(CLzmaDec *p,Byte *buf,SizeT inSize)

{
  int iVar1;
  byte bVar2;
  ELzmaDummy res;
  byte *pbVar3;
  uint ttt;
  uint uVar4;
  UInt32 bound;
  UInt16 *pUVar5;
  UInt16 *probs;
  uint uVar6;
  uint uVar7;
  uint state;
  uint matchByte;
  UInt16 *probLen;
  int numDirectBits;
  uint uVar8;
  uint posState;
  uint bit;
  uint uVar9;
  UInt16 *pUVar10;
  uint limit;
  int iVar11;
  uint offset;
  uint uVar12;
  UInt32 code;
  uint uVar13;
  UInt32 range;
  SizeT SVar14;
  SizeT SVar15;
  uint symbol;
  
  pbVar3 = buf + inSize;
  pUVar5 = p->probs;
  uVar6 = p->processedPos;
  uVar12 = p->code;
  uVar7 = p->state;
  uVar13 = p->range;
  uVar8 = uVar6 & ~(-1 << ((p->prop).pb & 0xff));
  if (uVar13 < 0x1000000) {
    if (pbVar3 <= buf) {
      return DUMMY_ERROR;
    }
    bVar2 = *buf;
    uVar13 = uVar13 << 8;
    buf = buf + 1;
    uVar12 = (uint)bVar2 | uVar12 << 8;
  }
  uVar4 = (uVar13 >> 0xb) * (uint)pUVar5[uVar8 + uVar7 * 0x10];
  if (uVar12 < uVar4) {
    pUVar5 = pUVar5 + 0x736;
    if ((uVar6 | p->checkDicSize) != 0) {
      uVar13 = (p->prop).lc;
      SVar14 = p->dicPos;
      if (SVar14 == 0) {
        SVar15 = p->dicBufSize;
      }
      else {
        SVar15 = SVar14 - 1;
      }
      if (SVar14 == 0) {
        SVar15 = SVar15 - 1;
      }
      pUVar5 = pUVar5 + (((uVar6 & ~(-1 << ((p->prop).lp & 0xff))) << (uVar13 & 0xff)) +
                        ((int)(uint)p->dic[SVar15] >> (8 - uVar13 & 0xff))) * 0x300;
    }
    if (uVar7 < 7) {
      symbol = 1;
      do {
        uVar13 = symbol * 2;
        if (uVar4 < 0x1000000) {
          uVar4 = uVar4 << 8;
          if (pbVar3 <= buf) {
            return DUMMY_ERROR;
          }
          bVar2 = *buf;
          buf = buf + 1;
          uVar12 = (uint)bVar2 | uVar12 << 8;
        }
        uVar6 = (uVar4 >> 0xb) * (uint)pUVar5[symbol];
        uVar7 = uVar4 - uVar6;
        symbol = uVar13;
        uVar4 = uVar6;
        if (uVar6 <= uVar12) {
          uVar12 = uVar12 - uVar6;
          symbol = uVar13 + 1;
          uVar4 = uVar7;
        }
      } while (symbol < 0x100);
    }
    else {
      if (p->dicPos < p->reps[0]) {
        SVar14 = p->dicBufSize;
      }
      else {
        SVar14 = 0;
      }
      uVar13 = 1;
      uVar6 = (uint)p->dic[(p->dicPos - p->reps[0]) + SVar14];
      uVar7 = 0x100;
      do {
        uVar6 = uVar6 << 1;
        uVar9 = uVar7 & uVar6;
        uVar8 = uVar4;
        if (uVar4 < 0x1000000) {
          uVar8 = uVar4 << 8;
          if (pbVar3 <= buf) {
            return DUMMY_ERROR;
          }
          bVar2 = *buf;
          buf = buf + 1;
          uVar12 = (uint)bVar2 | uVar12 << 8;
        }
        uVar4 = (uVar8 >> 0xb) * (uint)pUVar5[uVar7 + uVar13 + uVar9];
        if (uVar12 < uVar4) {
          uVar13 = uVar13 << 1;
          uVar9 = ~uVar9;
        }
        else {
          uVar13 = uVar13 * 2 + 1;
          uVar12 = uVar12 - uVar4;
          uVar4 = uVar8 - uVar4;
        }
        uVar7 = uVar7 & uVar9;
      } while (uVar13 < 0x100);
    }
    res = DUMMY_LIT;
  }
  else {
    uVar13 = uVar13 - uVar4;
    uVar12 = uVar12 - uVar4;
    if (uVar13 < 0x1000000) {
      if (pbVar3 <= buf) {
        return DUMMY_ERROR;
      }
      bVar2 = *buf;
      uVar13 = uVar13 * 0x100;
      buf = buf + 1;
      uVar12 = (uint)bVar2 | uVar12 * 0x100;
    }
    uVar6 = (uVar13 >> 0xb) * (uint)pUVar5[uVar7 + 0xc0];
    if (uVar12 < uVar6) {
      res = DUMMY_MATCH;
      probLen = pUVar5 + 0x332;
      uVar13 = 0;
    }
    else {
      uVar13 = uVar13 - uVar6;
      uVar12 = uVar12 - uVar6;
      if (uVar13 < 0x1000000) {
        if (pbVar3 <= buf) {
          return DUMMY_ERROR;
        }
        bVar2 = *buf;
        uVar13 = uVar13 * 0x100;
        buf = buf + 1;
        uVar12 = (uint)bVar2 | uVar12 * 0x100;
      }
      uVar6 = (uVar13 >> 0xb) * (uint)pUVar5[uVar7 + 0xcc];
      if (uVar12 < uVar6) {
        if (uVar6 < 0x1000000) {
          if (pbVar3 <= buf) {
            return DUMMY_ERROR;
          }
          bVar2 = *buf;
          uVar6 = uVar6 * 0x100;
          buf = buf + 1;
          uVar12 = (uint)bVar2 | uVar12 << 8;
        }
        uVar13 = (uVar6 >> 0xb) * (uint)pUVar5[uVar8 + (uVar7 + 0xf) * 0x10];
        if (uVar12 < uVar13) {
          if (pbVar3 <= buf && uVar13 < 0x1000000) {
            return DUMMY_ERROR;
          }
          return DUMMY_REP;
        }
        uVar6 = uVar6 - uVar13;
        uVar12 = uVar12 - uVar13;
      }
      else {
        uVar13 = uVar13 - uVar6;
        uVar12 = uVar12 - uVar6;
        if (uVar13 < 0x1000000) {
          if (pbVar3 <= buf) {
            return DUMMY_ERROR;
          }
          bVar2 = *buf;
          uVar13 = uVar13 * 0x100;
          buf = buf + 1;
          uVar12 = (uint)bVar2 | uVar12 * 0x100;
        }
        uVar6 = (uVar13 >> 0xb) * (uint)pUVar5[uVar7 + 0xd8];
        if (uVar6 <= uVar12) {
          uVar13 = uVar13 - uVar6;
          uVar12 = uVar12 - uVar6;
          if (uVar13 < 0x1000000) {
            if (pbVar3 <= buf) {
              return DUMMY_ERROR;
            }
            bVar2 = *buf;
            uVar13 = uVar13 * 0x100;
            buf = buf + 1;
            uVar12 = (uint)bVar2 | uVar12 * 0x100;
          }
          uVar6 = (uVar13 >> 0xb) * (uint)pUVar5[uVar7 + 0xe4];
          if (uVar6 <= uVar12) {
            uVar12 = uVar12 - uVar6;
            uVar6 = uVar13 - uVar6;
          }
        }
      }
      res = DUMMY_REP;
      probLen = pUVar5 + 0x534;
      uVar13 = 0xc;
    }
    if (uVar6 < 0x1000000) {
      if (pbVar3 <= buf) {
        return DUMMY_ERROR;
      }
      bVar2 = *buf;
      uVar6 = uVar6 << 8;
      buf = buf + 1;
      uVar12 = (uint)bVar2 | uVar12 << 8;
    }
    uVar4 = (uVar6 >> 0xb) * (uint)*probLen;
    if (uVar12 < uVar4) {
      offset = 0;
      limit = 8;
      pUVar10 = probLen + uVar8 * 8 + 2;
    }
    else {
      uVar6 = uVar6 - uVar4;
      uVar12 = uVar12 - uVar4;
      if (uVar6 < 0x1000000) {
        if (pbVar3 <= buf) {
          return DUMMY_ERROR;
        }
        bVar2 = *buf;
        uVar6 = uVar6 * 0x100;
        buf = buf + 1;
        uVar12 = (uint)bVar2 | uVar12 * 0x100;
      }
      uVar4 = (uVar6 >> 0xb) * (uint)probLen[1];
      if (uVar12 < uVar4) {
        limit = 8;
        pUVar10 = probLen + uVar8 * 8 + 0x82;
        offset = limit;
      }
      else {
        uVar12 = uVar12 - uVar4;
        pUVar10 = probLen + 0x102;
        uVar4 = uVar6 - uVar4;
        offset = 0x10;
        limit = 0x100;
      }
    }
    uVar6 = 1;
    do {
      uVar7 = uVar6 * 2;
      if (uVar4 < 0x1000000) {
        uVar4 = uVar4 << 8;
        if (pbVar3 <= buf) {
          return DUMMY_ERROR;
        }
        bVar2 = *buf;
        buf = buf + 1;
        uVar12 = (uint)bVar2 | uVar12 << 8;
      }
      uVar9 = (uVar4 >> 0xb) * (uint)pUVar10[uVar6];
      uVar8 = uVar4 - uVar9;
      uVar6 = uVar7;
      uVar4 = uVar9;
      if (uVar9 <= uVar12) {
        uVar12 = uVar12 - uVar9;
        uVar6 = uVar7 + 1;
        uVar4 = uVar8;
      }
    } while (uVar6 < limit);
    if (uVar13 < 4) {
      uVar6 = (offset - limit) + uVar6;
      if (uVar6 < 4) {
        iVar11 = uVar6 * 0x80 + 0x360;
      }
      else {
        iVar11 = 0x4e0;
      }
      uVar13 = 1;
      do {
        uVar13 = uVar13 * 2;
        if (uVar4 < 0x1000000) {
          uVar4 = uVar4 << 8;
          if (pbVar3 <= buf) {
            return DUMMY_ERROR;
          }
          bVar2 = *buf;
          buf = buf + 1;
          uVar12 = (uint)bVar2 | uVar12 << 8;
        }
        uVar7 = (uVar4 >> 0xb) * (uint)*(ushort *)((int)pUVar5 + iVar11 + uVar13);
        uVar6 = uVar4 - uVar7;
        uVar4 = uVar7;
        if (uVar7 <= uVar12) {
          uVar12 = uVar12 - uVar7;
          uVar13 = uVar13 + 1;
          uVar4 = uVar6;
        }
      } while (uVar13 < 0x40);
      uVar13 = uVar13 - 0x40;
      if (3 < uVar13) {
        uVar6 = (uVar13 >> 1) - 1;
        if (uVar13 < 0xe) {
          pUVar5 = pUVar5 + (0x2af - uVar13) + ((uVar13 & 1 | 2) << (uVar6 & 0xff));
        }
        else {
          iVar11 = (uVar13 >> 1) - 5;
          do {
            if (uVar4 < 0x1000000) {
              uVar4 = uVar4 << 8;
              if (pbVar3 <= buf) {
                return DUMMY_ERROR;
              }
              bVar2 = *buf;
              buf = buf + 1;
              uVar12 = (uint)bVar2 | uVar12 << 8;
            }
            uVar4 = uVar4 >> 1;
            iVar11 = iVar11 + -1;
            uVar12 = uVar12 - (0xffffffffU - ((int)(uVar12 - uVar4) >> 0x1f) & uVar4);
          } while (iVar11 != 0);
          uVar6 = 4;
          pUVar5 = pUVar5 + 0x322;
        }
        iVar11 = 1;
        do {
          iVar1 = iVar11 * 2;
          if (uVar4 < 0x1000000) {
            uVar4 = uVar4 << 8;
            if (pbVar3 <= buf) {
              return DUMMY_ERROR;
            }
            bVar2 = *buf;
            buf = buf + 1;
            uVar12 = (uint)bVar2 | uVar12 << 8;
          }
          uVar7 = (uVar4 >> 0xb) * (uint)pUVar5[iVar11];
          uVar13 = uVar4 - uVar7;
          iVar11 = iVar1;
          uVar4 = uVar7;
          if (uVar7 <= uVar12) {
            uVar12 = uVar12 - uVar7;
            iVar11 = iVar1 + 1;
            uVar4 = uVar13;
          }
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
    }
  }
  if (uVar4 < 0x1000000 && pbVar3 <= buf) {
    res = DUMMY_ERROR;
  }
  return res;
}


