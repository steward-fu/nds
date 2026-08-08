/*
 * Ghidra decompilation
 *
 * Function : SzFolder_Decode
 * Address  : 001ea4c0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int SzFolder_Decode(long **param_1,ulong *param_2,code **param_3,long param_4,ulong param_5,
                   ulong param_6,code **param_7)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  ulong local_138;
  ulong local_130;
  int local_10c;
  undefined8 local_108;
  ulong local_100;
  ulong local_f8 [5];
  ulong local_d0 [4];
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  ulong local_98;
  ulong local_80;
  ulong local_78;
  long local_8;
  ulong *puVar9;
  
  local_8 = ___stack_chk_guard;
  iVar4 = *(int *)(param_1 + 4);
  local_f8[3] = 0;
  local_f8[2] = 0;
  local_f8[1] = 0;
  local_d0[1] = 0;
  local_d0[0] = 0;
  if (((3 < iVar4 - 1U) || (plVar13 = *param_1, *plVar13 != 0x100000001)) ||
     (uVar7 = plVar13[1], 0xffffffff < uVar7)) goto LAB_001ea54c;
  if (((uVar7 != 0x21) && ((int)uVar7 != 0x30101)) && ((int)uVar7 != 0)) goto LAB_001ea5d8;
  if (iVar4 == 1) {
    if (((*(int *)(param_1 + 5) == 1) && (*(int *)param_1[2] == 0)) &&
       (uVar2 = 1, *(int *)((long)param_1 + 0x24) == 0)) {
LAB_001ea634:
      uVar5 = 0;
      local_138 = 0;
      local_130 = 0;
      do {
        uVar1 = local_f8[1];
        iVar4 = (int)uVar7;
        uVar12 = (uint)uVar5;
        if (((iVar4 == 0x21) || (iVar4 == 0x30101)) || (iVar4 == 0)) {
          lVar14 = param_4;
          uVar7 = param_5;
          puVar8 = param_2;
          uVar10 = param_6;
          if (uVar2 == 4) {
            uVar10 = param_1[3][uVar5];
            local_a8 = 0;
            local_b0 = 0x200000003;
            uVar2 = *(uint *)((long)&local_b0 + uVar5 * 4);
            if (uVar12 < 2) {
              uVar7 = (**param_7)(param_7,uVar10);
              if (uVar7 == 0 && uVar10 != 0) goto LAB_001eadb4;
              local_f8[(ulong)(1 - uVar12) + 1] = uVar7;
              local_d0[1 - uVar12] = uVar10;
            }
            else {
              if (uVar12 != 2) goto LAB_001ea5d8;
              if (param_6 < uVar10) {
                iVar4 = 5;
                goto LAB_001ea550;
              }
              uVar7 = param_5 + (param_6 - uVar10);
              local_138 = uVar7;
              local_130 = uVar10;
            }
            if (uVar2 != 0) {
              if (uVar2 - 1 < 4) {
                lVar14 = 0;
                uVar3 = 0;
LAB_001ea784:
                lVar14 = lVar14 + param_2[uVar3];
                if (uVar3 + 1 < uVar2) {
                  lVar14 = lVar14 + param_2[uVar3 + 1];
                  if (uVar3 + 2 < uVar2) {
                    lVar14 = lVar14 + param_2[uVar3 + 2];
                    if (uVar3 + 3 < uVar2) {
                      lVar14 = lVar14 + param_2[uVar3 + 3];
                    }
                  }
                }
              }
              else {
                lVar14 = 0;
                lVar15 = 0;
                do {
                  puVar9 = puVar8 + 2;
                  lVar14 = lVar14 + *puVar8;
                  lVar15 = lVar15 + puVar8[1];
                  puVar8 = puVar9;
                } while (puVar9 != param_2 + (ulong)((uVar2 >> 1) - 1) * 2 + 2);
                lVar14 = lVar14 + lVar15;
                uVar3 = uVar2 & 0xfffffffe;
                if ((uVar2 & 1) != 0) goto LAB_001ea784;
              }
              lVar14 = param_4 + lVar14;
              puVar8 = param_2 + uVar2;
            }
          }
          uVar11 = *puVar8;
          iVar4 = LookInStream_SeekTo(param_3,lVar14);
          if (iVar4 != 0) goto LAB_001ea550;
          lVar14 = plVar13[uVar5 * 4 + 1];
          if (lVar14 != 0) {
            if (lVar14 == 0x30101) {
              local_a0 = 0;
              local_98 = 0;
              iVar4 = LzmaDec_AllocateProbs
                                (&local_b0,plVar13[uVar5 * 4 + 2],plVar13[uVar5 * 4 + 3],param_7);
              if (iVar4 != 0) goto LAB_001ea550;
              local_98 = uVar7;
              local_78 = uVar10;
              LzmaDec_Init(&local_b0);
              while( true ) {
                local_100 = 0x40000;
                if (uVar11 < 0x40000) {
                  local_100 = uVar11;
                }
                local_108 = 0;
                iVar4 = (**param_3)(param_3,&local_108,&local_100);
                uVar7 = local_80;
                if (iVar4 != 0) goto LAB_001eac04;
                local_f8[0] = local_100;
                iVar4 = LzmaDec_DecodeToDic(&local_b0,uVar10,local_108,local_f8,1,&local_10c);
                local_100 = local_100 - local_f8[0];
                uVar11 = uVar11 - local_f8[0];
                if (iVar4 != 0) goto LAB_001eac04;
                if ((local_80 == local_78) || (local_f8[0] == 0 && uVar7 == local_80)) break;
                iVar4 = (*param_3[1])(param_3);
                if (iVar4 != 0) goto LAB_001eac04;
              }
              if ((local_100 == 0 && local_78 == uVar10) && (local_10c == 1 || local_10c == 4)) {
LAB_001ead9c:
                LzmaDec_FreeProbs(&local_b0,param_7);
                goto LAB_001ea6a0;
              }
            }
            else {
              if (lVar14 != 0x21) goto LAB_001ea54c;
              local_a0 = 0;
              local_98 = 0;
              if (plVar13[uVar5 * 4 + 3] != 1) goto LAB_001eaa50;
              iVar4 = Lzma2Dec_AllocateProbs(&local_b0,*(undefined *)plVar13[uVar5 * 4 + 2],param_7)
              ;
              if (iVar4 != 0) goto LAB_001ea550;
              local_98 = uVar7;
              local_78 = uVar10;
              Lzma2Dec_Init(&local_b0);
              while( true ) {
                local_100 = 0x40000;
                if (uVar11 < 0x40000) {
                  local_100 = uVar11;
                }
                local_108 = 0;
                iVar4 = (**param_3)(param_3,&local_108,&local_100);
                uVar7 = local_80;
                if (iVar4 != 0) goto LAB_001eac04;
                local_f8[0] = local_100;
                iVar4 = Lzma2Dec_DecodeToDic(&local_b0,uVar10,local_108,local_f8,1,&local_10c);
                local_100 = local_100 - local_f8[0];
                uVar11 = uVar11 - local_f8[0];
                if (iVar4 != 0) goto LAB_001eac04;
                if ((local_80 == local_78) || (local_f8[0] == 0 && uVar7 == local_80)) break;
                iVar4 = (*param_3[1])(param_3);
                if (iVar4 != 0) goto LAB_001eac04;
              }
              if ((local_100 == 0 && local_78 == uVar10) && (local_10c == 1)) goto LAB_001ead9c;
            }
            iVar4 = 1;
            LzmaDec_FreeProbs(&local_b0,param_7);
            goto LAB_001ea550;
          }
          if (uVar11 != uVar10) {
LAB_001eaa50:
            iVar4 = 1;
            goto LAB_001ea550;
          }
          iVar4 = SzDecodeCopy(uVar10,param_3,uVar7);
joined_r0x001eaa1c:
          if (iVar4 != 0) goto LAB_001ea550;
        }
        else {
          if (uVar7 == 0x303011b) {
            if (uVar12 == 3) {
              uVar7 = param_2[1];
              iVar4 = LookInStream_SeekTo(param_3,param_4 + *param_2);
              if (iVar4 == 0) {
                lVar14 = (**param_7)(param_7,uVar7);
                local_f8[3] = lVar14;
                if (uVar7 == 0 || lVar14 != 0) {
                  iVar4 = SzDecodeCopy(uVar7,param_3,lVar14);
                  if (iVar4 == 0) {
                    iVar4 = Bcj2_Decode(local_138,local_130,uVar1,local_d0[0],local_f8[2],
                                        local_d0[1],lVar14,uVar7,param_5,param_6);
                    goto joined_r0x001eaa1c;
                  }
                }
                else {
LAB_001eadb4:
                  iVar4 = 2;
                }
              }
              goto LAB_001ea550;
            }
            goto LAB_001ea54c;
          }
          if (uVar12 != 1) goto LAB_001ea54c;
          if (uVar7 == 0x3030103) {
            local_f8[0] = local_f8[0] & 0xffffffff00000000;
            x86_Convert(param_5,param_6,0,local_f8,0);
          }
          else {
            if (uVar7 != 0x3030501) goto LAB_001ea5d8;
            ARM_Convert(param_5,param_6,0,0);
          }
        }
LAB_001ea6a0:
        uVar2 = *(uint *)(param_1 + 4);
        uVar5 = (ulong)(uVar12 + 1);
        if (uVar2 <= uVar12 + 1) goto LAB_001ead18;
        plVar13 = *param_1;
        uVar7 = plVar13[uVar5 * 4 + 1];
      } while( true );
    }
  }
  else if (iVar4 == 2) {
    uVar5 = plVar13[5];
    if ((((((uVar5 < 0x100000000) && (plVar13[4] == 0x100000001)) && (*(int *)(param_1 + 5) == 1))
         && ((*(int *)param_1[2] == 0 && (*(int *)((long)param_1 + 0x24) == 1)))) &&
        (*(int *)param_1[1] == 1)) && (*(int *)((long)param_1[1] + 4) == 0)) {
      uVar2 = 2;
      if ((uVar5 == 0x3030103) || ((int)uVar5 == 0x3030501)) goto LAB_001ea634;
      goto LAB_001ea5d8;
    }
  }
  else if (iVar4 == 4) {
    if ((plVar13[4] == 0x100000001) && (uVar5 = plVar13[5], uVar5 < 0x100000000)) {
      if ((uVar5 == 0x21) || (((int)uVar5 == 0x30101 || ((int)uVar5 == 0)))) {
        if ((plVar13[8] != 0x100000001) || (uVar5 = plVar13[9], 0xffffffff < uVar5))
        goto LAB_001ea54c;
        if (((uVar5 == 0x21) || ((int)uVar5 == 0x30101)) || ((int)uVar5 == 0)) {
          if (((((plVar13[0xd] == 0x303011b) && (plVar13[0xc] == 0x100000004)) &&
               ((*(int *)(param_1 + 5) == 4 &&
                ((plVar6 = param_1[2], *(int *)plVar6 == 2 && (*(int *)((long)plVar6 + 4) == 6))))))
              && (*(int *)(plVar6 + 1) == 1)) &&
             (((((*(int *)((long)plVar6 + 0xc) == 0 && (*(int *)((long)param_1 + 0x24) == 3)) &&
                (plVar6 = param_1[1], *(int *)plVar6 == 5)) &&
               ((*(int *)((long)plVar6 + 4) == 0 && (*(int *)(plVar6 + 1) == 4)))) &&
              ((*(int *)((long)plVar6 + 0xc) == 1 &&
               ((*(int *)(plVar6 + 2) == 3 && (*(int *)((long)plVar6 + 0x14) == 2)))))))) {
            uVar2 = 4;
            goto LAB_001ea634;
          }
          goto LAB_001ea600;
        }
      }
LAB_001ea5d8:
      iVar4 = 4;
    }
    else {
LAB_001ea54c:
      iVar4 = 4;
    }
    goto LAB_001ea550;
  }
LAB_001ea600:
  iVar4 = 4;
LAB_001ea550:
  lVar14 = 1;
  do {
    lVar15 = lVar14 + 1;
    (*param_7[1])(param_7,local_f8[lVar14]);
    lVar14 = lVar15;
  } while (lVar15 != 4);
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_8 - ___stack_chk_guard,0);
  }
  return iVar4;
LAB_001eac04:
  LzmaDec_FreeProbs(&local_b0,param_7);
  goto LAB_001ea550;
LAB_001ead18:
  iVar4 = 0;
  goto LAB_001ea550;
}


