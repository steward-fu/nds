/*
 * Ghidra decompilation
 *
 * Function : FUN_0809b42c
 * Address  : 0809b42c
 * Program  : drastic16
 */


undefined4
FUN_0809b42c(int *param_1,void *param_2,uint *param_3,undefined *param_4,uint *param_5,uint param_6,
            undefined4 *param_7)

{
  bool bVar1;
  undefined auVar2 [16];
  char cVar3;
  bool bVar4;
  uint uVar5;
  undefined *puVar6;
  uint uVar7;
  undefined8 *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int *piVar14;
  undefined2 *puVar15;
  uint uVar16;
  size_t __n;
  undefined *__src;
  uint uVar17;
  int iVar18;
  uint local_40;
  uint local_3c;
  void *local_38;
  undefined *local_34;
  uint local_2c;
  
  local_40 = *param_3;
  local_3c = *param_5;
  *param_3 = 0;
  *param_5 = 0;
  local_38 = param_2;
  local_34 = param_4;
  do {
    uVar11 = param_1[9];
    uVar5 = param_1[10];
    if (uVar11 == uVar5) {
      uVar11 = 0;
      param_1[9] = 0;
    }
    uVar7 = param_1[0x12];
    if (uVar5 - uVar11 < local_40) {
      local_2c = 0;
      uVar13 = local_40;
      uVar17 = uVar5;
    }
    else {
      uVar17 = uVar11 + local_40;
      uVar13 = param_6;
    }
    if (local_40 <= uVar5 - uVar11) {
      local_2c = uVar13;
    }
    if (uVar7 - 1 < 0x111) {
      iVar12 = param_1[5];
      uVar13 = uVar17 - uVar11;
      if (uVar7 <= uVar17 - uVar11) {
        uVar13 = uVar7;
      }
      uVar9 = param_1[0xe];
      if (param_1[0xc] == 0) {
        iVar18 = param_1[0xb];
        if ((uint)(param_1[3] - iVar18) <= uVar13) {
          param_1[0xc] = param_1[3];
        }
      }
      else {
        iVar18 = param_1[0xb];
      }
      uVar7 = uVar7 - uVar13;
      param_1[0xb] = iVar18 + uVar13;
      param_1[0x12] = uVar7;
      uVar10 = uVar11;
      if (uVar13 != 0) {
        uVar7 = uVar11;
        do {
          uVar10 = uVar5;
          if (uVar9 <= uVar7) {
            uVar10 = 0;
          }
          *(undefined *)(iVar12 + uVar7) = *(undefined *)(iVar12 + uVar10 + (uVar7 - uVar9));
          uVar7 = uVar7 + 1;
        } while (uVar7 != uVar13 + uVar11);
        uVar7 = param_1[0x12];
        uVar10 = uVar13 + uVar11;
      }
      param_1[9] = uVar10;
    }
    iVar12 = 0;
    *param_7 = 0;
    uVar5 = local_3c;
    __src = local_34;
    while (uVar7 != 0x112) {
      if (param_1[0x13] != 0) {
        puVar6 = __src;
        iVar18 = iVar12;
        if (uVar5 == 0) {
          uVar13 = param_1[0x16];
LAB_0809b9fc:
          iVar12 = iVar18;
          if (uVar13 < 5) {
            bVar4 = false;
            *param_7 = 3;
            goto LAB_0809baa4;
          }
LAB_0809ba04:
          cVar3 = *(char *)(param_1 + 0x17);
          uVar5 = 0;
          __src = puVar6;
        }
        else {
          uVar10 = param_1[0x16];
          uVar9 = uVar5;
          if (4 < uVar10) goto LAB_0809b654;
          uVar13 = uVar10 + 1;
          param_1[0x16] = uVar13;
          uVar9 = uVar5 - 1;
          puVar6 = __src + 1;
          *(undefined *)((int)param_1 + uVar10 + 0x5c) = *__src;
          iVar18 = iVar12 + 1;
          if (uVar9 == 0) goto LAB_0809b9fc;
          if (uVar13 == 5) goto LAB_0809b654;
          uVar13 = uVar10 + 2;
          param_1[0x16] = uVar13;
          uVar9 = uVar5 - 2;
          puVar6 = __src + 2;
          *(undefined *)((int)param_1 + uVar10 + 0x5d) = __src[1];
          iVar18 = iVar12 + 2;
          if (uVar9 == 0) goto LAB_0809b9fc;
          if (uVar13 == 5) goto LAB_0809b654;
          uVar13 = uVar10 + 3;
          param_1[0x16] = uVar13;
          uVar9 = uVar5 - 3;
          puVar6 = __src + 3;
          *(undefined *)((int)param_1 + uVar10 + 0x5e) = __src[2];
          iVar18 = iVar12 + 3;
          if (uVar9 == 0) goto LAB_0809b9fc;
          if (uVar13 == 5) goto LAB_0809b654;
          uVar13 = uVar10 + 4;
          param_1[0x16] = uVar13;
          uVar9 = uVar5 - 4;
          puVar6 = __src + 4;
          *(undefined *)((int)param_1 + uVar10 + 0x5f) = __src[3];
          iVar18 = iVar12 + 4;
          if (uVar9 == 0) goto LAB_0809b9fc;
          if (uVar13 == 4) {
            param_1[0x16] = 5;
            uVar9 = uVar5 - 5;
            iVar12 = iVar12 + 5;
            puVar6 = __src + 5;
            *(undefined *)(param_1 + 0x18) = __src[4];
            iVar18 = iVar12;
            if (uVar9 == 0) goto LAB_0809ba04;
          }
LAB_0809b654:
          cVar3 = *(char *)(param_1 + 0x17);
          uVar5 = uVar9;
          __src = puVar6;
          iVar12 = iVar18;
        }
        if (cVar3 == '\0') {
          param_1[0x13] = 0;
          param_1[0x16] = 0;
          param_1[7] = -1;
          param_1[8] = (uint)*(byte *)((int)param_1 + 0x5e) << 0x10 |
                       (uint)*(byte *)((int)param_1 + 0x5d) << 0x18 |
                       (uint)*(byte *)(param_1 + 0x18) | (uint)*(byte *)((int)param_1 + 0x5f) << 8;
          goto LAB_0809b694;
        }
        goto LAB_0809ba14;
      }
LAB_0809b694:
      if (uVar17 <= (uint)param_1[9]) {
        if (uVar7 == 0) {
          if (param_1[8] != 0) {
            if (local_2c == 0) goto LAB_0809bc08;
            bVar4 = true;
            goto LAB_0809b6cc;
          }
          *param_7 = 4;
          bVar4 = false;
        }
        else if (local_2c == 0) {
LAB_0809bc08:
          bVar4 = false;
          *param_7 = 2;
        }
        else {
LAB_0809b6b4:
          bVar4 = true;
          *param_7 = 2;
        }
        goto LAB_0809baa4;
      }
      bVar4 = false;
LAB_0809b6cc:
      if (param_1[0x14] != 0) {
        puVar15 = (undefined2 *)param_1[4];
        uVar7 = (0x300 << (param_1[1] + *param_1 & 0xffU)) + 0x736;
        if (uVar7 != 0) {
          uVar13 = -((uint)((int)puVar15 << 0x1d) >> 0x1e) & 7;
          if (uVar7 <= uVar13) {
            uVar13 = uVar7;
          }
          uVar9 = uVar7;
          if ((uVar7 < 0xb) || (uVar9 = uVar13, uVar13 != 0)) {
            *puVar15 = 0x400;
            uVar13 = uVar9;
            if ((((uVar9 != 1) &&
                 (((puVar15[1] = 0x400, uVar9 != 2 && (puVar15[2] = 0x400, uVar9 != 3)) &&
                  (puVar15[3] = 0x400, uVar9 != 4)))) &&
                (((puVar15[4] = 0x400, uVar9 != 5 && (puVar15[5] = 0x400, uVar9 != 6)) &&
                 (puVar15[6] = 0x400, uVar9 != 7)))) && (puVar15[7] = 0x400, uVar9 != 8)) {
              puVar15[8] = 0x400;
              if (uVar9 == 10) {
                puVar15[9] = 0x400;
              }
              else {
                uVar13 = 9;
              }
            }
            if (uVar7 == uVar9) goto LAB_0809b9d0;
          }
          uVar16 = uVar7 - uVar9;
          uVar10 = uVar16 & 0xfffffff8;
          if (uVar10 != 0) {
            auVar2 = SIMDExpandImmediate(0,10,4);
            puVar8 = (undefined8 *)(puVar15 + uVar9);
            uVar9 = 0;
            do {
              uVar9 = uVar9 + 1;
              *puVar8 = auVar2._0_8_;
              puVar8[1] = auVar2._8_8_;
              puVar8 = puVar8 + 2;
            } while (uVar9 < uVar16 >> 3);
            uVar13 = uVar13 + uVar10;
            if (uVar10 == uVar16) goto LAB_0809b9d0;
          }
          puVar15[uVar13] = 0x400;
          if (uVar13 + 1 < uVar7) {
            puVar15[uVar13 + 1] = 0x400;
            if (uVar13 + 2 < uVar7) {
              puVar15[uVar13 + 2] = 0x400;
              if (uVar13 + 3 < uVar7) {
                puVar15[uVar13 + 3] = 0x400;
                if (uVar13 + 4 < uVar7) {
                  puVar15[uVar13 + 4] = 0x400;
                  if (uVar13 + 5 < uVar7) {
                    uVar10 = uVar13 + 6;
                    uVar9 = uVar10;
                    if (uVar10 < uVar7) {
                      uVar9 = uVar10 * 2;
                    }
                    puVar15[uVar13 + 5] = 0x400;
                    if (uVar10 < uVar7) {
                      *(undefined2 *)((int)puVar15 + uVar9) = 0x400;
                    }
                  }
                }
              }
            }
          }
        }
LAB_0809b9d0:
        param_1[0x11] = 1;
        param_1[0x10] = 1;
        param_1[0xf] = 1;
        param_1[0xe] = 1;
        param_1[0xd] = 0;
        param_1[0x14] = 0;
      }
      uVar7 = param_1[0x16];
      if (uVar7 == 0) {
        bVar1 = bVar4;
        if (uVar5 < 0x14) {
          bVar1 = true;
        }
        if (bVar1) {
          iVar18 = FUN_0809979c(param_1,__src,uVar5);
          if (iVar18 == 0) {
            memcpy(param_1 + 0x17,__src,uVar5);
            param_1[0x16] = uVar5;
            iVar12 = iVar12 + uVar5;
            *param_7 = 3;
            bVar4 = false;
            goto LAB_0809baa4;
          }
          if (iVar18 == 2) {
            bVar4 = false;
          }
          if (bVar4) goto LAB_0809b6b4;
        }
        param_1[6] = (int)__src;
        iVar18 = FUN_08099d78(param_1,uVar17);
        if (iVar18 != 0) goto LAB_0809ba14;
        iVar18 = param_1[6] - (int)__src;
      }
      else {
        bVar1 = uVar7 < 0x14;
        uVar13 = uVar7;
        if (uVar5 == 0 || !bVar1) {
          uVar9 = 0;
        }
        else {
          uVar9 = 0;
          uVar10 = uVar7;
          do {
            uVar13 = uVar13 + 1;
            uVar9 = uVar9 + 1;
            bVar1 = uVar13 < 0x14;
            *(undefined *)((int)param_1 + uVar10 + 0x5c) = __src[uVar10 - uVar7];
            uVar10 = uVar10 + 1;
          } while (uVar9 < uVar5 && bVar1);
        }
        piVar14 = param_1 + 0x17;
        param_1[0x16] = uVar13;
        if ((bool)(bVar1 | bVar4)) {
          iVar18 = FUN_0809979c(param_1,piVar14,uVar13);
          if (iVar18 == 0) {
            iVar12 = iVar12 + uVar9;
            *param_7 = 3;
            bVar4 = false;
            goto LAB_0809baa4;
          }
          if (iVar18 == 2) {
            bVar4 = false;
          }
          if (bVar4) goto LAB_0809b6b4;
        }
        param_1[6] = (int)piVar14;
        iVar18 = FUN_08099d78(param_1,uVar17,piVar14);
        if (iVar18 != 0) {
LAB_0809ba14:
          bVar4 = true;
          goto LAB_0809baa4;
        }
        param_1[0x16] = 0;
        iVar18 = (uVar9 - ((int)piVar14 - param_1[6])) - uVar13;
      }
      uVar5 = uVar5 - iVar18;
      iVar12 = iVar12 + iVar18;
      __src = __src + iVar18;
      uVar7 = param_1[0x12];
    }
    iVar18 = param_1[8];
    if (iVar18 == 0) {
      *param_7 = 1;
    }
    bVar4 = iVar18 != 0;
LAB_0809baa4:
    iVar18 = param_1[5];
    local_34 = local_34 + iVar12;
    local_3c = local_3c - iVar12;
    *param_5 = *param_5 + iVar12;
    __n = param_1[9] - uVar11;
    local_40 = local_40 - __n;
    memcpy(local_38,(void *)(iVar18 + uVar11),__n);
    *param_3 = *param_3 + __n;
    if (bVar4) {
      return 1;
    }
    local_38 = (void *)((int)local_38 + __n);
    if (__n == 0 || local_40 == 0) {
      return 0;
    }
  } while( true );
}


