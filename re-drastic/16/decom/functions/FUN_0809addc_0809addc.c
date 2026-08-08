/*
 * Ghidra decompilation
 *
 * Function : FUN_0809addc
 * Address  : 0809addc
 * Program  : drastic16
 */


bool FUN_0809addc(int *param_1,uint param_2,undefined *param_3,uint *param_4,int param_5,
                 undefined4 *param_6)

{
  bool bVar1;
  undefined auVar2 [16];
  char cVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined *puVar8;
  uint uVar9;
  int *piVar10;
  undefined2 *puVar11;
  uint uVar12;
  undefined8 *puVar13;
  int iVar14;
  uint __n;
  uint uVar15;
  uint uVar16;
  
  __n = *param_4;
  *param_4 = 0;
  uVar15 = param_1[0x12];
  if (uVar15 - 1 < 0x111) {
    uVar9 = param_1[9];
    iVar7 = param_1[5];
    uVar12 = param_2 - uVar9;
    if (uVar15 <= param_2 - uVar9) {
      uVar12 = uVar15;
    }
    iVar5 = param_1[10];
    uVar6 = param_1[0xe];
    if (param_1[0xc] == 0) {
      iVar14 = param_1[0xb];
      if ((uint)(param_1[3] - iVar14) <= uVar12) {
        param_1[0xc] = param_1[3];
      }
    }
    else {
      iVar14 = param_1[0xb];
    }
    uVar15 = uVar15 - uVar12;
    param_1[0xb] = iVar14 + uVar12;
    param_1[0x12] = uVar15;
    if (uVar12 != 0) {
      uVar12 = uVar12 + uVar9;
      do {
        iVar14 = iVar5;
        if (uVar6 <= uVar9) {
          iVar14 = 0;
        }
        *(undefined *)(iVar7 + uVar9) = *(undefined *)(iVar7 + iVar14 + (uVar9 - uVar6));
        uVar9 = uVar9 + 1;
      } while (uVar9 != uVar12);
      uVar15 = param_1[0x12];
      uVar9 = uVar12;
    }
    param_1[9] = uVar9;
  }
  *param_6 = 0;
  do {
    if (uVar15 == 0x112) {
      iVar7 = param_1[8];
      if (iVar7 == 0) {
        *param_6 = 1;
      }
      return iVar7 != 0;
    }
    if (param_1[0x13] != 0) {
      uVar15 = param_1[0x16];
      for (; __n != 0; __n = __n - 1) {
        if (4 < uVar15) {
          cVar3 = *(char *)(param_1 + 0x17);
          goto joined_r0x0809aefc;
        }
        param_1[0x16] = uVar15 + 1;
        *(undefined *)((int)param_1 + uVar15 + 0x5c) = *param_3;
        *param_4 = *param_4 + 1;
        uVar15 = param_1[0x16];
        param_3 = param_3 + 1;
      }
      if (uVar15 < 5) {
        *param_6 = 3;
        return false;
      }
      cVar3 = *(char *)(param_1 + 0x17);
      __n = 0;
joined_r0x0809aefc:
      if (cVar3 != '\0') {
        return true;
      }
      param_1[7] = -1;
      param_1[0x13] = 0;
      param_1[0x16] = 0;
      param_1[8] = (uint)*(byte *)((int)param_1 + 0x5e) << 0x10 |
                   (uint)*(byte *)((int)param_1 + 0x5d) << 0x18 | (uint)*(byte *)(param_1 + 0x18) |
                   (uint)*(byte *)((int)param_1 + 0x5f) << 8;
    }
    if ((uint)param_1[9] < param_2) {
      bVar4 = false;
    }
    else {
      if (param_1[0x12] != 0) {
        if (param_5 == 0) goto LAB_0809b378;
        goto LAB_0809af58;
      }
      if (param_1[8] == 0) {
        *param_6 = 4;
        return false;
      }
      if (param_5 == 0) {
LAB_0809b378:
        *param_6 = 2;
        return false;
      }
      bVar4 = true;
    }
    if (param_1[0x14] != 0) {
      puVar11 = (undefined2 *)param_1[4];
      uVar15 = (0x300 << (param_1[1] + *param_1 & 0xffU)) + 0x736;
      if (uVar15 != 0) {
        uVar9 = -((uint)((int)puVar11 << 0x1d) >> 0x1e) & 7;
        if (uVar15 <= uVar9) {
          uVar9 = uVar15;
        }
        uVar12 = uVar15;
        if ((uVar15 < 0xb) || (uVar12 = uVar9, uVar9 != 0)) {
          *puVar11 = 0x400;
          uVar9 = uVar12;
          if ((((uVar12 != 1) &&
               (((puVar11[1] = 0x400, uVar12 != 2 && (puVar11[2] = 0x400, uVar12 != 3)) &&
                (puVar11[3] = 0x400, uVar12 != 4)))) &&
              (((puVar11[4] = 0x400, uVar12 != 5 && (puVar11[5] = 0x400, uVar12 != 6)) &&
               (puVar11[6] = 0x400, uVar12 != 7)))) && (puVar11[7] = 0x400, uVar12 != 8)) {
            puVar11[8] = 0x400;
            if (uVar12 == 10) {
              puVar11[9] = 0x400;
            }
            else {
              uVar9 = 9;
            }
          }
          if (uVar15 == uVar12) goto LAB_0809b290;
        }
        uVar16 = uVar15 - uVar12;
        uVar6 = uVar16 & 0xfffffff8;
        if (uVar6 != 0) {
          auVar2 = SIMDExpandImmediate(0,10,4);
          puVar13 = (undefined8 *)(puVar11 + uVar12);
          uVar12 = 0;
          do {
            uVar12 = uVar12 + 1;
            *puVar13 = auVar2._0_8_;
            puVar13[1] = auVar2._8_8_;
            puVar13 = puVar13 + 2;
          } while (uVar12 < uVar16 >> 3);
          uVar9 = uVar9 + uVar6;
          if (uVar6 == uVar16) goto LAB_0809b290;
        }
        puVar11[uVar9] = 0x400;
        if (uVar9 + 1 < uVar15) {
          puVar11[uVar9 + 1] = 0x400;
          if (uVar9 + 2 < uVar15) {
            puVar11[uVar9 + 2] = 0x400;
            if (uVar9 + 3 < uVar15) {
              puVar11[uVar9 + 3] = 0x400;
              if (uVar9 + 4 < uVar15) {
                puVar11[uVar9 + 4] = 0x400;
                if (uVar9 + 5 < uVar15) {
                  uVar6 = uVar9 + 6;
                  uVar12 = uVar6;
                  if (uVar6 < uVar15) {
                    uVar12 = uVar6 * 2;
                  }
                  puVar11[uVar9 + 5] = 0x400;
                  if (uVar6 < uVar15) {
                    *(undefined2 *)((int)puVar11 + uVar12) = 0x400;
                  }
                }
              }
            }
          }
        }
      }
LAB_0809b290:
      param_1[0x11] = 1;
      param_1[0x10] = 1;
      param_1[0xf] = 1;
      param_1[0xe] = 1;
      param_1[0xd] = 0;
      param_1[0x14] = 0;
    }
    uVar15 = param_1[0x16];
    if (uVar15 == 0) {
      bVar1 = bVar4;
      if (__n < 0x14) {
        bVar1 = true;
      }
      if (bVar1) {
        iVar7 = FUN_0809979c(param_1,param_3,__n);
        if (iVar7 == 0) {
          memcpy(param_1 + 0x17,param_3,__n);
          param_1[0x16] = __n;
          *param_4 = *param_4 + __n;
          *param_6 = 3;
          return false;
        }
        if (iVar7 == 2) {
          bVar4 = false;
        }
        puVar8 = param_3;
        if (bVar4) {
          *param_6 = 2;
          return true;
        }
      }
      else {
        puVar8 = param_3 + (__n - 0x14);
      }
      param_1[6] = (int)param_3;
      iVar7 = FUN_08099d78(param_1,param_2,puVar8);
      if (iVar7 != 0) {
        return true;
      }
      iVar7 = param_1[6] - (int)param_3;
      *param_4 = *param_4 + iVar7;
    }
    else {
      bVar1 = uVar15 < 0x14;
      uVar9 = uVar15;
      if (__n == 0 || !bVar1) {
        uVar12 = 0;
      }
      else {
        uVar12 = 0;
        uVar6 = uVar15;
        do {
          uVar9 = uVar9 + 1;
          uVar12 = uVar12 + 1;
          bVar1 = uVar9 < 0x14;
          *(undefined *)((int)param_1 + uVar6 + 0x5c) = param_3[uVar6 - uVar15];
          uVar6 = uVar6 + 1;
        } while (uVar12 < __n && bVar1);
      }
      param_1[0x16] = uVar9;
      piVar10 = param_1 + 0x17;
      if ((bool)(bVar1 | bVar4)) {
        iVar7 = FUN_0809979c(param_1,piVar10,uVar9);
        if (iVar7 == 0) {
          *param_4 = *param_4 + uVar12;
          *param_6 = 3;
          return false;
        }
        if (iVar7 == 2) {
          bVar4 = false;
        }
        if (bVar4) {
LAB_0809af58:
          *param_6 = 2;
          return true;
        }
      }
      param_1[6] = (int)piVar10;
      iVar7 = FUN_08099d78(param_1,param_2,piVar10);
      if (iVar7 != 0) {
        return true;
      }
      iVar7 = (uVar12 - ((int)piVar10 - param_1[6])) - uVar9;
      *param_4 = *param_4 + iVar7;
      param_1[0x16] = 0;
    }
    __n = __n - iVar7;
    param_3 = param_3 + iVar7;
    uVar15 = param_1[0x12];
  } while( true );
}


