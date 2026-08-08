/*
 * Ghidra decompilation
 *
 * Function : Bcj2_Decode
 * Address  : 08107598
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int Bcj2_Decode(Byte *buf0,SizeT size0,Byte *buf1,SizeT size1,SizeT size2,Byte *buf3,SizeT size3,
               Byte *outBuf,SizeT outSize)

{
  undefined auVar1 [16];
  byte bVar2;
  SizeT SVar3;
  Byte b;
  uint uVar4;
  UInt32 dest;
  SizeT limit;
  UInt32 ttt;
  undefined8 *puVar5;
  Byte *pBVar6;
  SizeT SVar7;
  uint uVar8;
  UInt32 bound;
  byte *pbVar9;
  byte *pbVar10;
  uint uVar11;
  uint uVar12;
  Byte b_1;
  ushort uVar13;
  ushort uVar14;
  UInt16 *prob;
  int iVar15;
  Byte *buffer;
  Byte *v;
  Byte *bufferLim;
  byte *local_244;
  SizeT local_23c;
  byte *local_238;
  UInt16 p [258];
  int local_2c;
  
  auVar1 = SIMDExpandImmediate(0,10,4);
  local_244 = buffer;
  puVar5 = (undefined8 *)p;
  local_2c = __stack_chk_guard;
  do {
    *puVar5 = auVar1._0_8_;
    puVar5[1] = auVar1._8_8_;
    puVar5 = puVar5 + 2;
  } while (puVar5 != (undefined8 *)(p + 0x100));
  pBVar6 = buf3 + size3;
  p[256] = 0x400;
  p[257] = 0x400;
  if ((((buf3 == pBVar6) || (pBVar6 == buf3 + 1)) || (pBVar6 == buf3 + 2)) ||
     ((pBVar6 == buf3 + 3 || (pBVar6 == buf3 + 4)))) {
LAB_081078dc:
    buf0 = (Byte *)0x1;
  }
  else {
    bufferLim = buf3 + 5;
    if (outSize == 0) {
      buf0 = (Byte *)0x0;
    }
    uVar12 = CONCAT31(CONCAT21(CONCAT11(buf3[1],buf3[2]),buf3[3]),buf3[4]);
    if (outSize != 0) {
      uVar4 = 0;
      SVar7 = 0;
      iVar15 = 0;
      uVar11 = 0xffffffff;
      local_23c = size1;
      local_238 = buf1;
LAB_081076a8:
      limit = size0 - iVar15;
      if (outSize - SVar7 <= size0 - iVar15) {
        limit = outSize - SVar7;
      }
      if (limit == 0) {
        buf0 = (Byte *)(SVar7 - outSize);
        if (buf0 != (Byte *)0x0) {
          buf0 = (Byte *)0x1;
        }
        goto LAB_081078e0;
      }
      bVar2 = buf0[iVar15];
      pbVar10 = buf0 + iVar15;
      pbVar9 = outBuf + SVar7;
      outBuf[SVar7] = bVar2;
      uVar14 = (ushort)uVar4;
      SVar3 = SVar7;
      while( true ) {
        uVar8 = (uint)bVar2;
        SVar7 = SVar3 + 1;
        if ((uVar8 & 0xfe) == 0xe8) break;
        uVar14 = (ushort)uVar4;
        uVar13 = (ushort)bVar2;
        if ((uVar4 == 0xf) && ((uVar8 & 0xf0) == 0x80)) break;
        limit = limit - 1;
        iVar15 = iVar15 + 1;
        if (limit == 0) goto LAB_08107914;
        pbVar10 = pbVar10 + 1;
        bVar2 = *pbVar10;
        pbVar9 = pbVar9 + 1;
        *pbVar9 = bVar2;
        uVar4 = uVar8;
        uVar14 = uVar13;
        SVar3 = SVar7;
      }
      if (outSize != SVar7) {
        uVar4 = (uint)buf0[iVar15];
        iVar15 = iVar15 + 1;
        if (uVar4 == 0xe8) {
          prob = p + (short)uVar14;
        }
        else {
          prob = p + 0x100;
          if (uVar4 != 0xe9) {
            prob = p + 0x101;
          }
        }
        uVar14 = *prob;
        uVar8 = (uVar11 >> 0xb) * (uint)uVar14;
        if (uVar12 < uVar8) {
          *prob = uVar14 + (short)(0x800 - uVar14 >> 5);
          uVar11 = uVar8;
          if (uVar8 < 0x1000000) {
            if (bufferLim == pBVar6) goto LAB_081078dc;
            bVar2 = *bufferLim;
            bufferLim = bufferLim + 1;
            uVar12 = (uint)bVar2 | uVar12 << 8;
            uVar11 = uVar8 * 0x100;
          }
          goto LAB_081076a8;
        }
        uVar11 = uVar11 - uVar8;
        uVar12 = uVar12 - uVar8;
        *prob = uVar14 - (uVar14 >> 5);
        if (uVar11 < 0x1000000) {
          if (bufferLim == pBVar6) goto LAB_081078dc;
          bVar2 = *bufferLim;
          uVar11 = uVar11 * 0x100;
          bufferLim = bufferLim + 1;
          uVar12 = (uint)bVar2 | uVar12 * 0x100;
        }
        if (uVar4 == 0xe8) {
          if (local_23c < 4) goto LAB_081078dc;
          local_23c = local_23c - 4;
          pbVar10 = local_238;
          local_238 = local_238 + 4;
        }
        else {
          if (size2 < 4) goto LAB_081078dc;
          size2 = size2 - 4;
          pbVar10 = local_244;
          local_244 = local_244 + 4;
        }
        uVar8 = ((uint)pbVar10[1] << 0x10 | (uint)*pbVar10 << 0x18 | (uint)pbVar10[3] |
                (uint)pbVar10[2] << 8) + (-4 - SVar7);
        outBuf[SVar7] = (Byte)uVar8;
        SVar7 = outSize;
        if (outSize != SVar3 + 2) {
          outBuf[SVar3 + 2] = (Byte)(uVar8 >> 8);
          if (outSize == SVar3 + 3) goto LAB_08107914;
          outBuf[SVar3 + 3] = (Byte)(uVar8 >> 0x10);
          if (outSize != SVar3 + 4) {
            uVar4 = uVar8 >> 0x18;
            SVar7 = SVar3 + 5;
            outBuf[SVar3 + 4] = (Byte)(uVar8 >> 0x18);
            goto LAB_081076a8;
          }
        }
      }
LAB_08107914:
      buf0 = (Byte *)(SVar7 - outSize);
      if (buf0 != (Byte *)0x0) {
        buf0 = (Byte *)0x1;
      }
    }
  }
LAB_081078e0:
  if (local_2c != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (int)buf0;
}


