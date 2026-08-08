/*
 * Ghidra decompilation
 *
 * Function : CreateSuccessors
 * Address  : 08101a5c
 * Program  : drastic
 */


/* DWARF original prototype: PPM_CONTEXT * CreateSuccessors(ModelPPM * this, bool Skip, STATE * p1)
    */

PPM_CONTEXT * __thiscall ModelPPM::CreateSuccessors(ModelPPM *this,bool Skip,STATE *p1)

{
  byte bVar1;
  char cVar2;
  RAR_NODE *RetVal;
  byte *pbVar3;
  STATE *p;
  STATE *pSVar4;
  PPM_CONTEXT *pPVar5;
  int iVar6;
  uint cf;
  PPM_CONTEXT *pPVar7;
  PPM_CONTEXT *pPVar8;
  PPM_CONTEXT *pc;
  STATE **ppSVar9;
  byte bVar10;
  uint uVar11;
  uint s0;
  PPM_CONTEXT *pPVar12;
  PPM_CONTEXT *UpBranch;
  STATE *pSVar13;
  bool bVar14;
  STATE *ps [64];
  int local_2c;
  
  pPVar8 = this->MinContext;
  pSVar13 = this->FoundState;
  pPVar12 = pSVar13->Successor;
  local_2c = __stack_chk_guard;
  if (Skip) {
    ppSVar9 = ps;
    pPVar5 = pPVar8->Suffix;
joined_r0x08101bf0:
    p = p1;
    if (p1 == (STATE *)0x0) goto LAB_08101bf4;
LOOP_ENTRY:
    pPVar7 = pPVar5;
    pPVar8 = p->Successor;
    if (pPVar12 == p->Successor) {
      while( true ) {
        *ppSVar9 = p;
        pPVar5 = pPVar7->Suffix;
        ppSVar9 = ppSVar9 + 1;
        pPVar8 = pPVar7;
        if (pPVar5 == (PPM_CONTEXT *)0x0) goto NO_LOOP;
LAB_08101bf4:
        if (pPVar5->NumStats == 1) break;
        p = (pPVar5->field_1).U.Stats;
        if (p->Symbol == pSVar13->Symbol) goto LOOP_ENTRY;
        do {
          pSVar4 = p;
          p = pSVar4 + 1;
        } while (p->Symbol != pSVar13->Symbol);
        pPVar8 = pSVar4[1].Successor;
        pPVar7 = pPVar5;
        if (pPVar12 != pPVar8) goto NO_LOOP;
      }
      p = (STATE *)&pPVar5->field_1;
      goto LOOP_ENTRY;
    }
NO_LOOP:
    if (ppSVar9 == ps) goto LAB_08101ba4;
  }
  else {
    ps[0] = pSVar13;
    pPVar5 = pPVar8->Suffix;
    ppSVar9 = ps + 1;
    if (pPVar5 != (PPM_CONTEXT *)0x0) goto joined_r0x08101bf0;
  }
  bVar1 = *(byte *)&pPVar12->NumStats;
  if (pPVar8->NumStats == 1) {
    bVar10 = (pPVar8->field_1).OneState.Freq;
  }
  else {
    if (pPVar8 <= (PPM_CONTEXT *)(this->SubAlloc).pText) {
LAB_08101ba0:
      pPVar8 = (PPM_CONTEXT *)0x0;
      goto LAB_08101ba4;
    }
    pSVar13 = (pPVar8->field_1).U.Stats;
    bVar10 = pSVar13->Symbol;
    while (bVar10 != bVar1) {
      pSVar13 = pSVar13 + 1;
      bVar10 = pSVar13->Symbol;
    }
    iVar6 = pSVar13->Freq - 1;
    uVar11 = ((uint)(pPVar8->field_1).U.SummFreq - (uint)pPVar8->NumStats) - iVar6;
    if (uVar11 < (uint)(iVar6 * 2)) {
      cVar2 = __aeabi_uidiv(uVar11 * 3 + (iVar6 * 2 - 1U));
      bVar10 = cVar2 + '\x01';
    }
    else {
      bVar14 = (uint)(iVar6 * 5) <= uVar11;
      if (bVar14) {
        uVar11 = 1;
      }
      bVar10 = (byte)uVar11;
      if (!bVar14) {
        bVar10 = '\x02';
      }
    }
  }
  pPVar5 = pPVar8;
  do {
    pbVar3 = (this->SubAlloc).HiUnit;
    ppSVar9 = ppSVar9 + -1;
    pSVar13 = *ppSVar9;
    if (pbVar3 == (this->SubAlloc).LoUnit) {
      pPVar8 = (PPM_CONTEXT *)(this->SubAlloc).FreeList[0].next;
      if (pPVar8 == (PPM_CONTEXT *)0x0) {
        pPVar8 = (PPM_CONTEXT *)SubAllocator::AllocUnitsRare(&this->SubAlloc,0);
        goto LAB_08101b98;
      }
      (this->SubAlloc).FreeList[0].next = *(RAR_NODE **)&pPVar8->NumStats;
    }
    else {
      pPVar8 = (PPM_CONTEXT *)(pbVar3 + -0xc);
      (this->SubAlloc).HiUnit = (byte *)pPVar8;
LAB_08101b98:
      if (pPVar8 == (PPM_CONTEXT *)0x0) goto LAB_08101ba0;
    }
    *(undefined *)&pPVar8->NumStats = 1;
    *(undefined *)((int)&pPVar8->NumStats + 1) = 0;
    (pPVar8->field_1).OneState.Symbol = bVar1;
    (pPVar8->field_1).OneState.Freq = bVar10;
    (pPVar8->field_1).U.Stats = (STATE *)((int)&pPVar12->NumStats + 1);
    pPVar8->Suffix = pPVar5;
    pSVar13->Successor = pPVar8;
    pPVar5 = pPVar8;
  } while (ppSVar9 != ps);
LAB_08101ba4:
  if (local_2c != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pPVar8;
}


