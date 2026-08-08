/*
 * Ghidra decompilation
 *
 * Function : _Z4itoaxPc
 * Address  : 080d2740
 * Program  : drastic
 */


void itoa(int64 n,char *Str)

{
  uint uVar1;
  undefined4 in_r1;
  int iVar2;
  uint uVar3;
  char cVar4;
  char *in_r2;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  char *pcVar13;
  undefined8 in_d18;
  undefined8 in_d19;
  longlong lVar14;
  char acStack_67 [15];
  char NumStr [50];
  int local_24;
  
  lVar14 = CONCAT44(in_r1,Str);
  pcVar13 = acStack_67 + 0xe;
  local_24 = __stack_chk_guard;
  uVar12 = 0;
  do {
    uVar11 = uVar12;
    uVar10 = (undefined4)((ulonglong)lVar14 >> 0x20);
    cVar4 = '\n';
    __aeabi_ldivmod((int)lVar14,uVar10,10,0);
    pcVar13 = pcVar13 + 1;
    *pcVar13 = cVar4 + '0';
    uVar12 = uVar11 + 1;
    lVar14 = __aeabi_ldivmod((int)lVar14,uVar10,10,0);
  } while (lVar14 != 0);
  uVar6 = uVar11 - 0xf & 7;
  if (uVar12 <= uVar6) {
    uVar6 = uVar12;
  }
  uVar1 = uVar12;
  if ((uVar12 < 0x11) || (uVar1 = uVar6, uVar6 != 0)) {
    *in_r2 = NumStr[uVar11];
    uVar6 = uVar1;
    if ((((uVar1 != 1) &&
         (((in_r2[1] = acStack_67[uVar11 + 0xe], uVar1 != 2 &&
           (in_r2[2] = acStack_67[uVar11 + 0xd], uVar1 != 3)) &&
          (in_r2[3] = acStack_67[uVar11 + 0xc], uVar1 != 4)))) &&
        (((in_r2[4] = acStack_67[uVar11 + 0xb], uVar1 != 5 &&
          (in_r2[5] = acStack_67[uVar11 + 10], uVar1 != 6)) &&
         (in_r2[6] = acStack_67[uVar11 + 9], uVar1 != 7)))) &&
       ((in_r2[7] = acStack_67[uVar11 + 8], uVar1 != 8 &&
        (in_r2[8] = acStack_67[uVar11 + 7], uVar1 != 9)))) {
      in_r2[9] = acStack_67[uVar11 + 6];
      if (uVar1 == 10) {
        uVar6 = 10;
      }
      else {
        in_r2[10] = acStack_67[uVar11 + 5];
        if ((((uVar1 != 0xb) && (in_r2[0xb] = acStack_67[uVar11 + 4], uVar1 != 0xc)) &&
            (in_r2[0xc] = acStack_67[uVar11 + 3], uVar1 != 0xd)) &&
           ((in_r2[0xd] = acStack_67[uVar11 + 2], uVar1 != 0xe &&
            (in_r2[0xe] = acStack_67[uVar11 + 1], uVar1 != 0xf)))) {
          in_r2[0xf] = acStack_67[uVar11];
          uVar6 = 0x10;
        }
      }
    }
    if (uVar12 == uVar1) goto LAB_080d2b44;
  }
  iVar2 = ((uVar12 - uVar1) - 0x10 >> 4) + 1;
  if (0xe < uVar11 - uVar1) {
    pcVar13 = acStack_67 + ((uVar11 - 0xf) - uVar1) + 0xf;
    iVar5 = VectorTableLookup(pcVar13,(int)lVar14,2);
    puVar7 = (undefined8 *)VectorTableLookup(iVar2,(int)lVar14,2);
    *puVar7 = in_d18;
    puVar7[1] = in_d19;
    if (iVar2 != 1) {
      puVar9 = puVar7 + 2;
      iVar5 = VectorTableLookup(pcVar13,puVar9,2);
      iVar8 = VectorTableLookup(iVar2,puVar9,2);
      *puVar9 = in_d18;
      puVar7[3] = in_d19;
      if (iVar2 != 2) {
        puVar7 = (undefined8 *)(iVar8 + 0x20);
        iVar5 = VectorTableLookup(pcVar13,puVar9,2);
        VectorTableLookup(puVar7,puVar9,2);
        *puVar7 = in_d18;
        *(undefined8 *)(iVar8 + 0x28) = in_d19;
        if (iVar2 != 3) {
          iVar5 = VectorTableLookup(pcVar13,puVar9,2);
          puVar7 = (undefined8 *)VectorTableLookup(puVar7,puVar9,2);
          *puVar7 = in_d18;
          puVar7[1] = in_d19;
        }
      }
    }
    uVar6 = iVar5 + iVar2 * 0x10;
    if (uVar12 - uVar1 == iVar2 * 0x10) goto LAB_080d2b44;
  }
  uVar1 = uVar6 + 1;
  in_r2[uVar6] = NumStr[uVar11 - uVar6];
  if (uVar1 < uVar12) {
    uVar3 = uVar6 + 2;
    in_r2[uVar1] = NumStr[uVar11 - uVar1];
    if (uVar3 < uVar12) {
      uVar1 = uVar6 + 3;
      in_r2[uVar3] = NumStr[uVar11 - uVar3];
      if (uVar1 < uVar12) {
        uVar3 = uVar6 + 4;
        in_r2[uVar1] = NumStr[uVar11 - uVar1];
        if (uVar3 < uVar12) {
          uVar1 = uVar6 + 5;
          in_r2[uVar3] = NumStr[uVar11 - uVar3];
          if (uVar1 < uVar12) {
            uVar3 = uVar6 + 6;
            in_r2[uVar1] = NumStr[uVar11 - uVar1];
            if (uVar3 < uVar12) {
              uVar1 = uVar6 + 7;
              in_r2[uVar3] = NumStr[uVar11 - uVar3];
              if (uVar1 < uVar12) {
                uVar3 = uVar6 + 8;
                in_r2[uVar1] = NumStr[uVar11 - uVar1];
                if (uVar3 < uVar12) {
                  uVar1 = uVar6 + 9;
                  in_r2[uVar3] = NumStr[uVar11 - uVar3];
                  if (uVar1 < uVar12) {
                    uVar3 = uVar6 + 10;
                    in_r2[uVar1] = NumStr[uVar11 - uVar1];
                    if (uVar3 < uVar12) {
                      uVar1 = uVar6 + 0xb;
                      in_r2[uVar3] = NumStr[uVar11 - uVar3];
                      if (uVar1 < uVar12) {
                        uVar3 = uVar6 + 0xc;
                        in_r2[uVar1] = NumStr[uVar11 - uVar1];
                        if (uVar3 < uVar12) {
                          uVar1 = uVar6 + 0xd;
                          in_r2[uVar3] = NumStr[uVar11 - uVar3];
                          if (uVar1 < uVar12) {
                            uVar6 = uVar6 + 0xe;
                            in_r2[uVar1] = NumStr[uVar11 - uVar1];
                            if (uVar6 < uVar12) {
                              in_r2[uVar6] = NumStr[uVar11 - uVar6];
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_080d2b44:
  in_r2[uVar12] = '\0';
  if (local_24 == __stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


