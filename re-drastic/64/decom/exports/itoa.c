/*
 * Ghidra decompilation
 *
 * Function : itoa
 * Address  : 001b50f0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* itoa(long long, wchar_t*) */

void itoa(longlong param_1,wchar_t *param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined local_18c [16];
  undefined local_17c [16];
  undefined local_16c [16];
  undefined local_15c [16];
  undefined local_14c [16];
  undefined local_13c [16];
  undefined local_12c [16];
  undefined local_11c [16];
  undefined local_10c [16];
  undefined local_fc [16];
  undefined local_ec [12];
  wchar_t local_d0 [50];
  long local_8;
  
  auVar5 = _DAT_0021d600;
  local_8 = ___stack_chk_guard;
  uVar1 = 0;
  do {
    uVar4 = uVar1;
    uVar1 = uVar4 + 1;
    lVar2 = param_1 / 10;
    local_d0[uVar4] = (int)param_1 + (int)lVar2 * -10 + L'0';
    param_1 = lVar2;
  } while (lVar2 != 0);
  if (uVar4 < 3) {
    uVar3 = 0;
  }
  else {
    lVar2 = uVar4 * 4;
    uVar3 = uVar1 >> 2;
    auVar6 = a64_TBL(ZEXT816(0),*(undefined (*) [16])(local_d0 + (uVar4 - 3)),_DAT_0021d600);
    *(long *)(param_2 + 2) = auVar6._8_8_;
    *(long *)param_2 = auVar6._0_8_;
    if (uVar3 != 1) {
      auVar6 = a64_TBL(ZEXT816(0),*(undefined (*) [16])(local_ec + lVar2),auVar5);
      *(long *)(param_2 + 6) = auVar6._8_8_;
      *(long *)(param_2 + 4) = auVar6._0_8_;
      if (uVar3 != 2) {
        auVar6 = a64_TBL(ZEXT816(0),*(undefined (*) [16])(local_fc + lVar2),auVar5);
        *(long *)(param_2 + 10) = auVar6._8_8_;
        *(long *)(param_2 + 8) = auVar6._0_8_;
        if (uVar3 != 3) {
          auVar6 = a64_TBL(ZEXT816(0),*(undefined (*) [16])(local_10c + lVar2),auVar5);
          *(long *)(param_2 + 0xe) = auVar6._8_8_;
          *(long *)(param_2 + 0xc) = auVar6._0_8_;
          if (uVar3 != 4) {
            auVar6 = a64_TBL(ZEXT816(0),*(undefined (*) [16])(local_11c + lVar2),auVar5);
            *(long *)(param_2 + 0x12) = auVar6._8_8_;
            *(long *)(param_2 + 0x10) = auVar6._0_8_;
            if (uVar3 != 5) {
              auVar6 = a64_TBL(ZEXT816(0),*(undefined (*) [16])(local_12c + lVar2),auVar5);
              *(long *)(param_2 + 0x16) = auVar6._8_8_;
              *(long *)(param_2 + 0x14) = auVar6._0_8_;
              if (uVar3 != 6) {
                auVar6 = a64_TBL(ZEXT816(0),*(undefined (*) [16])(local_13c + lVar2),auVar5);
                *(long *)(param_2 + 0x1a) = auVar6._8_8_;
                *(long *)(param_2 + 0x18) = auVar6._0_8_;
                if (uVar3 != 7) {
                  auVar5 = a64_TBL(ZEXT816(0),*(undefined (*) [16])(local_14c + lVar2),auVar5);
                  *(long *)(param_2 + 0x1e) = auVar5._8_8_;
                  *(long *)(param_2 + 0x1c) = auVar5._0_8_;
                  auVar5 = _DAT_0021d600;
                  if (uVar3 != 8) {
                    auVar6 = a64_TBL(ZEXT816(0),*(undefined (*) [16])(local_15c + lVar2),
                                     _DAT_0021d600);
                    *(long *)(param_2 + 0x22) = auVar6._8_8_;
                    *(long *)(param_2 + 0x20) = auVar6._0_8_;
                    if (uVar3 != 9) {
                      auVar6 = a64_TBL(ZEXT816(0),*(undefined (*) [16])(local_16c + lVar2),auVar5);
                      *(long *)(param_2 + 0x26) = auVar6._8_8_;
                      *(long *)(param_2 + 0x24) = auVar6._0_8_;
                      if (uVar3 != 10) {
                        auVar6 = a64_TBL(ZEXT816(0),*(undefined (*) [16])(local_17c + lVar2),auVar5)
                        ;
                        *(long *)(param_2 + 0x2a) = auVar6._8_8_;
                        *(long *)(param_2 + 0x28) = auVar6._0_8_;
                        if (uVar3 != 0xb) {
                          auVar5 = a64_TBL(ZEXT816(0),*(undefined (*) [16])(local_18c + lVar2),
                                           auVar5);
                          *(long *)(param_2 + 0x2e) = auVar5._8_8_;
                          *(long *)(param_2 + 0x2c) = auVar5._0_8_;
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
    uVar3 = uVar1 & 0xfffffffffffffffc;
    if ((uVar1 & 3) == 0) goto LAB_001b52b0;
  }
  param_2[uVar3] = local_d0[uVar4 - uVar3];
  if (uVar3 + 1 < uVar1) {
    param_2[uVar3 + 1] = local_d0[uVar4 - (uVar3 + 1)];
    if (uVar3 + 2 < uVar1) {
      param_2[uVar3 + 2] = local_d0[uVar4 - (uVar3 + 2)];
    }
  }
LAB_001b52b0:
  param_2[uVar1] = L'\0';
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


