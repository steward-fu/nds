/*
 * Ghidra decompilation
 *
 * Function : FUN_080167d8
 * Address  : 080167d8
 * Program  : drastic16
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_080167d8(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined2 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  uint *puVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  char cVar12;
  uint uVar13;
  uint uVar14;
  undefined *puVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  undefined8 *puVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  uint uVar26;
  undefined2 *puVar27;
  uint *puVar28;
  undefined4 *puVar29;
  uint *puVar30;
  undefined8 *unaff_r8;
  undefined2 *puVar31;
  undefined4 *puVar32;
  uint *puVar33;
  uint uVar34;
  undefined8 *puVar35;
  int iVar36;
  undefined8 *puVar37;
  bool bVar38;
  undefined8 in_d16;
  undefined8 uVar39;
  undefined8 in_d17;
  undefined8 uVar40;
  undefined8 *local_80;
  undefined8 *local_7c;
  undefined8 *local_78;
  undefined8 *local_74;
  uint local_64;
  uint local_54;
  
  iVar21 = *param_1;
  iVar22 = param_2[2];
  iVar17 = *(int *)(iVar21 + 0xfba1c);
  uVar34 = param_2[5];
  uVar10 = *(uint *)(iVar22 + 0x236c);
  uVar3 = *(uint *)(iVar17 + 0x10);
  uVar13 = *(uint *)(iVar17 + 8);
  iVar18 = *(int *)(iVar17 + 0xc);
  local_64 = param_2[6];
  uVar14 = uVar13 + uVar3;
  uVar4 = param_2[4];
  uVar26 = uVar14 - uVar10;
  if (uVar34 < 0x10000000) {
    uVar19 = uVar34 >> 0x18;
  }
  else {
    uVar19 = 0;
  }
  local_80 = (undefined8 *)(local_64 & 0x1fffff);
  if (0xfffffff < uVar34) {
    uVar34 = uVar19;
  }
  if (uVar4 < 0x10000000) {
    uVar5 = uVar4 >> 0x18;
  }
  else {
    uVar5 = 0;
    uVar4 = uVar5;
  }
  if (local_80 == (undefined8 *)0x0) {
    local_80 = (undefined8 *)0x200000;
    iVar23 = (uint)*(byte *)(iVar22 + 0x2104) * 2 - ((int)(local_64 << 5) >> 0x1f);
  }
  else {
    iVar23 = (uint)*(byte *)(iVar22 + 0x2104) * 2 - ((int)(local_64 << 5) >> 0x1f);
  }
  if (uVar19 == uVar5) {
    iVar23 = *(int *)(&DAT_080e6400 + (uVar19 + iVar23 * 0x10) * 4);
  }
  else {
    bVar38 = uVar19 != 6;
    if (bVar38) {
      uVar5 = iVar23 * 0x10 + uVar5;
    }
    puVar15 = &DAT_080e6400;
    if (bVar38) {
      puVar15 = &DAT_080e6400 + uVar5 * 4;
    }
    iVar23 = *(int *)(&DAT_080e6500 + (iVar23 * 0x10 + uVar19) * 4);
    if (bVar38) {
      iVar23 = iVar23 + *(int *)(puVar15 + 0x100);
    }
  }
  uVar19 = iVar23 * *(int *)(iVar17 + 0x2916460) * (int)local_80;
  *param_2 = uVar26 + uVar19;
  param_2[1] = ((iVar18 + (uint)CARRY4(uVar13,uVar3)) -
               (((int)uVar10 >> 0x1f) + (uint)(uVar14 < uVar10))) + (uint)CARRY4(uVar26,uVar19);
  if (*(char *)(iVar17 + 0x2916466) != '\0') {
    *(uint *)(iVar22 + 0x236c) = uVar10 - uVar19;
  }
  if ((local_64 & 0x4000000) == 0) {
    local_7c = (undefined8 *)(uVar4 & 0xfffffffe);
    local_78 = (undefined8 *)(uVar34 & 0xfffffffe);
    switch(local_64 >> 0x15 & 0xf) {
    case 0:
    case 3:
      local_74 = (undefined8 *)0x0;
      do {
        while( true ) {
          iVar18 = (int)local_80 * 2;
          iVar23 = param_1[1];
          uVar4 = (uint)local_78 >> 0x17;
          uVar10 = *(uint *)(iVar23 + ((uint)local_7c >> 0x17) * 0x30);
          puVar33 = (uint *)(iVar23 + ((uint)local_7c >> 0x17) * 0x30);
          uVar34 = (uint)local_7c & uVar10;
          puVar30 = (uint *)(iVar23 + uVar4 * 0x30);
          bVar38 = uVar10 < iVar18 + uVar34;
          uVar3 = *(uint *)(iVar23 + uVar4 * 0x30);
          puVar8 = local_80;
          if (bVar38) {
            puVar8 = (undefined8 *)((uVar10 + 1) - uVar34 >> 1);
          }
          if (bVar38) {
            iVar18 = (int)puVar8 << 1;
          }
          bVar38 = uVar3 < iVar18 + ((uint)local_78 & uVar3);
          if (bVar38) {
            puVar8 = (undefined8 *)(uVar3 + 1);
          }
          cVar12 = *(char *)(puVar33 + 0xb);
          if (bVar38) {
            puVar8 = (undefined8 *)((int)puVar8 - ((uint)local_78 & uVar3) >> 1);
          }
          if (cVar12 == '\x01') {
            iVar18 = 0;
            puVar24 = (undefined8 *)(*(code *)puVar33[1])(iVar21,local_7c);
            iVar36 = 2;
          }
          else if (cVar12 == '\0') {
            iVar36 = 2;
            iVar18 = 0;
            puVar24 = (undefined8 *)(puVar33[1] + uVar34);
          }
          else if (cVar12 == '\x02') {
            puVar24 = (undefined8 *)puVar33[2];
            iVar36 = 3;
            iVar18 = 1;
          }
          else {
            iVar36 = 2;
            iVar18 = 0;
            puVar24 = (undefined8 *)(iVar21 + 0x6b040);
          }
          cVar12 = *(char *)((int)puVar30 + 0x2d);
          if (cVar12 == '\x01') {
            puVar25 = (undefined8 *)(*(code *)puVar30[4])(iVar21,local_78);
          }
          else if (cVar12 == '\0') {
            puVar25 = (undefined8 *)
                      (puVar30[4] + ((uint)local_78 & *(uint *)(iVar23 + uVar4 * 0x30)));
          }
          else if (cVar12 == '\x02') {
            puVar25 = (undefined8 *)puVar30[5];
            iVar18 = iVar36;
          }
          else {
            puVar25 = (undefined8 *)(iVar21 + 0x8b040);
          }
          iVar23 = (*(code *)puVar30[9])(iVar21,puVar30,local_78);
          puVar6 = (undefined8 *)(*(code *)puVar30[10])(iVar21,puVar30,local_78);
          local_80 = (undefined8 *)((int)local_80 - (int)puVar8);
          if (iVar18 != 2) break;
          if (iVar23 != 0) {
            uVar4 = FUN_08009850(iVar23,puVar6,local_78,(int)puVar8 * 2);
            local_74 = (undefined8 *)((uint)local_74 | uVar4);
          }
          local_7c = (undefined8 *)((int)local_7c + (int)puVar8 * 2);
          puVar37 = local_78;
          puVar20 = puVar8;
          do {
            puVar31 = (undefined2 *)(((int)puVar24 - (int)local_78) + (int)puVar37);
            uVar4 = (uint)puVar37 & *puVar30;
            puVar37 = (undefined8 *)((int)puVar37 + 2);
            puVar6 = (undefined8 *)(*(code *)puVar25)(iVar21,uVar4,*puVar31);
            puVar20 = (undefined8 *)((int)puVar20 + -1);
          } while (puVar20 != (undefined8 *)0x0);
          local_78 = (undefined8 *)((int)local_78 + (int)puVar8 * 2);
          if (local_80 == (undefined8 *)0x0) goto LAB_08016c9c;
        }
        if (iVar18 == 3) {
          if (iVar23 != 0) {
            uVar4 = FUN_08009850(iVar23,puVar6,local_78,(int)puVar8 << 1);
            local_74 = (undefined8 *)((uint)local_74 | uVar4);
          }
          puVar37 = local_7c;
          puVar20 = puVar8;
          do {
            uVar4 = ((int)local_78 - (int)local_7c) + (int)puVar37;
            uVar9 = (*(code *)puVar24)(iVar21,(uint)puVar37 & *puVar33);
            puVar37 = (undefined8 *)((int)puVar37 + 2);
            puVar6 = (undefined8 *)(*(code *)puVar25)(iVar21,uVar4 & *puVar30,uVar9);
            puVar20 = (undefined8 *)((int)puVar20 + -1);
          } while (puVar20 != (undefined8 *)0x0);
          iVar36 = ((int)puVar8 + 0x7fffffff) * 2 + 2;
        }
        else {
          iVar36 = (int)puVar8 * 2;
          if (iVar18 == 1) {
            if (iVar23 != 0) {
              uVar4 = FUN_08009850(iVar23,puVar6,local_78,iVar36);
              local_74 = (undefined8 *)((uint)local_74 | uVar4);
            }
            puVar37 = local_7c;
            puVar20 = puVar8;
            do {
              puVar6 = (undefined8 *)(*(code *)puVar24)(iVar21,(uint)puVar37 & *puVar33);
              puVar20 = (undefined8 *)((int)puVar20 + -1);
              *(short *)(((int)puVar25 - (int)local_7c) + (int)puVar37) = (short)puVar6;
              puVar37 = (undefined8 *)((int)puVar37 + 2);
            } while (puVar20 != (undefined8 *)0x0);
            iVar36 = (int)puVar8 * 2;
          }
          else {
            if (iVar23 != 0) {
              puVar6 = (undefined8 *)FUN_08009850(iVar23,puVar6,local_78,iVar36);
              local_74 = (undefined8 *)((uint)local_74 | (uint)puVar6);
            }
            if (puVar8 < (undefined8 *)0xa || puVar25 < puVar24 + 2 && puVar24 < puVar25 + 2) {
              do {
                puVar31 = (undefined2 *)((int)puVar24 + 2);
                puVar27 = (undefined2 *)((int)puVar25 + 2);
                *(undefined2 *)puVar25 = *(undefined2 *)puVar24;
                if (puVar8 == (undefined8 *)0x1) break;
                puVar24 = (undefined8 *)((int)puVar24 + 4);
                puVar8 = (undefined8 *)((int)puVar8 + -2);
                puVar25 = (undefined8 *)((int)puVar25 + 4);
                *puVar27 = *puVar31;
              } while (puVar8 != (undefined8 *)0x0);
            }
            else {
              uVar4 = 0;
              puVar37 = (undefined8 *)((uint)puVar8 & 0xfffffff8);
              puVar6 = puVar24;
              puVar20 = puVar25;
              do {
                uVar4 = uVar4 + 1;
                uVar39 = *puVar6;
                uVar40 = puVar6[1];
                puVar6 = puVar6 + 2;
                *puVar20 = uVar39;
                puVar20[1] = uVar40;
                puVar20 = puVar20 + 2;
              } while (uVar4 < (uint)puVar8 >> 3);
              iVar18 = (int)puVar37 * 2;
              iVar23 = (int)puVar8 - (int)puVar37;
              if (puVar8 != puVar37) {
                puVar6 = (undefined8 *)(uint)*(ushort *)((int)puVar24 + iVar18);
                *(ushort *)((int)puVar25 + iVar18) = *(ushort *)((int)puVar24 + iVar18);
                if ((((iVar23 != 1) &&
                     (*(undefined2 *)((int)puVar25 + iVar18 + 2) =
                           *(undefined2 *)((int)puVar24 + iVar18 + 2), iVar23 != 2)) &&
                    ((*(undefined2 *)((int)puVar25 + iVar18 + 4) =
                           *(undefined2 *)((int)puVar24 + iVar18 + 4), iVar23 != 3 &&
                     ((*(undefined2 *)((int)puVar25 + iVar18 + 6) =
                            *(undefined2 *)((int)puVar24 + iVar18 + 6), iVar23 != 4 &&
                      (*(undefined2 *)((int)puVar25 + iVar18 + 8) =
                            *(undefined2 *)((int)puVar24 + iVar18 + 8), iVar23 != 5)))))) &&
                   (*(undefined2 *)((int)puVar25 + iVar18 + 10) =
                         *(undefined2 *)((int)puVar24 + iVar18 + 10), iVar23 != 6)) {
                  *(undefined2 *)((int)puVar25 + iVar18 + 0xc) =
                       *(undefined2 *)((int)puVar24 + iVar18 + 0xc);
                }
              }
            }
          }
        }
        local_7c = (undefined8 *)((int)local_7c + iVar36);
        local_78 = (undefined8 *)((int)local_78 + iVar36);
      } while (local_80 != (undefined8 *)0x0);
      break;
    case 1:
      local_74 = (undefined8 *)0x0;
LAB_08016dd0:
      do {
        uVar34 = (uint)local_78 >> 0x17;
        iVar18 = param_1[1];
        uVar4 = (int)local_80 * 2;
        puVar30 = (uint *)(iVar18 + uVar34 * 0x30);
        uVar13 = *(uint *)(iVar18 + ((uint)local_7c >> 0x17) * 0x30);
        puVar33 = (uint *)(iVar18 + ((uint)local_7c >> 0x17) * 0x30);
        uVar10 = (uint)local_7c & uVar13;
        bVar38 = uVar13 < uVar4 + uVar10;
        uVar3 = *(uint *)(iVar18 + uVar34 * 0x30);
        if (bVar38) {
          uVar13 = (uVar13 + 1) - uVar10;
        }
        uVar14 = (uint)local_78 & uVar3;
        puVar8 = local_80;
        if (bVar38) {
          uVar4 = uVar13 & 0xfffffffe;
          puVar8 = (undefined8 *)(uVar13 >> 1);
        }
        cVar12 = *(char *)(puVar33 + 0xb);
        if (uVar3 < uVar14 - uVar4) {
          puVar8 = (undefined8 *)((uVar14 >> 1) + 1);
        }
        if (cVar12 == '\x01') {
          iVar23 = 0;
          puVar31 = (undefined2 *)(*(code *)puVar33[1])(iVar21,local_7c);
          iVar36 = 2;
LAB_08016e60:
          cVar12 = *(char *)((int)puVar30 + 0x2d);
          if (cVar12 != '\x01') goto LAB_08016e6c;
LAB_08017c00:
          puVar27 = (undefined2 *)(*(code *)puVar30[4])(iVar21,local_78);
        }
        else {
          if (cVar12 != '\0') {
            if (cVar12 == '\x02') {
              puVar31 = (undefined2 *)puVar33[2];
              iVar36 = 3;
              iVar23 = 1;
            }
            else {
              iVar36 = 2;
              iVar23 = 0;
              puVar31 = (undefined2 *)(iVar21 + 0x6b040);
            }
            goto LAB_08016e60;
          }
          cVar12 = *(char *)((int)puVar30 + 0x2d);
          iVar36 = 2;
          iVar23 = 0;
          puVar31 = (undefined2 *)(puVar33[1] + uVar10);
          if (cVar12 == '\x01') goto LAB_08017c00;
LAB_08016e6c:
          if (cVar12 == '\0') {
            puVar27 = (undefined2 *)
                      (puVar30[4] + ((uint)local_78 & *(uint *)(iVar18 + uVar34 * 0x30)));
          }
          else if (cVar12 == '\x02') {
            puVar27 = (undefined2 *)puVar30[5];
            iVar23 = iVar36;
          }
          else {
            puVar27 = (undefined2 *)(iVar21 + 0x8b040);
          }
        }
        iVar18 = (*(code *)puVar30[9])(iVar21,puVar30,local_78);
        uVar9 = (*(code *)puVar30[10])(iVar21,puVar30,local_78);
        local_80 = (undefined8 *)((int)local_80 - (int)puVar8);
        if (iVar23 == 2) {
          puVar24 = local_78;
          puVar25 = puVar8;
          if (iVar18 != 0) {
            uVar4 = FUN_08009850(iVar18,uVar9,local_78,(int)puVar8 * 2);
            local_74 = (undefined8 *)((uint)local_74 | uVar4);
          }
          do {
            puVar6 = (undefined8 *)(*(code *)puVar27)(iVar21,(uint)puVar24 & *puVar30,*puVar31);
            puVar25 = (undefined8 *)((int)puVar25 - 1);
            puVar31 = puVar31 + 1;
            puVar24 = (undefined8 *)((int)puVar24 + -2);
          } while (puVar25 != (undefined8 *)0x0);
joined_r0x08018310:
          local_7c = (undefined8 *)((int)local_7c + (int)puVar8 * 2);
          local_78 = (undefined8 *)((int)local_78 + (int)puVar8 * -2);
          if (local_80 == (undefined8 *)0x0) break;
          goto LAB_08016dd0;
        }
        if (iVar23 == 3) {
          puVar24 = local_7c;
          puVar25 = puVar8;
          puVar37 = local_78;
          if (iVar18 != 0) {
            uVar4 = FUN_08009850(iVar18,uVar9,local_78,(int)puVar8 << 1);
            local_74 = (undefined8 *)((uint)local_74 | uVar4);
          }
          do {
            uVar9 = (*(code *)puVar31)(iVar21,(uint)puVar24 & *puVar33);
            puVar6 = (undefined8 *)(*(code *)puVar27)(iVar21,(uint)puVar37 & *puVar30,uVar9);
            puVar25 = (undefined8 *)((int)puVar25 - 1);
            puVar24 = (undefined8 *)((int)puVar24 + 2);
            puVar37 = (undefined8 *)((int)puVar37 + -2);
          } while (puVar25 != (undefined8 *)0x0);
          goto joined_r0x08018310;
        }
        if (iVar23 != 1) {
          puVar24 = puVar8;
          puVar6 = local_80;
          if (iVar18 != 0) {
            puVar6 = (undefined8 *)FUN_08009850(iVar18,uVar9,local_78,(int)puVar8 * 2);
            local_74 = (undefined8 *)((uint)local_74 | (uint)puVar6);
          }
          do {
            puVar24 = (undefined8 *)((int)puVar24 - 1);
            *puVar27 = *puVar31;
            puVar31 = puVar31 + 1;
            puVar27 = puVar27 + -1;
          } while (puVar24 != (undefined8 *)0x0);
          goto joined_r0x08018310;
        }
        if (iVar18 != 0) {
          uVar4 = FUN_08009850(iVar18,uVar9,local_78,(int)puVar8 * 2);
          local_74 = (undefined8 *)((uint)local_74 | uVar4);
        }
        local_78 = (undefined8 *)((int)local_78 + (int)puVar8 * -2);
        puVar24 = local_7c;
        puVar25 = puVar8;
        do {
          uVar4 = (uint)puVar24 & *puVar33;
          puVar24 = (undefined8 *)((int)puVar24 + 2);
          puVar6 = (undefined8 *)(*(code *)puVar31)(iVar21,uVar4);
          puVar25 = (undefined8 *)((int)puVar25 - 1);
          *puVar27 = (short)puVar6;
          puVar27 = puVar27 + -1;
        } while (puVar25 != (undefined8 *)0x0);
        local_7c = (undefined8 *)((int)local_7c + (int)puVar8 * 2);
      } while (local_80 != (undefined8 *)0x0);
      break;
    case 2:
      local_74 = (undefined8 *)0x0;
      iVar18 = (uVar34 >> 0x17) * 0x30;
      puVar8 = local_80;
      do {
        iVar23 = param_1[1];
        puVar30 = (uint *)(iVar23 + iVar18);
        uVar34 = *(uint *)(iVar23 + ((uint)local_7c >> 0x17) * 0x30);
        puVar33 = (uint *)(iVar23 + ((uint)local_7c >> 0x17) * 0x30);
        uVar4 = (uint)local_7c & uVar34;
        if (uVar34 < uVar4 + (int)puVar8 * 2) {
          puVar24 = (undefined8 *)((uVar34 + 1) - uVar4 >> 1);
          local_80 = (undefined8 *)((int)puVar8 - (int)puVar24);
        }
        else {
          local_80 = (undefined8 *)0x0;
          puVar24 = puVar8;
        }
        cVar12 = *(char *)(puVar33 + 0xb);
        if (cVar12 == '\x01') {
          iVar36 = 0;
          puVar31 = (undefined2 *)(*(code *)puVar33[1])(iVar21,local_7c);
          iVar11 = 2;
        }
        else if (cVar12 == '\0') {
          iVar11 = 2;
          iVar36 = 0;
          puVar31 = (undefined2 *)(puVar33[1] + uVar4);
        }
        else if (cVar12 == '\x02') {
          puVar31 = (undefined2 *)puVar33[2];
          iVar11 = 3;
          iVar36 = 1;
        }
        else {
          iVar11 = 2;
          iVar36 = 0;
          puVar31 = (undefined2 *)(iVar21 + 0x6b040);
        }
        cVar12 = *(char *)((int)puVar30 + 0x2d);
        if (cVar12 == '\x01') {
          puVar27 = (undefined2 *)(*(code *)puVar30[4])(iVar21,local_78);
        }
        else if (cVar12 == '\0') {
          puVar27 = (undefined2 *)(puVar30[4] + ((uint)local_78 & *(uint *)(iVar23 + iVar18)));
        }
        else if (cVar12 == '\x02') {
          puVar27 = (undefined2 *)puVar30[5];
          iVar36 = iVar11;
        }
        else {
          puVar27 = (undefined2 *)(iVar21 + 0x8b040);
        }
        iVar23 = (*(code *)puVar30[9])(iVar21,puVar30,local_78);
        puVar6 = (undefined8 *)(*(code *)puVar30[10])(iVar21,puVar30,local_78);
        if (iVar36 == 2) {
          if (iVar23 != 0) {
            uVar4 = FUN_08009850(iVar23,puVar6,local_78,(int)puVar24 * 2);
            local_74 = (undefined8 *)((uint)local_74 | uVar4);
          }
          local_7c = (undefined8 *)((int)local_7c + (int)puVar24 * 2);
          do {
            puVar6 = (undefined8 *)(*(code *)puVar27)(iVar21,(uint)local_78 & *puVar30,*puVar31);
            puVar24 = (undefined8 *)((int)puVar24 - 1);
            puVar31 = puVar31 + 1;
          } while (puVar24 != (undefined8 *)0x0);
        }
        else if (iVar36 == 3) {
          puVar8 = puVar24;
          puVar25 = local_7c;
          if (iVar23 != 0) {
            uVar4 = FUN_08009850(iVar23,puVar6,local_78,(int)puVar24 << 1);
            local_74 = (undefined8 *)((uint)local_74 | uVar4);
          }
          do {
            uVar9 = (*(code *)puVar31)(iVar21,(uint)puVar25 & *puVar33);
            puVar6 = (undefined8 *)(*(code *)puVar27)(iVar21,(uint)local_78 & *puVar30,uVar9);
            puVar8 = (undefined8 *)((int)puVar8 - 1);
            puVar25 = (undefined8 *)((int)puVar25 + 2);
          } while (puVar8 != (undefined8 *)0x0);
          local_7c = (undefined8 *)((int)local_7c + (int)puVar24 * 2);
        }
        else if (iVar36 == 1) {
          puVar8 = local_7c;
          puVar25 = puVar24;
          if (iVar23 != 0) {
            uVar4 = FUN_08009850(iVar23,puVar6,local_78,(int)puVar24 << 1);
            local_74 = (undefined8 *)((uint)local_74 | uVar4);
          }
          do {
            puVar6 = (undefined8 *)(*(code *)puVar31)(iVar21,(uint)puVar8 & *puVar33);
            puVar25 = (undefined8 *)((int)puVar25 - 1);
            *puVar27 = (short)puVar6;
            puVar8 = (undefined8 *)((int)puVar8 + 2);
          } while (puVar25 != (undefined8 *)0x0);
          local_7c = (undefined8 *)((int)local_7c + (int)puVar24 * 2);
        }
        else {
          if (iVar23 != 0) {
            puVar6 = (undefined8 *)FUN_08009850(iVar23,puVar6,local_78,(int)puVar24 * 2);
            local_74 = (undefined8 *)((uint)local_74 | (uint)puVar6);
          }
          local_7c = (undefined8 *)((int)local_7c + (int)puVar24 * 2);
          do {
            puVar24 = (undefined8 *)((int)puVar24 - 1);
            *puVar27 = *puVar31;
            puVar31 = puVar31 + 1;
          } while (puVar24 != (undefined8 *)0x0);
        }
        puVar8 = local_80;
      } while (local_80 != (undefined8 *)0x0);
      break;
    case 4:
    case 7:
      local_74 = (undefined8 *)0x0;
      do {
        while( true ) {
          uVar4 = (uint)local_78 >> 0x17;
          iVar23 = param_1[1];
          iVar18 = (int)local_80 * 2;
          puVar30 = (uint *)(iVar23 + uVar4 * 0x30);
          uVar3 = *(uint *)(iVar23 + ((uint)local_7c >> 0x17) * 0x30);
          puVar33 = (uint *)(iVar23 + ((uint)local_7c >> 0x17) * 0x30);
          uVar34 = (uint)local_7c & uVar3;
          bVar38 = uVar3 < uVar34 + (int)local_80 * -2;
          uVar3 = *(uint *)(iVar23 + uVar4 * 0x30);
          if (bVar38) {
            unaff_r8 = (undefined8 *)((uVar34 >> 1) + 1);
          }
          puVar6 = local_80;
          if (bVar38) {
            iVar18 = (int)unaff_r8 << 1;
            puVar6 = unaff_r8;
          }
          unaff_r8 = puVar6;
          bVar38 = uVar3 < iVar18 + ((uint)local_78 & uVar3);
          if (bVar38) {
            unaff_r8 = (undefined8 *)(uVar3 + 1);
          }
          cVar12 = *(char *)(puVar33 + 0xb);
          if (bVar38) {
            unaff_r8 = (undefined8 *)((int)unaff_r8 - ((uint)local_78 & uVar3) >> 1);
          }
          if (cVar12 == '\x01') {
            iVar18 = 0;
            puVar8 = (undefined8 *)(*(code *)puVar33[1])(iVar21,local_7c);
            iVar36 = 2;
          }
          else if (cVar12 == '\0') {
            iVar36 = 2;
            iVar18 = 0;
            puVar8 = (undefined8 *)(puVar33[1] + uVar34);
          }
          else if (cVar12 == '\x02') {
            puVar8 = (undefined8 *)puVar33[2];
            iVar36 = 3;
            iVar18 = 1;
          }
          else {
            iVar36 = 2;
            iVar18 = 0;
            puVar8 = (undefined8 *)(iVar21 + 0x6b040);
          }
          cVar12 = *(char *)((int)puVar30 + 0x2d);
          if (cVar12 == '\x01') {
            puVar24 = (undefined8 *)(*(code *)puVar30[4])(iVar21,local_78);
          }
          else if (cVar12 == '\0') {
            puVar24 = (undefined8 *)
                      (puVar30[4] + ((uint)local_78 & *(uint *)(iVar23 + uVar4 * 0x30)));
          }
          else if (cVar12 == '\x02') {
            puVar24 = (undefined8 *)puVar30[5];
            iVar18 = iVar36;
          }
          else {
            puVar24 = (undefined8 *)(iVar21 + 0x8b040);
          }
          iVar23 = (*(code *)puVar30[9])(iVar21,puVar30,local_78);
          uVar9 = (*(code *)puVar30[10])(iVar21,puVar30);
          local_80 = (undefined8 *)((int)local_80 - (int)unaff_r8);
          puVar25 = unaff_r8;
          if (iVar18 != 2) break;
          puVar37 = local_78;
          puVar20 = unaff_r8;
          if (iVar23 != 0) {
            uVar4 = FUN_08009850(iVar23,uVar9,local_78,(int)unaff_r8 * 2);
            local_74 = (undefined8 *)((uint)local_74 | uVar4);
          }
          do {
            puVar6 = (undefined8 *)
                     (*(code *)puVar24)(iVar21,(uint)puVar37 & *puVar30,*(undefined2 *)puVar8);
            puVar20 = (undefined8 *)((int)puVar20 + -1);
            puVar8 = (undefined8 *)((int)puVar8 + -2);
            puVar37 = (undefined8 *)((int)puVar37 + 2);
          } while (puVar20 != (undefined8 *)0x0);
joined_r0x080172f4:
          local_78 = (undefined8 *)((int)local_78 + (int)unaff_r8 * 2);
          local_7c = (undefined8 *)((int)local_7c + (int)unaff_r8 * -2);
          unaff_r8 = puVar25;
          if (local_80 == (undefined8 *)0x0) goto LAB_08016c9c;
        }
        if (iVar18 == 3) {
          puVar37 = local_7c;
          puVar20 = unaff_r8;
          puVar35 = local_78;
          if (iVar23 != 0) {
            uVar4 = FUN_08009850(iVar23,uVar9,local_78,(int)unaff_r8 << 1);
            local_74 = (undefined8 *)((uint)local_74 | uVar4);
          }
          do {
            uVar9 = (*(code *)puVar8)(iVar21,(uint)puVar37 & *puVar33);
            puVar6 = (undefined8 *)(*(code *)puVar24)(iVar21,(uint)puVar35 & *puVar30,uVar9);
            puVar20 = (undefined8 *)((int)puVar20 + -1);
            puVar37 = (undefined8 *)((int)puVar37 + -2);
            puVar35 = (undefined8 *)((int)puVar35 + 2);
          } while (puVar20 != (undefined8 *)0x0);
          goto joined_r0x080172f4;
        }
        iVar36 = (int)unaff_r8 * 2;
        if (iVar18 != 1) {
          puVar6 = local_80;
          if (iVar23 != 0) {
            puVar6 = (undefined8 *)FUN_08009850(iVar23,uVar9,local_78,iVar36);
            local_74 = (undefined8 *)((uint)local_74 | (uint)puVar6);
          }
          puVar37 = unaff_r8;
          if (unaff_r8 < (undefined8 *)0xa ||
              (undefined2 *)((int)puVar8 + (int)unaff_r8 * -2) <
              (undefined2 *)((int)puVar24 + iVar36) && puVar24 < puVar8) {
            do {
              puVar31 = (undefined2 *)((int)puVar8 + -2);
              puVar27 = (undefined2 *)((int)puVar24 + 2);
              *(undefined2 *)puVar24 = *(undefined2 *)puVar8;
              puVar25 = (undefined8 *)((int)puVar37 - 1U);
              if ((undefined8 *)((int)puVar37 - 1U) == (undefined8 *)0x0) break;
              puVar8 = (undefined8 *)((int)puVar8 + -4);
              puVar37 = (undefined8 *)((int)puVar37 - 2);
              puVar24 = (undefined8 *)((int)puVar24 + 4);
              *puVar27 = *puVar31;
              puVar25 = puVar37;
            } while (puVar37 != (undefined8 *)0x0);
          }
          else {
            uVar4 = (uint)unaff_r8 >> 3;
            puVar31 = (undefined2 *)((int)puVar8 + -0xe);
            uVar34 = 0;
            puVar6 = puVar24;
            do {
              uVar34 = uVar34 + 1;
              bVar38 = uVar34 < uVar4;
              puVar31 = puVar31 + -8;
              uVar4 = VectorTableLookup(unaff_r8,puVar31,2);
              puVar37 = (undefined8 *)VectorTableLookup(puVar33,puVar31,2);
              *puVar6 = in_d16;
              puVar6[1] = in_d17;
              puVar6 = puVar6 + 2;
            } while (bVar38);
            puVar6 = (undefined8 *)((int)puVar37 * 2);
            puVar25 = (undefined8 *)((int)unaff_r8 - (int)puVar37);
            iVar18 = (int)puVar37 * -2;
            puVar31 = (undefined2 *)((int)puVar24 + (int)puVar6);
            if ((((unaff_r8 != puVar37) &&
                 (*(undefined2 *)((int)puVar24 + (int)puVar6) =
                       *(undefined2 *)((int)puVar8 + iVar18), puVar25 != (undefined8 *)0x1)) &&
                ((puVar31[1] = *(undefined2 *)((int)puVar8 + iVar18 + -2),
                 puVar25 != (undefined8 *)0x2 &&
                 (((puVar31[2] = *(undefined2 *)((int)puVar8 + iVar18 + -4),
                   puVar25 != (undefined8 *)0x3 &&
                   (puVar31[3] = *(undefined2 *)((int)puVar8 + iVar18 + -6),
                   puVar25 != (undefined8 *)0x4)) &&
                  (puVar31[4] = *(undefined2 *)((int)puVar8 + iVar18 + -8),
                  puVar25 != (undefined8 *)0x5)))))) &&
               (puVar31[5] = *(undefined2 *)((int)puVar8 + iVar18 + -10),
               puVar25 != (undefined8 *)0x6)) {
              puVar31[6] = *(undefined2 *)((int)puVar8 + iVar18 + -0xc);
            }
          }
          goto joined_r0x080172f4;
        }
        if (iVar23 != 0) {
          uVar4 = FUN_08009850(iVar23,uVar9,local_78,iVar36);
          local_74 = (undefined8 *)((uint)local_74 | uVar4);
        }
        local_78 = (undefined8 *)((int)local_78 + iVar36);
        puVar25 = local_7c;
        puVar37 = unaff_r8;
        do {
          uVar4 = (uint)puVar25 & *puVar33;
          puVar25 = (undefined8 *)((int)puVar25 + -2);
          puVar6 = (undefined8 *)(*(code *)puVar8)(iVar21,uVar4);
          puVar37 = (undefined8 *)((int)puVar37 + -1);
          *(short *)puVar24 = (short)puVar6;
          puVar24 = (undefined8 *)((int)puVar24 + 2);
        } while (puVar37 != (undefined8 *)0x0);
        local_7c = (undefined8 *)((int)local_7c + (int)unaff_r8 * -2);
      } while (local_80 != (undefined8 *)0x0);
      break;
    case 5:
      local_74 = (undefined8 *)0x0;
      do {
        while( true ) {
          iVar18 = (int)local_80 * 2;
          iVar23 = param_1[1];
          uVar4 = (uint)local_78 >> 0x17;
          uVar3 = *(uint *)(iVar23 + ((uint)local_7c >> 0x17) * 0x30);
          puVar33 = (uint *)(iVar23 + ((uint)local_7c >> 0x17) * 0x30);
          uVar34 = (uint)local_7c & uVar3;
          puVar30 = (uint *)(iVar23 + uVar4 * 0x30);
          bVar38 = uVar3 < uVar34 + (int)local_80 * -2;
          uVar3 = *(uint *)(iVar23 + uVar4 * 0x30);
          puVar6 = local_78;
          if (bVar38) {
            puVar6 = (undefined8 *)((uVar34 >> 1) + 1);
          }
          uVar10 = (uint)local_78 & uVar3;
          puVar8 = local_80;
          if (bVar38) {
            iVar18 = (int)puVar6 << 1;
            puVar8 = puVar6;
          }
          cVar12 = *(char *)(puVar33 + 0xb);
          if (uVar3 < uVar10 - iVar18) {
            puVar8 = (undefined8 *)((uVar10 >> 1) + 1);
          }
          if (cVar12 == '\x01') {
            iVar18 = 0;
            puVar31 = (undefined2 *)(*(code *)puVar33[1])(iVar21,local_7c);
            iVar36 = 2;
          }
          else if (cVar12 == '\0') {
            iVar36 = 2;
            iVar18 = 0;
            puVar31 = (undefined2 *)(puVar33[1] + uVar34);
          }
          else if (cVar12 == '\x02') {
            puVar31 = (undefined2 *)puVar33[2];
            iVar36 = 3;
            iVar18 = 1;
          }
          else {
            iVar36 = 2;
            iVar18 = 0;
            puVar31 = (undefined2 *)(iVar21 + 0x6b040);
          }
          cVar12 = *(char *)((int)puVar30 + 0x2d);
          if (cVar12 == '\x01') {
            puVar27 = (undefined2 *)(*(code *)puVar30[4])(iVar21,local_78);
          }
          else if (cVar12 == '\0') {
            puVar27 = (undefined2 *)
                      (puVar30[4] + ((uint)local_78 & *(uint *)(iVar23 + uVar4 * 0x30)));
          }
          else if (cVar12 == '\x02') {
            puVar27 = (undefined2 *)puVar30[5];
            iVar18 = iVar36;
          }
          else {
            puVar27 = (undefined2 *)(iVar21 + 0x8b040);
          }
          iVar23 = (*(code *)puVar30[9])(iVar21,puVar30,local_78);
          puVar6 = (undefined8 *)(*(code *)puVar30[10])(iVar21,puVar30,local_78);
          local_80 = (undefined8 *)((int)local_80 - (int)puVar8);
          if (iVar18 != 2) break;
          if (iVar23 != 0) {
            uVar4 = FUN_08009850(iVar23,puVar6,local_78,(int)puVar8 * 2);
            local_74 = (undefined8 *)((uint)local_74 | uVar4);
          }
          local_7c = (undefined8 *)((int)local_7c + (int)puVar8 * -2);
          puVar24 = local_78;
          puVar25 = puVar8;
          do {
            puVar2 = (undefined2 *)(((int)puVar31 - (int)local_78) + (int)puVar24);
            uVar4 = (uint)puVar24 & *puVar30;
            puVar24 = (undefined8 *)((int)puVar24 + -2);
            puVar6 = (undefined8 *)(*(code *)puVar27)(iVar21,uVar4,*puVar2);
            puVar25 = (undefined8 *)((int)puVar25 - 1);
          } while (puVar25 != (undefined8 *)0x0);
          local_78 = (undefined8 *)((int)local_78 + (int)puVar8 * -2);
          if (local_80 == (undefined8 *)0x0) goto LAB_08016c9c;
        }
        if (iVar18 == 3) {
          if (iVar23 != 0) {
            uVar4 = FUN_08009850(iVar23,puVar6,local_78,(int)puVar8 << 1);
            local_74 = (undefined8 *)((uint)local_74 | uVar4);
          }
          puVar24 = local_7c;
          puVar25 = puVar8;
          do {
            uVar4 = ((int)local_78 - (int)local_7c) + (int)puVar24;
            uVar9 = (*(code *)puVar31)(iVar21,(uint)puVar24 & *puVar33);
            puVar24 = (undefined8 *)((int)puVar24 + -2);
            puVar6 = (undefined8 *)(*(code *)puVar27)(iVar21,uVar4 & *puVar30,uVar9);
            puVar25 = (undefined8 *)((int)puVar25 - 1);
          } while (puVar25 != (undefined8 *)0x0);
        }
        else if (iVar18 == 1) {
          if (iVar23 != 0) {
            uVar4 = FUN_08009850(iVar23,puVar6,local_78,(int)puVar8 * 2);
            local_74 = (undefined8 *)((uint)local_74 | uVar4);
          }
          puVar24 = local_7c;
          puVar25 = puVar8;
          do {
            puVar6 = (undefined8 *)(*(code *)puVar31)(iVar21,(uint)puVar24 & *puVar33);
            puVar25 = (undefined8 *)((int)puVar25 - 1);
            *(short *)(((int)puVar27 - (int)local_7c) + (int)puVar24) = (short)puVar6;
            puVar24 = (undefined8 *)((int)puVar24 + -2);
          } while (puVar25 != (undefined8 *)0x0);
        }
        else {
          puVar24 = puVar8;
          if (iVar23 != 0) {
            puVar6 = (undefined8 *)FUN_08009850(iVar23,puVar6,local_78,(int)puVar8 * 2);
            local_74 = (undefined8 *)((uint)local_74 | (uint)puVar6);
          }
          do {
            puVar24 = (undefined8 *)((int)puVar24 - 1);
            *puVar27 = *puVar31;
            puVar31 = puVar31 + -1;
            puVar27 = puVar27 + -1;
          } while (puVar24 != (undefined8 *)0x0);
        }
        local_7c = (undefined8 *)((int)local_7c + (int)puVar8 * -2);
        local_78 = (undefined8 *)((int)local_78 + (int)puVar8 * -2);
      } while (local_80 != (undefined8 *)0x0);
      break;
    case 6:
      local_74 = (undefined8 *)0x0;
      iVar18 = (uVar34 >> 0x17) * 0x30;
      do {
        iVar23 = param_1[1];
        puVar30 = (uint *)(iVar23 + iVar18);
        uVar34 = *(uint *)(iVar23 + ((uint)local_7c >> 0x17) * 0x30);
        puVar33 = (uint *)(iVar23 + ((uint)local_7c >> 0x17) * 0x30);
        uVar4 = (uint)local_7c & uVar34;
        bVar38 = uVar34 < uVar4 + (int)local_80 * -2;
        if (bVar38) {
          puVar8 = (undefined8 *)((uVar4 >> 1) + 1);
          local_80 = (undefined8 *)((int)local_80 - (int)puVar8);
          puVar6 = local_7c;
        }
        else {
          puVar8 = local_80;
          puVar6 = (undefined8 *)0x0;
        }
        cVar12 = *(char *)(puVar33 + 0xb);
        if (!bVar38) {
          local_80 = puVar6;
        }
        if (cVar12 == '\x01') {
          iVar36 = 0;
          puVar31 = (undefined2 *)(*(code *)puVar33[1])(iVar21,local_7c);
          iVar11 = 2;
        }
        else if (cVar12 == '\0') {
          iVar11 = 2;
          iVar36 = 0;
          puVar31 = (undefined2 *)(puVar33[1] + uVar4);
        }
        else if (cVar12 == '\x02') {
          puVar31 = (undefined2 *)puVar33[2];
          iVar11 = 3;
          iVar36 = 1;
        }
        else {
          iVar11 = 2;
          iVar36 = 0;
          puVar31 = (undefined2 *)(iVar21 + 0x6b040);
        }
        cVar12 = *(char *)((int)puVar30 + 0x2d);
        if (cVar12 == '\x01') {
          puVar27 = (undefined2 *)(*(code *)puVar30[4])(iVar21,local_78);
        }
        else if (cVar12 == '\0') {
          puVar27 = (undefined2 *)(puVar30[4] + ((uint)local_78 & *(uint *)(iVar23 + iVar18)));
        }
        else if (cVar12 == '\x02') {
          puVar27 = (undefined2 *)puVar30[5];
          iVar36 = iVar11;
        }
        else {
          puVar27 = (undefined2 *)(iVar21 + 0x8b040);
        }
        iVar23 = (*(code *)puVar30[9])(iVar21,puVar30,local_78);
        puVar6 = (undefined8 *)(*(code *)puVar30[10])(iVar21,puVar30,local_78);
        if (iVar36 == 2) {
          if (iVar23 != 0) {
            uVar4 = FUN_08009850(iVar23,puVar6,local_78,(int)puVar8 * 2);
            local_74 = (undefined8 *)((uint)local_74 | uVar4);
          }
          local_7c = (undefined8 *)((int)local_7c + (int)puVar8 * -2);
          do {
            puVar6 = (undefined8 *)(*(code *)puVar27)(iVar21,(uint)local_78 & *puVar30,*puVar31);
            puVar8 = (undefined8 *)((int)puVar8 - 1);
            puVar31 = puVar31 + -1;
          } while (puVar8 != (undefined8 *)0x0);
        }
        else if (iVar36 == 3) {
          puVar24 = puVar8;
          puVar25 = local_7c;
          if (iVar23 != 0) {
            uVar4 = FUN_08009850(iVar23,puVar6,local_78,(int)puVar8 << 1);
            local_74 = (undefined8 *)((uint)local_74 | uVar4);
          }
          do {
            uVar9 = (*(code *)puVar31)(iVar21,(uint)puVar25 & *puVar33);
            puVar6 = (undefined8 *)(*(code *)puVar27)(iVar21,(uint)local_78 & *puVar30,uVar9);
            puVar24 = (undefined8 *)((int)puVar24 - 1);
            puVar25 = (undefined8 *)((int)puVar25 + -2);
          } while (puVar24 != (undefined8 *)0x0);
          local_7c = (undefined8 *)((int)local_7c + (int)puVar8 * -2);
        }
        else if (iVar36 == 1) {
          puVar24 = local_7c;
          puVar25 = puVar8;
          if (iVar23 != 0) {
            uVar4 = FUN_08009850(iVar23,puVar6,local_78,(int)puVar8 << 1);
            local_74 = (undefined8 *)((uint)local_74 | uVar4);
          }
          do {
            puVar6 = (undefined8 *)(*(code *)puVar31)(iVar21,(uint)puVar24 & *puVar33);
            puVar25 = (undefined8 *)((int)puVar25 - 1);
            *puVar27 = (short)puVar6;
            puVar24 = (undefined8 *)((int)puVar24 + -2);
          } while (puVar25 != (undefined8 *)0x0);
          local_7c = (undefined8 *)((int)local_7c + (int)puVar8 * -2);
        }
        else {
          if (iVar23 != 0) {
            puVar6 = (undefined8 *)FUN_08009850(iVar23,puVar6,local_78,(int)puVar8 * 2);
            local_74 = (undefined8 *)((uint)local_74 | (uint)puVar6);
          }
          local_7c = (undefined8 *)((int)local_7c + (int)puVar8 * -2);
          do {
            puVar8 = (undefined8 *)((int)puVar8 - 1);
            *puVar27 = *puVar31;
            puVar31 = puVar31 + -1;
          } while (puVar8 != (undefined8 *)0x0);
        }
      } while (local_80 != (undefined8 *)0x0);
      break;
    case 8:
    case 0xb:
      local_74 = (undefined8 *)0x0;
      iVar18 = (uVar4 >> 0x17) * 0x30;
      puVar8 = local_80;
      do {
        uVar4 = (uint)local_78 >> 0x17;
        iVar23 = param_1[1];
        puVar33 = (uint *)(iVar23 + iVar18);
        puVar30 = (uint *)(iVar23 + uVar4 * 0x30);
        uVar3 = *(uint *)(iVar23 + uVar4 * 0x30);
        uVar34 = (uint)local_78 & uVar3;
        bVar38 = uVar3 < uVar34 + (int)puVar8 * 2;
        if (bVar38) {
          uVar34 = (uVar3 + 1) - uVar34;
        }
        cVar12 = *(char *)(puVar33 + 0xb);
        if (bVar38) {
          puVar24 = (undefined8 *)(uVar34 >> 1);
          local_80 = (undefined8 *)((int)puVar8 - (int)puVar24);
        }
        else {
          local_80 = (undefined8 *)0x0;
          puVar24 = puVar8;
        }
        if (cVar12 == '\x01') {
          iVar36 = 0;
          puVar31 = (undefined2 *)(*(code *)puVar33[1])(iVar21,local_7c);
          iVar11 = 2;
        }
        else if (cVar12 == '\0') {
          iVar11 = 2;
          iVar36 = 0;
          puVar31 = (undefined2 *)(puVar33[1] + ((uint)local_7c & *(uint *)(iVar23 + iVar18)));
        }
        else if (cVar12 == '\x02') {
          puVar31 = (undefined2 *)puVar33[2];
          iVar11 = 3;
          iVar36 = 1;
        }
        else {
          iVar11 = 2;
          iVar36 = 0;
          puVar31 = (undefined2 *)(iVar21 + 0x6b040);
        }
        cVar12 = *(char *)((int)puVar30 + 0x2d);
        if (cVar12 == '\x01') {
          puVar8 = (undefined8 *)(*(code *)puVar30[4])(iVar21,local_78);
        }
        else if (cVar12 == '\0') {
          puVar8 = (undefined8 *)(puVar30[4] + ((uint)local_78 & *(uint *)(iVar23 + uVar4 * 0x30)));
        }
        else if (cVar12 == '\x02') {
          puVar8 = (undefined8 *)puVar30[5];
          iVar36 = iVar11;
        }
        else {
          puVar8 = (undefined8 *)(iVar21 + 0x8b040);
        }
        iVar23 = (*(code *)puVar30[9])(iVar21,puVar30,local_78);
        puVar6 = (undefined8 *)(*(code *)puVar30[10])(iVar21,puVar30,local_78);
        if (iVar36 == 2) {
          puVar25 = local_78;
          puVar37 = puVar24;
          if (iVar23 != 0) {
            uVar4 = FUN_08009850(iVar23,puVar6,local_78,(int)puVar24 << 1);
            local_74 = (undefined8 *)((uint)local_74 | uVar4);
          }
          do {
            puVar6 = (undefined8 *)(*(code *)puVar8)(iVar21,(uint)puVar25 & *puVar30,*puVar31);
            puVar37 = (undefined8 *)((int)puVar37 + -1);
            puVar25 = (undefined8 *)((int)puVar25 + 2);
          } while (puVar37 != (undefined8 *)0x0);
          local_78 = (undefined8 *)((int)local_78 + (int)puVar24 * 2);
        }
        else if (iVar36 == 3) {
          puVar25 = puVar24;
          puVar37 = local_78;
          if (iVar23 != 0) {
            uVar4 = FUN_08009850(iVar23,puVar6,local_78,(int)puVar24 << 1);
            local_74 = (undefined8 *)((uint)local_74 | uVar4);
          }
          do {
            uVar9 = (*(code *)puVar31)(iVar21,(uint)local_7c & *puVar33);
            puVar6 = (undefined8 *)(*(code *)puVar8)(iVar21,(uint)puVar37 & *puVar30,uVar9);
            puVar25 = (undefined8 *)((int)puVar25 + -1);
            puVar37 = (undefined8 *)((int)puVar37 + 2);
          } while (puVar25 != (undefined8 *)0x0);
          local_78 = (undefined8 *)((int)local_78 + (int)puVar24 * 2);
        }
        else {
          iVar11 = (int)puVar24 * 2;
          if (iVar36 == 1) {
            if (iVar23 != 0) {
              uVar4 = FUN_08009850(iVar23,puVar6,local_78,iVar11);
              local_74 = (undefined8 *)((uint)local_74 | uVar4);
            }
            local_78 = (undefined8 *)((int)local_78 + iVar11);
            do {
              puVar6 = (undefined8 *)(*(code *)puVar31)(iVar21,(uint)local_7c & *puVar33);
              puVar24 = (undefined8 *)((int)puVar24 + -1);
              *(short *)puVar8 = (short)puVar6;
              puVar8 = (undefined8 *)((int)puVar8 + 2);
            } while (puVar24 != (undefined8 *)0x0);
          }
          else {
            if (iVar23 != 0) {
              puVar6 = (undefined8 *)FUN_08009850(iVar23,puVar6,local_78,iVar11);
              local_74 = (undefined8 *)((uint)local_74 | (uint)puVar6);
            }
            local_78 = (undefined8 *)((int)local_78 + iVar11);
            if (puVar24 < (undefined8 *)0xa ||
                puVar8 < puVar31 + 1 && puVar31 < (undefined2 *)((int)puVar8 + iVar11)) {
              do {
                puVar27 = (undefined2 *)((int)puVar8 + 2);
                *(undefined2 *)puVar8 = *puVar31;
                if (puVar24 == (undefined8 *)0x1) break;
                puVar24 = (undefined8 *)((int)puVar24 + -2);
                puVar8 = (undefined8 *)((int)puVar8 + 4);
                *puVar27 = *puVar31;
              } while (puVar24 != (undefined8 *)0x0);
            }
            else {
              uVar4 = 0;
              puVar25 = (undefined8 *)((uint)puVar24 & 0xfffffff8);
              puVar6 = puVar8;
              do {
                uVar4 = uVar4 + 1;
                uVar9 = CONCAT22(*puVar31,*puVar31);
                uVar39 = CONCAT44(uVar9,uVar9);
                *puVar6 = uVar39;
                puVar6[1] = uVar39;
                puVar6 = puVar6 + 2;
              } while (uVar4 < (uint)puVar24 >> 3);
              iVar23 = (int)puVar25 * 2;
              iVar36 = (int)puVar24 - (int)puVar25;
              if (((((puVar24 != puVar25) &&
                    (*(undefined2 *)((int)puVar8 + iVar23) = *puVar31, iVar36 != 1)) &&
                   (*(undefined2 *)((int)puVar8 + iVar23 + 2) = *puVar31, iVar36 != 2)) &&
                  ((*(undefined2 *)((int)puVar8 + iVar23 + 4) = *puVar31, iVar36 != 3 &&
                   (*(undefined2 *)((int)puVar8 + iVar23 + 6) = *puVar31, iVar36 != 4)))) &&
                 ((*(undefined2 *)((int)puVar8 + iVar23 + 8) = *puVar31, iVar36 != 5 &&
                  (*(undefined2 *)((int)puVar8 + iVar23 + 10) = *puVar31, iVar36 != 6)))) {
                *(undefined2 *)((int)puVar8 + iVar23 + 0xc) = *puVar31;
              }
            }
          }
        }
        puVar8 = local_80;
      } while (local_80 != (undefined8 *)0x0);
      break;
    case 9:
      local_74 = (undefined8 *)0x0;
      iVar18 = (uVar4 >> 0x17) * 0x30;
      puVar8 = local_80;
      do {
        uVar4 = (uint)local_78 >> 0x17;
        iVar23 = param_1[1];
        puVar33 = (uint *)(iVar23 + iVar18);
        puVar30 = (uint *)(iVar23 + uVar4 * 0x30);
        uVar3 = *(uint *)(iVar23 + uVar4 * 0x30);
        uVar34 = (uint)local_78 & uVar3;
        cVar12 = *(char *)(puVar33 + 0xb);
        if (uVar3 < uVar34 + (int)puVar8 * -2) {
          puVar24 = (undefined8 *)((uVar34 >> 1) + 1);
          local_80 = (undefined8 *)((int)puVar8 - (int)puVar24);
        }
        else {
          local_80 = (undefined8 *)0x0;
          puVar24 = puVar8;
        }
        if (cVar12 == '\x01') {
          iVar36 = 0;
          puVar31 = (undefined2 *)(*(code *)puVar33[1])(iVar21,local_7c);
          iVar11 = 2;
LAB_080173b8:
          cVar12 = *(char *)((int)puVar30 + 0x2d);
          if (cVar12 != '\x01') goto LAB_080173c4;
LAB_08017e1c:
          puVar27 = (undefined2 *)(*(code *)puVar30[4])(iVar21,local_78);
        }
        else {
          if (cVar12 != '\0') {
            if (cVar12 == '\x02') {
              puVar31 = (undefined2 *)puVar33[2];
              iVar11 = 3;
              iVar36 = 1;
            }
            else {
              iVar11 = 2;
              iVar36 = 0;
              puVar31 = (undefined2 *)(iVar21 + 0x6b040);
            }
            goto LAB_080173b8;
          }
          iVar11 = 2;
          iVar36 = 0;
          puVar31 = (undefined2 *)(puVar33[1] + ((uint)local_7c & *(uint *)(iVar23 + iVar18)));
          cVar12 = *(char *)((int)puVar30 + 0x2d);
          if (cVar12 == '\x01') goto LAB_08017e1c;
LAB_080173c4:
          if (cVar12 == '\0') {
            puVar27 = (undefined2 *)
                      (puVar30[4] + ((uint)local_78 & *(uint *)(iVar23 + uVar4 * 0x30)));
          }
          else if (cVar12 == '\x02') {
            puVar27 = (undefined2 *)puVar30[5];
            iVar36 = iVar11;
          }
          else {
            puVar27 = (undefined2 *)(iVar21 + 0x8b040);
          }
        }
        iVar23 = (*(code *)puVar30[9])(iVar21,puVar30,local_78);
        puVar6 = (undefined8 *)(*(code *)puVar30[10])(iVar21,puVar30,local_78);
        if (iVar36 == 2) {
          puVar8 = local_78;
          puVar25 = puVar24;
          if (iVar23 != 0) {
            uVar4 = FUN_08009850(iVar23,puVar6,local_78,(int)puVar24 << 1);
            local_74 = (undefined8 *)((uint)local_74 | uVar4);
          }
          do {
            puVar6 = (undefined8 *)(*(code *)puVar27)(iVar21,(uint)puVar8 & *puVar30,*puVar31);
            puVar25 = (undefined8 *)((int)puVar25 - 1);
            puVar8 = (undefined8 *)((int)puVar8 + -2);
          } while (puVar25 != (undefined8 *)0x0);
LAB_080184c8:
          local_78 = (undefined8 *)((int)local_78 + (int)puVar24 * -2);
        }
        else {
          if (iVar36 == 3) {
            puVar8 = puVar24;
            puVar25 = local_78;
            if (iVar23 != 0) {
              uVar4 = FUN_08009850(iVar23,puVar6,local_78,(int)puVar24 << 1);
              local_74 = (undefined8 *)((uint)local_74 | uVar4);
            }
            do {
              uVar9 = (*(code *)puVar31)(iVar21,(uint)local_7c & *puVar33);
              puVar6 = (undefined8 *)(*(code *)puVar27)(iVar21,(uint)puVar25 & *puVar30,uVar9);
              puVar8 = (undefined8 *)((int)puVar8 - 1);
              puVar25 = (undefined8 *)((int)puVar25 + -2);
            } while (puVar8 != (undefined8 *)0x0);
            goto LAB_080184c8;
          }
          if (iVar36 == 1) {
            if (iVar23 != 0) {
              uVar4 = FUN_08009850(iVar23,puVar6,local_78,(int)puVar24 * 2);
              local_74 = (undefined8 *)((uint)local_74 | uVar4);
            }
            local_78 = (undefined8 *)((int)local_78 + (int)puVar24 * -2);
            do {
              puVar6 = (undefined8 *)(*(code *)puVar31)(iVar21,(uint)local_7c & *puVar33);
              puVar24 = (undefined8 *)((int)puVar24 - 1);
              *puVar27 = (short)puVar6;
              puVar27 = puVar27 + -1;
            } while (puVar24 != (undefined8 *)0x0);
          }
          else {
            if (iVar23 != 0) {
              puVar6 = (undefined8 *)FUN_08009850(iVar23,puVar6,local_78,(int)puVar24 * 2);
              local_74 = (undefined8 *)((uint)local_74 | (uint)puVar6);
            }
            local_78 = (undefined8 *)((int)local_78 + (int)puVar24 * -2);
            do {
              puVar24 = (undefined8 *)((int)puVar24 - 1);
              *puVar27 = *puVar31;
              puVar27 = puVar27 + -1;
            } while (puVar24 != (undefined8 *)0x0);
          }
        }
        puVar8 = local_80;
      } while (local_80 != (undefined8 *)0x0);
      break;
    case 10:
      iVar36 = param_1[1];
      iVar18 = (uVar4 >> 0x17) * 0x30;
      puVar33 = (uint *)(iVar36 + iVar18);
      iVar23 = (uVar34 >> 0x17) * 0x30;
      puVar30 = (uint *)(iVar36 + iVar23);
      cVar12 = *(char *)(puVar33 + 0xb);
      if (cVar12 == '\x01') {
        iVar11 = 0;
        puVar31 = (undefined2 *)(*(code *)puVar33[1])(iVar21,local_7c);
        iVar16 = 2;
      }
      else if (cVar12 == '\0') {
        iVar16 = 2;
        iVar11 = 0;
        puVar31 = (undefined2 *)(puVar33[1] + ((uint)local_7c & *(uint *)(iVar36 + iVar18)));
      }
      else if (cVar12 == '\x02') {
        puVar31 = (undefined2 *)puVar33[2];
        iVar16 = 3;
        iVar11 = 1;
      }
      else {
        iVar16 = 2;
        puVar31 = (undefined2 *)(iVar21 + 0x6b040);
        iVar11 = 0;
      }
      cVar12 = *(char *)((int)puVar30 + 0x2d);
      if (cVar12 == '\x01') {
        puVar27 = (undefined2 *)(*(code *)puVar30[4])(iVar21,local_78);
      }
      else if (cVar12 == '\0') {
        puVar27 = (undefined2 *)(puVar30[4] + ((uint)local_78 & *(uint *)(iVar36 + iVar23)));
      }
      else if (cVar12 == '\x02') {
        puVar27 = (undefined2 *)puVar30[5];
        iVar11 = iVar16;
      }
      else {
        puVar27 = (undefined2 *)(iVar21 + 0x8b040);
      }
      local_74 = (undefined8 *)(*(code *)puVar30[9])(iVar21,puVar30,local_78);
      puVar6 = (undefined8 *)(*(code *)puVar30[10])(iVar21,puVar30,local_78);
      if (iVar11 == 2) {
        if (local_74 != (undefined8 *)0x0) {
          local_74 = (undefined8 *)FUN_08009850(local_74,puVar6,local_78,(int)local_80 << 1);
        }
        do {
          puVar6 = (undefined8 *)(*(code *)puVar27)(iVar21,(uint)local_78 & *puVar30,*puVar31);
          local_80 = (undefined8 *)((int)local_80 - 1);
        } while (local_80 != (undefined8 *)0x0);
      }
      else if (iVar11 == 3) {
        if (local_74 != (undefined8 *)0x0) {
          local_74 = (undefined8 *)FUN_08009850(local_74,puVar6,local_78,(int)local_80 << 1);
        }
        do {
          uVar9 = (*(code *)puVar31)(iVar21,(uint)local_7c & *puVar33);
          puVar6 = (undefined8 *)(*(code *)puVar27)(iVar21,(uint)local_78 & *puVar30,uVar9);
          local_80 = (undefined8 *)((int)local_80 - 1);
        } while (local_80 != (undefined8 *)0x0);
      }
      else if (iVar11 == 1) {
        if (local_74 != (undefined8 *)0x0) {
          local_74 = (undefined8 *)FUN_08009850(local_74,puVar6,local_78,(int)local_80 << 1);
        }
        do {
          puVar6 = (undefined8 *)(*(code *)puVar31)(iVar21,(uint)local_7c & *puVar33);
          local_80 = (undefined8 *)((int)local_80 - 1);
          *puVar27 = (short)puVar6;
        } while (local_80 != (undefined8 *)0x0);
      }
      else {
        if (local_74 != (undefined8 *)0x0) {
          puVar6 = (undefined8 *)FUN_08009850(local_74,puVar6,local_78,(int)local_80 << 1);
          local_74 = puVar6;
        }
        do {
          local_80 = (undefined8 *)((int)local_80 - 1);
          *puVar27 = *puVar31;
        } while (local_80 != (undefined8 *)0x0);
      }
      break;
    default:
      local_74 = (undefined8 *)0x0;
      puVar6 = local_7c;
    }
  }
  else {
    if ((uVar34 == 0x4000400) && (*(char *)(iVar22 + 0x2104) == '\x01')) {
      FUN_08016478(param_1,param_2);
      return (undefined8 *)0x0;
    }
    local_7c = (undefined8 *)(uVar4 & 0xfffffffc);
    local_78 = (undefined8 *)(uVar34 & 0xfffffffc);
    switch(local_64 >> 0x15 & 0xf) {
    case 0:
    case 3:
      local_74 = (undefined8 *)0x0;
      do {
        iVar18 = param_1[1];
        uVar4 = (int)local_80 * 4;
        uVar34 = (uint)local_78 >> 0x17;
        uVar13 = *(uint *)(iVar18 + ((uint)local_7c >> 0x17) * 0x30);
        puVar33 = (uint *)(iVar18 + ((uint)local_7c >> 0x17) * 0x30);
        uVar3 = (uint)local_7c & uVar13;
        puVar30 = (uint *)(iVar18 + uVar34 * 0x30);
        bVar38 = uVar13 < uVar4 + uVar3;
        uVar10 = *(uint *)(iVar18 + uVar34 * 0x30);
        if (bVar38) {
          uVar13 = (uVar13 + 1) - uVar3;
        }
        puVar8 = local_80;
        if (bVar38) {
          uVar4 = uVar13 & 0xfffffffc;
          puVar8 = (undefined8 *)(uVar13 >> 2);
        }
        bVar38 = uVar10 < uVar4 + ((uint)local_78 & uVar10);
        if (bVar38) {
          puVar8 = (undefined8 *)(uVar10 + 1);
        }
        cVar12 = *(char *)(puVar33 + 0xb);
        if (bVar38) {
          puVar8 = (undefined8 *)((int)puVar8 - ((uint)local_78 & uVar10) >> 2);
        }
        if (cVar12 == '\x01') {
          iVar23 = 0;
          puVar24 = (undefined8 *)(*(code *)puVar33[1])(iVar21,local_7c);
          cVar12 = *(char *)((int)puVar30 + 0x2d);
          iVar36 = 2;
          if (cVar12 != '\x01') goto LAB_08018c40;
LAB_08018e2c:
          puVar25 = (undefined8 *)(*(code *)puVar30[4])(iVar21,local_78);
        }
        else {
          if (cVar12 == '\0') {
            iVar36 = 2;
            iVar23 = 0;
            puVar24 = (undefined8 *)(puVar33[1] + uVar3);
          }
          else if (cVar12 == '\x02') {
            puVar24 = (undefined8 *)puVar33[3];
            iVar36 = 3;
            iVar23 = 1;
          }
          else {
            iVar36 = 2;
            iVar23 = 0;
            puVar24 = (undefined8 *)(iVar21 + 0x6b040);
          }
          cVar12 = *(char *)((int)puVar30 + 0x2d);
          if (cVar12 == '\x01') goto LAB_08018e2c;
LAB_08018c40:
          if (cVar12 == '\0') {
            puVar25 = (undefined8 *)
                      (puVar30[4] + ((uint)local_78 & *(uint *)(iVar18 + uVar34 * 0x30)));
          }
          else if (cVar12 == '\x02') {
            puVar25 = (undefined8 *)puVar30[6];
            iVar23 = iVar36;
          }
          else {
            puVar25 = (undefined8 *)(iVar21 + 0x8b040);
          }
        }
        iVar18 = (*(code *)puVar30[9])(iVar21,puVar30,local_78);
        puVar6 = (undefined8 *)(*(code *)puVar30[10])(iVar21,puVar30,local_78);
        local_80 = (undefined8 *)((int)local_80 - (int)puVar8);
        if (iVar23 == 2) {
          if (iVar18 != 0) {
            uVar4 = FUN_08009850(iVar18,puVar6,local_78,(int)puVar8 * 4);
            local_74 = (undefined8 *)((uint)local_74 | uVar4);
          }
          local_7c = (undefined8 *)((int)local_7c + (int)puVar8 * 4);
          puVar37 = local_78;
          puVar20 = puVar8;
          do {
            puVar29 = (undefined4 *)(((int)puVar24 - (int)local_78) + (int)puVar37);
            uVar4 = (uint)puVar37 & *puVar30;
            puVar37 = (undefined8 *)((int)puVar37 + 4);
            puVar6 = (undefined8 *)(*(code *)puVar25)(iVar21,uVar4,*puVar29);
            puVar20 = (undefined8 *)((int)puVar20 + -1);
          } while (puVar20 != (undefined8 *)0x0);
          local_78 = (undefined8 *)((int)local_78 + (int)puVar8 * 4);
        }
        else if (iVar23 == 3) {
          if (iVar18 != 0) {
            uVar4 = FUN_08009850(iVar18,puVar6,local_78,(int)puVar8 << 2);
            local_74 = (undefined8 *)((uint)local_74 | uVar4);
          }
          puVar37 = local_7c;
          puVar20 = puVar8;
          do {
            uVar4 = ((int)local_78 - (int)local_7c) + (int)puVar37;
            uVar9 = (*(code *)puVar24)(iVar21,(uint)puVar37 & *puVar33);
            puVar37 = (undefined8 *)((int)puVar37 + 4);
            puVar6 = (undefined8 *)(*(code *)puVar25)(iVar21,uVar4 & *puVar30,uVar9);
            puVar20 = (undefined8 *)((int)puVar20 + -1);
          } while (puVar20 != (undefined8 *)0x0);
          iVar18 = ((int)puVar8 + 0x3fffffff) * 4;
          local_7c = (undefined8 *)((int)local_7c + iVar18 + 4);
          local_78 = (undefined8 *)((int)local_78 + iVar18 + 4);
        }
        else {
          iVar36 = (int)puVar8 * 4;
          if (iVar23 == 1) {
            if (iVar18 != 0) {
              uVar4 = FUN_08009850(iVar18,puVar6,local_78,iVar36);
              local_74 = (undefined8 *)((uint)local_74 | uVar4);
            }
            local_78 = (undefined8 *)((int)local_78 + iVar36);
            puVar37 = local_7c;
            puVar20 = puVar8;
            do {
              puVar6 = (undefined8 *)(*(code *)puVar24)(iVar21,(uint)puVar37 & *puVar33);
              puVar20 = (undefined8 *)((int)puVar20 + -1);
              *(undefined8 **)(((int)puVar25 - (int)local_7c) + (int)puVar37) = puVar6;
              puVar37 = (undefined8 *)((int)puVar37 + 4);
            } while (puVar20 != (undefined8 *)0x0);
            local_7c = (undefined8 *)((int)local_7c + (int)puVar8 * 4);
          }
          else {
            if (iVar18 != 0) {
              puVar6 = (undefined8 *)FUN_08009850(iVar18,puVar6,local_78,iVar36);
              local_74 = (undefined8 *)((uint)local_74 | (uint)puVar6);
            }
            local_7c = (undefined8 *)((int)local_7c + iVar36);
            local_78 = (undefined8 *)((int)local_78 + iVar36);
            if (puVar8 < (undefined8 *)0x9 || puVar25 < puVar24 + 2 && puVar24 < puVar25 + 2) {
              do {
                puVar29 = (undefined4 *)((int)puVar24 + 4);
                puVar32 = (undefined4 *)((int)puVar25 + 4);
                *(undefined4 *)puVar25 = *(undefined4 *)puVar24;
                if (puVar8 == (undefined8 *)0x1) break;
                puVar24 = puVar24 + 1;
                puVar8 = (undefined8 *)((int)puVar8 + -2);
                puVar25 = puVar25 + 1;
                *puVar32 = *puVar29;
              } while (puVar8 != (undefined8 *)0x0);
            }
            else {
              uVar4 = 0;
              puVar37 = (undefined8 *)((uint)puVar8 & 0xfffffffc);
              puVar6 = puVar25;
              puVar20 = puVar24;
              do {
                uVar4 = uVar4 + 1;
                uVar39 = *puVar20;
                uVar40 = puVar20[1];
                puVar20 = puVar20 + 2;
                *puVar6 = uVar39;
                puVar6[1] = uVar40;
                puVar6 = puVar6 + 2;
              } while (uVar4 < (uint)puVar8 >> 2);
              iVar18 = (int)puVar37 * 4;
              if (puVar8 != puVar37) {
                puVar6 = *(undefined8 **)((int)puVar24 + (int)puVar37 * 4);
                *(undefined8 **)((int)puVar25 + (int)puVar37 * 4) = puVar6;
                if (((int)puVar8 - (int)puVar37 != 1) &&
                   (*(undefined4 *)((int)puVar25 + iVar18 + 4) =
                         *(undefined4 *)((int)puVar24 + iVar18 + 4), (int)puVar8 - (int)puVar37 != 2
                   )) {
                  *(undefined4 *)((int)puVar25 + iVar18 + 8) =
                       *(undefined4 *)((int)puVar24 + iVar18 + 8);
                }
              }
            }
          }
        }
      } while (local_80 != (undefined8 *)0x0);
      break;
    case 1:
      local_74 = (undefined8 *)0x0;
      do {
        while( true ) {
          uVar34 = (uint)local_78 >> 0x17;
          iVar18 = param_1[1];
          uVar4 = (int)local_80 * 4;
          puVar30 = (uint *)(iVar18 + uVar34 * 0x30);
          uVar13 = *(uint *)(iVar18 + ((uint)local_7c >> 0x17) * 0x30);
          puVar33 = (uint *)(iVar18 + ((uint)local_7c >> 0x17) * 0x30);
          uVar10 = (uint)local_7c & uVar13;
          bVar38 = uVar13 < uVar4 + uVar10;
          uVar3 = *(uint *)(iVar18 + uVar34 * 0x30);
          if (bVar38) {
            uVar13 = (uVar13 + 1) - uVar10;
          }
          uVar14 = (uint)local_78 & uVar3;
          puVar8 = local_80;
          if (bVar38) {
            uVar4 = uVar13 & 0xfffffffc;
            puVar8 = (undefined8 *)(uVar13 >> 2);
          }
          cVar12 = *(char *)(puVar33 + 0xb);
          if (uVar3 < uVar14 - uVar4) {
            puVar8 = (undefined8 *)((uVar14 >> 2) + 1);
          }
          if (cVar12 == '\x01') {
            iVar23 = 0;
            puVar7 = (uint *)(*(code *)puVar33[1])(iVar21,local_7c);
            iVar36 = 2;
          }
          else if (cVar12 == '\0') {
            iVar36 = 2;
            iVar23 = 0;
            puVar7 = (uint *)(puVar33[1] + uVar10);
          }
          else if (cVar12 == '\x02') {
            puVar7 = (uint *)puVar33[3];
            iVar36 = 3;
            iVar23 = 1;
          }
          else {
            iVar36 = 2;
            iVar23 = 0;
            puVar7 = (uint *)(iVar21 + 0x6b040);
          }
          cVar12 = *(char *)((int)puVar30 + 0x2d);
          if (cVar12 == '\x01') {
            puVar28 = (uint *)(*(code *)puVar30[4])(iVar21,local_78);
          }
          else if (cVar12 == '\0') {
            puVar28 = (uint *)(puVar30[4] + ((uint)local_78 & *(uint *)(iVar18 + uVar34 * 0x30)));
          }
          else if (cVar12 == '\x02') {
            puVar28 = (uint *)puVar30[6];
            iVar23 = iVar36;
          }
          else {
            puVar28 = (uint *)(iVar21 + 0x8b040);
          }
          iVar18 = (*(code *)puVar30[9])(iVar21,puVar30,local_78);
          uVar9 = (*(code *)puVar30[10])(iVar21,puVar30,local_78);
          local_80 = (undefined8 *)((int)local_80 - (int)puVar8);
          if (iVar23 != 2) break;
          puVar24 = local_78;
          puVar25 = puVar8;
          if (iVar18 != 0) {
            uVar4 = FUN_08009850(iVar18,uVar9,local_78,(int)puVar8 * 4);
            local_74 = (undefined8 *)((uint)local_74 | uVar4);
          }
          do {
            puVar6 = (undefined8 *)(*(code *)puVar28)(iVar21,(uint)puVar24 & *puVar30,*puVar7);
            puVar25 = (undefined8 *)((int)puVar25 - 1);
            puVar7 = puVar7 + 1;
            puVar24 = (undefined8 *)((int)puVar24 + -4);
          } while (puVar25 != (undefined8 *)0x0);
joined_r0x08018fe0:
          local_7c = (undefined8 *)((int)local_7c + (int)puVar8 * 4);
          local_78 = (undefined8 *)((int)local_78 + (int)puVar8 * -4);
          if (local_80 == (undefined8 *)0x0) goto LAB_08016c9c;
        }
        if (iVar23 == 3) {
          puVar24 = local_7c;
          puVar25 = puVar8;
          puVar37 = local_78;
          if (iVar18 != 0) {
            uVar4 = FUN_08009850(iVar18,uVar9,local_78,(int)puVar8 << 2);
            local_74 = (undefined8 *)((uint)local_74 | uVar4);
          }
          do {
            uVar9 = (*(code *)puVar7)(iVar21,(uint)puVar24 & *puVar33);
            puVar6 = (undefined8 *)(*(code *)puVar28)(iVar21,(uint)puVar37 & *puVar30,uVar9);
            puVar25 = (undefined8 *)((int)puVar25 - 1);
            puVar24 = (undefined8 *)((int)puVar24 + 4);
            puVar37 = (undefined8 *)((int)puVar37 + -4);
          } while (puVar25 != (undefined8 *)0x0);
          goto joined_r0x08018fe0;
        }
        if (iVar23 != 1) {
          puVar24 = puVar8;
          puVar6 = local_80;
          if (iVar18 != 0) {
            puVar6 = (undefined8 *)FUN_08009850(iVar18,uVar9,local_78,(int)puVar8 * 4);
            local_74 = (undefined8 *)((uint)local_74 | (uint)puVar6);
          }
          do {
            puVar24 = (undefined8 *)((int)puVar24 - 1);
            *puVar28 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar28 = puVar28 + -1;
          } while (puVar24 != (undefined8 *)0x0);
          goto joined_r0x08018fe0;
        }
        if (iVar18 != 0) {
          uVar4 = FUN_08009850(iVar18,uVar9,local_78,(int)puVar8 * 4);
          local_74 = (undefined8 *)((uint)local_74 | uVar4);
        }
        local_78 = (undefined8 *)((int)local_78 + (int)puVar8 * -4);
        puVar24 = local_7c;
        puVar25 = puVar8;
        do {
          uVar4 = (uint)puVar24 & *puVar33;
          puVar24 = (undefined8 *)((int)puVar24 + 4);
          puVar6 = (undefined8 *)(*(code *)puVar7)(iVar21,uVar4);
          puVar25 = (undefined8 *)((int)puVar25 - 1);
          *puVar28 = (uint)puVar6;
          puVar28 = puVar28 + -1;
        } while (puVar25 != (undefined8 *)0x0);
        local_7c = (undefined8 *)((int)local_7c + (int)puVar8 * 4);
      } while (local_80 != (undefined8 *)0x0);
      break;
    case 2:
      local_74 = (undefined8 *)0x0;
      iVar18 = (uVar34 >> 0x17) * 0x30;
      puVar8 = local_80;
      do {
        iVar23 = param_1[1];
        puVar30 = (uint *)(iVar23 + iVar18);
        uVar34 = *(uint *)(iVar23 + ((uint)local_7c >> 0x17) * 0x30);
        puVar33 = (uint *)(iVar23 + ((uint)local_7c >> 0x17) * 0x30);
        uVar4 = (uint)local_7c & uVar34;
        if (uVar34 < uVar4 + (int)puVar8 * 4) {
          puVar24 = (undefined8 *)((uVar34 + 1) - uVar4 >> 2);
          local_80 = (undefined8 *)((int)puVar8 - (int)puVar24);
        }
        else {
          local_80 = (undefined8 *)0x0;
          puVar24 = puVar8;
        }
        cVar12 = *(char *)(puVar33 + 0xb);
        if (cVar12 == '\x01') {
          iVar36 = 0;
          puVar7 = (uint *)(*(code *)puVar33[1])(iVar21,local_7c);
          iVar11 = 2;
        }
        else if (cVar12 == '\0') {
          iVar11 = 2;
          iVar36 = 0;
          puVar7 = (uint *)(puVar33[1] + uVar4);
        }
        else if (cVar12 == '\x02') {
          puVar7 = (uint *)puVar33[3];
          iVar11 = 3;
          iVar36 = 1;
        }
        else {
          iVar11 = 2;
          iVar36 = 0;
          puVar7 = (uint *)(iVar21 + 0x6b040);
        }
        cVar12 = *(char *)((int)puVar30 + 0x2d);
        if (cVar12 == '\x01') {
          puVar28 = (uint *)(*(code *)puVar30[4])(iVar21,local_78);
        }
        else if (cVar12 == '\0') {
          puVar28 = (uint *)(puVar30[4] + ((uint)local_78 & *(uint *)(iVar23 + iVar18)));
        }
        else if (cVar12 == '\x02') {
          puVar28 = (uint *)puVar30[6];
          iVar36 = iVar11;
        }
        else {
          puVar28 = (uint *)(iVar21 + 0x8b040);
        }
        iVar23 = (*(code *)puVar30[9])(iVar21,puVar30,local_78);
        puVar6 = (undefined8 *)(*(code *)puVar30[10])(iVar21,puVar30,local_78);
        if (iVar36 == 2) {
          if (iVar23 != 0) {
            uVar4 = FUN_08009850(iVar23,puVar6,local_78,(int)puVar24 * 4);
            local_74 = (undefined8 *)((uint)local_74 | uVar4);
          }
          local_7c = (undefined8 *)((int)local_7c + (int)puVar24 * 4);
          do {
            puVar6 = (undefined8 *)(*(code *)puVar28)(iVar21,(uint)local_78 & *puVar30,*puVar7);
            puVar24 = (undefined8 *)((int)puVar24 - 1);
            puVar7 = puVar7 + 1;
          } while (puVar24 != (undefined8 *)0x0);
        }
        else if (iVar36 == 3) {
          puVar8 = puVar24;
          puVar25 = local_7c;
          if (iVar23 != 0) {
            uVar4 = FUN_08009850(iVar23,puVar6,local_78,(int)puVar24 << 2);
            local_74 = (undefined8 *)((uint)local_74 | uVar4);
          }
          do {
            uVar9 = (*(code *)puVar7)(iVar21,(uint)puVar25 & *puVar33);
            puVar6 = (undefined8 *)(*(code *)puVar28)(iVar21,(uint)local_78 & *puVar30,uVar9);
            puVar8 = (undefined8 *)((int)puVar8 - 1);
            puVar25 = (undefined8 *)((int)puVar25 + 4);
          } while (puVar8 != (undefined8 *)0x0);
          local_7c = (undefined8 *)((int)local_7c + (int)puVar24 * 4);
        }
        else if (iVar36 == 1) {
          puVar8 = local_7c;
          puVar25 = puVar24;
          if (iVar23 != 0) {
            uVar4 = FUN_08009850(iVar23,puVar6,local_78,(int)puVar24 << 2);
            local_74 = (undefined8 *)((uint)local_74 | uVar4);
          }
          do {
            puVar6 = (undefined8 *)(*(code *)puVar7)(iVar21,(uint)puVar8 & *puVar33);
            puVar25 = (undefined8 *)((int)puVar25 - 1);
            *puVar28 = (uint)puVar6;
            puVar8 = (undefined8 *)((int)puVar8 + 4);
          } while (puVar25 != (undefined8 *)0x0);
          local_7c = (undefined8 *)((int)local_7c + (int)puVar24 * 4);
        }
        else {
          if (iVar23 != 0) {
            puVar6 = (undefined8 *)FUN_08009850(iVar23,puVar6,local_78,(int)puVar24 * 4);
            local_74 = (undefined8 *)((uint)local_74 | (uint)puVar6);
          }
          local_7c = (undefined8 *)((int)local_7c + (int)puVar24 * 4);
          do {
            puVar24 = (undefined8 *)((int)puVar24 - 1);
            *puVar28 = *puVar7;
            puVar7 = puVar7 + 1;
          } while (puVar24 != (undefined8 *)0x0);
        }
        puVar8 = local_80;
      } while (local_80 != (undefined8 *)0x0);
      break;
    case 4:
    case 7:
      local_74 = (undefined8 *)0x0;
      do {
        uVar4 = (uint)local_78 >> 0x17;
        iVar23 = param_1[1];
        iVar18 = (int)local_80 * 4;
        puVar30 = (uint *)(iVar23 + uVar4 * 0x30);
        uVar3 = *(uint *)(iVar23 + ((uint)local_7c >> 0x17) * 0x30);
        puVar33 = (uint *)(iVar23 + ((uint)local_7c >> 0x17) * 0x30);
        uVar34 = (uint)local_7c & uVar3;
        bVar38 = uVar3 < uVar34 + (int)local_80 * -4;
        uVar3 = *(uint *)(iVar23 + uVar4 * 0x30);
        if (bVar38) {
          unaff_r8 = (undefined8 *)((uVar34 >> 2) + 1);
        }
        puVar6 = local_80;
        if (bVar38) {
          iVar18 = (int)unaff_r8 << 2;
          puVar6 = unaff_r8;
        }
        unaff_r8 = puVar6;
        bVar38 = uVar3 < iVar18 + ((uint)local_78 & uVar3);
        if (bVar38) {
          unaff_r8 = (undefined8 *)(uVar3 + 1);
        }
        cVar12 = *(char *)(puVar33 + 0xb);
        if (bVar38) {
          unaff_r8 = (undefined8 *)((int)unaff_r8 - ((uint)local_78 & uVar3) >> 2);
        }
        if (cVar12 == '\x01') {
          iVar18 = 0;
          puVar7 = (uint *)(*(code *)puVar33[1])(iVar21,local_7c);
          cVar12 = *(char *)((int)puVar30 + 0x2d);
          iVar36 = 2;
          if (cVar12 != '\x01') goto LAB_0801919c;
LAB_0801939c:
          puVar28 = (uint *)(*(code *)puVar30[4])(iVar21,local_78);
        }
        else {
          if (cVar12 == '\0') {
            iVar36 = 2;
            iVar18 = 0;
            puVar7 = (uint *)(puVar33[1] + uVar34);
          }
          else if (cVar12 == '\x02') {
            puVar7 = (uint *)puVar33[3];
            iVar36 = 3;
            iVar18 = 1;
          }
          else {
            iVar36 = 2;
            iVar18 = 0;
            puVar7 = (uint *)(iVar21 + 0x6b040);
          }
          cVar12 = *(char *)((int)puVar30 + 0x2d);
          if (cVar12 == '\x01') goto LAB_0801939c;
LAB_0801919c:
          if (cVar12 == '\0') {
            puVar28 = (uint *)(puVar30[4] + ((uint)local_78 & *(uint *)(iVar23 + uVar4 * 0x30)));
          }
          else if (cVar12 == '\x02') {
            puVar28 = (uint *)puVar30[6];
            iVar18 = iVar36;
          }
          else {
            puVar28 = (uint *)(iVar21 + 0x8b040);
          }
        }
        iVar23 = (*(code *)puVar30[9])(iVar21,puVar30,local_78);
        uVar9 = (*(code *)puVar30[10])(iVar21,puVar30);
        local_80 = (undefined8 *)((int)local_80 - (int)unaff_r8);
        if (iVar18 == 2) {
          puVar8 = local_78;
          puVar24 = unaff_r8;
          if (iVar23 != 0) {
            uVar4 = FUN_08009850(iVar23,uVar9,local_78,(int)unaff_r8 * 4);
            local_74 = (undefined8 *)((uint)local_74 | uVar4);
          }
          do {
            puVar6 = (undefined8 *)(*(code *)puVar28)(iVar21,(uint)puVar8 & *puVar30,*puVar7);
            puVar24 = (undefined8 *)((int)puVar24 + -1);
            puVar7 = puVar7 + -1;
            puVar8 = (undefined8 *)((int)puVar8 + 4);
          } while (puVar24 != (undefined8 *)0x0);
LAB_0801a660:
          local_7c = (undefined8 *)((int)local_7c + (int)unaff_r8 * -4);
          local_78 = (undefined8 *)((int)local_78 + (int)unaff_r8 * 4);
        }
        else {
          if (iVar18 == 3) {
            puVar8 = local_7c;
            puVar24 = unaff_r8;
            puVar25 = local_78;
            if (iVar23 != 0) {
              uVar4 = FUN_08009850(iVar23,uVar9,local_78,(int)unaff_r8 << 2);
              local_74 = (undefined8 *)((uint)local_74 | uVar4);
            }
            do {
              uVar9 = (*(code *)puVar7)(iVar21,(uint)puVar8 & *puVar33);
              puVar6 = (undefined8 *)(*(code *)puVar28)(iVar21,(uint)puVar25 & *puVar30,uVar9);
              puVar24 = (undefined8 *)((int)puVar24 + -1);
              puVar8 = (undefined8 *)((int)puVar8 + -4);
              puVar25 = (undefined8 *)((int)puVar25 + 4);
            } while (puVar24 != (undefined8 *)0x0);
            goto LAB_0801a660;
          }
          iVar36 = (int)unaff_r8 * 4;
          if (iVar18 == 1) {
            if (iVar23 != 0) {
              uVar4 = FUN_08009850(iVar23,uVar9,local_78,iVar36);
              local_74 = (undefined8 *)((uint)local_74 | uVar4);
            }
            local_78 = (undefined8 *)((int)local_78 + iVar36);
            puVar8 = local_7c;
            puVar24 = unaff_r8;
            do {
              uVar4 = (uint)puVar8 & *puVar33;
              puVar8 = (undefined8 *)((int)puVar8 + -4);
              puVar6 = (undefined8 *)(*(code *)puVar7)(iVar21,uVar4);
              puVar24 = (undefined8 *)((int)puVar24 + -1);
              *puVar28 = (uint)puVar6;
              puVar28 = puVar28 + 1;
            } while (puVar24 != (undefined8 *)0x0);
            local_7c = (undefined8 *)((int)local_7c + (int)unaff_r8 * -4);
          }
          else {
            puVar6 = local_80;
            if (iVar23 != 0) {
              puVar6 = (undefined8 *)FUN_08009850(iVar23,uVar9,local_78,iVar36);
              local_74 = (undefined8 *)((uint)local_74 | (uint)puVar6);
            }
            local_7c = (undefined8 *)((int)local_7c + (int)unaff_r8 * -4);
            local_78 = (undefined8 *)((int)local_78 + iVar36);
            puVar8 = unaff_r8;
            if (unaff_r8 < (undefined8 *)0x9 ||
                puVar7 + -(int)unaff_r8 < puVar28 + (int)unaff_r8 && puVar28 < puVar7) {
              do {
                puVar30 = puVar7 + -1;
                unaff_r8 = (undefined8 *)((int)puVar8 - 1);
                puVar33 = puVar28 + 1;
                *puVar28 = *puVar7;
                if (unaff_r8 == (undefined8 *)0x0) break;
                puVar7 = puVar7 + -2;
                unaff_r8 = (undefined8 *)((int)puVar8 - 2);
                puVar28 = puVar28 + 2;
                *puVar33 = *puVar30;
                puVar8 = unaff_r8;
              } while (unaff_r8 != (undefined8 *)0x0);
            }
            else {
              puVar30 = puVar7 + -3;
              uVar4 = 0;
              do {
                uVar4 = uVar4 + 1;
                puVar30 = puVar30 + -4;
                puVar6 = (undefined8 *)VectorTableLookup(unaff_r8,puVar30,2);
                puVar8 = (undefined8 *)VectorTableLookup(puVar33,puVar30,2);
                *puVar6 = in_d16;
                puVar6[1] = in_d17;
              } while (uVar4 < (uint)unaff_r8 >> 2);
              bVar38 = unaff_r8 != puVar8;
              puVar6 = (undefined8 *)-(int)puVar8;
              unaff_r8 = (undefined8 *)((int)unaff_r8 - (int)puVar8);
              if (bVar38) {
                puVar6 = (undefined8 *)puVar7[-(int)puVar8];
                puVar28[(int)puVar8] = (uint)puVar6;
                if ((unaff_r8 != (undefined8 *)0x1) &&
                   (puVar28[(int)puVar8 + 1] = puVar7[-1 - (int)puVar8],
                   unaff_r8 != (undefined8 *)0x2)) {
                  puVar28[(int)puVar8 + 2] = puVar7[-2 - (int)puVar8];
                }
              }
            }
          }
        }
      } while (local_80 != (undefined8 *)0x0);
      break;
    case 5:
      local_74 = (undefined8 *)0x0;
      do {
        while( true ) {
          iVar18 = (int)local_80 * 4;
          iVar23 = param_1[1];
          uVar4 = (uint)local_78 >> 0x17;
          uVar3 = *(uint *)(iVar23 + ((uint)local_7c >> 0x17) * 0x30);
          puVar33 = (uint *)(iVar23 + ((uint)local_7c >> 0x17) * 0x30);
          uVar34 = (uint)local_7c & uVar3;
          puVar30 = (uint *)(iVar23 + uVar4 * 0x30);
          bVar38 = uVar3 < uVar34 + (int)local_80 * -4;
          uVar3 = *(uint *)(iVar23 + uVar4 * 0x30);
          puVar6 = local_78;
          if (bVar38) {
            puVar6 = (undefined8 *)((uVar34 >> 2) + 1);
          }
          uVar10 = (uint)local_78 & uVar3;
          puVar8 = local_80;
          if (bVar38) {
            iVar18 = (int)puVar6 << 2;
            puVar8 = puVar6;
          }
          cVar12 = *(char *)(puVar33 + 0xb);
          if (uVar3 < uVar10 - iVar18) {
            puVar8 = (undefined8 *)((uVar10 >> 2) + 1);
          }
          if (cVar12 == '\x01') {
            iVar18 = 0;
            puVar29 = (undefined4 *)(*(code *)puVar33[1])(iVar21,local_7c);
            iVar36 = 2;
          }
          else if (cVar12 == '\0') {
            iVar36 = 2;
            iVar18 = 0;
            puVar29 = (undefined4 *)(puVar33[1] + uVar34);
          }
          else if (cVar12 == '\x02') {
            puVar29 = (undefined4 *)puVar33[3];
            iVar36 = 3;
            iVar18 = 1;
          }
          else {
            iVar36 = 2;
            iVar18 = 0;
            puVar29 = (undefined4 *)(iVar21 + 0x6b040);
          }
          cVar12 = *(char *)((int)puVar30 + 0x2d);
          if (cVar12 == '\x01') {
            puVar32 = (undefined4 *)(*(code *)puVar30[4])(iVar21,local_78);
          }
          else if (cVar12 == '\0') {
            puVar32 = (undefined4 *)
                      (puVar30[4] + ((uint)local_78 & *(uint *)(iVar23 + uVar4 * 0x30)));
          }
          else if (cVar12 == '\x02') {
            puVar32 = (undefined4 *)puVar30[6];
            iVar18 = iVar36;
          }
          else {
            puVar32 = (undefined4 *)(iVar21 + 0x8b040);
          }
          iVar23 = (*(code *)puVar30[9])(iVar21,puVar30,local_78);
          puVar6 = (undefined8 *)(*(code *)puVar30[10])(iVar21,puVar30,local_78);
          local_80 = (undefined8 *)((int)local_80 - (int)puVar8);
          if (iVar18 != 2) break;
          if (iVar23 != 0) {
            uVar4 = FUN_08009850(iVar23,puVar6,local_78,(int)puVar8 * 4);
            local_74 = (undefined8 *)((uint)local_74 | uVar4);
          }
          local_7c = (undefined8 *)((int)local_7c + (int)puVar8 * -4);
          puVar24 = local_78;
          puVar25 = puVar8;
          do {
            puVar1 = (undefined4 *)(((int)puVar29 - (int)local_78) + (int)puVar24);
            uVar4 = (uint)puVar24 & *puVar30;
            puVar24 = (undefined8 *)((int)puVar24 + -4);
            puVar6 = (undefined8 *)(*(code *)puVar32)(iVar21,uVar4,*puVar1);
            puVar25 = (undefined8 *)((int)puVar25 - 1);
          } while (puVar25 != (undefined8 *)0x0);
          local_78 = (undefined8 *)((int)local_78 + (int)puVar8 * -4);
          if (local_80 == (undefined8 *)0x0) goto LAB_08016c9c;
        }
        if (iVar18 == 3) {
          if (iVar23 != 0) {
            uVar4 = FUN_08009850(iVar23,puVar6,local_78,(int)puVar8 << 2);
            local_74 = (undefined8 *)((uint)local_74 | uVar4);
          }
          puVar24 = local_7c;
          puVar25 = puVar8;
          do {
            uVar4 = ((int)local_78 - (int)local_7c) + (int)puVar24;
            uVar9 = (*(code *)puVar29)(iVar21,(uint)puVar24 & *puVar33);
            puVar24 = (undefined8 *)((int)puVar24 + -4);
            puVar6 = (undefined8 *)(*(code *)puVar32)(iVar21,uVar4 & *puVar30,uVar9);
            puVar25 = (undefined8 *)((int)puVar25 - 1);
          } while (puVar25 != (undefined8 *)0x0);
        }
        else if (iVar18 == 1) {
          if (iVar23 != 0) {
            uVar4 = FUN_08009850(iVar23,puVar6,local_78,(int)puVar8 * 4);
            local_74 = (undefined8 *)((uint)local_74 | uVar4);
          }
          puVar24 = local_7c;
          puVar25 = puVar8;
          do {
            puVar6 = (undefined8 *)(*(code *)puVar29)(iVar21,(uint)puVar24 & *puVar33);
            puVar25 = (undefined8 *)((int)puVar25 - 1);
            *(undefined8 **)(((int)puVar32 - (int)local_7c) + (int)puVar24) = puVar6;
            puVar24 = (undefined8 *)((int)puVar24 + -4);
          } while (puVar25 != (undefined8 *)0x0);
        }
        else {
          puVar24 = puVar8;
          if (iVar23 != 0) {
            puVar6 = (undefined8 *)FUN_08009850(iVar23,puVar6,local_78,(int)puVar8 * 4);
            local_74 = (undefined8 *)((uint)local_74 | (uint)puVar6);
          }
          do {
            puVar24 = (undefined8 *)((int)puVar24 - 1);
            *puVar32 = *puVar29;
            puVar29 = puVar29 + -1;
            puVar32 = puVar32 + -1;
          } while (puVar24 != (undefined8 *)0x0);
        }
        local_7c = (undefined8 *)((int)local_7c + (int)puVar8 * -4);
        local_78 = (undefined8 *)((int)local_78 + (int)puVar8 * -4);
      } while (local_80 != (undefined8 *)0x0);
      break;
    case 6:
      local_74 = (undefined8 *)0x0;
      iVar18 = (uVar34 >> 0x17) * 0x30;
      do {
        iVar23 = param_1[1];
        puVar30 = (uint *)(iVar23 + iVar18);
        uVar34 = *(uint *)(iVar23 + ((uint)local_7c >> 0x17) * 0x30);
        puVar33 = (uint *)(iVar23 + ((uint)local_7c >> 0x17) * 0x30);
        uVar4 = (uint)local_7c & uVar34;
        bVar38 = uVar34 < uVar4 + (int)local_80 * -4;
        if (bVar38) {
          puVar8 = (undefined8 *)((uVar4 >> 2) + 1);
          local_80 = (undefined8 *)((int)local_80 - (int)puVar8);
          puVar6 = local_7c;
        }
        else {
          puVar8 = local_80;
          puVar6 = (undefined8 *)0x0;
        }
        cVar12 = *(char *)(puVar33 + 0xb);
        if (!bVar38) {
          local_80 = puVar6;
        }
        if (cVar12 == '\x01') {
          iVar36 = 0;
          puVar7 = (uint *)(*(code *)puVar33[1])(iVar21,local_7c);
          cVar12 = *(char *)((int)puVar30 + 0x2d);
          iVar11 = 2;
          if (cVar12 != '\x01') goto LAB_08019700;
LAB_08019a44:
          puVar28 = (uint *)(*(code *)puVar30[4])(iVar21,local_78);
        }
        else {
          if (cVar12 == '\0') {
            iVar11 = 2;
            iVar36 = 0;
            puVar7 = (uint *)(puVar33[1] + uVar4);
          }
          else if (cVar12 == '\x02') {
            puVar7 = (uint *)puVar33[3];
            iVar11 = 3;
            iVar36 = 1;
          }
          else {
            iVar11 = 2;
            iVar36 = 0;
            puVar7 = (uint *)(iVar21 + 0x6b040);
          }
          cVar12 = *(char *)((int)puVar30 + 0x2d);
          if (cVar12 == '\x01') goto LAB_08019a44;
LAB_08019700:
          if (cVar12 == '\0') {
            puVar28 = (uint *)(puVar30[4] + ((uint)local_78 & *(uint *)(iVar23 + iVar18)));
          }
          else if (cVar12 == '\x02') {
            puVar28 = (uint *)puVar30[6];
            iVar36 = iVar11;
          }
          else {
            puVar28 = (uint *)(iVar21 + 0x8b040);
          }
        }
        iVar23 = (*(code *)puVar30[9])(iVar21,puVar30,local_78);
        puVar6 = (undefined8 *)(*(code *)puVar30[10])(iVar21,puVar30,local_78);
        if (iVar36 == 2) {
          if (iVar23 != 0) {
            uVar4 = FUN_08009850(iVar23,puVar6,local_78,(int)puVar8 * 4);
            local_74 = (undefined8 *)((uint)local_74 | uVar4);
          }
          local_7c = (undefined8 *)((int)local_7c + (int)puVar8 * -4);
          do {
            puVar6 = (undefined8 *)(*(code *)puVar28)(iVar21,(uint)local_78 & *puVar30,*puVar7);
            puVar8 = (undefined8 *)((int)puVar8 - 1);
            puVar7 = puVar7 + -1;
          } while (puVar8 != (undefined8 *)0x0);
        }
        else if (iVar36 == 3) {
          puVar24 = puVar8;
          puVar25 = local_7c;
          if (iVar23 != 0) {
            uVar4 = FUN_08009850(iVar23,puVar6,local_78,(int)puVar8 << 2);
            local_74 = (undefined8 *)((uint)local_74 | uVar4);
          }
          do {
            uVar9 = (*(code *)puVar7)(iVar21,(uint)puVar25 & *puVar33);
            puVar6 = (undefined8 *)(*(code *)puVar28)(iVar21,(uint)local_78 & *puVar30,uVar9);
            puVar24 = (undefined8 *)((int)puVar24 - 1);
            puVar25 = (undefined8 *)((int)puVar25 + -4);
          } while (puVar24 != (undefined8 *)0x0);
          local_7c = (undefined8 *)((int)local_7c + (int)puVar8 * -4);
        }
        else if (iVar36 == 1) {
          puVar24 = local_7c;
          puVar25 = puVar8;
          if (iVar23 != 0) {
            uVar4 = FUN_08009850(iVar23,puVar6,local_78,(int)puVar8 << 2);
            local_74 = (undefined8 *)((uint)local_74 | uVar4);
          }
          do {
            puVar6 = (undefined8 *)(*(code *)puVar7)(iVar21,(uint)puVar24 & *puVar33);
            puVar25 = (undefined8 *)((int)puVar25 - 1);
            *puVar28 = (uint)puVar6;
            puVar24 = (undefined8 *)((int)puVar24 + -4);
          } while (puVar25 != (undefined8 *)0x0);
          local_7c = (undefined8 *)((int)local_7c + (int)puVar8 * -4);
        }
        else {
          if (iVar23 != 0) {
            puVar6 = (undefined8 *)FUN_08009850(iVar23,puVar6,local_78,(int)puVar8 * 4);
            local_74 = (undefined8 *)((uint)local_74 | (uint)puVar6);
          }
          local_7c = (undefined8 *)((int)local_7c + (int)puVar8 * -4);
          do {
            puVar8 = (undefined8 *)((int)puVar8 - 1);
            *puVar28 = *puVar7;
            puVar7 = puVar7 + -1;
          } while (puVar8 != (undefined8 *)0x0);
        }
      } while (local_80 != (undefined8 *)0x0);
      break;
    case 8:
    case 0xb:
      local_74 = (undefined8 *)0x0;
      iVar18 = (uVar4 >> 0x17) * 0x30;
      puVar8 = local_80;
      do {
        uVar4 = (uint)local_78 >> 0x17;
        iVar23 = param_1[1];
        puVar33 = (uint *)(iVar23 + iVar18);
        puVar30 = (uint *)(iVar23 + uVar4 * 0x30);
        uVar3 = *(uint *)(iVar23 + uVar4 * 0x30);
        uVar34 = (uint)local_78 & uVar3;
        bVar38 = uVar3 < uVar34 + (int)puVar8 * 4;
        if (bVar38) {
          uVar34 = (uVar3 + 1) - uVar34;
        }
        cVar12 = *(char *)(puVar33 + 0xb);
        if (bVar38) {
          puVar24 = (undefined8 *)(uVar34 >> 2);
          local_80 = (undefined8 *)((int)puVar8 - (int)puVar24);
        }
        else {
          local_80 = (undefined8 *)0x0;
          puVar24 = puVar8;
        }
        if (cVar12 == '\x01') {
          iVar36 = 0;
          puVar7 = (uint *)(*(code *)puVar33[1])(iVar21,local_7c);
          cVar12 = *(char *)((int)puVar30 + 0x2d);
          iVar11 = 2;
          if (cVar12 != '\x01') goto LAB_08019818;
LAB_080199c0:
          puVar8 = (undefined8 *)(*(code *)puVar30[4])(iVar21,local_78);
        }
        else {
          if (cVar12 == '\0') {
            iVar11 = 2;
            iVar36 = 0;
            puVar7 = (uint *)(puVar33[1] + ((uint)local_7c & *(uint *)(iVar23 + iVar18)));
          }
          else if (cVar12 == '\x02') {
            puVar7 = (uint *)puVar33[3];
            iVar11 = 3;
            iVar36 = 1;
          }
          else {
            iVar11 = 2;
            iVar36 = 0;
            puVar7 = (uint *)(iVar21 + 0x6b040);
          }
          cVar12 = *(char *)((int)puVar30 + 0x2d);
          if (cVar12 == '\x01') goto LAB_080199c0;
LAB_08019818:
          if (cVar12 == '\0') {
            puVar8 = (undefined8 *)
                     (puVar30[4] + ((uint)local_78 & *(uint *)(iVar23 + uVar4 * 0x30)));
          }
          else if (cVar12 == '\x02') {
            puVar8 = (undefined8 *)puVar30[6];
            iVar36 = iVar11;
          }
          else {
            puVar8 = (undefined8 *)(iVar21 + 0x8b040);
          }
        }
        iVar23 = (*(code *)puVar30[9])(iVar21,puVar30,local_78);
        puVar6 = (undefined8 *)(*(code *)puVar30[10])(iVar21,puVar30,local_78);
        if (iVar36 == 2) {
          puVar25 = local_78;
          puVar37 = puVar24;
          if (iVar23 != 0) {
            uVar4 = FUN_08009850(iVar23,puVar6,local_78,(int)puVar24 << 2);
            local_74 = (undefined8 *)((uint)local_74 | uVar4);
          }
          do {
            puVar6 = (undefined8 *)(*(code *)puVar8)(iVar21,(uint)puVar25 & *puVar30,*puVar7);
            puVar37 = (undefined8 *)((int)puVar37 + -1);
            puVar25 = (undefined8 *)((int)puVar25 + 4);
          } while (puVar37 != (undefined8 *)0x0);
          local_78 = (undefined8 *)((int)local_78 + (int)puVar24 * 4);
        }
        else if (iVar36 == 3) {
          puVar25 = puVar24;
          puVar37 = local_78;
          if (iVar23 != 0) {
            uVar4 = FUN_08009850(iVar23,puVar6,local_78,(int)puVar24 << 2);
            local_74 = (undefined8 *)((uint)local_74 | uVar4);
          }
          do {
            uVar9 = (*(code *)puVar7)(iVar21,(uint)local_7c & *puVar33);
            puVar6 = (undefined8 *)(*(code *)puVar8)(iVar21,(uint)puVar37 & *puVar30,uVar9);
            puVar25 = (undefined8 *)((int)puVar25 + -1);
            puVar37 = (undefined8 *)((int)puVar37 + 4);
          } while (puVar25 != (undefined8 *)0x0);
          local_78 = (undefined8 *)((int)local_78 + (int)puVar24 * 4);
        }
        else {
          iVar11 = (int)puVar24 * 4;
          if (iVar36 == 1) {
            if (iVar23 != 0) {
              uVar4 = FUN_08009850(iVar23,puVar6,local_78,iVar11);
              local_74 = (undefined8 *)((uint)local_74 | uVar4);
            }
            local_78 = (undefined8 *)((int)local_78 + iVar11);
            do {
              puVar6 = (undefined8 *)(*(code *)puVar7)(iVar21,(uint)local_7c & *puVar33);
              puVar24 = (undefined8 *)((int)puVar24 + -1);
              *(undefined8 **)puVar8 = puVar6;
              puVar8 = (undefined8 *)((int)puVar8 + 4);
            } while (puVar24 != (undefined8 *)0x0);
          }
          else {
            if (iVar23 != 0) {
              puVar6 = (undefined8 *)FUN_08009850(iVar23,puVar6,local_78,iVar11);
              local_74 = (undefined8 *)((uint)local_74 | (uint)puVar6);
            }
            local_78 = (undefined8 *)((int)local_78 + iVar11);
            if (puVar24 < (undefined8 *)0x9 ||
                puVar8 < puVar7 + 1 && puVar7 < (uint *)((int)puVar8 + iVar11)) {
              do {
                puVar30 = (uint *)((int)puVar8 + 4);
                *(uint *)puVar8 = *puVar7;
                if (puVar24 == (undefined8 *)0x1) break;
                puVar24 = (undefined8 *)((int)puVar24 + -2);
                puVar8 = puVar8 + 1;
                *puVar30 = *puVar7;
              } while (puVar24 != (undefined8 *)0x0);
            }
            else {
              puVar6 = (undefined8 *)((uint)puVar24 >> 2);
              puVar20 = (undefined8 *)0x0;
              puVar25 = (undefined8 *)((uint)puVar24 & 0xfffffffc);
              puVar37 = puVar8;
              do {
                puVar20 = (undefined8 *)((int)puVar20 + 1);
                uVar39 = CONCAT44(*puVar7,*puVar7);
                *puVar37 = uVar39;
                puVar37[1] = uVar39;
                puVar37 = puVar37 + 2;
              } while (puVar20 < puVar6);
              if (((puVar24 != puVar25) &&
                  (*(uint *)((int)puVar8 + (int)puVar25 * 4) = *puVar7,
                  (int)puVar24 - (int)puVar25 != 1)) &&
                 (*(uint *)((int)puVar8 + (int)puVar25 * 4 + 4) = *puVar7,
                 (int)puVar24 - (int)puVar25 != 2)) {
                *(uint *)((int)puVar8 + (int)puVar25 * 4 + 8) = *puVar7;
              }
            }
          }
        }
        puVar8 = local_80;
      } while (local_80 != (undefined8 *)0x0);
      break;
    case 9:
      local_74 = (undefined8 *)0x0;
      iVar18 = (uVar4 >> 0x17) * 0x30;
      puVar8 = local_80;
      do {
        uVar4 = (uint)local_78 >> 0x17;
        iVar23 = param_1[1];
        puVar33 = (uint *)(iVar23 + iVar18);
        puVar30 = (uint *)(iVar23 + uVar4 * 0x30);
        uVar3 = *(uint *)(iVar23 + uVar4 * 0x30);
        uVar34 = (uint)local_78 & uVar3;
        cVar12 = *(char *)(puVar33 + 0xb);
        if (uVar3 < uVar34 + (int)puVar8 * -4) {
          puVar24 = (undefined8 *)((uVar34 >> 2) + 1);
          local_80 = (undefined8 *)((int)puVar8 - (int)puVar24);
        }
        else {
          local_80 = (undefined8 *)0x0;
          puVar24 = puVar8;
        }
        if (cVar12 == '\x01') {
          iVar36 = 0;
          puVar7 = (uint *)(*(code *)puVar33[1])(iVar21,local_7c);
          iVar11 = 2;
LAB_08018b40:
          cVar12 = *(char *)((int)puVar30 + 0x2d);
          if (cVar12 != '\x01') goto LAB_08018b4c;
LAB_08019bac:
          puVar28 = (uint *)(*(code *)puVar30[4])(iVar21,local_78);
        }
        else {
          if (cVar12 != '\0') {
            if (cVar12 == '\x02') {
              puVar7 = (uint *)puVar33[3];
              iVar11 = 3;
              iVar36 = 1;
            }
            else {
              iVar11 = 2;
              iVar36 = 0;
              puVar7 = (uint *)(iVar21 + 0x6b040);
            }
            goto LAB_08018b40;
          }
          iVar11 = 2;
          iVar36 = 0;
          puVar7 = (uint *)(puVar33[1] + ((uint)local_7c & *(uint *)(iVar23 + iVar18)));
          cVar12 = *(char *)((int)puVar30 + 0x2d);
          if (cVar12 == '\x01') goto LAB_08019bac;
LAB_08018b4c:
          if (cVar12 == '\0') {
            puVar28 = (uint *)(puVar30[4] + ((uint)local_78 & *(uint *)(iVar23 + uVar4 * 0x30)));
          }
          else if (cVar12 == '\x02') {
            puVar28 = (uint *)puVar30[6];
            iVar36 = iVar11;
          }
          else {
            puVar28 = (uint *)(iVar21 + 0x8b040);
          }
        }
        iVar23 = (*(code *)puVar30[9])(iVar21,puVar30,local_78);
        puVar6 = (undefined8 *)(*(code *)puVar30[10])(iVar21,puVar30,local_78);
        if (iVar36 == 2) {
          puVar8 = local_78;
          puVar25 = puVar24;
          if (iVar23 != 0) {
            uVar4 = FUN_08009850(iVar23,puVar6,local_78,(int)puVar24 << 2);
            local_74 = (undefined8 *)((uint)local_74 | uVar4);
          }
          do {
            puVar6 = (undefined8 *)(*(code *)puVar28)(iVar21,(uint)puVar8 & *puVar30,*puVar7);
            puVar25 = (undefined8 *)((int)puVar25 - 1);
            puVar8 = (undefined8 *)((int)puVar8 + -4);
          } while (puVar25 != (undefined8 *)0x0);
LAB_08019f28:
          local_78 = (undefined8 *)((int)local_78 + (int)puVar24 * -4);
        }
        else {
          if (iVar36 == 3) {
            puVar8 = puVar24;
            puVar25 = local_78;
            if (iVar23 != 0) {
              uVar4 = FUN_08009850(iVar23,puVar6,local_78,(int)puVar24 << 2);
              local_74 = (undefined8 *)((uint)local_74 | uVar4);
            }
            do {
              uVar9 = (*(code *)puVar7)(iVar21,(uint)local_7c & *puVar33);
              puVar6 = (undefined8 *)(*(code *)puVar28)(iVar21,(uint)puVar25 & *puVar30,uVar9);
              puVar8 = (undefined8 *)((int)puVar8 - 1);
              puVar25 = (undefined8 *)((int)puVar25 + -4);
            } while (puVar8 != (undefined8 *)0x0);
            goto LAB_08019f28;
          }
          if (iVar36 == 1) {
            if (iVar23 != 0) {
              uVar4 = FUN_08009850(iVar23,puVar6,local_78,(int)puVar24 * 4);
              local_74 = (undefined8 *)((uint)local_74 | uVar4);
            }
            local_78 = (undefined8 *)((int)local_78 + (int)puVar24 * -4);
            do {
              puVar6 = (undefined8 *)(*(code *)puVar7)(iVar21,(uint)local_7c & *puVar33);
              puVar24 = (undefined8 *)((int)puVar24 - 1);
              *puVar28 = (uint)puVar6;
              puVar28 = puVar28 + -1;
            } while (puVar24 != (undefined8 *)0x0);
          }
          else {
            if (iVar23 != 0) {
              puVar6 = (undefined8 *)FUN_08009850(iVar23,puVar6,local_78,(int)puVar24 * 4);
              local_74 = (undefined8 *)((uint)local_74 | (uint)puVar6);
            }
            local_78 = (undefined8 *)((int)local_78 + (int)puVar24 * -4);
            do {
              puVar24 = (undefined8 *)((int)puVar24 - 1);
              *puVar28 = *puVar7;
              puVar28 = puVar28 + -1;
            } while (puVar24 != (undefined8 *)0x0);
          }
        }
        puVar8 = local_80;
      } while (local_80 != (undefined8 *)0x0);
      break;
    case 10:
      iVar36 = param_1[1];
      iVar18 = (uVar4 >> 0x17) * 0x30;
      puVar33 = (uint *)(iVar36 + iVar18);
      iVar23 = (uVar34 >> 0x17) * 0x30;
      puVar30 = (uint *)(iVar36 + iVar23);
      cVar12 = *(char *)(puVar33 + 0xb);
      if (cVar12 == '\x01') {
        iVar11 = 0;
        puVar7 = (uint *)(*(code *)puVar33[1])(iVar21,local_7c);
        iVar16 = 2;
      }
      else if (cVar12 == '\0') {
        iVar16 = 2;
        iVar11 = 0;
        puVar7 = (uint *)(puVar33[1] + ((uint)local_7c & *(uint *)(iVar36 + iVar18)));
      }
      else if (cVar12 == '\x02') {
        puVar7 = (uint *)puVar33[3];
        iVar16 = 3;
        iVar11 = 1;
      }
      else {
        iVar16 = 2;
        puVar7 = (uint *)(iVar21 + 0x6b040);
        iVar11 = 0;
      }
      cVar12 = *(char *)((int)puVar30 + 0x2d);
      if (cVar12 == '\x01') {
        puVar28 = (uint *)(*(code *)puVar30[4])(iVar21,local_78);
      }
      else if (cVar12 == '\0') {
        puVar28 = (uint *)(puVar30[4] + ((uint)local_78 & *(uint *)(iVar36 + iVar23)));
      }
      else if (cVar12 == '\x02') {
        puVar28 = (uint *)puVar30[6];
        iVar11 = iVar16;
      }
      else {
        puVar28 = (uint *)(iVar21 + 0x8b040);
      }
      local_74 = (undefined8 *)(*(code *)puVar30[9])(iVar21,puVar30,local_78);
      puVar6 = (undefined8 *)(*(code *)puVar30[10])(iVar21,puVar30,local_78);
      if (iVar11 == 2) {
        if (local_74 != (undefined8 *)0x0) {
          local_74 = (undefined8 *)FUN_08009850(local_74,puVar6,local_78,(int)local_80 << 2);
        }
        do {
          puVar6 = (undefined8 *)(*(code *)puVar28)(iVar21,(uint)local_78 & *puVar30,*puVar7);
          local_80 = (undefined8 *)((int)local_80 - 1);
        } while (local_80 != (undefined8 *)0x0);
      }
      else if (iVar11 == 3) {
        if (local_74 != (undefined8 *)0x0) {
          local_74 = (undefined8 *)FUN_08009850(local_74,puVar6,local_78,(int)local_80 << 2);
        }
        do {
          uVar9 = (*(code *)puVar7)(iVar21,(uint)local_7c & *puVar33);
          puVar6 = (undefined8 *)(*(code *)puVar28)(iVar21,(uint)local_78 & *puVar30,uVar9);
          local_80 = (undefined8 *)((int)local_80 - 1);
        } while (local_80 != (undefined8 *)0x0);
      }
      else if (iVar11 == 1) {
        if (local_74 != (undefined8 *)0x0) {
          local_74 = (undefined8 *)FUN_08009850(local_74,puVar6,local_78,(int)local_80 << 2);
        }
        do {
          puVar6 = (undefined8 *)(*(code *)puVar7)(iVar21,(uint)local_7c & *puVar33);
          local_80 = (undefined8 *)((int)local_80 - 1);
          *puVar28 = (uint)puVar6;
        } while (local_80 != (undefined8 *)0x0);
      }
      else {
        if (local_74 != (undefined8 *)0x0) {
          puVar6 = (undefined8 *)FUN_08009850(local_74,puVar6,local_78,(int)local_80 << 2);
          local_74 = puVar6;
        }
        do {
          local_80 = (undefined8 *)((int)local_80 - 1);
          *puVar28 = *puVar7;
        } while (local_80 != (undefined8 *)0x0);
      }
      break;
    default:
      local_74 = (undefined8 *)0x0;
      puVar6 = local_7c;
    }
  }
LAB_08016c9c:
  local_54 = local_64 >> 0x15;
  if ((*(char *)(iVar22 + 0x2104) == '\x01') && (uVar19 != 0)) {
    if (*(char *)((int)param_2 + 0x1e) != '\0') {
      FUN_080153f4(iVar17 + 0x18,*(byte *)((int)param_2 + 0x1d) + 0xc);
    }
    *(undefined *)((int)param_2 + 0x1e) = 1;
    uVar19 = (uVar26 - *(int *)(iVar17 + 8)) + uVar19;
    puVar6 = (undefined8 *)FUN_08015360(iVar17 + 0x18,uVar19,*(byte *)((int)param_2 + 0x1d) + 0xc);
    if (uVar19 < *(uint *)(iVar17 + 0x10)) {
      *(uint *)(iVar22 + 0x237c) = *(uint *)(iVar22 + 0x237c) | 4;
    }
  }
  else {
    if ((local_64 & 0x2000000) == 0) {
      local_64 = local_64 & 0x7fffffff;
      local_54 = local_64 >> 0x15;
      param_2[6] = local_64;
      *(uint *)(param_2[3] + 8) = local_64;
    }
    if ((local_64 & 0x40000000) != 0) {
      iVar18 = *(int *)(param_2[2] + 0x2080);
      uVar4 = *(uint *)(iVar18 + 0x214) | 0x100 << *(sbyte *)((int)param_2 + 0x1d);
      *(uint *)(iVar18 + 0x214) = uVar4;
      iVar17 = param_2[2];
      puVar6 = (undefined8 *)(uint)*(byte *)(iVar17 + 0x2105);
      if ((*(byte *)(iVar17 + 0x2105) & 6) == 0) {
        puVar6 = (undefined8 *)0x2100;
        uVar4 = -*(int *)(iVar18 + 0x208) & *(uint *)(iVar18 + 0x210) & uVar4;
        *(uint *)(iVar17 + 0x2100) = uVar4;
      }
      else {
        uVar4 = *(uint *)(iVar17 + 0x2100);
      }
      if (uVar4 != 0) {
        *(uint *)(iVar17 + 0x237c) = *(uint *)(iVar17 + 0x237c) | 2;
      }
    }
  }
  if ((local_54 & 3) != 3) {
    param_2[5] = (int)local_78;
  }
  if (local_74 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)0x0;
  }
  param_2[4] = (int)local_7c;
  if (local_74 != (undefined8 *)0x0) {
    *(uint *)(param_2[2] + 0x237c) = *(uint *)(param_2[2] + 0x237c) | 1;
    printf("DMA modified code (%x for %x).\n",local_78,local_64 & 0x1fffff);
    return local_74;
  }
  return puVar6;
}


