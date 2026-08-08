/*
 * Ghidra decompilation
 *
 * Function : FUN_08070ee8
 * Address  : 08070ee8
 * Program  : drastic16
 */


void FUN_08070ee8(int param_1,uint param_2,void **param_3)

{
  size_t __size;
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  int **ppiVar4;
  void *pvVar5;
  void *pvVar6;
  void *pvVar7;
  void *pvVar8;
  uint *puVar9;
  int **ppiVar10;
  void *pvVar11;
  uint uVar12;
  void *pvVar13;
  int *piVar14;
  int *piVar15;
  void *pvVar16;
  uint uVar17;
  int *piVar18;
  int *piVar19;
  int *piVar20;
  void *pvVar21;
  int local_50;
  uint local_4c;
  int *local_48;
  int local_44;
  void *local_40;
  
  if (param_2 >> 1 != 0) {
    piVar20 = (int *)(param_1 + 4);
    local_4c = 0;
    do {
      if (*piVar20 != 0) {
        pvVar21 = *(void **)(*piVar20 + -4);
        pvVar16 = param_3[7];
        local_40 = *param_3;
        uVar1 = *(ushort *)((int)pvVar21 + 0x10);
        uVar2 = *(uint *)((int)pvVar21 + 0x18);
        uVar3 = *(uint *)((int)pvVar21 + 0x1c);
        local_50 = (int)pvVar16 * 0x20;
        uVar12 = uVar1 & 0xfff;
        puVar9 = (uint *)((int)local_40 + local_50);
        if ((uVar1 & 0x1000) == 0) {
          uVar12 = ((uint)uVar1 << 0x14) >> 0x15;
        }
        pvVar5 = param_3[2];
        pvVar7 = param_3[3];
        uVar17 = (uint)((ulonglong)uVar2 * (ulonglong)uVar12);
        pvVar11 = param_3[8];
        pvVar6 = param_3[4];
        pvVar8 = param_3[5];
        puVar9[4] = uVar12;
        uVar12 = uVar12 * uVar3 + (int)((ulonglong)uVar2 * (ulonglong)uVar12 >> 0x20);
        uVar1 = *(ushort *)((int)pvVar21 + 0x12);
        *puVar9 = uVar2;
        puVar9[1] = uVar3;
        puVar9[5] = (uint)uVar1;
        pvVar13 = (void *)((int)pvVar16 + 1);
        param_3[2] = (void *)((int)pvVar5 + uVar2);
        param_3[3] = (void *)((int)pvVar7 + CARRY4((uint)pvVar5,uVar2) + uVar3);
        puVar9[2] = uVar17;
        puVar9[3] = uVar12;
        param_3[4] = (void *)((int)pvVar6 + uVar17);
        param_3[5] = (void *)((int)pvVar8 + CARRY4((uint)pvVar6,uVar17) + uVar12);
        pvVar6 = param_3[6];
        puVar9[6] = *(uint *)((int)pvVar21 + 8);
        pvVar5 = pvVar21;
        if (pvVar11 != pvVar13) {
          pvVar5 = pvVar11;
        }
        param_3[6] = (void *)((int)pvVar6 + (uint)*(ushort *)((int)pvVar21 + 0x12));
        if (pvVar11 == pvVar13) {
          local_40 = realloc(local_40,(int)pvVar13 * 0x40);
          pvVar5 = (void *)((int)pvVar13 * 2);
          param_3[8] = pvVar5;
          *param_3 = local_40;
        }
        param_3[7] = pvVar13;
        if (piVar20[2] != 0) {
          ppiVar10 = *(int ***)(piVar20[2] + -4);
          piVar18 = ppiVar10[6];
          piVar19 = ppiVar10[7];
          uVar1 = *(ushort *)(ppiVar10 + 4);
          piVar14 = (int *)(uVar1 & 0xfff);
          if ((uVar1 & 0x1000) == 0) {
            piVar14 = (int *)(((uint)uVar1 << 0x14) >> 0x15);
          }
          pvVar6 = param_3[2];
          pvVar8 = param_3[3];
          ppiVar4 = (int **)((int)local_40 + local_50 + 0x20);
          local_44 = (int)(ZEXT48(piVar18) * ZEXT48(piVar14) >> 0x20);
          ppiVar4[4] = piVar14;
          piVar15 = (int *)((int)piVar14 * (int)piVar19 + local_44);
          pvVar7 = param_3[4];
          pvVar11 = param_3[5];
          ppiVar4[5] = (int *)(uint)*(ushort *)((int)ppiVar10 + 0x12);
          local_48 = (int *)(ZEXT48(piVar18) * ZEXT48(piVar14));
          pvVar21 = param_3[6];
          *ppiVar4 = piVar18;
          ppiVar4[1] = piVar19;
          param_3[2] = (void *)((int)pvVar6 + (int)piVar18);
          param_3[3] = (void *)((int)pvVar8 + (int)piVar19 +
                               (uint)CARRY4((uint)pvVar6,(uint)piVar18));
          ppiVar4[2] = local_48;
          ppiVar4[3] = piVar15;
          param_3[4] = (void *)((int)pvVar7 + (int)local_48);
          param_3[5] = (void *)((int)pvVar11 + (int)piVar15 +
                               (uint)CARRY4((uint)pvVar7,(uint)local_48));
          ppiVar4[6] = ppiVar10[2];
          param_3[6] = (void *)((int)pvVar21 + (uint)*(ushort *)((int)ppiVar10 + 0x12));
          if ((void *)((int)pvVar16 + 2) == pvVar5) {
            __size = (int)pvVar5 << 6;
            pvVar5 = (void *)((int)pvVar5 << 1);
            local_40 = realloc(local_40,__size);
            param_3[8] = pvVar5;
            *param_3 = local_40;
          }
          param_3[7] = (void *)((int)pvVar16 + 2);
          piVar14 = *ppiVar10;
          if (piVar14 != (int *)0x0) {
            pvVar16 = (void *)((int)pvVar16 + 3);
            local_50 = local_50 + 0x40;
            do {
              uVar1 = *(ushort *)(piVar14 + 4);
              uVar12 = uVar1 & 0xfff;
              pvVar21 = param_3[2];
              pvVar6 = param_3[3];
              puVar9 = (uint *)((int)local_40 + local_50);
              uVar2 = piVar14[6];
              uVar3 = piVar14[7];
              if ((uVar1 & 0x1000) == 0) {
                uVar12 = ((uint)uVar1 << 0x14) >> 0x15;
              }
              local_50 = local_50 + 0x20;
              uVar17 = (uint)((ulonglong)uVar2 * (ulonglong)uVar12);
              puVar9[4] = uVar12;
              uVar1 = *(ushort *)((int)piVar14 + 0x12);
              *puVar9 = uVar2;
              puVar9[1] = uVar3;
              puVar9[5] = (uint)uVar1;
              uVar12 = uVar12 * uVar3 + (int)((ulonglong)uVar2 * (ulonglong)uVar12 >> 0x20);
              pvVar7 = param_3[4];
              pvVar8 = param_3[5];
              param_3[2] = (void *)((int)pvVar21 + uVar2);
              param_3[3] = (void *)((int)pvVar6 + CARRY4((uint)pvVar21,uVar2) + uVar3);
              pvVar21 = param_3[6];
              puVar9[2] = uVar17;
              puVar9[3] = uVar12;
              param_3[4] = (void *)((int)pvVar7 + uVar17);
              param_3[5] = (void *)((int)pvVar8 + CARRY4((uint)pvVar7,uVar17) + uVar12);
              puVar9[6] = piVar14[2];
              param_3[6] = (void *)((int)pvVar21 + (uint)*(ushort *)((int)piVar14 + 0x12));
              if (pvVar16 == pvVar5) {
                local_40 = realloc(local_40,(int)pvVar16 << 6);
                pvVar5 = (void *)((int)pvVar16 << 1);
                param_3[8] = pvVar5;
                *param_3 = local_40;
              }
              param_3[7] = pvVar16;
              pvVar16 = (void *)((int)pvVar16 + 1);
              piVar14 = (int *)*piVar14;
            } while (piVar14 != (int *)0x0);
          }
        }
      }
      piVar20 = piVar20 + 4;
      local_4c = local_4c + 1;
    } while (local_4c != param_2 >> 1);
  }
  return;
}


