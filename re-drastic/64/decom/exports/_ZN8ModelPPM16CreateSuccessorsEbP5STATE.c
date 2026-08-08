/*
 * Ghidra decompilation
 *
 * Function : _ZN8ModelPPM16CreateSuccessorsEbP5STATE
 * Address  : 001e67e0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ModelPPM::CreateSuccessors(bool, STATE*) */

void __thiscall ModelPPM::CreateSuccessors(ModelPPM *this,bool param_1,STATE *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  char *pcVar6;
  ushort *puVar7;
  ushort **ppuVar8;
  ushort **ppuVar9;
  undefined8 *puVar10;
  char cVar11;
  undefined8 *puVar12;
  ushort *local_208;
  ushort *apuStack_200 [63];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar10 = *(undefined8 **)(this + 0x648);
  puVar7 = *(ushort **)(this + 0x660);
  puVar4 = *(undefined8 **)((long)puVar10 + 0xc);
  puVar12 = *(undefined8 **)(puVar7 + 1);
  if (param_1) {
    ppuVar9 = &local_208;
joined_r0x001e6978:
    if (param_2 == (STATE *)0x0) goto LAB_001e6934;
LAB_001e6844:
    puVar10 = *(undefined8 **)((long)param_2 + 2);
    puVar5 = puVar4;
    ppuVar8 = ppuVar9;
LAB_001e6848:
    do {
      ppuVar9 = ppuVar8;
      if (puVar12 != puVar10) {
LAB_001e6850:
        if (ppuVar9 != &local_208) goto LAB_001e685c;
        goto LAB_001e6994;
      }
      puVar4 = *(undefined8 **)((long)puVar5 + 0xc);
      ppuVar9 = ppuVar8 + 1;
      *ppuVar8 = (ushort *)param_2;
      puVar10 = puVar5;
      if (puVar4 == (undefined8 *)0x0) goto LAB_001e6850;
LAB_001e6934:
      puVar10 = *(undefined8 **)((long)puVar4 + 4);
      puVar5 = puVar4;
      ppuVar8 = ppuVar9;
      if (*(ushort *)puVar4 != 1) {
        param_2 = (STATE *)puVar10;
        if (*(char *)puVar10 != *(char *)puVar7) {
          do {
            puVar4 = puVar10;
            param_2 = (STATE *)((long)puVar4 + 10);
            puVar10 = (undefined8 *)param_2;
          } while (*(char *)param_2 != *(char *)puVar7);
          puVar10 = *(undefined8 **)((long)puVar4 + 0xc);
          goto LAB_001e6848;
        }
        goto LAB_001e6844;
      }
      param_2 = (STATE *)((long)puVar4 + 2);
    } while( true );
  }
  local_208 = puVar7;
  ppuVar9 = apuStack_200;
  if (puVar4 != (undefined8 *)0x0) goto joined_r0x001e6978;
LAB_001e685c:
  cVar1 = *(char *)puVar12;
  if (*(ushort *)puVar10 == 1) {
    cVar11 = *(char *)((long)puVar10 + 3);
  }
  else {
    if (puVar10 <= *(undefined8 **)(this + 0x4ca0)) {
LAB_001e6990:
      puVar10 = (undefined8 *)0x0;
      goto LAB_001e6994;
    }
    pcVar6 = *(char **)((long)puVar10 + 4);
    cVar11 = *pcVar6;
    while (cVar11 != cVar1) {
      pcVar6 = pcVar6 + 10;
      cVar11 = *pcVar6;
    }
    iVar2 = (byte)pcVar6[1] - 1;
    uVar3 = ((uint)*(ushort *)((long)puVar10 + 2) - (uint)*(ushort *)puVar10) - iVar2;
    if (uVar3 < (uint)(iVar2 * 2)) {
      cVar11 = '\0';
      if (uVar3 * 2 != 0) {
        cVar11 = (char)((uVar3 * 3 + iVar2 * 2 + -1) / (uVar3 * 2));
      }
      cVar11 = cVar11 + '\x01';
    }
    else {
      cVar11 = (uVar3 < (uint)(iVar2 * 5)) + '\x01';
    }
  }
  puVar4 = puVar10;
  do {
    ppuVar9 = ppuVar9 + -1;
    puVar7 = *ppuVar9;
    if (*(long *)(this + 0x4b68) == *(long *)(this + 0x4b60)) {
      puVar10 = *(undefined8 **)(this + 0x4b70);
      if (puVar10 == (undefined8 *)0x0) {
        puVar10 = (undefined8 *)SubAllocator::AllocUnitsRare((SubAllocator *)(this + 0x4aa8),0);
        if (puVar10 == (undefined8 *)0x0) goto LAB_001e6990;
      }
      else {
        *(undefined8 *)(this + 0x4b70) = *puVar10;
      }
    }
    else {
      puVar10 = (undefined8 *)(*(long *)(this + 0x4b68) + -0x14);
      *(undefined8 **)(this + 0x4b68) = puVar10;
    }
    *(ushort *)puVar10 = 1;
    *(char *)((long)puVar10 + 2) = cVar1;
    *(char *)((long)puVar10 + 3) = cVar11;
    *(long *)((long)puVar10 + 4) = (long)puVar12 + 1;
    *(undefined8 **)((long)puVar10 + 0xc) = puVar4;
    *(undefined8 **)(puVar7 + 1) = puVar10;
    puVar4 = puVar10;
  } while (ppuVar9 != &local_208);
LAB_001e6994:
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar10,local_8 - ___stack_chk_guard,0);
}


