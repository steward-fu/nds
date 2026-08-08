/*
 * Ghidra decompilation
 *
 * Function : AllocUnitsRare
 * Address  : 080ed9f8
 * Program  : drastic
 */


/* DWARF original prototype: void * AllocUnitsRare(SubAllocator * this, int indx) */

void * __thiscall SubAllocator::AllocUnitsRare(SubAllocator *this,int indx)

{
  RAR_MEM_BLK **ppRVar1;
  byte bVar2;
  short sVar3;
  int iVar4;
  RAR_NODE *RetVal;
  byte *pbVar5;
  RAR_NODE *RetVal_2;
  RAR_MEM_BLK *pRVar6;
  int i;
  byte *p;
  RAR_NODE *pRVar7;
  uint uVar8;
  uint uVar9;
  int UDiff;
  RAR_MEM_BLK *pRVar10;
  int i_1;
  int iVar11;
  int j;
  RAR_NODE *pRVar12;
  uint uVar13;
  RAR_NODE *RetVal_1;
  RAR_MEM_BLK *pRVar14;
  int sz;
  uint uVar15;
  int i_2;
  RAR_MEM_BLK *p_1;
  RAR_MEM_BLK s0;
  int local_24;
  
  pRVar14 = &s0;
  local_24 = __stack_chk_guard;
  if (this->GlueCount == '\0') {
    pRVar12 = this->FreeList;
    this->GlueCount = 0xff;
    pbVar5 = this->Indx2Units;
    if (this->LoUnit != this->HiUnit) {
      *this->LoUnit = '\0';
    }
    s0.next = &s0;
    s0.prev = &s0;
    do {
      pRVar10 = (RAR_MEM_BLK *)pRVar12->next;
      while (pRVar6 = pRVar10, pRVar6 != (RAR_MEM_BLK *)0x0) {
        pRVar10 = *(RAR_MEM_BLK **)&pRVar6->Stamp;
        pRVar12->next = (RAR_NODE *)pRVar10;
        pRVar6->next = pRVar14;
        pRVar6->prev = &s0;
        s0.next = pRVar6;
        pRVar14->prev = pRVar6;
        *(undefined *)&pRVar6->Stamp = 0xff;
        *(undefined *)((int)&pRVar6->Stamp + 1) = 0xff;
        *(ushort *)((int)&pRVar6->Stamp + 2) = (ushort)*pbVar5;
        pRVar14 = pRVar6;
      }
      pRVar12 = pRVar12 + 1;
      pbVar5 = pbVar5 + 1;
    } while ((RAR_NODE *)&this->pText != pRVar12);
    if (pRVar14 != &s0) {
      do {
        uVar8 = (uint)*(ushort *)((int)&pRVar14->Stamp + 2);
        pRVar10 = pRVar14 + uVar8;
        sVar3 = pRVar10->Stamp;
        while ((sVar3 == -1 &&
               (uVar9 = uVar8 + *(ushort *)((int)&pRVar10->Stamp + 2), uVar9 < 0x10000))) {
          pRVar6 = pRVar10->prev;
          uVar8 = uVar9 & 0xffff;
          pRVar6->next = pRVar10->next;
          ppRVar1 = &pRVar10->next;
          pRVar10 = pRVar14 + uVar8;
          (*ppRVar1)->prev = pRVar6;
          *(short *)((int)&pRVar14->Stamp + 2) = (short)uVar9;
          sVar3 = pRVar10->Stamp;
        }
        pRVar14 = pRVar14->next;
      } while (pRVar14 != &s0);
      while (s0.next != &s0) {
        pRVar14 = (s0.next)->prev;
        pRVar14->next = (s0.next)->next;
        (s0.next)->next->prev = pRVar14;
        uVar8 = (uint)(s0.next)->NU;
        pRVar14 = s0.next;
        if (0x80 < uVar8) {
          pRVar14 = (RAR_MEM_BLK *)this->FreeList[0x25].next;
          uVar9 = uVar8;
          pRVar10 = s0.next;
          do {
            uVar9 = uVar9 - 0x80;
            *(RAR_MEM_BLK **)&pRVar10->Stamp = pRVar14;
            this->FreeList[0x25].next = (RAR_NODE *)pRVar10;
            pRVar14 = pRVar10;
            pRVar10 = pRVar10 + 0x80;
          } while (0x80 < (int)uVar9);
          uVar9 = uVar8 - 0x81 >> 7;
          uVar8 = (uVar8 - 0x80) + uVar9 * -0x80;
          pRVar14 = s0.next + (uVar9 + 1) * 0x80;
        }
        uVar13 = (uint)this->Indx2Units[uVar8 + 0x25];
        uVar9 = uVar13;
        if (this->Indx2Units[uVar13] != uVar8) {
          uVar9 = uVar13 - 1;
          uVar13 = (uint)this->Indx2Units[uVar13 - 1];
          *(RAR_NODE **)&pRVar14[uVar13].Stamp =
               *(RAR_NODE **)((int)this + (uVar8 - uVar13) * 4 + 0xb4);
          *(RAR_MEM_BLK **)((int)this + (uVar8 - uVar13) * 4 + 0xb4) = pRVar14 + uVar13;
        }
        *(RAR_NODE **)&pRVar14->Stamp = this->FreeList[uVar9].next;
        this->FreeList[uVar9].next = (RAR_NODE *)pRVar14;
      }
    }
    pRVar12 = this->FreeList[indx].next;
    if (pRVar12 != (RAR_NODE *)0x0) {
      this->FreeList[indx].next = pRVar12->next;
      goto LAB_080edaa0;
    }
  }
  pRVar7 = this->FreeList + indx;
  iVar4 = indx;
  do {
    iVar11 = iVar4;
    if (iVar11 + 1 == 0x26) {
      this->GlueCount = this->GlueCount + 0xff;
      if ((int)((uint)this->Indx2Units[indx] * 0xc) < (int)this->FakeUnitsStart - (int)this->pText)
      {
        iVar4 = (uint)this->Indx2Units[indx] * -0xc;
        this->FakeUnitsStart = this->FakeUnitsStart + iVar4;
        pRVar12 = (RAR_NODE *)(this->UnitsStart + iVar4);
        this->UnitsStart = (byte *)pRVar12;
      }
      else {
        pRVar12 = (RAR_NODE *)0x0;
      }
      goto LAB_080edaa0;
    }
    pRVar7 = pRVar7 + 1;
    pRVar12 = pRVar7->next;
    iVar4 = iVar11 + 1;
  } while (pRVar12 == (RAR_NODE *)0x0);
  this->FreeList[iVar11 + 1].next = pRVar12->next;
  uVar8 = (uint)this->Indx2Units[indx];
  uVar9 = this->Indx2Units[iVar11 + 1] - uVar8;
  uVar15 = (uint)*(byte *)((int)this + uVar9 + 0x29);
  pRVar7 = pRVar12 + uVar8 * 3;
  uVar13 = (uint)this->Indx2Units[uVar15];
  if (uVar9 != uVar13) {
    pRVar12[uVar8 * 3].next = this->FreeList[uVar15 - 1].next;
    this->FreeList[uVar15 - 1].next = pRVar7;
    uVar13 = uVar9 - this->Indx2Units[uVar15 - 1];
    pRVar7 = pRVar7 + (uint)this->Indx2Units[uVar15 - 1] * 3;
  }
  bVar2 = this->Indx2Units[uVar13 + 0x25];
  pRVar7->next = this->FreeList[bVar2].next;
  this->FreeList[bVar2].next = pRVar7;
LAB_080edaa0:
  if (local_24 == __stack_chk_guard) {
    return pRVar12;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


