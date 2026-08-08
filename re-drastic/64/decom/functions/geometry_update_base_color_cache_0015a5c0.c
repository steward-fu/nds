/*
 * Ghidra decompilation
 *
 * Function : geometry_update_base_color_cache
 * Address  : 0015a5c0
 * Program  : drastic64
 */


void geometry_update_base_color_cache(long param_1)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  int iVar10;
  
  uVar6 = *(uint *)(param_1 + 0x9a4c);
  uVar1 = *(uint *)(param_1 + 0x9a54);
  bVar2 = *(byte *)(param_1 + 0x9ac3);
  iVar10 = (uVar1 >> 5 & 0x1f) * 0x4000;
  iVar8 = (uVar1 >> 10 & 0x1f) * 0x4000;
  iVar7 = (uVar1 & 0x1f) * 0x4000;
  iVar3 = (uVar6 >> 5 & 0x1f) * 0x200;
  iVar4 = (uVar6 >> 10 & 0x1f) * 0x200;
  iVar5 = (uVar6 & 0x1f) * 0x200;
  if (bVar2 != 0) {
    if ((bVar2 & 1) != 0) {
      uVar6 = *(uint *)(param_1 + 0x96b8);
      iVar7 = iVar7 + (uVar6 & 0x1f) * iVar5;
      iVar10 = iVar10 + (uVar6 >> 5 & 0x1f) * iVar3;
      iVar8 = iVar8 + (uVar6 >> 10 & 0x1f) * iVar4;
    }
    if (bVar2 >> 1 != 0) {
      if ((bVar2 >> 1 & 1) != 0) {
        uVar6 = *(uint *)(param_1 + 0x96bc);
        iVar7 = iVar7 + (uVar6 & 0x1f) * iVar5;
        iVar10 = iVar10 + (uVar6 >> 5 & 0x1f) * iVar3;
        iVar8 = iVar8 + (uVar6 >> 10 & 0x1f) * iVar4;
      }
      if (bVar2 >> 2 != 0) {
        if ((bVar2 >> 2 & 1) != 0) {
          uVar6 = *(uint *)(param_1 + 0x96c0);
          iVar7 = iVar7 + (uVar6 & 0x1f) * iVar5;
          iVar10 = iVar10 + (uVar6 >> 5 & 0x1f) * iVar3;
          iVar8 = iVar8 + (uVar6 >> 10 & 0x1f) * iVar4;
        }
        if (bVar2 >> 3 != 0) {
          if ((bVar2 >> 3 & 1) != 0) {
            uVar6 = *(uint *)(param_1 + 0x96c4);
            iVar7 = iVar7 + (uVar6 & 0x1f) * iVar5;
            iVar10 = iVar10 + (uVar6 >> 5 & 0x1f) * iVar3;
            iVar8 = iVar8 + (uVar6 >> 10 & 0x1f) * iVar4;
          }
          if (bVar2 >> 4 != 0) {
            if ((bVar2 >> 4 & 1) != 0) {
              uVar6 = *(uint *)(param_1 + 0x96c8);
              iVar7 = iVar7 + (uVar6 & 0x1f) * iVar5;
              iVar10 = iVar10 + (uVar6 >> 5 & 0x1f) * iVar3;
              iVar8 = iVar8 + (uVar6 >> 10 & 0x1f) * iVar4;
            }
            uVar6 = (uint)(bVar2 >> 5);
            if (bVar2 >> 5 != 0) {
              uVar9 = 5;
              do {
                if ((uVar6 & 1) != 0) {
                  uVar1 = *(uint *)(param_1 + (uVar9 + 0x25ac) * 4 + 8);
                  iVar7 = iVar7 + (uVar1 & 0x1f) * iVar5;
                  iVar10 = iVar10 + (uVar1 >> 5 & 0x1f) * iVar3;
                  iVar8 = iVar8 + (uVar1 >> 10 & 0x1f) * iVar4;
                }
                uVar9 = (ulong)((int)uVar9 + 1);
                uVar6 = uVar6 >> 1;
              } while (uVar6 != 0);
            }
          }
        }
      }
    }
  }
  *(int *)(param_1 + 0x9758) = iVar7;
  *(int *)(param_1 + 0x975c) = iVar10;
  *(int *)(param_1 + 0x9760) = iVar8;
  return;
}


