/*
 * Ghidra decompilation
 *
 * Function : FUN_0011e91c
 * Address  : 0011e91c
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0011e91c(long param_1,long param_2)

{
  uint **ppuVar1;
  ushort uVar2;
  uint3 uVar3;
  uint uVar4;
  uint5 uVar5;
  uint6 uVar6;
  uint7 uVar7;
  long lVar8;
  bool bVar9;
  char cVar10;
  undefined4 *puVar11;
  long lVar12;
  ulong uVar13;
  uint *puVar14;
  uint *puVar15;
  ulong uVar16;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  ulong uStack_28;
  ulong uStack_20;
  ulong uStack_18;
  ulong uStack_10;
  
  lVar8 = ___stack_chk_guard;
  puVar14 = *(uint **)(param_1 + 0x300);
  cVar10 = '\0';
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  uStack_10 = 0;
  uVar13 = 0;
  puVar15 = puVar14;
  if (puVar14 == (uint *)0x0) {
    uVar16 = 0;
    uVar13 = 0;
    cVar10 = '\0';
  }
  else {
    do {
      ppuVar1 = (uint **)(puVar15 + 6);
      cVar10 = cVar10 + '\x01';
      puVar15 = *ppuVar1;
    } while (*ppuVar1 != (uint *)0x0);
    puVar11 = *(undefined4 **)(puVar14 + 6);
    uVar16 = (ulong)*(byte *)(puVar14 + 10);
    uStack_48 = (ulong)*puVar14;
    if (puVar11 != (undefined4 *)0x0) {
      puVar15 = *(uint **)(puVar11 + 6);
      uStack_48 = CONCAT44(*puVar11,*puVar14);
      uVar2 = CONCAT11(*(undefined *)(puVar11 + 10),*(byte *)(puVar14 + 10));
      uVar16 = (ulong)uVar2;
      if (puVar15 != (uint *)0x0) {
        puVar11 = *(undefined4 **)(puVar15 + 6);
        uStack_40 = (ulong)*puVar15;
        uVar3 = CONCAT12(*(undefined *)(puVar15 + 10),uVar2);
        uVar16 = (ulong)uVar3;
        if (puVar11 != (undefined4 *)0x0) {
          puVar14 = *(uint **)(puVar11 + 6);
          uStack_40 = CONCAT44(*puVar11,*puVar15);
          uVar4 = CONCAT13(*(undefined *)(puVar11 + 10),uVar3);
          uVar16 = (ulong)uVar4;
          if (puVar14 != (uint *)0x0) {
            puVar11 = *(undefined4 **)(puVar14 + 6);
            uStack_38 = (ulong)*puVar14;
            uVar5 = CONCAT14(*(undefined *)(puVar14 + 10),uVar4);
            uVar16 = (ulong)uVar5;
            if (puVar11 != (undefined4 *)0x0) {
              puVar15 = *(uint **)(puVar11 + 6);
              uStack_38 = CONCAT44(*puVar11,*puVar14);
              uVar6 = CONCAT15(*(undefined *)(puVar11 + 10),uVar5);
              uVar16 = (ulong)uVar6;
              if (puVar15 != (uint *)0x0) {
                puVar11 = *(undefined4 **)(puVar15 + 6);
                uStack_30 = (ulong)*puVar15;
                uVar7 = CONCAT16(*(undefined *)(puVar15 + 10),uVar6);
                uVar16 = (ulong)uVar7;
                if (puVar11 != (undefined4 *)0x0) {
                  puVar14 = *(uint **)(puVar11 + 6);
                  uStack_30 = CONCAT44(*puVar11,*puVar15);
                  uVar16 = CONCAT17(*(undefined *)(puVar11 + 10),uVar7);
                  if (puVar14 != (uint *)0x0) {
                    puVar11 = *(undefined4 **)(puVar14 + 6);
                    uVar13 = (ulong)*(byte *)(puVar14 + 10);
                    uStack_28 = (ulong)*puVar14;
                    if (puVar11 != (undefined4 *)0x0) {
                      puVar15 = *(uint **)(puVar11 + 6);
                      uStack_28 = CONCAT44(*puVar11,*puVar14);
                      uVar2 = CONCAT11(*(undefined *)(puVar11 + 10),*(byte *)(puVar14 + 10));
                      uVar13 = (ulong)uVar2;
                      if (puVar15 != (uint *)0x0) {
                        puVar11 = *(undefined4 **)(puVar15 + 6);
                        uStack_20 = (ulong)*puVar15;
                        uVar3 = CONCAT12(*(undefined *)(puVar15 + 10),uVar2);
                        uVar13 = (ulong)uVar3;
                        if (puVar11 != (undefined4 *)0x0) {
                          puVar14 = *(uint **)(puVar11 + 6);
                          uStack_20 = CONCAT44(*puVar11,*puVar15);
                          uVar4 = CONCAT13(*(undefined *)(puVar11 + 10),uVar3);
                          uVar13 = (ulong)uVar4;
                          if (puVar14 != (uint *)0x0) {
                            puVar11 = *(undefined4 **)(puVar14 + 6);
                            uStack_18 = (ulong)*puVar14;
                            uVar5 = CONCAT14(*(undefined *)(puVar14 + 10),uVar4);
                            uVar13 = (ulong)uVar5;
                            if (puVar11 != (undefined4 *)0x0) {
                              puVar15 = *(uint **)(puVar11 + 6);
                              uStack_18 = CONCAT44(*puVar11,*puVar14);
                              uVar6 = CONCAT15(*(undefined *)(puVar11 + 10),uVar5);
                              uVar13 = (ulong)uVar6;
                              if (puVar15 != (uint *)0x0) {
                                puVar11 = *(undefined4 **)(puVar15 + 6);
                                uStack_10 = (ulong)*puVar15;
                                uVar7 = CONCAT16(*(undefined *)(puVar15 + 10),uVar6);
                                uVar13 = (ulong)uVar7;
                                if (puVar11 != (undefined4 *)0x0) {
                                  uStack_10 = CONCAT44(*puVar11,*puVar15);
                                  uVar13 = CONCAT17(*(undefined *)(puVar11 + 10),uVar7);
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
  **(char **)(param_2 + 0x20) = cVar10;
  lVar12 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar12 + 1;
  *(ulong *)(lVar12 + 1) = uVar16;
  *(ulong *)(lVar12 + 9) = uVar13;
  lVar12 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar12 + 0x10;
  *(ulong *)(lVar12 + 0x10) = uStack_48;
  *(ulong *)(lVar12 + 0x18) = uStack_40;
  bVar9 = lVar8 != ___stack_chk_guard;
  *(ulong *)(lVar12 + 0x20) = uStack_38;
  *(ulong *)(lVar12 + 0x28) = uStack_30;
  *(ulong *)(lVar12 + 0x30) = uStack_28;
  *(ulong *)(lVar12 + 0x38) = uStack_20;
  *(ulong *)(lVar12 + 0x40) = uStack_18;
  *(ulong *)(lVar12 + 0x48) = uStack_10;
  *(long *)(param_2 + 0x20) = *(long *)(param_2 + 0x20) + 0x40;
  if (bVar9) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


