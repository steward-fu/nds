/*
 * Ghidra decompilation
 *
 * Function : FUN_080581a4
 * Address  : 080581a4
 * Program  : drastic16
 */


void FUN_080581a4(uint *param_1,int *param_2,uint param_3,int param_4)

{
  size_t __n;
  size_t __n_00;
  uint uVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined *puVar12;
  uint uVar13;
  void *pvVar14;
  uint uVar15;
  void *pvVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  
  pvVar14 = (void *)param_1[3];
  iVar19 = *param_2;
  iVar4 = 8 << ((param_3 << 9) >> 0x1d);
  iVar9 = 8 << ((param_3 << 6) >> 0x1d);
  uVar21 = (param_3 & 0xffff) * 8;
  *param_1 = param_3 & 0xfff0ffff;
  uVar10 = (param_3 << 3) >> 0x1d;
  *(short *)((int)param_1 + 0x2a) = (short)param_4;
  *(undefined *)(param_1 + 0xb) = 0;
  iVar17 = iVar4 * iVar9;
  *(byte *)((int)param_1 + 0x2d) = (byte)((param_3 << 3) >> 0x1d);
  if (pvVar14 == (void *)0x0) {
    bVar2 = (&DAT_080e70f0)[uVar10];
    pvVar14 = malloc((uint)bVar2 * iVar17);
    iVar5 = param_2[0x1008];
    param_1[3] = (uint)pvVar14;
    param_2[0x1008] = (uint)bVar2 * iVar17 + iVar5;
  }
  uVar20 = (uint)(byte)(&DAT_080e70e8)[uVar10];
  *(short *)(param_1 + 9) = (short)iVar4;
  *(short *)((int)param_1 + 0x26) = (short)iVar9;
  uVar13 = (uint)(iVar17 * 2) >> uVar20;
  param_1[1] = -1 << (uVar21 >> 0xe) & ~(-2 << ((uVar21 - 1) + uVar13 >> 0xe & 0xff));
  if (uVar10 == 5) {
    uVar10 = uVar21 >> 0x11;
    uVar20 = (param_3 & 0xffff) << 0x12;
    iVar5 = *(int *)(*param_2 + uVar10 * 4 + 0x1128);
    if ((iVar5 == 0) || (iVar8 = *(int *)(*param_2 + 0x112c), iVar8 == 0)) {
      memset(pvVar14,0,iVar17 * 4);
    }
    else {
      FUN_08057b20(pvVar14,iVar5 + (uVar21 & 0x1ffff),iVar8 + (uVar20 >> 0x10) + uVar10 * 0x8000,
                   param_4 << 3,iVar19 + 0x1138,iVar4,iVar9);
    }
    uVar21 = (uVar20 >> 0x10) + (uVar10 + 4) * 0x8000;
    param_1[2] = 0xf;
    param_1[1] = param_1[1] | -1 << (uVar21 >> 0xe) & ~(-2 << ((uVar13 - 1) + uVar21 >> 0xe & 0xff))
    ;
    return;
  }
  uVar6 = (param_3 << 2) >> 0x1f;
  uVar18 = uVar21 & 0x1ffff;
  if (uVar10 == 7) {
    puVar12 = (undefined *)0x0;
    param_1[2] = 0;
  }
  else {
    uVar11 = param_4 << 2;
    if (uVar10 != 2) {
      uVar11 = param_4 << 3;
    }
    uVar1 = uVar11 >> 0xd;
    uVar15 = (uint)*(ushort *)(&DAT_080e70f8 + uVar10 * 2);
    uVar11 = uVar11 & 0x1fff;
    if (5 < uVar1) {
      printf("weird palette slot (%d)!\n",uVar1);
      uVar1 = uVar1 - 6;
    }
    if (uVar11 + uVar15 < 0x2001) {
      param_1[2] = 1 << (uVar1 & 0xff);
      iVar4 = *(int *)(iVar19 + (uVar1 + 0x44c) * 4 + 8);
      if (iVar4 == 0) {
        memset(&DAT_081c4590,0,uVar15 << 1);
        puVar12 = &DAT_081c4590;
        pvVar14 = (void *)param_1[3];
      }
      else {
        pvVar14 = (void *)param_1[3];
        puVar12 = (undefined *)(iVar4 + uVar11 * 2);
      }
    }
    else {
      uVar7 = uVar1 + 1;
      if (5 < uVar7) {
        uVar7 = uVar1 - 5;
      }
      iVar4 = *(int *)(iVar19 + (uVar1 + 0x44c) * 4 + 8);
      __n = (0x2000 - uVar11) * 2;
      pvVar14 = *(void **)(iVar19 + (uVar7 + 0x44c) * 4 + 8);
      param_1[2] = 3 << (uVar1 & 0xff);
      if (iVar4 == 0) {
        memset(&DAT_081c4590,0,__n);
      }
      else {
        memcpy(&DAT_081c4590,(void *)(iVar4 + uVar11 * 2),__n);
      }
      puVar12 = &DAT_081c4590;
      __n_00 = (uVar15 - (0x2000 - uVar11)) * 2;
      if (pvVar14 == (void *)0x0) {
        memset(&DAT_081c4590 + __n,0,__n_00);
        pvVar14 = (void *)param_1[3];
      }
      else {
        memcpy(&DAT_081c4590 + __n,pvVar14,__n_00);
        pvVar14 = (void *)param_1[3];
      }
    }
  }
  iVar4 = *(int *)(*param_2 + ((uVar21 >> 0x11) + 0x448) * 4 + 8);
  uVar11 = uVar13;
  if (0x1ffff < uVar13 + uVar18) {
    uVar21 = (uVar21 >> 0x11) + 1 & 3;
    uVar11 = 0x20000 - uVar18;
    uVar13 = uVar13 - uVar11;
    uVar3 = *(undefined4 *)(*param_2 + (uVar21 + 0x448) * 4 + 8);
    pvVar16 = (void *)((uint)(byte)(&DAT_080e70f0)[uVar10] * ((uVar11 << uVar20) >> 1) +
                      (int)pvVar14);
    if (0x1ffff < uVar13) {
      iVar9 = uVar13 - 0x20000;
      uVar13 = 0x20000;
      FUN_0805804c(param_2,param_1,
                   (void *)((uint)(byte)(&DAT_080e70f0)[uVar10] * ((uint)(0x20000 << uVar20) >> 1) +
                           (int)pvVar16),iVar9,puVar12,uVar21 + 1 & 3,0,uVar10,uVar6);
    }
    FUN_0805658c(param_1,pvVar16,uVar3,puVar12,uVar10,uVar13,uVar6);
  }
  if (iVar4 != 0) {
    iVar4 = iVar4 + uVar18;
  }
  FUN_0805658c(param_1,pvVar14,iVar4,puVar12,uVar10,uVar11,uVar6);
  return;
}


