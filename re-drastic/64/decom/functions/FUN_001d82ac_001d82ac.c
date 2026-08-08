/*
 * Ghidra decompilation
 *
 * Function : FUN_001d82ac
 * Address  : 001d82ac
 * Program  : drastic64
 */


bool FUN_001d82ac(ModelPPM *param_1,long param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  uint3 uVar6;
  int iVar7;
  void *pvVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  ulong __size;
  uint unaff_w22;
  
  iVar9 = *(int *)(param_2 + 8);
  if (0x7fe2 < iVar9) {
    Unpack::UnpReadBuf();
    iVar9 = *(int *)(param_2 + 8);
  }
  lVar10 = *(long *)(param_2 + 0x18);
  iVar7 = iVar9 + 1;
  *(int *)(param_2 + 8) = iVar7;
  bVar3 = *(byte *)(lVar10 + iVar9);
  if ((bVar3 >> 5 & 1) == 0) {
    if (*(long *)(param_1 + 0x4aa8) == 0) {
      return false;
    }
  }
  else if (iVar7 < 0x7fe3) {
    *(int *)(param_2 + 8) = iVar9 + 2;
    unaff_w22 = (uint)*(byte *)(lVar10 + iVar7);
    iVar7 = iVar9 + 2;
  }
  else {
    Unpack::UnpReadBuf();
    iVar9 = *(int *)(param_2 + 8);
    lVar10 = *(long *)(param_2 + 0x18);
    iVar7 = iVar9 + 1;
    *(int *)(param_2 + 8) = iVar7;
    unaff_w22 = (uint)*(byte *)(lVar10 + iVar9);
  }
  if ((bVar3 >> 6 & 1) != 0) {
    if (0x7fe2 < iVar7) {
      Unpack::UnpReadBuf();
      iVar7 = *(int *)(param_2 + 8);
      lVar10 = *(long *)(param_2 + 0x18);
    }
    *(int *)(param_2 + 8) = iVar7 + 1;
    *param_3 = (uint)*(byte *)(lVar10 + iVar7);
  }
  *(undefined8 *)(param_1 + 0x4a88) = 0;
  *(long *)(param_1 + 0x4aa0) = param_2;
  *(undefined4 *)(param_1 + 0x4a90) = 0xffffffff;
  iVar9 = *(int *)(param_2 + 8);
  if (0x7fe2 < iVar9) {
    Unpack::UnpReadBuf();
    iVar9 = *(int *)(param_2 + 8);
    lVar10 = *(long *)(param_2 + 0x18);
  }
  *(int *)(param_2 + 8) = iVar9 + 1;
  lVar11 = *(long *)(param_1 + 0x4aa0);
  bVar4 = *(byte *)(lVar10 + iVar9);
  *(uint *)(param_1 + 0x4a8c) = (uint)bVar4;
  iVar9 = *(int *)(lVar11 + 8);
  lVar10 = lVar11;
  if (0x7fe2 < iVar9) {
    Unpack::UnpReadBuf();
    iVar9 = *(int *)(lVar11 + 8);
    lVar10 = *(long *)(param_1 + 0x4aa0);
  }
  *(int *)(lVar11 + 8) = iVar9 + 1;
  uVar5 = CONCAT11(bVar4,*(undefined *)(*(long *)(lVar11 + 0x18) + (long)iVar9));
  *(uint *)(param_1 + 0x4a8c) = (uint)uVar5;
  iVar9 = *(int *)(lVar10 + 8);
  lVar11 = lVar10;
  if (0x7fe2 < iVar9) {
    Unpack::UnpReadBuf();
    iVar9 = *(int *)(lVar10 + 8);
    lVar11 = *(long *)(param_1 + 0x4aa0);
  }
  *(int *)(lVar10 + 8) = iVar9 + 1;
  uVar6 = CONCAT21(uVar5,*(undefined *)(*(long *)(lVar10 + 0x18) + (long)iVar9));
  *(uint *)(param_1 + 0x4a8c) = (uint)uVar6;
  iVar9 = *(int *)(lVar11 + 8);
  if (0x7fe2 < iVar9) {
    Unpack::UnpReadBuf();
    iVar9 = *(int *)(lVar11 + 8);
  }
  *(int *)(lVar11 + 8) = iVar9 + 1;
  *(uint *)(param_1 + 0x4a8c) =
       CONCAT31(uVar6,*(undefined *)(*(long *)(lVar11 + 0x18) + (long)iVar9));
  if ((bVar3 & 0x20) != 0) {
    uVar1 = (bVar3 & 0x1f) + 1;
    uVar2 = (bVar3 & 0x1f) * 3 - 0x1d;
    if (uVar1 < 0x11) {
      uVar2 = uVar1;
    }
    lVar10 = *(long *)(param_1 + 0x4aa8);
    if (uVar2 == 1) {
      if (lVar10 != 0) {
        *(undefined8 *)(param_1 + 0x4aa8) = 0;
        free(*(void **)(param_1 + 0x4b58));
        return false;
      }
      return false;
    }
    uVar1 = (unaff_w22 + 1) * 0x100000;
    if ((int)lVar10 != (unaff_w22 + 1) * 0x100000) {
      if (lVar10 != 0) {
        *(undefined8 *)(param_1 + 0x4aa8) = 0;
        free(*(void **)(param_1 + 0x4b58));
      }
      __size = (ulong)((uVar1 / 0xc) * 0x14 + 0x28);
      pvVar8 = malloc(__size);
      *(void **)(param_1 + 0x4b58) = pvVar8;
      if (pvVar8 == (void *)0x0) {
        ErrorHandler::MemoryError();
      }
      else {
        *(ulong *)(param_1 + 0x4aa8) = (ulong)uVar1;
        *(ulong *)(param_1 + 0x4cb0) = (long)pvVar8 + (__size - 0x14);
      }
    }
    ModelPPM::StartModelRare(param_1,uVar2);
  }
  return *(long *)(param_1 + 0x648) != 0;
}


