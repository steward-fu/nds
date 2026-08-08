/*
 * Ghidra decompilation
 *
 * Function : Lzma2Dec_DecodeToDic
 * Address  : 001b2260
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Lzma2Dec_DecodeToDic
               (uint *param_1,long param_2,byte *param_3,long *param_4,int param_5,int *param_6)

{
  byte bVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  byte *pbVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  ulong local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar13 = *param_4;
  *param_4 = 0;
  *param_6 = 0;
  uVar5 = param_1[0x24];
  if (uVar5 != 8) {
    lVar6 = *(long *)(param_1 + 0xc);
    do {
      lVar12 = lVar6;
      if (uVar5 == 9) {
LAB_001b2724:
        uVar3 = 1;
        goto LAB_001b24b8;
      }
LAB_001b22d0:
      if (param_5 == 0 && param_2 == lVar12) {
        uVar3 = 0;
        *param_6 = 2;
        goto LAB_001b24b8;
      }
      lVar6 = *param_4;
      if (1 < uVar5 - 6) {
        if (lVar13 == lVar6) goto LAB_001b24a8;
        *param_4 = lVar6 + 1;
        pbVar11 = param_3 + 1;
        bVar1 = *param_3;
        uVar4 = (uint)bVar1;
        param_3 = pbVar11;
        if (uVar5 == 3) {
          uVar5 = 4;
          param_1[0x22] = uVar4 << 8;
          param_1[0x24] = 4;
          lVar12 = *(long *)(param_1 + 0xc);
          goto LAB_001b22d0;
        }
        if ((int)uVar5 < 4) {
          if (uVar5 == 1) {
            lVar12 = *(long *)(param_1 + 0xc);
            uVar5 = 2;
            param_1[0x23] = param_1[0x23] | uVar4 << 8;
            param_1[0x24] = 2;
            goto LAB_001b22d0;
          }
          if (uVar5 == 2) {
            param_1[0x23] = (uVar4 | param_1[0x23]) + 1;
            if (*(char *)(param_1 + 0x25) < '\0') {
              uVar5 = 3;
              param_1[0x24] = 3;
              lVar12 = *(long *)(param_1 + 0xc);
            }
            else {
LAB_001b2334:
              uVar5 = 6;
              param_1[0x24] = 6;
              lVar12 = *(long *)(param_1 + 0xc);
            }
            goto LAB_001b22d0;
          }
          if (uVar5 == 0) {
            *(byte *)(param_1 + 0x25) = bVar1;
            if (uVar4 == 0) {
              param_1[0x24] = 8;
              break;
            }
            if ((char)bVar1 < '\0') {
              uVar5 = 1;
              param_1[0x23] = (uVar4 & 0x1f) << 0x10;
              param_1[0x24] = 1;
              lVar12 = *(long *)(param_1 + 0xc);
              goto LAB_001b22d0;
            }
            if (uVar4 < 3) {
              uVar5 = 1;
              *(undefined8 *)(param_1 + 0x23) = 0x100000000;
              lVar12 = *(long *)(param_1 + 0xc);
              goto LAB_001b22d0;
            }
          }
        }
        else {
          if (uVar5 == 4) {
            param_1[0x22] = (uVar4 | param_1[0x22]) + 1;
            if ((*(byte *)(param_1 + 0x25) >> 6 & 1) == 0) {
              if (param_1[0x28] == 0) goto LAB_001b2334;
              goto LAB_001b2530;
            }
            uVar5 = 5;
            param_1[0x24] = 5;
            lVar12 = *(long *)(param_1 + 0xc);
            goto LAB_001b22d0;
          }
          if ((uVar5 == 5) && (uVar5 = (uint)bVar1, uVar5 < 0xe1)) {
            uVar9 = (ulong)uVar5 / 9;
            uVar2 = uVar5 - (uVar5 / 9 + (uVar5 / 9) * 8);
            param_1[2] = (uint)(uVar9 / 5);
            uVar4 = uVar5 / 9 -
                    ((int)(uVar9 / 5) + ((uint)(uVar9 * 0xcccccccd >> 0x20) & 0xfffffffc)) & 0xff;
            if (4 < uVar4 + (uVar2 & 0xff)) goto LAB_001b2530;
            uVar5 = 6;
            *param_1 = uVar2 & 0xff;
            param_1[1] = uVar4;
            param_1[0x24] = 6;
            param_1[0x28] = 0;
            lVar12 = *(long *)(param_1 + 0xc);
            goto LAB_001b22d0;
          }
        }
LAB_001b2530:
        uVar3 = 1;
        param_1[0x24] = 9;
        goto LAB_001b24b8;
      }
      uVar7 = (ulong)param_1[0x23];
      local_10 = lVar13 - lVar6;
      uVar10 = param_2 - lVar12;
      uVar9 = uVar10;
      if (uVar7 <= uVar10) {
        uVar9 = uVar7;
      }
      bVar1 = *(byte *)(param_1 + 0x25);
      if (-1 < *(char *)(param_1 + 0x25)) {
        if (lVar13 == lVar6) {
LAB_001b24a8:
          uVar3 = 0;
          *param_6 = 3;
          goto LAB_001b24b8;
        }
        if (uVar5 == 6) {
          if (bVar1 == 1) {
            *(undefined8 *)(param_1 + 0x27) = 0x100000001;
          }
          else if (param_1[0x26] != 0) goto LAB_001b2724;
          param_1[0x26] = 0;
          LzmaDec_InitDicAndState(param_1,bVar1 == 1,0);
        }
        if (uVar9 < local_10) {
          local_10 = uVar9;
        }
        uVar9 = local_10;
        if (local_10 == 0) goto LAB_001b2724;
        memcpy((void *)(*(long *)(param_1 + 6) + *(long *)(param_1 + 0xc)),param_3,local_10);
        *(ulong *)(param_1 + 0xc) = *(long *)(param_1 + 0xc) + uVar9;
        if (param_1[0x11] == 0) {
          uVar5 = param_1[0x10];
          if (param_1[3] - uVar5 <= uVar9) {
            param_1[0x11] = param_1[3];
          }
        }
        else {
          uVar5 = param_1[0x10];
        }
        lVar6 = *param_4;
        param_1[0x10] = uVar5 + (int)uVar9;
        uVar5 = param_1[0x23];
        *param_4 = lVar6 + local_10;
        uVar5 = uVar5 - (int)local_10;
        param_1[0x23] = uVar5;
        param_3 = param_3 + local_10;
        if (uVar5 == 0) {
          param_1[0x24] = 0;
          lVar12 = *(long *)(param_1 + 0xc);
          uVar5 = 0;
        }
        else {
          uVar5 = 7;
          param_1[0x24] = 7;
          lVar12 = *(long *)(param_1 + 0xc);
        }
        goto LAB_001b22d0;
      }
      if (uVar5 == 6) {
        bVar1 = bVar1 >> 5;
        if (((bVar1 & 3) != 3) &&
           ((param_1[0x26] != 0 || (((bVar1 & 3) == 0 && (param_1[0x27] != 0))))))
        goto LAB_001b2724;
        LzmaDec_InitDicAndState(param_1,(bVar1 & 3) == 3,(bVar1 & 3) != 0);
        param_1[0x24] = 7;
        *(undefined8 *)(param_1 + 0x26) = 0;
      }
      if (param_1[0x22] < local_10) {
        local_10 = (ulong)param_1[0x22];
      }
      uVar3 = LzmaDec_DecodeToDic(param_1,uVar9 + lVar12,param_3,&local_10,uVar7 <= uVar10,param_6);
      uVar14 = *(undefined8 *)(param_1 + 0x22);
      *param_4 = *param_4 + local_10;
      param_3 = param_3 + local_10;
      lVar6 = *(long *)(param_1 + 0xc);
      lVar12 = lVar6 - lVar12;
      *(ulong *)(param_1 + 0x22) =
           CONCAT44((int)((ulong)uVar14 >> 0x20) - (int)lVar12,(int)uVar14 - (int)local_10);
      if (((int)uVar3 != 0) || (iVar8 = *param_6, iVar8 == 3)) goto LAB_001b24b8;
      if (CONCAT17((byte)(local_10 >> 0x38) | (byte)((ulong)lVar12 >> 0x38),
                   CONCAT16((byte)(local_10 >> 0x30) | (byte)((ulong)lVar12 >> 0x30),
                            CONCAT15((byte)(local_10 >> 0x28) | (byte)((ulong)lVar12 >> 0x28),
                                     CONCAT14((byte)(local_10 >> 0x20) |
                                              (byte)((ulong)lVar12 >> 0x20),
                                              CONCAT13((byte)(local_10 >> 0x18) |
                                                       (byte)((ulong)lVar12 >> 0x18),
                                                       CONCAT12((byte)(local_10 >> 0x10) |
                                                                (byte)((ulong)lVar12 >> 0x10),
                                                                CONCAT11((byte)(local_10 >> 8) |
                                                                         (byte)((ulong)lVar12 >> 8),
                                                                         (byte)local_10 |
                                                                         (byte)lVar12))))))) == 0) {
        if ((iVar8 != 4) || (*(long *)(param_1 + 0x22) != 0)) goto LAB_001b2724;
        param_1[0x24] = 0;
        iVar8 = *param_6;
      }
      if (iVar8 == 4) {
        *param_6 = 2;
      }
      uVar5 = param_1[0x24];
    } while (uVar5 != 8);
  }
  uVar3 = 0;
  *param_6 = 1;
LAB_001b24b8:
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3,local_8 - ___stack_chk_guard,0);
  }
  return;
}


