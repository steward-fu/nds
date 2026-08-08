/*
 * Ghidra decompilation
 *
 * Function : cpu_block_log_from_hash
 * Address  : 00129f20
 * Program  : drastic64
 */


void cpu_block_log_from_hash(long param_1,long param_2,ulong param_3,void **param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  long lVar6;
  void *__ptr;
  void *pvVar7;
  void *pvVar8;
  int iVar9;
  long lVar10;
  uint *puVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  
  puVar11 = (uint *)(param_2 + 4);
  do {
    if (*puVar11 != 0) {
      __ptr = *param_4;
      pvVar8 = param_4[1];
      uVar3 = *(uint *)((long)param_4 + 0x1c);
      uVar4 = *(uint *)(param_4 + 4);
      uVar13 = (ulong)uVar4;
      lVar1 = (ulong)*(uint *)(param_1 + (ulong)*puVar11 + -4) + param_1;
      uVar14 = uVar3 + 1;
      uVar5 = *(ushort *)(lVar1 + 0x10);
      lVar6 = (ulong)uVar3 * 0x20;
      uVar2 = uVar5 >> 1 & 0x7ff;
      if ((uVar5 & 0x1000) != 0) {
        uVar2 = uVar5 & 0xfff;
      }
      lVar10 = *(long *)(lVar1 + 0x18);
      *(uint *)((long)__ptr + lVar6 + 0x10) = uVar2;
      *(uint *)((long)__ptr + lVar6 + 0x14) = (uint)*(ushort *)(lVar1 + 0x12);
      *(long *)((long)__ptr + lVar6) = lVar10;
      pvVar7 = param_4[2];
      param_4[1] = (void *)((long)pvVar8 + lVar10);
      *(ulong *)((long)__ptr + lVar6 + 8) = (ulong)uVar2 * lVar10;
      param_4[2] = (void *)((long)pvVar7 + (ulong)uVar2 * lVar10);
      iVar9 = *(int *)(param_4 + 3);
      *(ulong *)((long)__ptr + lVar6 + 0x18) = param_1 + (ulong)*(uint *)(lVar1 + 8);
      *(uint *)(param_4 + 3) = iVar9 + (uint)*(ushort *)(lVar1 + 0x12);
      if (uVar4 == uVar14) {
        uVar13 = (ulong)(uVar4 * 2);
        __ptr = realloc(__ptr,uVar13 << 5);
        *param_4 = __ptr;
        *(uint *)(param_4 + 4) = uVar4 * 2;
      }
      *(uint *)((long)param_4 + 0x1c) = uVar14;
      if (puVar11[2] != 0) {
        lVar6 = (ulong)uVar14 * 0x20;
        uVar15 = (ulong)*(uint *)(param_1 + (ulong)puVar11[2] + -4);
        pvVar7 = param_4[1];
        pvVar8 = param_4[2];
        lVar1 = param_1 + uVar15;
        iVar9 = *(int *)(param_4 + 3);
        uVar3 = uVar3 + 2;
        uVar12 = (ulong)uVar3;
        uVar5 = *(ushort *)(lVar1 + 0x10);
        lVar10 = *(long *)(lVar1 + 0x18);
        uVar14 = uVar5 >> 1 & 0x7ff;
        if ((uVar5 & 0x1000) != 0) {
          uVar14 = uVar5 & 0xfff;
        }
        *(uint *)((long)__ptr + lVar6 + 0x10) = uVar14;
        *(uint *)((long)__ptr + lVar6 + 0x14) = (uint)*(ushort *)(lVar1 + 0x12);
        *(long *)((long)__ptr + lVar6) = lVar10;
        param_4[1] = (void *)((long)pvVar7 + lVar10);
        *(ulong *)((long)__ptr + lVar6 + 8) = (ulong)uVar14 * lVar10;
        param_4[2] = (void *)((long)pvVar8 + (ulong)uVar14 * lVar10);
        *(ulong *)((long)__ptr + lVar6 + 0x18) = param_1 + (ulong)*(uint *)(lVar1 + 8);
        *(uint *)(param_4 + 3) = iVar9 + (uint)*(ushort *)(lVar1 + 0x12);
        if (uVar3 == (uint)uVar13) {
          uVar14 = (uint)uVar13 * 2;
          uVar13 = (ulong)uVar14;
          __ptr = realloc(__ptr,uVar13 << 5);
          *param_4 = __ptr;
          *(uint *)(param_4 + 4) = uVar14;
        }
        *(uint *)((long)param_4 + 0x1c) = uVar3;
        for (uVar14 = *(uint *)(param_1 + uVar15); uVar14 != 0;
            uVar14 = *(uint *)(param_1 + (ulong)uVar14)) {
          pvVar8 = param_4[1];
          pvVar7 = param_4[2];
          iVar9 = *(int *)(param_4 + 3);
          while( true ) {
            lVar1 = param_1 + (ulong)uVar14;
            lVar6 = uVar12 * 0x20;
            uVar5 = *(ushort *)(lVar1 + 0x10);
            lVar10 = *(long *)(lVar1 + 0x18);
            uVar3 = uVar5 >> 1 & 0x7ff;
            if ((uVar5 & 0x1000) != 0) {
              uVar3 = uVar5 & 0xfff;
            }
            *(uint *)((long)__ptr + lVar6 + 0x10) = uVar3;
            *(uint *)((long)__ptr + lVar6 + 0x14) = (uint)*(ushort *)(lVar1 + 0x12);
            *(long *)((long)__ptr + lVar6) = lVar10;
            pvVar8 = (void *)((long)pvVar8 + lVar10);
            param_4[1] = pvVar8;
            *(ulong *)((long)__ptr + lVar6 + 8) = (ulong)uVar3 * lVar10;
            pvVar7 = (void *)((long)pvVar7 + (ulong)uVar3 * lVar10);
            param_4[2] = pvVar7;
            uVar3 = (int)uVar12 + 1;
            uVar12 = (ulong)uVar3;
            *(ulong *)((long)__ptr + lVar6 + 0x18) = param_1 + (ulong)*(uint *)(lVar1 + 8);
            iVar9 = iVar9 + (uint)*(ushort *)(lVar1 + 0x12);
            *(int *)(param_4 + 3) = iVar9;
            if (uVar3 == (uint)uVar13) break;
            *(uint *)((long)param_4 + 0x1c) = uVar3;
            uVar14 = *(uint *)(param_1 + (ulong)uVar14);
            if (uVar14 == 0) goto LAB_00129f58;
          }
          uVar13 = (ulong)(uVar3 * 2);
          __ptr = realloc(__ptr,uVar13 << 5);
          *param_4 = __ptr;
          *(uint *)((long)param_4 + 0x1c) = uVar3;
          *(uint *)(param_4 + 4) = uVar3 * 2;
        }
      }
    }
LAB_00129f58:
    puVar11 = puVar11 + 4;
    if (puVar11 ==
        (uint *)(param_2 + 0x14 + (ulong)(((uint)(param_3 >> 1) & 0x7fffffff) - 1) * 0x10)) {
      return;
    }
  } while( true );
}


