/*
 * Ghidra decompilation
 *
 * Function : clear_screen_menu
 * Address  : 080a5ef0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void clear_screen_menu(u32 color)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  u16 *pixels;
  u32 uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  puVar2 = (undefined2 *)get_screen_ptr(0);
  uVar3 = get_screen_pitch(0);
  uVar1 = (undefined2)color;
  iVar9 = 0x1e0;
  do {
    uVar5 = -((uint)((int)puVar2 << 0x1d) >> 0x1e) & 7;
    uVar4 = uVar5;
    if (uVar5 == 0) {
      iVar10 = 800;
      uVar12 = 100;
      iVar8 = iVar10;
      iVar11 = iVar10;
    }
    else {
      *puVar2 = uVar1;
      if (uVar5 == 1) {
        iVar10 = 799;
      }
      else {
        puVar2[1] = uVar1;
        if (uVar5 == 2) {
          iVar10 = 0x31e;
        }
        else {
          puVar2[2] = uVar1;
          if (uVar5 == 3) {
            iVar10 = 0x31d;
          }
          else {
            puVar2[3] = uVar1;
            if (uVar5 == 4) {
              iVar10 = 0x31c;
            }
            else {
              puVar2[4] = uVar1;
              if (uVar5 == 5) {
                iVar10 = 0x31b;
              }
              else {
                puVar2[5] = uVar1;
                if (uVar5 == 7) {
                  iVar10 = 0x319;
                  puVar2[6] = uVar1;
                }
                else {
                  iVar10 = 0x31a;
                  uVar4 = 6;
                }
              }
            }
          }
        }
      }
      uVar12 = 99;
      iVar8 = 0x318;
      iVar11 = 800 - uVar5;
    }
    uVar5 = 0;
    puVar6 = (undefined8 *)(puVar2 + uVar5);
    do {
      uVar5 = uVar5 + 1;
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6 = puVar6 + 2;
    } while (uVar5 < uVar12);
    iVar7 = uVar4 + iVar8;
    iVar10 = iVar10 - iVar8;
    if (iVar8 != iVar11) {
      puVar2[iVar7] = uVar1;
      if (iVar10 != 1) {
        puVar2[iVar7 + 1] = uVar1;
        if (iVar10 != 2) {
          puVar2[iVar7 + 2] = uVar1;
          if (iVar10 != 3) {
            puVar2[iVar7 + 3] = uVar1;
            if (iVar10 != 4) {
              puVar2[iVar7 + 4] = uVar1;
              if (iVar10 != 5) {
                iVar8 = iVar7 + 6;
                if (iVar10 != 6) {
                  iVar8 = iVar8 * 2;
                }
                puVar2[iVar7 + 5] = uVar1;
                if (iVar10 != 6) {
                  *(undefined2 *)((int)puVar2 + iVar8) = uVar1;
                }
              }
            }
          }
        }
      }
    }
    iVar9 = iVar9 + -1;
    puVar2 = (undefined2 *)((int)puVar2 + (uVar3 & 0xfffffffe));
  } while (iVar9 != 0);
  return;
}


