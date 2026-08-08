/*
 * Ghidra decompilation
 *
 * Function : _Z4itoaxPc
 * Address  : 001b4ea0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* itoa(long long, char*) */

void itoa(longlong param_1,char *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined local_6f [16];
  undefined local_5f [15];
  char local_40 [56];
  long local_8;
  
  auVar8 = _DAT_002287f0;
  local_8 = ___stack_chk_guard;
  uVar1 = 0;
  do {
    uVar6 = uVar1;
    uVar1 = uVar6 + 1;
    lVar4 = param_1 / 10;
    local_40[uVar6] = (char)param_1 + (char)lVar4 * -10 + '0';
    param_1 = lVar4;
  } while (lVar4 != 0);
  if (uVar6 < 0xf) {
    uVar5 = 0;
  }
  else {
    auVar7 = a64_TBL(ZEXT816(0),*(undefined (*) [16])(local_40 + (uVar6 - 0xf)),_DAT_002287f0);
    *(long *)(param_2 + 8) = auVar7._8_8_;
    *(long *)param_2 = auVar7._0_8_;
    if (uVar1 >> 4 != 1) {
      auVar7 = a64_TBL(ZEXT816(0),*(undefined (*) [16])(local_5f + uVar6),auVar8);
      *(long *)(param_2 + 0x18) = auVar7._8_8_;
      *(long *)(param_2 + 0x10) = auVar7._0_8_;
      if (uVar1 >> 4 != 2) {
        auVar8 = a64_TBL(ZEXT816(0),*(undefined (*) [16])(local_6f + uVar6),auVar8);
        *(long *)(param_2 + 0x28) = auVar8._8_8_;
        *(long *)(param_2 + 0x20) = auVar8._0_8_;
      }
    }
    uVar5 = uVar1 & 0xfffffffffffffff0;
    if ((uVar1 & 0xf) == 0) goto LAB_001b50b8;
  }
  uVar2 = uVar5 + 1;
  param_2[uVar5] = local_40[uVar6 - uVar5];
  if (uVar2 < uVar1) {
    uVar3 = uVar5 + 2;
    param_2[uVar2] = local_40[uVar6 - uVar2];
    if (uVar3 < uVar1) {
      uVar2 = uVar5 + 3;
      param_2[uVar3] = local_40[uVar6 - uVar3];
      if (uVar2 < uVar1) {
        uVar3 = uVar5 + 4;
        param_2[uVar2] = local_40[uVar6 - uVar2];
        if (uVar3 < uVar1) {
          uVar2 = uVar5 + 5;
          param_2[uVar3] = local_40[uVar6 - uVar3];
          if (uVar2 < uVar1) {
            uVar3 = uVar5 + 6;
            param_2[uVar2] = local_40[uVar6 - uVar2];
            if (uVar3 < uVar1) {
              uVar2 = uVar5 + 7;
              param_2[uVar3] = local_40[uVar6 - uVar3];
              if (uVar2 < uVar1) {
                uVar3 = uVar5 + 8;
                param_2[uVar2] = local_40[uVar6 - uVar2];
                if (uVar3 < uVar1) {
                  uVar2 = uVar5 + 9;
                  param_2[uVar3] = local_40[uVar6 - uVar3];
                  if (uVar2 < uVar1) {
                    uVar3 = uVar5 + 10;
                    param_2[uVar2] = local_40[uVar6 - uVar2];
                    if (uVar3 < uVar1) {
                      uVar2 = uVar5 + 0xb;
                      param_2[uVar3] = local_40[uVar6 - uVar3];
                      if (uVar2 < uVar1) {
                        uVar3 = uVar5 + 0xc;
                        param_2[uVar2] = local_40[uVar6 - uVar2];
                        if (uVar3 < uVar1) {
                          uVar2 = uVar5 + 0xd;
                          param_2[uVar3] = local_40[uVar6 - uVar3];
                          if (uVar2 < uVar1) {
                            uVar5 = uVar5 + 0xe;
                            param_2[uVar2] = local_40[uVar6 - uVar2];
                            if (uVar5 < uVar1) {
                              param_2[uVar5] = local_40[uVar6 - uVar5];
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
LAB_001b50b8:
  param_2[uVar1] = '\0';
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


