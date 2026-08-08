/*
 * Ghidra decompilation
 *
 * Function : _ZN6Unpack14ProcessDecodedER16UnpackThreadData
 * Address  : 080fe72c
 * Program  : drastic
 */


/* DWARF original prototype: bool ProcessDecoded(Unpack * this, UnpackThreadData * D) */

bool __thiscall Unpack::ProcessDecoded(Unpack *this,UnpackThreadData *D)

{
  UnpackDecodedItem *pUVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  uint Distance;
  int iVar5;
  UNP_DEC_TYPE UVar6;
  uint I;
  size_t SrcPtr;
  undefined8 *puVar7;
  size_t SrcPtr_1;
  uint uVar8;
  uint uVar9;
  uint I_1;
  uint uVar10;
  uint uVar11;
  undefined8 *puVar12;
  byte *Dest;
  size_t sVar13;
  byte *Dest_1;
  int iVar14;
  uint uVar15;
  undefined8 *puVar16;
  UnpackDecodedItem *pUVar17;
  UnpackDecodedItem *Item;
  undefined8 *puVar18;
  byte *Src;
  byte *Src_1;
  UnpackDecodedItem *Border;
  UnpackDecodedItem *pUVar19;
  int iVar20;
  bool bVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  uint local_54;
  uint local_50;
  uint local_4c;
  UnpackFilter Filter;
  
  iVar2 = __stack_chk_guard;
  pUVar17 = D->Decoded;
  pUVar19 = pUVar17 + D->DecodedSize;
  if (pUVar17 < pUVar19) {
    do {
      while( true ) {
        uVar8 = this->UnpPtr & this->MaxWinMask;
        this->UnpPtr = uVar8;
        if (uVar8 != this->WriteBorder && (this->MaxWinMask & this->WriteBorder - uVar8) < 0x1004) {
          UnpWriteBuf(this);
          iVar5 = *(int *)((int)&this->WrittenFileSize + 4);
          iVar14 = *(int *)((int)&this->DestUnpSize + 4);
          bVar21 = *(uint *)&this->DestUnpSize < *(uint *)&this->WrittenFileSize;
          if ((int)(iVar14 - (iVar5 + (uint)bVar21)) < 0 !=
              (SBORROW4(iVar14,iVar5) != SBORROW4(iVar14 - iVar5,(uint)bVar21))) {
            bVar21 = false;
            goto LAB_080fe83c;
          }
        }
        UVar6 = pUVar17->Type;
        if (UVar6 != UNPDT_LITERAL) break;
        pbVar3 = &pUVar17->field_0x7;
        I = 0;
        do {
          uVar8 = this->UnpPtr;
          I = I + 1;
          this->UnpPtr = uVar8 + 1;
          pbVar3 = pbVar3 + 1;
          this->Window[this->MaxWinMask & uVar8] = *pbVar3;
        } while (I <= pUVar17->Length);
joined_r0x080fec70:
        pUVar17 = pUVar17 + 1;
        if (pUVar19 <= pUVar17) goto LAB_080fe838;
      }
      if (UVar6 == UNPDT_MATCH) {
        local_4c = (uint)pUVar17->Length;
        uVar4 = this->OldDist[0];
        uVar10 = this->OldDist[1];
        uVar9 = this->OldDist[2];
        this->OldDist[0] = (uint)pUVar17->field_2;
        sVar13 = this->MaxWinSize;
        this->OldDist[1] = uVar4;
        this->OldDist[2] = uVar10;
        uVar15 = this->UnpPtr;
        this->OldDist[3] = uVar9;
        this->LastLength = local_4c;
        uVar4 = (pUVar17->field_2).Distance;
        uVar11 = sVar13 - 0x1001;
        uVar8 = uVar15 - uVar4;
        if (uVar8 < uVar11 && uVar15 < uVar11) {
          this->UnpPtr = local_4c + uVar15;
          puVar18 = (undefined8 *)(this->Window + uVar8);
          puVar12 = (undefined8 *)(this->Window + uVar15);
          if (7 < local_4c) {
            local_4c = local_4c - 8;
            local_50 = local_4c >> 3;
            iVar20 = uVar15 + 0x80;
            iVar14 = iVar20 - uVar4;
            bVar21 = SBORROW4(uVar8,iVar20);
            iVar5 = uVar8 - iVar20;
            if ((int)uVar8 < iVar20) {
              bVar21 = SBORROW4(uVar15,iVar14);
              iVar5 = uVar15 - iVar14;
            }
            local_54 = local_50 + 1;
            uVar8 = local_4c;
            puVar7 = puVar12;
            puVar16 = puVar18;
            if (local_54 < 2 || iVar5 < 0 != bVar21) {
              while( true ) {
                *(byte *)puVar7 = *(byte *)puVar16;
                *(byte *)((int)puVar7 + 1) = *(byte *)((int)puVar16 + 1);
                *(byte *)((int)puVar7 + 2) = *(byte *)((int)puVar16 + 2);
                *(byte *)((int)puVar7 + 3) = *(byte *)((int)puVar16 + 3);
                *(byte *)((int)puVar7 + 4) = *(byte *)((int)puVar16 + 4);
                *(byte *)((int)puVar7 + 5) = *(byte *)((int)puVar16 + 5);
                *(byte *)((int)puVar7 + 6) = *(byte *)((int)puVar16 + 6);
                *(byte *)((int)puVar7 + 7) = *(byte *)((int)puVar16 + 7);
                if (uVar8 < 8) break;
                uVar8 = uVar8 - 8;
                puVar7 = puVar7 + 1;
                puVar16 = puVar16 + 1;
              }
            }
            else {
              uVar8 = (local_50 - 1 >> 1) + 1;
              puVar7 = puVar18;
              puVar16 = puVar12;
              if (7 < local_4c) {
                uVar11 = 0;
                do {
                  uVar22 = *puVar7;
                  uVar23 = puVar7[1];
                  uVar11 = uVar11 + 1;
                  puVar7 = puVar7 + 2;
                  *puVar16 = uVar22;
                  puVar16[1] = uVar23;
                  puVar16 = puVar16 + 2;
                } while (uVar11 < uVar8);
                puVar7 = puVar18 + uVar8 * 2;
                puVar16 = puVar12 + uVar8 * 2;
                if (uVar8 * 2 - local_54 == 0) goto LAB_080fea5c;
              }
LAB_080fea1c:
              *(byte *)puVar16 = *(byte *)puVar7;
              *(byte *)((int)puVar16 + 1) = *(byte *)((int)puVar7 + 1);
              *(byte *)((int)puVar16 + 2) = *(byte *)((int)puVar7 + 2);
              *(byte *)((int)puVar16 + 3) = *(byte *)((int)puVar7 + 3);
              *(byte *)((int)puVar16 + 4) = *(byte *)((int)puVar7 + 4);
              *(byte *)((int)puVar16 + 5) = *(byte *)((int)puVar7 + 5);
              *(byte *)((int)puVar16 + 6) = *(byte *)((int)puVar7 + 6);
              *(byte *)((int)puVar16 + 7) = *(byte *)((int)puVar7 + 7);
            }
LAB_080fea5c:
            local_4c = local_4c + local_50 * -8;
            puVar18 = puVar18 + local_54;
            puVar12 = puVar12 + local_54;
          }
LAB_080fea74:
          if (((((local_4c != 0) && (*(byte *)puVar12 = *(byte *)puVar18, local_4c != 1)) &&
               ((*(byte *)((int)puVar12 + 1) = *(byte *)((int)puVar18 + 1), local_4c != 2 &&
                ((*(byte *)((int)puVar12 + 2) = *(byte *)((int)puVar18 + 2), local_4c != 3 &&
                 (*(byte *)((int)puVar12 + 3) = *(byte *)((int)puVar18 + 3), local_4c != 4)))))) &&
              (*(byte *)((int)puVar12 + 4) = *(byte *)((int)puVar18 + 4), local_4c != 5)) &&
             (*(byte *)((int)puVar12 + 5) = *(byte *)((int)puVar18 + 5), local_4c == 7)) {
            *(byte *)((int)puVar12 + 6) = *(byte *)((int)puVar18 + 6);
          }
        }
        else if (local_4c != 0) {
          uVar11 = this->MaxWinMask;
          local_4c = local_4c + uVar8;
          do {
            uVar11 = uVar11 & uVar8;
            uVar8 = uVar8 + 1;
            this->Window[uVar15] = this->Window[uVar11];
            uVar11 = this->MaxWinMask;
            uVar15 = this->UnpPtr + 1 & uVar11;
            this->UnpPtr = uVar15;
          } while (uVar8 != local_4c);
        }
        goto joined_r0x080fec70;
      }
      if (UVar6 == UNPDT_REP) {
        uVar9 = (pUVar17->field_2).Distance;
        uVar4 = this->OldDist[uVar9];
        if (((uVar9 != 0) && (this->OldDist[uVar9] = this->OldDist[uVar9 - 1], uVar9 != 1)) &&
           (this->OldDist[uVar9 - 1] = this->OldDist[uVar9 - 2], uVar9 != 2)) {
          uVar10 = uVar9;
          if (uVar9 != 3) {
            uVar10 = this->OldDist[uVar9 - 4];
          }
          this->OldDist[uVar9 - 2] = this->OldDist[uVar9 - 3];
          if (uVar9 != 3) {
            this->OldDist[uVar9 - 3] = uVar10;
          }
        }
        uVar15 = this->UnpPtr;
        local_4c = (uint)pUVar17->Length;
        this->OldDist[0] = uVar4;
        uVar11 = this->MaxWinSize - 0x1001;
        uVar8 = uVar15 - uVar4;
        this->LastLength = local_4c;
        if (uVar8 < uVar11 && uVar15 < uVar11) {
          this->UnpPtr = uVar15 + local_4c;
          puVar18 = (undefined8 *)(this->Window + uVar8);
          puVar12 = (undefined8 *)(this->Window + uVar15);
          if (local_4c < 8) goto LAB_080fea74;
          local_4c = local_4c - 8;
          local_50 = local_4c >> 3;
          iVar14 = uVar15 + 0x80;
          bVar21 = SBORROW4(uVar8,iVar14);
          iVar5 = uVar8 - iVar14;
          if ((int)uVar8 < iVar14) {
            bVar21 = SBORROW4(uVar15,iVar14 - uVar4);
            iVar5 = uVar15 - (iVar14 - uVar4);
          }
          local_54 = local_50 + 1;
          uVar8 = local_4c;
          puVar7 = puVar12;
          puVar16 = puVar18;
          if (1 < local_54 && iVar5 < 0 == bVar21) {
            uVar8 = (local_50 - 1 >> 1) + 1;
            puVar7 = puVar18;
            puVar16 = puVar12;
            if (7 < local_4c) {
              uVar11 = 0;
              do {
                uVar22 = *puVar7;
                uVar23 = puVar7[1];
                uVar11 = uVar11 + 1;
                puVar7 = puVar7 + 2;
                *puVar16 = uVar22;
                puVar16[1] = uVar23;
                puVar16 = puVar16 + 2;
              } while (uVar11 < uVar8);
              puVar7 = puVar18 + uVar8 * 2;
              puVar16 = puVar12 + uVar8 * 2;
              if (local_54 == uVar8 * 2) goto LAB_080fea5c;
            }
            goto LAB_080fea1c;
          }
          while( true ) {
            *(byte *)puVar7 = *(byte *)puVar16;
            *(byte *)((int)puVar7 + 1) = *(byte *)((int)puVar16 + 1);
            *(byte *)((int)puVar7 + 2) = *(byte *)((int)puVar16 + 2);
            *(byte *)((int)puVar7 + 3) = *(byte *)((int)puVar16 + 3);
            *(byte *)((int)puVar7 + 4) = *(byte *)((int)puVar16 + 4);
            *(byte *)((int)puVar7 + 5) = *(byte *)((int)puVar16 + 5);
            *(byte *)((int)puVar7 + 6) = *(byte *)((int)puVar16 + 6);
            *(byte *)((int)puVar7 + 7) = *(byte *)((int)puVar16 + 7);
            if (uVar8 < 8) break;
            uVar8 = uVar8 - 8;
            puVar7 = puVar7 + 1;
            puVar16 = puVar16 + 1;
          }
          goto LAB_080fea5c;
        }
        if (local_4c != 0) {
          uVar11 = this->MaxWinMask;
          local_4c = local_4c + uVar8;
          do {
            uVar11 = uVar11 & uVar8;
            uVar8 = uVar8 + 1;
            this->Window[uVar15] = this->Window[uVar11];
            uVar11 = this->MaxWinMask;
            uVar15 = this->UnpPtr + 1 & uVar11;
            this->UnpPtr = uVar15;
          } while (uVar8 != local_4c);
        }
        goto joined_r0x080fec70;
      }
      if (UVar6 == UNPDT_FULLREP) {
        if (this->LastLength != 0) {
          CopyString(this,this->LastLength,this->OldDist[0]);
        }
        goto joined_r0x080fec70;
      }
      if (UVar6 != UNPDT_FILTER) goto joined_r0x080fec70;
      Filter.BlockStart = (pUVar17->field_2).Distance;
      Filter.BlockLength = pUVar17[1].field_2.Distance;
      Filter.Type = (byte)pUVar17->Length;
      pUVar1 = pUVar17 + 2;
      Filter.Width = pUVar17[2].field_2.Distance;
      Filter.Channels = (byte)pUVar17[1].Length;
      pUVar17 = pUVar17 + 3;
      Filter.PosR = (byte)pUVar1->Length;
      AddFilter(this,&Filter);
    } while (pUVar17 < pUVar19);
  }
LAB_080fe838:
  bVar21 = true;
LAB_080fe83c:
  if (iVar2 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar21;
}


