/*
 * Ghidra decompilation
 *
 * Function : FUN_001e6a0c
 * Address  : 001e6a0c
 * Program  : drastic64
 */


void FUN_001e6a0c(ModelPPM *param_1)

{
  ulong uVar1;
  SubAllocator *this;
  int iVar2;
  char cVar3;
  byte bVar4;
  SubAllocator SVar5;
  SubAllocator SVar6;
  ModelPPM MVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  uint uVar11;
  bool bVar12;
  bool bVar13;
  byte bVar14;
  uint uVar15;
  char *pcVar16;
  ushort *puVar17;
  short *psVar18;
  undefined uVar19;
  short sVar20;
  ushort uVar21;
  undefined8 *puVar23;
  ushort *puVar24;
  undefined8 *puVar25;
  uint uVar26;
  long lVar27;
  long lVar28;
  ushort *puVar29;
  ushort *puVar30;
  int iVar22;
  
  puVar23 = (undefined8 *)0x0;
  pcVar16 = *(char **)(param_1 + 0x660);
  cVar3 = *pcVar16;
  bVar4 = pcVar16[1];
  puVar30 = *(ushort **)(pcVar16 + 2);
  if ((bVar4 < 0x1f) &&
     (psVar18 = *(short **)(*(long *)(param_1 + 0x648) + 0xc), psVar18 != (short *)0x0)) {
    if (*psVar18 == 1) {
      bVar14 = *(byte *)((long)psVar18 + 3);
      puVar23 = (undefined8 *)(psVar18 + 1);
      if (bVar14 < 0x20) {
        bVar14 = bVar14 + 1;
      }
      *(byte *)((long)psVar18 + 3) = bVar14;
    }
    else {
      puVar23 = *(undefined8 **)(psVar18 + 2);
      if (*(char *)puVar23 == cVar3) {
        bVar14 = *(byte *)((long)puVar23 + 1);
      }
      else {
        do {
          puVar25 = puVar23;
          puVar23 = (undefined8 *)((long)puVar25 + 10);
        } while (*(char *)puVar23 != cVar3);
        bVar14 = *(byte *)((long)puVar25 + 0xb);
        if (*(byte *)((long)puVar25 + 1) <= bVar14) {
          *puVar23 = *puVar25;
          *(short *)((long)puVar25 + 0x12) = *(short *)(puVar25 + 1);
          *(char *)puVar25 = cVar3;
          *(byte *)((long)puVar25 + 1) = bVar14;
          *(undefined8 *)((long)puVar25 + 2) = *(undefined8 *)((long)puVar25 + 0xc);
          puVar23 = puVar25;
        }
      }
      if (bVar14 < 0x73) {
        *(byte *)((long)puVar23 + 1) = bVar14 + 2;
        psVar18[1] = psVar18[1] + 2;
      }
    }
  }
  if (*(int *)(param_1 + 0x670) == 0) {
    lVar28 = *(long *)(param_1 + 0x660);
    lVar27 = ModelPPM::CreateSuccessors(param_1,true,(STATE *)puVar23);
    *(long *)(lVar28 + 2) = lVar27;
    *(long *)(param_1 + 0x648) = lVar27;
    *(long *)(param_1 + 0x658) = lVar27;
    if (lVar27 != 0) {
      return;
    }
  }
  else {
    pcVar16 = *(char **)(param_1 + 0x4ca0);
    *(char **)(param_1 + 0x4ca0) = pcVar16 + 1;
    *pcVar16 = cVar3;
    puVar24 = *(ushort **)(param_1 + 0x4ca0);
    if (puVar24 < *(ushort **)(param_1 + 0x4cb8)) {
      if (puVar30 == (ushort *)0x0) {
        *(ushort **)(*(long *)(param_1 + 0x660) + 2) = puVar24;
        puVar17 = *(ushort **)(param_1 + 0x648);
        puVar29 = *(ushort **)(param_1 + 0x658);
        puVar30 = puVar17;
      }
      else {
        if ((puVar30 <= puVar24) &&
           (puVar30 = (ushort *)ModelPPM::CreateSuccessors(param_1,false,(STATE *)puVar23),
           puVar30 == (ushort *)0x0)) goto LAB_001e6c84;
        iVar22 = *(int *)(param_1 + 0x670);
        puVar17 = *(ushort **)(param_1 + 0x648);
        *(int *)(param_1 + 0x670) = iVar22 + -1;
        puVar29 = *(ushort **)(param_1 + 0x658);
        if (iVar22 + -1 == 0) {
          *(ulong *)(param_1 + 0x4ca0) = *(long *)(param_1 + 0x4ca0) - (ulong)(puVar29 != puVar17);
          puVar24 = puVar30;
        }
      }
      uVar8 = *puVar17;
      uVar9 = puVar17[1];
      if (puVar17 != puVar29) {
        this = (SubAllocator *)(param_1 + 0x4aa8);
        do {
          uVar10 = *puVar29;
          uVar26 = (uint)uVar10;
          if (uVar26 == 1) {
            MVar7 = param_1[0x4ad6];
            puVar23 = *(undefined8 **)(param_1 + (ulong)(byte)MVar7 * 8 + 0x4b70);
            if (puVar23 == (undefined8 *)0x0) {
              puVar23 = *(undefined8 **)(param_1 + 0x4b60);
              uVar1 = (long)puVar23 + (ulong)((uint)(byte)this[(ulong)(byte)MVar7 + 8] * 0x14);
              *(ulong *)(param_1 + 0x4b60) = uVar1;
              if (*(ulong *)(param_1 + 0x4b68) < uVar1) {
                *(undefined8 **)(param_1 + 0x4b60) = puVar23;
                puVar23 = (undefined8 *)SubAllocator::AllocUnitsRare(this,(uint)(byte)MVar7);
              }
              if (puVar23 == (undefined8 *)0x0) goto LAB_001e6c84;
            }
            else {
              *(undefined8 *)(param_1 + (ulong)(byte)MVar7 * 8 + 0x4b70) = *puVar23;
            }
            *puVar23 = *(undefined8 *)(puVar29 + 1);
            *(ushort *)(puVar23 + 1) = puVar29[5];
            *(undefined8 **)(puVar29 + 2) = puVar23;
            if (*(byte *)((long)puVar23 + 1) < 0x1e) {
              iVar22 = (*(byte *)((long)puVar23 + 1) & 0x7f) << 1;
              uVar19 = (undefined)iVar22;
            }
            else {
              iVar22 = 0x78;
              uVar19 = 0x78;
            }
            *(undefined *)((long)puVar23 + 1) = uVar19;
            iVar2 = *(int *)(param_1 + 0x66c);
            puVar23 = *(undefined8 **)(puVar29 + 2);
            if (3 < uVar8) {
              iVar2 = iVar2 + 1;
            }
            uVar15 = iVar22 + iVar2;
          }
          else {
            puVar23 = *(undefined8 **)(puVar29 + 2);
            if ((uVar10 & 1) == 0) {
              uVar15 = (uint)(uVar10 >> 1);
              SVar5 = this[(long)(int)(uVar15 - 1) + 0x2e];
              SVar6 = this[(ulong)uVar15 + 0x2e];
              if (SVar5 == SVar6) {
                if (puVar23 == (undefined8 *)0x0) goto LAB_001e6c84;
              }
              else {
                puVar25 = *(undefined8 **)(param_1 + (ulong)(byte)SVar6 * 8 + 0x4b70);
                if (puVar25 == (undefined8 *)0x0) {
                  puVar25 = *(undefined8 **)(param_1 + 0x4b60);
                  uVar1 = (long)puVar25 + (ulong)((uint)(byte)this[(ulong)(byte)SVar6 + 8] * 0x14);
                  *(ulong *)(param_1 + 0x4b60) = uVar1;
                  if (*(ulong *)(param_1 + 0x4b68) < uVar1) {
                    *(undefined8 **)(param_1 + 0x4b60) = puVar25;
                    puVar25 = (undefined8 *)SubAllocator::AllocUnitsRare(this,(uint)(byte)SVar6);
                  }
                  if (puVar25 == (undefined8 *)0x0) {
                    *(undefined8 *)(puVar29 + 2) = 0;
                    goto LAB_001e6c84;
                  }
                }
                else {
                  *(undefined8 *)(param_1 + (ulong)(byte)SVar6 * 8 + 0x4b70) = *puVar25;
                }
                puVar25 = (undefined8 *)memcpy(puVar25,puVar23,(ulong)(uVar15 * 0x14));
                *puVar23 = *(undefined8 *)(param_1 + (ulong)(byte)SVar5 * 8 + 0x4b70);
                *(undefined8 **)(param_1 + (ulong)(byte)SVar5 * 8 + 0x4b70) = puVar23;
                *(undefined8 **)(puVar29 + 2) = puVar25;
                puVar23 = puVar25;
              }
            }
            uVar21 = puVar29[1];
            bVar12 = false;
            bVar13 = true;
            if (uVar26 << 2 <= (uint)uVar8) {
              bVar13 = (uint)uVar10 * 8 <= (uint)uVar21;
              bVar12 = (uint)uVar21 == (uint)uVar10 * 8;
            }
            uVar15 = (uint)uVar21;
            if (uVar10 + uVar26 < (uint)uVar8) {
              uVar15 = uVar15 + 1;
            }
            uVar15 = uVar15 + (uint)(!bVar13 || bVar12) * 2;
          }
          uVar26 = (uVar15 & 0xffff) + (((uint)uVar9 - (uint)uVar8) - (uint)bVar4) + 1;
          iVar22 = ((uVar15 & 0xffff) + 6) * (uint)bVar4;
          uVar11 = iVar22 * 2;
          if ((uint)(iVar22 * 2) < uVar26 * 6) {
            sVar20 = (uVar26 < uVar11) + 1;
            if (uVar26 * 4 <= uVar11) {
              sVar20 = (uVar26 < uVar11) + 2;
            }
            puVar29[1] = (short)uVar15 + 3;
          }
          else {
            uVar21 = (ushort)(uVar26 * 9 <= uVar11);
            sVar20 = uVar21 + 4;
            if (uVar26 * 0xc <= uVar11) {
              sVar20 = uVar21 + 5;
            }
            if (uVar26 * 0xf <= uVar11) {
              sVar20 = sVar20 + 1;
            }
            puVar29[1] = (short)uVar15 + sVar20;
          }
          lVar27 = (ulong)uVar10 * 10;
          *(ushort **)((long)puVar23 + lVar27 + 2) = puVar24;
          *(char *)((long)puVar23 + lVar27) = cVar3;
          *(char *)((long)puVar23 + lVar27 + 1) = (char)sVar20;
          *puVar29 = uVar10 + 1;
          puVar29 = *(ushort **)(puVar29 + 6);
        } while (*(ushort **)(param_1 + 0x648) != puVar29);
      }
      *(ushort **)(param_1 + 0x648) = puVar30;
      *(ushort **)(param_1 + 0x658) = puVar30;
      return;
    }
  }
LAB_001e6c84:
  ModelPPM::RestartModelRare();
  param_1[0xa80] = (ModelPPM)0x0;
  return;
}


