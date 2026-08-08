/*
 * Ghidra decompilation
 *
 * Function : _ZN11PPM_CONTEXT7rescaleEP8ModelPPM
 * Address  : 080ee2cc
 * Program  : drastic
 */


/* WARNING: Type propagation algorithm not settling */
/* DWARF original prototype: void rescale(PPM_CONTEXT * this, ModelPPM * Model) */

void __thiscall PPM_CONTEXT::rescale(PPM_CONTEXT *this,ModelPPM *Model)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int i1;
  STATE *pSVar5;
  int i;
  uint uVar6;
  int n1;
  int UDiff;
  uint uVar7;
  int n0;
  RAR_NODE *__dest;
  RAR_NODE *RetVal;
  uint uVar8;
  ushort uVar9;
  int iVar10;
  int EscFreq;
  int i0;
  int Adder;
  int iVar11;
  uint uVar12;
  int OldNS;
  STATE *pSVar13;
  STATE *p;
  STATE *pSVar14;
  STATE *pSVar15;
  STATE *p1;
  byte *p_1;
  PPM_CONTEXT *pPVar16;
  
  pSVar13 = Model->FoundState;
  uVar12 = (uint)this->NumStats;
  if (pSVar13 != (this->field_1).U.Stats) {
    pSVar5 = pSVar13 + -1;
    pSVar15 = pSVar13 + -1;
    pSVar14 = pSVar13;
    do {
      pSVar13 = pSVar15;
      bVar2 = pSVar5[1].Symbol;
      bVar3 = pSVar5[1].Freq;
      pPVar16 = pSVar14->Successor;
      *(undefined4 *)(pSVar5 + 1) = *(undefined4 *)pSVar13;
      *(undefined2 *)((int)&pSVar5[1].Successor + 2) = *(undefined2 *)((int)&pSVar13->Successor + 2)
      ;
      pSVar14[-1].Symbol = bVar2;
      pSVar14[-1].Freq = bVar3;
      pSVar14[-1].Successor = pPVar16;
      pSVar5 = pSVar5 + -1;
      pSVar15 = pSVar13 + -1;
      pSVar14 = pSVar13;
    } while (pSVar13 != (this->field_1).U.Stats);
  }
  pSVar5 = pSVar13 + (uVar12 - 1);
  pSVar13->Freq = pSVar13->Freq + '\x04';
  uVar9 = (this->field_1).U.SummFreq + 4;
  (this->field_1).U.SummFreq = uVar9;
  iVar11 = Model->OrderFall;
  if (iVar11 != 0) {
    iVar11 = 1;
  }
  iVar10 = (uint)uVar9 - (uint)pSVar13->Freq;
  iVar1 = (int)((uint)pSVar13->Freq + iVar11) >> 1;
  pSVar13->Freq = (byte)iVar1;
  (this->field_1).U.SummFreq = (ushort)iVar1;
  do {
    pSVar15 = pSVar13 + 1;
    iVar10 = iVar10 - (uint)pSVar13[1].Freq;
    iVar1 = (int)(iVar11 + (uint)pSVar13[1].Freq) >> 1;
    pSVar13[1].Freq = (byte)iVar1;
    (this->field_1).U.SummFreq = (this->field_1).U.SummFreq + (short)iVar1;
    bVar4 = pSVar13[1].Freq;
    if (pSVar13->Freq < bVar4) {
      bVar2 = pSVar15->Symbol;
      pPVar16 = pSVar13[1].Successor;
      pSVar13 = pSVar15;
      do {
        pSVar14 = pSVar13;
        pSVar13 = pSVar14 + -1;
        *(undefined4 *)pSVar14 = *(undefined4 *)pSVar13;
        *(undefined2 *)((int)&pSVar14->Successor + 2) =
             *(undefined2 *)((int)&pSVar14[-1].Successor + 2);
        if (pSVar13 == (this->field_1).U.Stats) break;
      } while (pSVar14[-2].Freq < bVar4);
      pSVar13->Symbol = bVar2;
      pSVar14[-1].Freq = bVar4;
      pSVar14[-1].Successor = pPVar16;
    }
    pSVar13 = pSVar15;
    if (pSVar15 == pSVar5) {
      uVar7 = (uint)pSVar5->Freq;
      if (uVar7 == 0) {
        do {
          pSVar13 = pSVar5 + -1;
          uVar7 = uVar7 + 1;
          pSVar5 = pSVar5 + -1;
        } while (pSVar13->Freq == '\0');
        iVar10 = iVar10 + uVar7;
        uVar7 = this->NumStats - uVar7;
        uVar6 = uVar7 & 0xffff;
        this->NumStats = (ushort)uVar7;
        if (uVar6 == 1) {
          pSVar13 = (this->field_1).U.Stats;
          bVar2 = pSVar13->Symbol;
          uVar7 = (uint)pSVar13->Freq;
          pPVar16 = pSVar13->Successor;
          do {
            iVar10 = iVar10 >> 1;
            uVar6 = uVar7 - (uVar7 >> 1);
            uVar7 = uVar6 & 0xff;
          } while (1 < iVar10);
          bVar4 = (Model->SubAlloc).Indx2Units[((int)(uVar12 + 1) >> 1) + 0x25];
          *(RAR_NODE **)&pSVar13->Symbol = (Model->SubAlloc).FreeList[bVar4].next;
          (Model->SubAlloc).FreeList[bVar4].next = (RAR_NODE *)pSVar13;
          Model->FoundState = (STATE *)&this->field_1;
          (this->field_1).OneState.Symbol = bVar2;
          (this->field_1).OneState.Freq = (byte)uVar6;
          (this->field_1).U.Stats = (STATE *)pPVar16;
          return;
        }
      }
      else {
        uVar6 = (uint)this->NumStats;
      }
      iVar11 = (int)(uVar12 + 1) >> 1;
      iVar1 = (int)(uVar6 + 1) >> 1;
      (this->field_1).U.SummFreq =
           (this->field_1).U.SummFreq + ((short)iVar10 - (short)(iVar10 >> 1));
      if (iVar11 == iVar1) {
        pSVar13 = (this->field_1).U.Stats;
      }
      else {
        pSVar13 = (this->field_1).U.Stats;
        uVar7 = (uint)(Model->SubAlloc).Indx2Units[iVar11 + 0x25];
        uVar12 = (uint)(Model->SubAlloc).Indx2Units[iVar1 + 0x25];
        if (uVar7 != uVar12) {
          __dest = (Model->SubAlloc).FreeList[uVar12].next;
          if (__dest == (RAR_NODE *)0x0) {
            uVar6 = (uint)(Model->SubAlloc).Indx2Units[uVar12];
            uVar7 = (Model->SubAlloc).Indx2Units[uVar7] - uVar6;
            uVar12 = (uint)*(byte *)((int)Model + uVar7 + 0x4ab5);
            pSVar5 = pSVar13 + uVar6 * 2;
            uVar8 = (uint)(Model->SubAlloc).Indx2Units[uVar12];
            if (uVar7 != uVar8) {
              *(RAR_NODE **)(pSVar13 + uVar6 * 2) = (Model->SubAlloc).FreeList[uVar12 - 1].next;
              (Model->SubAlloc).FreeList[uVar12 - 1].next = (RAR_NODE *)pSVar5;
              uVar12 = (uint)(Model->SubAlloc).Indx2Units[uVar12 - 1];
              uVar8 = uVar7 - uVar12;
              pSVar5 = pSVar5 + uVar12 * 2;
            }
            bVar4 = (Model->SubAlloc).Indx2Units[uVar8 + 0x25];
            *(RAR_NODE **)&pSVar5->Symbol = (Model->SubAlloc).FreeList[bVar4].next;
            (Model->SubAlloc).FreeList[bVar4].next = (RAR_NODE *)pSVar5;
          }
          else {
            (Model->SubAlloc).FreeList[uVar12].next = __dest->next;
            pSVar5 = (STATE *)memcpy(__dest,pSVar13,iVar1 * 0xc);
            *(RAR_NODE **)&pSVar13->Symbol = (Model->SubAlloc).FreeList[uVar7].next;
            (Model->SubAlloc).FreeList[uVar7].next = (RAR_NODE *)pSVar13;
            pSVar13 = pSVar5;
          }
        }
        (this->field_1).U.Stats = pSVar13;
      }
      Model->FoundState = pSVar13;
      return;
    }
  } while( true );
}


