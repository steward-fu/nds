/*
 * Ghidra decompilation
 *
 * Function : _ZN8ModelPPM11UpdateModelEv
 * Address  : 08101cb8
 * Program  : drastic
 */


/* DWARF original prototype: void UpdateModel(ModelPPM * this) */

void __thiscall ModelPPM::UpdateModel(ModelPPM *this)

{
  byte bVar1;
  undefined2 uVar2;
  ushort uVar3;
  ushort uVar4;
  PPM_CONTEXT *pPVar5;
  PPM_CONTEXT *pc;
  STATE *pSVar6;
  RAR_NODE *RetVal_3;
  short sVar7;
  uint sf;
  uint uVar8;
  int i1;
  uint uVar9;
  int indx_1;
  uint cf;
  uint uVar10;
  uint uVar11;
  int iVar12;
  void *RetVal_2;
  byte bVar13;
  STATE *pSVar14;
  byte *pbVar15;
  int iVar16;
  PPM_CONTEXT *pPVar17;
  uint s0;
  void *RetVal;
  RAR_NODE *__dest;
  RAR_NODE *RetVal_1;
  uint uVar18;
  uint ns1;
  uint uVar19;
  PPM_CONTEXT *pPVar20;
  uint uVar21;
  uint ns;
  PPM_CONTEXT *Successor;
  ushort *local_34;
  PPM_CONTEXT *local_30;
  
  pSVar14 = this->FoundState;
  uVar18 = (uint)pSVar14->Freq;
  bVar1 = pSVar14->Symbol;
  local_30 = pSVar14->Successor;
  if (uVar18 < 0x1f) {
    pPVar5 = this->MinContext->Suffix;
    if (pPVar5 == (PPM_CONTEXT *)0x0) {
      pSVar14 = (STATE *)0x0;
    }
    else if (pPVar5->NumStats == 1) {
      bVar13 = (pPVar5->field_1).OneState.Freq;
      pSVar14 = (STATE *)&pPVar5->field_1;
      if (bVar13 < 0x20) {
        bVar13 = bVar13 + 1;
      }
      (pPVar5->field_1).OneState.Freq = bVar13;
    }
    else {
      pSVar14 = (pPVar5->field_1).U.Stats;
      if (pSVar14->Symbol == bVar1) {
LAB_08101d6c:
        bVar13 = pSVar14->Freq;
      }
      else {
        do {
          pSVar6 = pSVar14;
          pSVar14 = pSVar6 + 1;
        } while (pSVar6[1].Symbol != bVar1);
        bVar13 = pSVar6[1].Freq;
        if (pSVar6->Freq <= bVar13) {
          pPVar17 = pSVar6[1].Successor;
          *(undefined4 *)pSVar14 = *(undefined4 *)pSVar6;
          uVar2 = *(undefined2 *)((int)&pSVar6->Successor + 2);
          pSVar6->Symbol = bVar1;
          pSVar6->Freq = bVar13;
          pSVar6->Successor = pPVar17;
          *(undefined2 *)((int)&pSVar6[1].Successor + 2) = uVar2;
          pSVar14 = pSVar6;
          goto LAB_08101d6c;
        }
      }
      if (bVar13 < 0x73) {
        pSVar14->Freq = bVar13 + 2;
        (pPVar5->field_1).U.SummFreq = (pPVar5->field_1).U.SummFreq + 2;
      }
    }
  }
  else {
    pSVar14 = (STATE *)0x0;
  }
  if (this->OrderFall == 0) {
    pSVar6 = this->FoundState;
    pPVar5 = CreateSuccessors(this,true,pSVar14);
    pSVar6->Successor = pPVar5;
    this->MinContext = pPVar5;
    this->MaxContext = pPVar5;
    if (pPVar5 != (PPM_CONTEXT *)0x0) {
      return;
    }
  }
  else {
    pbVar15 = (this->SubAlloc).pText;
    (this->SubAlloc).pText = pbVar15 + 1;
    *pbVar15 = bVar1;
    pPVar5 = (PPM_CONTEXT *)(this->SubAlloc).pText;
    if (pPVar5 < (PPM_CONTEXT *)(this->SubAlloc).FakeUnitsStart) {
      if (local_30 == (PPM_CONTEXT *)0x0) {
        pPVar17 = this->MinContext;
        pPVar20 = this->MaxContext;
        this->FoundState->Successor = pPVar5;
        local_30 = pPVar17;
      }
      else {
        if ((local_30 <= pPVar5) &&
           (local_30 = CreateSuccessors(this,false,pSVar14), local_30 == (PPM_CONTEXT *)0x0))
        goto RESTART_MODEL;
        iVar16 = this->OrderFall + -1;
        this->OrderFall = iVar16;
        pPVar17 = this->MinContext;
        if (iVar16 == 0) {
          pPVar20 = this->MaxContext;
          pbVar15 = (this->SubAlloc).pText;
          if (pPVar20 != pPVar17) {
            pbVar15 = pbVar15 + -1;
          }
          (this->SubAlloc).pText = pbVar15;
          pPVar5 = local_30;
        }
        else {
          pPVar20 = this->MaxContext;
        }
      }
      uVar21 = (uint)pPVar17->NumStats;
      uVar3 = (pPVar17->field_1).U.SummFreq;
      if (pPVar17 != pPVar20) {
        local_34 = this->BinSumm[0x6b] + 8;
      }
      if (pPVar17 != pPVar20) {
        do {
          uVar4 = pPVar20->NumStats;
          uVar19 = (uint)uVar4;
          if (uVar19 == 1) {
            uVar9 = (uint)*(byte *)(local_34 + 0x55b);
            pSVar14 = (STATE *)(this->SubAlloc).FreeList[uVar9].next;
            if (pSVar14 == (STATE *)0x0) {
              pSVar14 = *(STATE **)(local_34 + 0x59e);
              bVar13 = *(byte *)((int)local_34 + uVar9 + 0xa90);
              *(STATE **)(local_34 + 0x59e) = pSVar14 + (uint)bVar13 * 2;
              if (*(STATE **)(local_34 + 0x5a0) < pSVar14 + (uint)bVar13 * 2) {
                *(STATE **)(local_34 + 0x59e) = pSVar14;
                pSVar14 = (STATE *)SubAllocator::AllocUnitsRare(&this->SubAlloc,uVar9);
              }
              if (pSVar14 == (STATE *)0x0) goto RESTART_MODEL;
            }
            else {
              (this->SubAlloc).FreeList[uVar9].next = *(RAR_NODE **)&pSVar14->Symbol;
            }
            *(undefined4 *)pSVar14 = *(undefined4 *)&pPVar20->field_1;
            *(undefined2 *)((int)&pSVar14->Successor + 2) =
                 *(undefined2 *)((int)&pPVar20->field_1 + 4);
            (pPVar20->field_1).U.Stats = pSVar14;
            if (pSVar14->Freq < 0x1e) {
              iVar16 = (pSVar14->Freq & 0x7f) << 1;
            }
            else {
              iVar16 = 0x78;
            }
            pSVar14->Freq = (byte)iVar16;
            iVar12 = this->InitEsc;
            uVar9 = 2;
            pSVar14 = (pPVar20->field_1).U.Stats;
            if (3 < uVar21) {
              iVar12 = iVar12 + 1;
            }
            uVar10 = iVar16 + iVar12;
            (pPVar20->field_1).U.SummFreq = (ushort)uVar10;
          }
          else {
            if ((uVar4 & 1) == 0) {
              uVar9 = (uint)(uVar4 >> 1);
              pSVar14 = (pPVar20->field_1).U.Stats;
              uVar8 = (uint)*(byte *)((int)local_34 + uVar9 + 0xab5);
              uVar10 = (uint)*(byte *)((int)local_34 + uVar9 + 0xab6);
              if (uVar8 == uVar10) {
                if (pSVar14 == (STATE *)0x0) goto RESTART_MODEL;
              }
              else {
                __dest = (this->SubAlloc).FreeList[uVar10].next;
                if (__dest == (RAR_NODE *)0x0) {
                  __dest = *(RAR_NODE **)(local_34 + 0x59e);
                  bVar13 = *(byte *)((int)local_34 + uVar10 + 0xa90);
                  *(RAR_NODE **)(local_34 + 0x59e) = __dest + (uint)bVar13 * 3;
                  if (*(RAR_NODE **)(local_34 + 0x5a0) < __dest + (uint)bVar13 * 3) {
                    *(RAR_NODE **)(local_34 + 0x59e) = __dest;
                    __dest = (RAR_NODE *)SubAllocator::AllocUnitsRare(&this->SubAlloc,uVar10);
                  }
                  if (__dest == (RAR_NODE *)0x0) {
                    *(undefined *)((int)&pPVar20->field_1 + 2) = 0;
                    *(undefined *)((int)&pPVar20->field_1 + 3) = 0;
                    *(undefined *)((int)&pPVar20->field_1 + 4) = 0;
                    *(undefined *)((int)&pPVar20->field_1 + 5) = 0;
                    goto RESTART_MODEL;
                  }
                }
                else {
                  (this->SubAlloc).FreeList[uVar10].next = __dest->next;
                }
                pSVar6 = (STATE *)memcpy(__dest,pSVar14,uVar9 * 0xc);
                *(RAR_NODE **)&pSVar14->Symbol = (this->SubAlloc).FreeList[uVar8].next;
                (this->SubAlloc).FreeList[uVar8].next = (RAR_NODE *)pSVar14;
                (pPVar20->field_1).U.Stats = pSVar6;
                pSVar14 = pSVar6;
              }
            }
            else {
              pSVar14 = (pPVar20->field_1).U.Stats;
            }
            uVar10 = (uint)(pPVar20->field_1).U.SummFreq;
            uVar9 = uVar19 * 2;
            uVar8 = (uint)(uVar19 << 2 <= uVar21);
            if (uVar19 * 8 < uVar10) {
              uVar8 = 0;
            }
            if (uVar9 < uVar21) {
              uVar10 = uVar10 + 1;
            }
            uVar10 = uVar10 + uVar8 * 2;
            (pPVar20->field_1).U.SummFreq = (ushort)uVar10;
          }
          uVar8 = (uVar10 & 0xffff) + (((uVar3 - uVar21) + 1) - uVar18);
          uVar11 = uVar18 * 2 * ((uVar10 & 0xffff) + 6);
          if (uVar11 < uVar8 * 6) {
            if (uVar11 < uVar8 || uVar11 - uVar8 == 0) {
              sVar7 = 1;
            }
            else {
              sVar7 = 2;
            }
            if (uVar8 * 4 < uVar11 || uVar8 * 4 - uVar11 == 0) {
              sVar7 = sVar7 + 1;
            }
            (pPVar20->field_1).U.SummFreq = (short)uVar10 + 3;
          }
          else {
            if (uVar11 < uVar8 * 9) {
              sVar7 = 4;
            }
            else {
              sVar7 = 5;
            }
            if (uVar8 * 0xc < uVar11 || uVar8 * 0xc - uVar11 == 0) {
              sVar7 = sVar7 + 1;
            }
            if (uVar8 * 0xf <= uVar11) {
              sVar7 = sVar7 + 1;
            }
            (pPVar20->field_1).U.SummFreq = (short)uVar10 + sVar7;
          }
          iVar16 = uVar9 + uVar19;
          *(PPM_CONTEXT **)((int)&pSVar14->Successor + iVar16 * 2) = pPVar5;
          (&pSVar14->Symbol)[iVar16 * 2] = bVar1;
          (&pSVar14->Freq)[iVar16 * 2] = (byte)sVar7;
          pPVar17 = this->MinContext;
          pPVar20->NumStats = uVar4 + 1;
          pPVar20 = pPVar20->Suffix;
        } while (pPVar17 != pPVar20);
      }
      this->MinContext = local_30;
      this->MaxContext = local_30;
      return;
    }
  }
RESTART_MODEL:
  RestartModelRare(this);
  this->EscCount = '\0';
  return;
}


