/*
 * Ghidra decompilation
 *
 * Function : spu_adpcm_decode_block
 * Address  : 0016be80
 * Program  : drastic64
 */


void spu_adpcm_decode_block(long param_1)

{
  uint uVar1;
  short sVar2;
  long lVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  uint uVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  
  uVar1 = *(uint *)(param_1 + 0x90);
  lVar3 = ((ulong)uVar1 & 0x3f) * 2;
  uVar7 = (ulong)*(uint *)(*(long *)(param_1 + 0xa0) + (ulong)(uVar1 >> 1));
  iVar8 = (int)*(short *)(param_1 + 0xba);
  uVar9 = (uint)*(byte *)(param_1 + 0xc0);
  *(uint *)(param_1 + 0x90) = uVar1 + 8;
  puVar11 = (undefined2 *)(param_1 + lVar3);
  do {
    sVar2 = *(short *)(&adpcm_step_table + (ulong)uVar9 * 2);
    uVar5 = (uint)((ulong)(long)sVar2 >> 3) & 0x1fffffff;
    uVar1 = uVar5 + ((uint)(int)sVar2 >> 2);
    if ((uVar7 & 1) == 0) {
      uVar1 = uVar5;
    }
    uVar5 = uVar1 + ((uint)(int)sVar2 >> 1);
    if ((uVar7 & 2) == 0) {
      uVar5 = uVar1;
    }
    uVar1 = uVar5 + (int)sVar2;
    if ((uVar7 & 4) == 0) {
      uVar1 = uVar5;
    }
    if (((uint)uVar7 >> 3 & 1) == 0) {
      iVar8 = iVar8 - uVar1;
      if (iVar8 < -0x7fff) {
        iVar8 = -0x7fff;
      }
    }
    else {
      iVar8 = uVar1 + iVar8;
      if (0x7fff < iVar8) {
        iVar8 = 0x7fff;
      }
    }
    uVar6 = uVar7 & 7;
    uVar7 = uVar7 >> 4;
    uVar9 = uVar9 + (int)*(char *)((long)&adpcm_index_step_table + uVar6);
    if ((0x58 < uVar9) && (bVar4 = (int)uVar9 < 0, uVar9 = 0x58, bVar4)) {
      uVar9 = 0;
    }
    puVar10 = puVar11 + 1;
    *puVar11 = (short)iVar8;
    puVar11 = puVar10;
  } while ((undefined2 *)(param_1 + 0x10 + lVar3) != puVar10);
  *(short *)(param_1 + 0xba) = (short)iVar8;
  *(char *)(param_1 + 0xc0) = (char)uVar9;
  return;
}


