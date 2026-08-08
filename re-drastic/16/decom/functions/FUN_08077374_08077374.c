/*
 * Ghidra decompilation
 *
 * Function : FUN_08077374
 * Address  : 08077374
 * Program  : drastic16
 */


void FUN_08077374(undefined2 param_1)

{
  undefined2 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  
  puVar1 = (undefined2 *)FUN_0807b384(0);
  uVar2 = FUN_0807b3b0(0);
  uVar3 = -((uint)((int)puVar1 << 0x1d) >> 0x1e) & 7;
  iVar8 = 0x1e0;
  if (uVar3 == 0) goto LAB_080774d0;
  do {
    *puVar1 = param_1;
    uVar9 = uVar3;
    if (uVar3 == 1) {
      iVar10 = 799;
    }
    else {
      puVar1[1] = param_1;
      if (uVar3 == 2) {
        iVar10 = 0x31e;
      }
      else {
        puVar1[2] = param_1;
        if (uVar3 == 3) {
          iVar10 = 0x31d;
        }
        else {
          puVar1[3] = param_1;
          if (uVar3 == 4) {
            iVar10 = 0x31c;
          }
          else {
            puVar1[4] = param_1;
            if (uVar3 == 5) {
              iVar10 = 0x31b;
            }
            else {
              puVar1[5] = param_1;
              if (uVar3 == 7) {
                iVar10 = 0x319;
                puVar1[6] = param_1;
              }
              else {
                iVar10 = 0x31a;
                uVar9 = 6;
              }
            }
          }
        }
      }
    }
    while( true ) {
      uVar11 = 800 - uVar3;
      puVar4 = (undefined8 *)(puVar1 + uVar3);
      uVar5 = 0;
      uVar3 = uVar11 & 0xfffffff8;
      do {
        uVar5 = uVar5 + 1;
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4 = puVar4 + 2;
      } while (uVar5 < uVar11 >> 3);
      iVar6 = uVar9 + uVar3;
      iVar10 = iVar10 - uVar3;
      if (uVar11 != uVar3) {
        puVar1[iVar6] = param_1;
        if (iVar10 != 1) {
          puVar1[iVar6 + 1] = param_1;
          if (iVar10 != 2) {
            puVar1[iVar6 + 2] = param_1;
            if (iVar10 != 3) {
              puVar1[iVar6 + 3] = param_1;
              if (iVar10 != 4) {
                puVar1[iVar6 + 4] = param_1;
                if (iVar10 != 5) {
                  iVar7 = iVar6 + 6;
                  if (iVar10 != 6) {
                    iVar7 = iVar7 * 2;
                  }
                  puVar1[iVar6 + 5] = param_1;
                  if (iVar10 != 6) {
                    *(undefined2 *)((int)puVar1 + iVar7) = param_1;
                  }
                }
              }
            }
          }
        }
      }
      iVar8 = iVar8 + -1;
      puVar1 = (undefined2 *)((int)puVar1 + (uVar2 & 0xfffffffe));
      if (iVar8 == 0) {
        return;
      }
      uVar3 = -((uint)((int)puVar1 * 0x20000000) >> 0x1e) & 7;
      if (uVar3 != 0) break;
LAB_080774d0:
      iVar10 = 800;
      uVar9 = uVar3;
    }
  } while( true );
}


