/*
 * Ghidra decompilation
 *
 * Function : Lzma2Dec_DecodeToBuf
 * Address  : 001b2780
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int Lzma2Dec_DecodeToBuf
              (uint *param_1,void *param_2,ulong *param_3,byte *param_4,ulong *param_5,int param_6,
              int *param_7)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  byte *__src;
  byte *pbVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  size_t sVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  byte *local_50;
  int local_44;
  ulong local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar13 = *param_5;
  uVar14 = *param_3;
  *param_3 = 0;
  *param_5 = 0;
  local_50 = param_4;
  do {
    uVar15 = *(ulong *)(param_1 + 0xc);
    uVar18 = *(ulong *)(param_1 + 0xe);
    uVar12 = uVar18 - uVar15;
    uVar16 = uVar15;
    if (uVar15 == uVar18) {
      uVar16 = 0;
      *(undefined8 *)(param_1 + 0xc) = 0;
      uVar12 = uVar15;
    }
    local_44 = 0;
    if (uVar14 <= uVar12) {
      uVar18 = uVar14 + uVar16;
      local_44 = param_6;
    }
    *param_7 = 0;
    uVar5 = param_1[0x24];
    if (uVar5 == 8) {
      uVar15 = 0;
      uVar12 = uVar13;
LAB_001b2d88:
      iVar2 = 0;
      lVar3 = *(long *)(param_1 + 6);
      *param_7 = 1;
    }
    else {
      uVar20 = 0;
      pbVar9 = local_50;
      uVar11 = uVar16;
LAB_001b28a8:
      uVar15 = uVar20;
      if (uVar5 != 9) {
LAB_001b28b4:
        __src = pbVar9;
        uVar10 = uVar11;
        uVar15 = uVar20;
        if (local_44 == 0 && uVar18 == uVar11) {
LAB_001b29a0:
          uVar12 = uVar13 - uVar20;
          iVar2 = 0;
          local_50 = local_50 + uVar20;
          *param_7 = 2;
          lVar3 = *(long *)(param_1 + 6);
          uVar15 = uVar20;
          goto LAB_001b2808;
        }
        while (uVar5 - 6 < 2) {
          uVar7 = (ulong)param_1[0x23];
          uVar12 = uVar13 - uVar15;
          uVar8 = uVar18 - uVar10;
          uVar11 = uVar8;
          if (uVar7 <= uVar8) {
            uVar11 = uVar7;
          }
          bVar1 = *(byte *)(param_1 + 0x25);
          uVar20 = uVar15;
          local_10 = uVar12;
          if (*(char *)(param_1 + 0x25) < '\0') {
            if (uVar5 == 6) {
              bVar1 = bVar1 >> 5 & 3;
              if ((bVar1 == 3) || ((param_1[0x26] == 0 && ((bVar1 != 0 || (param_1[0x27] == 0))))))
              {
                LzmaDec_InitDicAndState(param_1,bVar1 == 3,bVar1 != 0);
                param_1[0x24] = 7;
                *(undefined8 *)(param_1 + 0x26) = 0;
                goto LAB_001b2b14;
              }
LAB_001b2dc0:
              iVar2 = 1;
              lVar3 = *(long *)(param_1 + 6);
              uVar20 = uVar15;
            }
            else {
LAB_001b2b14:
              if (param_1[0x22] < local_10) {
                local_10 = (ulong)param_1[0x22];
              }
              iVar2 = LzmaDec_DecodeToDic(param_1,uVar11 + uVar10,__src,&local_10,uVar7 <= uVar8,
                                          param_7);
              uVar11 = *(ulong *)(param_1 + 0xc);
              lVar3 = uVar11 - uVar10;
              pbVar9 = __src + local_10;
              uVar20 = local_10 + uVar15;
              *(ulong *)(param_1 + 0x22) =
                   CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0x22) >> 0x20) - (int)lVar3,
                            (int)*(undefined8 *)(param_1 + 0x22) - (int)local_10);
              if ((iVar2 == 0) && (iVar6 = *param_7, iVar6 != 3)) {
                if (CONCAT17((byte)(local_10 >> 0x38) | (byte)((ulong)lVar3 >> 0x38),
                             CONCAT16((byte)(local_10 >> 0x30) | (byte)((ulong)lVar3 >> 0x30),
                                      CONCAT15((byte)(local_10 >> 0x28) |
                                               (byte)((ulong)lVar3 >> 0x28),
                                               CONCAT14((byte)(local_10 >> 0x20) |
                                                        (byte)((ulong)lVar3 >> 0x20),
                                                        CONCAT13((byte)(local_10 >> 0x18) |
                                                                 (byte)((ulong)lVar3 >> 0x18),
                                                                 CONCAT12((byte)(local_10 >> 0x10) |
                                                                          (byte)((ulong)lVar3 >>
                                                                                0x10),
                                                                          CONCAT11((byte)(local_10 
                                                  >> 8) | (byte)((ulong)lVar3 >> 8),
                                                  (byte)local_10 | (byte)lVar3))))))) == 0) {
                  if ((iVar6 != 4) || (*(long *)(param_1 + 0x22) != 0)) goto LAB_001b2dc0;
                  param_1[0x24] = 0;
                  iVar6 = *param_7;
                }
                if (iVar6 == 4) {
                  *param_7 = 2;
                }
                uVar5 = param_1[0x24];
                if (uVar5 == 8) goto LAB_001b2d74;
                goto LAB_001b28a8;
              }
              lVar3 = *(long *)(param_1 + 6);
              uVar12 = uVar13 - uVar20;
            }
LAB_001b2db0:
            local_50 = local_50 + uVar20;
            uVar15 = uVar20;
            goto LAB_001b2808;
          }
          if (uVar13 == uVar15) {
            iVar2 = 0;
            *param_7 = 3;
            lVar3 = *(long *)(param_1 + 6);
            goto LAB_001b2db0;
          }
          if (uVar5 == 6) {
            if (bVar1 == 1) {
              *(undefined8 *)(param_1 + 0x27) = 0x100000001;
            }
            else if (param_1[0x26] != 0) goto LAB_001b2dc0;
            param_1[0x26] = 0;
            LzmaDec_InitDicAndState(param_1,bVar1 == 1,0);
          }
          if (uVar11 < local_10) {
            local_10 = uVar11;
          }
          sVar17 = local_10;
          lVar3 = *(long *)(param_1 + 6);
          if (local_10 == 0) {
            iVar2 = 1;
            goto LAB_001b2db0;
          }
          memcpy((void *)(lVar3 + *(long *)(param_1 + 0xc)),__src,local_10);
          *(size_t *)(param_1 + 0xc) = *(long *)(param_1 + 0xc) + sVar17;
          if (param_1[0x11] == 0) {
            uVar5 = param_1[0x10];
            if (param_1[3] - uVar5 <= sVar17) {
              param_1[0x11] = param_1[3];
            }
          }
          else {
            uVar5 = param_1[0x10];
          }
          param_1[0x10] = uVar5 + (int)sVar17;
          uVar5 = param_1[0x23] - (int)local_10;
          param_1[0x23] = uVar5;
          pbVar9 = __src + local_10;
          uVar20 = uVar15 + local_10;
          if (uVar5 == 0) {
            uVar5 = 0;
            param_1[0x24] = 0;
            uVar11 = *(ulong *)(param_1 + 0xc);
            goto LAB_001b28b4;
          }
          uVar10 = *(ulong *)(param_1 + 0xc);
          param_1[0x24] = 7;
          uVar5 = 7;
          __src = pbVar9;
          uVar15 = uVar20;
          if (local_44 == 0 && uVar18 == uVar10) goto LAB_001b29a0;
        }
        if (uVar13 == uVar15) {
          iVar2 = 0;
          local_50 = local_50 + uVar13;
          *param_7 = 3;
          lVar3 = *(long *)(param_1 + 6);
          uVar12 = 0;
          goto LAB_001b2808;
        }
        pbVar9 = __src + 1;
        bVar1 = *__src;
        uVar20 = uVar15 + 1;
        uVar4 = (uint)bVar1;
        if (uVar5 == 3) {
          uVar5 = 4;
          param_1[0x22] = uVar4 << 8;
          param_1[0x24] = 4;
          uVar11 = *(ulong *)(param_1 + 0xc);
          goto LAB_001b28b4;
        }
        if ((int)uVar5 < 4) {
          if (uVar5 == 1) {
            uVar11 = *(ulong *)(param_1 + 0xc);
            uVar5 = 2;
            param_1[0x23] = param_1[0x23] | uVar4 << 8;
            param_1[0x24] = 2;
            goto LAB_001b28b4;
          }
          if (uVar5 == 2) {
            param_1[0x23] = (uVar4 | param_1[0x23]) + 1;
            if (*(char *)(param_1 + 0x25) < '\0') {
              uVar5 = 3;
              param_1[0x24] = 3;
              uVar11 = *(ulong *)(param_1 + 0xc);
            }
            else {
LAB_001b2a00:
              uVar5 = 6;
              param_1[0x24] = 6;
              uVar11 = *(ulong *)(param_1 + 0xc);
            }
            goto LAB_001b28b4;
          }
          if (uVar5 == 0) {
            *(byte *)(param_1 + 0x25) = bVar1;
            if (uVar4 == 0) {
              param_1[0x24] = 8;
LAB_001b2d74:
              local_50 = local_50 + uVar20;
              uVar12 = uVar13 - uVar20;
              uVar15 = uVar20;
              goto LAB_001b2d88;
            }
            if ((char)bVar1 < '\0') {
              uVar5 = 1;
              param_1[0x23] = (uVar4 & 0x1f) << 0x10;
              param_1[0x24] = 1;
              uVar11 = *(ulong *)(param_1 + 0xc);
            }
            else {
              if (2 < uVar4) goto LAB_001b2ab8;
              uVar5 = 1;
              *(undefined8 *)(param_1 + 0x23) = 0x100000000;
              uVar11 = *(ulong *)(param_1 + 0xc);
            }
            goto LAB_001b28b4;
          }
        }
        else if (uVar5 == 4) {
          param_1[0x22] = (uVar4 | param_1[0x22]) + 1;
          if ((*(byte *)(param_1 + 0x25) >> 6 & 1) != 0) {
            uVar5 = 5;
            param_1[0x24] = 5;
            uVar11 = *(ulong *)(param_1 + 0xc);
            goto LAB_001b28b4;
          }
          if (param_1[0x28] == 0) goto LAB_001b2a00;
        }
        else if ((uVar5 == 5) && (uVar5 = (uint)bVar1, uVar5 < 0xe1)) {
          uVar12 = (ulong)uVar5 / 9;
          uVar4 = uVar5 - (uVar5 / 9 + (uVar5 / 9) * 8);
          param_1[2] = (uint)(uVar12 / 5);
          uVar5 = uVar5 / 9 -
                  ((int)(uVar12 / 5) + ((uint)(uVar12 * 0xcccccccd >> 0x20) & 0xfffffffc)) & 0xff;
          if (4 < uVar5 + (uVar4 & 0xff)) goto LAB_001b2ab8;
          *param_1 = uVar4 & 0xff;
          param_1[1] = uVar5;
          uVar5 = 6;
          param_1[0x24] = 6;
          param_1[0x28] = 0;
          uVar11 = *(ulong *)(param_1 + 0xc);
          goto LAB_001b28b4;
        }
LAB_001b2ab8:
        param_1[0x24] = 9;
        uVar15 = uVar20;
      }
      uVar12 = uVar13 - uVar15;
      iVar2 = 1;
      local_50 = local_50 + uVar15;
      lVar3 = *(long *)(param_1 + 6);
    }
LAB_001b2808:
    *param_5 = *param_5 + uVar15;
    lVar19 = *(long *)(param_1 + 0xc);
    sVar17 = lVar19 - uVar16;
    memcpy(param_2,(void *)(lVar3 + uVar16),sVar17);
    param_2 = (void *)((long)param_2 + sVar17);
    *param_3 = *param_3 + sVar17;
    uVar14 = uVar14 + (uVar16 - lVar19);
    if ((iVar2 != 0) || (uVar13 = uVar12, sVar17 == 0 || uVar14 == 0)) {
      if (local_8 - ___stack_chk_guard == 0) {
        return iVar2;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(&__stack_chk_guard,local_8 - ___stack_chk_guard,0);
    }
  } while( true );
}


