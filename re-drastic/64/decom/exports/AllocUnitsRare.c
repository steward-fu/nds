/*
 * Ghidra decompilation
 *
 * Function : AllocUnitsRare
 * Address  : 001cc270
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SubAllocator::AllocUnitsRare(int) */

void __thiscall SubAllocator::AllocUnitsRare(SubAllocator *this,int param_1)

{
  uint uVar1;
  SubAllocator SVar2;
  ushort uVar3;
  short sVar4;
  undefined8 *puVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  undefined8 *puVar11;
  SubAllocator *pSVar12;
  undefined8 *puVar13;
  undefined auStack_20 [12];
  undefined8 *local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0xae] == (SubAllocator)0x0) {
    this[0xae] = (SubAllocator)0xff;
    if (*(undefined **)(this + 0xb8) != *(undefined **)(this + 0xc0)) {
      **(undefined **)(this + 0xb8) = 0;
    }
    lVar8 = (long)this * -7 + 0x88;
    pSVar12 = this + 8;
    auStack_20._4_8_ = auStack_20;
    local_14 = (undefined8 *)auStack_20;
    puVar5 = (undefined8 *)auStack_20;
    do {
      puVar13 = *(undefined8 **)(lVar8 + (long)pSVar12 * 8);
      while (puVar11 = puVar13, puVar11 != (undefined8 *)0x0) {
        puVar13 = (undefined8 *)*puVar11;
        *(undefined8 **)(lVar8 + (long)pSVar12 * 8) = puVar13;
        *(undefined8 **)((long)puVar11 + 4) = puVar5;
        *(undefined **)((long)puVar11 + 0xc) = auStack_20;
        *(undefined8 **)((long)puVar5 + 0xc) = puVar11;
        auStack_20._4_8_ = puVar11;
        *(undefined2 *)puVar11 = 0xffff;
        *(ushort *)((long)puVar11 + 2) = (ushort)(byte)*pSVar12;
        puVar5 = puVar11;
      }
      pSVar12 = pSVar12 + 1;
    } while (this + 0x2e != pSVar12);
    if (puVar5 != (undefined8 *)auStack_20) {
      do {
        uVar10 = (uint)*(ushort *)((long)puVar5 + 2);
        uVar7 = (uint)*(ushort *)((long)puVar5 + 2) * 0x14;
        sVar4 = *(short *)((long)puVar5 + (ulong)uVar7);
        while ((sVar4 == -1 &&
               (uVar1 = *(ushort *)((long)puVar5 + (ulong)uVar7 + 2) + uVar10, uVar1 < 0x10000))) {
          lVar8 = *(long *)((long)puVar5 + (ulong)uVar7 + 0xc);
          uVar10 = uVar1 & 0xffff;
          *(undefined8 *)(lVar8 + 4) = *(undefined8 *)((long)puVar5 + (ulong)uVar7 + 4);
          sVar4 = *(short *)((long)puVar5 + (ulong)(uVar10 * 0x14));
          *(long *)(*(long *)((long)puVar5 + (ulong)uVar7 + 4) + 0xc) = lVar8;
          *(short *)((long)puVar5 + 2) = (short)uVar1;
          uVar7 = uVar10 * 0x14;
        }
        puVar5 = *(undefined8 **)((long)puVar5 + 4);
      } while (puVar5 != (undefined8 *)auStack_20);
      while ((undefined *)auStack_20._4_8_ != auStack_20) {
        lVar8 = *(long *)(auStack_20._4_8_ + 0xc);
        *(undefined8 *)(lVar8 + 4) = *(undefined8 *)(auStack_20._4_8_ + 4);
        uVar3 = *(ushort *)(auStack_20._4_8_ + 2);
        *(long *)(*(long *)(auStack_20._4_8_ + 4) + 0xc) = lVar8;
        while( true ) {
          uVar10 = (uint)uVar3;
          puVar5 = (undefined8 *)auStack_20._4_8_;
          if (0x80 < uVar3) {
            uVar7 = uVar10 - 0x81 >> 7;
            puVar13 = *(undefined8 **)(this + 0x1f0);
            do {
              puVar11 = puVar5;
              *puVar11 = puVar13;
              *(undefined8 **)(this + 0x1f0) = puVar11;
              puVar5 = puVar11 + 0x140;
              puVar13 = puVar11;
            } while (puVar11 + 0x140 !=
                     (undefined8 *)(auStack_20._4_8_ + ((ulong)uVar7 * 0x140 + 0x140) * 8));
            uVar10 = (uVar10 - 0x80) + uVar7 * -0x80;
            puVar5 = (undefined8 *)(auStack_20._4_8_ + ((ulong)uVar7 * 0x140 + 0x140) * 8);
          }
          SVar2 = this[(long)(int)(uVar10 - 1) + 0x2e];
          if ((byte)this[(ulong)(byte)this[(long)(int)(uVar10 - 1) + 0x2e] + 8] != uVar10) break;
          *puVar5 = *(undefined8 *)(this + (ulong)(byte)SVar2 * 8 + 200);
          *(undefined8 **)(this + (ulong)(byte)SVar2 * 8 + 200) = puVar5;
          if ((undefined *)auStack_20._4_8_ == auStack_20) goto LAB_001cc5b0;
          lVar8 = *(long *)(auStack_20._4_8_ + 0xc);
          *(undefined8 *)(lVar8 + 4) = *(undefined8 *)(auStack_20._4_8_ + 4);
          uVar3 = *(ushort *)(auStack_20._4_8_ + 2);
          *(long *)(*(long *)(auStack_20._4_8_ + 4) + 0xc) = lVar8;
        }
        lVar8 = (long)(int)((byte)SVar2 - 1);
        iVar6 = uVar10 - (byte)this[lVar8 + 8];
        uVar10 = (uint)(byte)this[lVar8 + 8] * 0x14;
        *(undefined8 *)((long)puVar5 + (ulong)uVar10) =
             *(undefined8 *)(this + (long)iVar6 * 8 + 0xc0);
        *(ulong *)(this + (long)iVar6 * 8 + 0xc0) = (long)puVar5 + (ulong)uVar10;
        *puVar5 = *(undefined8 *)(this + lVar8 * 8 + 200);
        *(undefined8 **)(this + lVar8 * 8 + 200) = puVar5;
      }
    }
LAB_001cc5b0:
    puVar5 = *(undefined8 **)(this + (long)param_1 * 8 + 200);
    if (puVar5 != (undefined8 *)0x0) {
      *(undefined8 *)(this + (long)param_1 * 8 + 200) = *puVar5;
      goto LAB_001cc314;
    }
  }
  lVar8 = (long)(param_1 + 1);
  do {
    iVar6 = (int)lVar8;
    if (iVar6 == 0x26) {
      this[0xae] = (SubAllocator)((char)this[0xae] + -1);
      SVar2 = this[(long)param_1 + 8];
      puVar5 = (undefined8 *)0x0;
      uVar9 = (ulong)((uint)(byte)SVar2 * 0xc);
      if ((long)uVar9 < *(long *)(this + 0x210) - *(long *)(this + 0x1f8)) {
        *(ulong *)(this + 0x210) = *(long *)(this + 0x210) - uVar9;
        puVar5 = (undefined8 *)(*(long *)(this + 0x200) - (ulong)((uint)(byte)SVar2 * 0x14));
        *(undefined8 **)(this + 0x200) = puVar5;
      }
      goto LAB_001cc314;
    }
    lVar8 = lVar8 + 1;
    puVar5 = *(undefined8 **)(this + lVar8 * 8 + 0xc0);
  } while (puVar5 == (undefined8 *)0x0);
  *(undefined8 *)(this + (long)iVar6 * 8 + 200) = *puVar5;
  uVar10 = (uint)(byte)this[(long)iVar6 + 8] - (uint)(byte)this[(long)param_1 + 8];
  uVar9 = (ulong)((uint)(byte)this[(long)param_1 + 8] * 0x14);
  puVar13 = (undefined8 *)((long)puVar5 + uVar9);
  SVar2 = this[(long)(int)(uVar10 - 1) + 0x2e];
  uVar7 = (uint)(byte)this[(ulong)(byte)this[(long)(int)(uVar10 - 1) + 0x2e] + 8];
  if (uVar10 != (byte)this[(ulong)(byte)this[(long)(int)(uVar10 - 1) + 0x2e] + 8]) {
    *(undefined8 *)((long)puVar5 + uVar9) = *(undefined8 *)(this + (ulong)(byte)SVar2 * 8 + 0xc0);
    *(undefined8 **)(this + (ulong)(byte)SVar2 * 8 + 0xc0) = puVar13;
    uVar7 = uVar10 - (byte)this[(long)(int)((byte)SVar2 - 1) + 8];
    puVar13 = (undefined8 *)
              ((long)puVar13 + (ulong)((uint)(byte)this[(long)(int)((byte)SVar2 - 1) + 8] * 0x14));
  }
  SVar2 = this[(long)(int)(uVar7 - 1) + 0x2e];
  *puVar13 = *(undefined8 *)(this + (ulong)(byte)SVar2 * 8 + 200);
  *(undefined8 **)(this + (ulong)(byte)SVar2 * 8 + 200) = puVar13;
LAB_001cc314:
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(puVar5,local_8 - ___stack_chk_guard,0);
  }
  return;
}


