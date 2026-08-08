/*
 * Ghidra decompilation
 *
 * Function : _Z4itoaxPw
 * Address  : 080d2bb0
 * Program  : drastic
 */


void itoa(int64 n,wchar *Str)

{
  undefined4 in_r1;
  wchar *in_r2;
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  wchar *pwVar13;
  undefined8 in_d18;
  undefined8 in_d19;
  longlong lVar14;
  wchar awStack_f8 [3];
  wchar NumStr [50];
  int local_24;
  
  lVar14 = CONCAT44(in_r1,Str);
  pwVar13 = awStack_f8 + 2;
  local_24 = __stack_chk_guard;
  uVar12 = 0;
  do {
    uVar11 = uVar12;
    uVar10 = (undefined4)((ulonglong)lVar14 >> 0x20);
    iVar1 = 10;
    __aeabi_ldivmod((int)lVar14,uVar10,10,0);
    pwVar13 = (wchar *)((int *)pwVar13 + 1);
    *pwVar13 = iVar1 + 0x30;
    uVar12 = uVar11 + 1;
    lVar14 = __aeabi_ldivmod((int)lVar14,uVar10,10,0);
  } while (lVar14 != 0);
  uVar6 = (uint)((int)(NumStr + uVar11 + 0x3ffffffd) * 0x20000000) >> 0x1f;
  if (uVar12 <= uVar6) {
    uVar6 = uVar12;
  }
  uVar5 = uVar12;
  if ((uVar12 < 5) || (uVar5 = uVar6, uVar6 != 0)) {
    *in_r2 = NumStr[uVar11];
    uVar6 = uVar5;
    if ((uVar5 != 1) &&
       ((in_r2[1] = NumStr[uVar11 - 1], uVar5 != 2 &&
        (in_r2[2] = awStack_f8[uVar11 + 1], uVar5 != 3)))) {
      in_r2[3] = awStack_f8[uVar11];
      uVar6 = 4;
    }
    if (uVar12 == uVar5) goto LAB_080d2ee8;
  }
  iVar2 = ((uVar12 - uVar5) - 4 >> 2) + 1;
  iVar1 = iVar2 * 4;
  if (2 < uVar11 - uVar5) {
    pwVar13 = NumStr + ((uVar11 + 0x3ffffffd) - uVar5);
    iVar3 = VectorTableLookup(uVar6,NumStr,2);
    puVar7 = (undefined8 *)VectorTableLookup(pwVar13,NumStr,2);
    *puVar7 = in_d18;
    puVar7[1] = in_d19;
    if (iVar2 != 1) {
      puVar4 = puVar7 + 2;
      iVar2 = VectorTableLookup(uVar6,puVar4,2);
      iVar8 = VectorTableLookup(pwVar13,puVar4,2);
      *puVar4 = in_d18;
      puVar7[3] = in_d19;
      if (iVar3 != 2) {
        puVar7 = (undefined8 *)(iVar8 + 0x20);
        iVar3 = VectorTableLookup(uVar6,puVar7,2);
        iVar9 = VectorTableLookup(pwVar13,puVar7,2);
        *puVar7 = in_d18;
        *(undefined8 *)(iVar8 + 0x28) = in_d19;
        if (iVar2 != 3) {
          puVar7 = (undefined8 *)(iVar9 + 0x30);
          iVar2 = VectorTableLookup(uVar6,puVar7,2);
          iVar8 = VectorTableLookup(pwVar13,puVar7,2);
          *puVar7 = in_d18;
          *(undefined8 *)(iVar9 + 0x38) = in_d19;
          if (iVar3 != 4) {
            puVar7 = (undefined8 *)(iVar8 + 0x40);
            iVar3 = VectorTableLookup(uVar6,puVar7,2);
            iVar9 = VectorTableLookup(pwVar13,puVar7,2);
            *puVar7 = in_d18;
            *(undefined8 *)(iVar8 + 0x48) = in_d19;
            if (iVar2 != 5) {
              puVar7 = (undefined8 *)(iVar9 + 0x50);
              iVar2 = VectorTableLookup(uVar6,puVar7,2);
              iVar8 = VectorTableLookup(pwVar13,puVar7,2);
              *puVar7 = in_d18;
              *(undefined8 *)(iVar9 + 0x58) = in_d19;
              if (iVar3 != 6) {
                puVar7 = (undefined8 *)(iVar8 + 0x60);
                iVar3 = VectorTableLookup(uVar6,puVar7,2);
                iVar9 = VectorTableLookup(pwVar13,puVar7,2);
                *puVar7 = in_d18;
                *(undefined8 *)(iVar8 + 0x68) = in_d19;
                if (iVar2 != 7) {
                  puVar7 = (undefined8 *)(iVar9 + 0x70);
                  iVar2 = VectorTableLookup(uVar6,puVar7,2);
                  iVar8 = VectorTableLookup(pwVar13,puVar7,2);
                  *puVar7 = in_d18;
                  *(undefined8 *)(iVar9 + 0x78) = in_d19;
                  if (iVar3 != 8) {
                    puVar7 = (undefined8 *)(iVar8 + 0x80);
                    iVar3 = VectorTableLookup(uVar6,puVar7,2);
                    iVar9 = VectorTableLookup(pwVar13,puVar7,2);
                    *puVar7 = in_d18;
                    *(undefined8 *)(iVar8 + 0x88) = in_d19;
                    if (iVar2 != 9) {
                      puVar7 = (undefined8 *)(iVar9 + 0x90);
                      iVar2 = VectorTableLookup(uVar6,puVar7,2);
                      iVar8 = VectorTableLookup(pwVar13,puVar7,2);
                      *puVar7 = in_d18;
                      *(undefined8 *)(iVar9 + 0x98) = in_d19;
                      if (iVar3 != 10) {
                        puVar7 = (undefined8 *)(iVar8 + 0xa0);
                        iVar3 = VectorTableLookup(uVar6,puVar7,2);
                        VectorTableLookup(pwVar13,puVar7,2);
                        *puVar7 = in_d18;
                        *(undefined8 *)(iVar8 + 0xa8) = in_d19;
                        if (iVar2 != 0xb) {
                          puVar4 = (undefined8 *)VectorTableLookup(uVar6,puVar7,2);
                          VectorTableLookup(pwVar13,puVar7,2);
                          *puVar4 = in_d18;
                          puVar4[1] = in_d19;
                          if (iVar3 != 0xc) {
                            VectorTableLookup(uVar6,puVar7,2);
                            puVar7 = (undefined8 *)VectorTableLookup(pwVar13,puVar7,2);
                            *puVar7 = in_d18;
                            puVar7[1] = in_d19;
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
    uVar6 = uVar6 + iVar1;
    if (uVar12 - uVar5 == iVar1) goto LAB_080d2ee8;
  }
  uVar5 = uVar6 + 1;
  in_r2[uVar6] = NumStr[uVar11 - uVar6];
  if (uVar5 < uVar12) {
    uVar6 = uVar6 + 2;
    in_r2[uVar5] = NumStr[uVar11 - uVar5];
    if (uVar6 < uVar12) {
      in_r2[uVar6] = NumStr[uVar11 - uVar6];
    }
  }
LAB_080d2ee8:
  iVar1 = __stack_chk_guard;
  in_r2[uVar12] = 0;
  if (local_24 == iVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


