/*
 * Ghidra decompilation
 *
 * Function : hmac_sha256
 * Address  : 001bf1f0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* hmac_sha256(unsigned char const*, unsigned long, unsigned char const*, unsigned long, unsigned
   char*) [clone .constprop.0] */

void hmac_sha256(uchar *param_1,ulong param_2,uchar *param_3,ulong param_4,uchar *param_5)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  size_t sVar4;
  sha256_context asStack_170 [112];
  sha256_context asStack_100 [112];
  ulong local_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  uchar auStack_70 [32];
  undefined8 local_50;
  undefined8 uStack_48;
  ulong local_40;
  ulong uStack_38;
  ulong local_30;
  ulong uStack_28;
  ulong local_20;
  ulong uStack_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (0x40 < param_2) {
    sha256_init(asStack_100);
    sha256_process(asStack_100,param_1,param_2);
    sha256_done(asStack_100,(uchar *)&local_90);
    param_2 = 0x20;
    uVar2 = 2;
    uStack_48 = uStack_88 ^ 0x3636363636363636;
    local_50 = local_90 ^ 0x3636363636363636;
    uStack_38 = uStack_78 ^ 0x3636363636363636;
    local_40 = uStack_80 ^ 0x3636363636363636;
    param_1 = (uchar *)&local_90;
    goto LAB_001bf5c4;
  }
  if (param_2 == 0) {
LAB_001bf2b0:
    uVar2 = param_2 + 1;
    sVar4 = 0x40 - param_2;
    if (0x40 < uVar2) {
      sVar4 = 1;
    }
    memset((void *)((long)&local_50 + param_2),0x36,sVar4);
    sha256_init(asStack_170);
    sha256_process(asStack_170,&local_50,0x40);
    sha256_process(asStack_170,param_3,0x20);
    sha256_done(asStack_170,auStack_70);
    sha256_init(asStack_100);
    if (param_2 != 0) {
LAB_001bf318:
      if (0xe < param_2 - 1) goto LAB_001bf324;
      uVar2 = 0;
LAB_001bf408:
      *(byte *)((long)&local_50 + uVar2) = *(byte *)((long)param_1 + uVar2) ^ 0x5c;
      if (uVar2 + 1 < param_2) {
        *(byte *)((long)&local_50 + uVar2 + 1) = *(byte *)((long)param_1 + uVar2 + 1) ^ 0x5c;
        if (uVar2 + 2 < param_2) {
          *(byte *)((long)&local_50 + uVar2 + 2) = *(byte *)((long)param_1 + uVar2 + 2) ^ 0x5c;
          if (uVar2 + 3 < param_2) {
            *(byte *)((long)&local_50 + uVar2 + 3) = *(byte *)((long)param_1 + uVar2 + 3) ^ 0x5c;
            if (uVar2 + 4 < param_2) {
              *(byte *)((long)&local_50 + uVar2 + 4) = *(byte *)((long)param_1 + uVar2 + 4) ^ 0x5c;
              if (uVar2 + 5 < param_2) {
                *(byte *)((long)&local_50 + uVar2 + 5) = *(byte *)((long)param_1 + uVar2 + 5) ^ 0x5c
                ;
                if (uVar2 + 6 < param_2) {
                  *(byte *)((long)&local_50 + uVar2 + 6) =
                       *(byte *)((long)param_1 + uVar2 + 6) ^ 0x5c;
                  if (uVar2 + 7 < param_2) {
                    *(byte *)((long)&local_50 + uVar2 + 7) =
                         *(byte *)((long)param_1 + uVar2 + 7) ^ 0x5c;
                    if (uVar2 + 8 < param_2) {
                      *(byte *)((long)&uStack_48 + uVar2) =
                           *(byte *)((long)param_1 + uVar2 + 8) ^ 0x5c;
                      if (uVar2 + 9 < param_2) {
                        *(byte *)((long)&uStack_48 + uVar2 + 1) =
                             *(byte *)((long)param_1 + uVar2 + 9) ^ 0x5c;
                        if (uVar2 + 10 < param_2) {
                          *(byte *)((long)&uStack_48 + uVar2 + 2) =
                               *(byte *)((long)param_1 + uVar2 + 10) ^ 0x5c;
                          if (uVar2 + 0xb < param_2) {
                            *(byte *)((long)&uStack_48 + uVar2 + 3) =
                                 *(byte *)((long)param_1 + uVar2 + 0xb) ^ 0x5c;
                            if (uVar2 + 0xc < param_2) {
                              *(byte *)((long)&uStack_48 + uVar2 + 4) =
                                   *(byte *)((long)param_1 + uVar2 + 0xc) ^ 0x5c;
                              if (uVar2 + 0xd < param_2) {
                                *(byte *)((long)&uStack_48 + uVar2 + 5) =
                                     *(byte *)((long)param_1 + uVar2 + 0xd) ^ 0x5c;
                                if (uVar2 + 0xe < param_2) {
                                  *(byte *)((long)&uStack_48 + uVar2 + 6) =
                                       *(byte *)((long)param_1 + uVar2 + 0xe) ^ 0x5c;
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
      goto LAB_001bf374;
    }
  }
  else {
    if (0xf < param_2) {
      uVar2 = param_2 >> 4;
      uStack_48 = *(ulong *)(param_1 + 8) ^ 0x3636363636363636;
      local_50 = *(ulong *)param_1 ^ 0x3636363636363636;
      if (uVar2 == 1) {
LAB_001bf5c4:
        lVar3 = uVar2 << 4;
        if (param_2 != uVar2 * 0x10) goto LAB_001bf5d4;
      }
      else {
        uStack_38 = *(ulong *)(param_1 + 0x18) ^ 0x3636363636363636;
        local_40 = *(ulong *)(param_1 + 0x10) ^ 0x3636363636363636;
        if (uVar2 == 2) {
          uVar2 = 2;
          goto LAB_001bf5c4;
        }
        uStack_28 = *(ulong *)(param_1 + 0x28) ^ 0x3636363636363636;
        local_30 = *(ulong *)(param_1 + 0x20) ^ 0x3636363636363636;
        if (uVar2 == 3) goto LAB_001bf5c4;
        local_20 = *(ulong *)(param_1 + 0x30) ^ 0x3636363636363636;
        uStack_18 = *(ulong *)(param_1 + 0x38) ^ 0x3636363636363636;
      }
LAB_001bf2a8:
      if (param_2 != 0x40) goto LAB_001bf2b0;
      sha256_init(asStack_170);
      sha256_process(asStack_170,&local_50,0x40);
      sha256_process(asStack_170,param_3,0x20);
      sha256_done(asStack_170,auStack_70);
      sha256_init(asStack_100);
      goto LAB_001bf318;
    }
    lVar3 = 0;
LAB_001bf5d4:
    *(byte *)((long)&local_50 + lVar3) = *(byte *)((long)param_1 + lVar3) ^ 0x36;
    uVar2 = lVar3 + 1;
    if (param_2 <= uVar2) goto LAB_001bf2a8;
    uVar1 = lVar3 + 2;
    *(byte *)((long)&local_50 + uVar2) = *(byte *)((long)param_1 + uVar2) ^ 0x36;
    if (uVar1 < param_2) {
      uVar2 = lVar3 + 3;
      *(byte *)((long)&local_50 + uVar1) = *(byte *)((long)param_1 + uVar1) ^ 0x36;
      if (uVar2 < param_2) {
        uVar1 = lVar3 + 4;
        *(byte *)((long)&local_50 + uVar2) = *(byte *)((long)param_1 + uVar2) ^ 0x36;
        if (uVar1 < param_2) {
          uVar2 = lVar3 + 5;
          *(byte *)((long)&local_50 + uVar1) = *(byte *)((long)param_1 + uVar1) ^ 0x36;
          if (uVar2 < param_2) {
            uVar1 = lVar3 + 6;
            *(byte *)((long)&local_50 + uVar2) = *(byte *)((long)param_1 + uVar2) ^ 0x36;
            if (uVar1 < param_2) {
              uVar2 = lVar3 + 7;
              *(byte *)((long)&local_50 + uVar1) = *(byte *)((long)param_1 + uVar1) ^ 0x36;
              if (uVar2 < param_2) {
                uVar1 = lVar3 + 8;
                *(byte *)((long)&local_50 + uVar2) = *(byte *)((long)param_1 + uVar2) ^ 0x36;
                if (uVar1 < param_2) {
                  uVar2 = lVar3 + 9;
                  *(byte *)((long)&local_50 + uVar1) = *(byte *)((long)param_1 + uVar1) ^ 0x36;
                  if (uVar2 < param_2) {
                    uVar1 = lVar3 + 10;
                    *(byte *)((long)&local_50 + uVar2) = *(byte *)((long)param_1 + uVar2) ^ 0x36;
                    if (uVar1 < param_2) {
                      *(byte *)((long)&local_50 + uVar1) = *(byte *)((long)param_1 + uVar1) ^ 0x36;
                      uVar2 = lVar3 + 0xb;
                      if (uVar2 < param_2) {
                        uVar1 = lVar3 + 0xc;
                        *(byte *)((long)&local_50 + uVar2) = *(byte *)((long)param_1 + uVar2) ^ 0x36
                        ;
                        if (uVar1 < param_2) {
                          uVar2 = lVar3 + 0xd;
                          *(byte *)((long)&local_50 + uVar1) =
                               *(byte *)((long)param_1 + uVar1) ^ 0x36;
                          if (uVar2 < param_2) {
                            uVar1 = lVar3 + 0xe;
                            *(byte *)((long)&local_50 + uVar2) =
                                 *(byte *)((long)param_1 + uVar2) ^ 0x36;
                            if (uVar1 < param_2) {
                              *(byte *)((long)&local_50 + uVar1) =
                                   *(byte *)((long)param_1 + uVar1) ^ 0x36;
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
    if (param_2 != 0x40) goto LAB_001bf2b0;
    sha256_init(asStack_170);
    sha256_process(asStack_170,&local_50,0x40);
    sha256_process(asStack_170,param_3,0x20);
    sha256_done(asStack_170,auStack_70);
    sha256_init(asStack_100);
LAB_001bf324:
    uVar2 = param_2 >> 4;
    uStack_48 = *(ulong *)((long)param_1 + 8) ^ 0x5c5c5c5c5c5c5c5c;
    local_50 = *(ulong *)param_1 ^ 0x5c5c5c5c5c5c5c5c;
    if (uVar2 == 1) {
LAB_001bf3fc:
      uVar2 = param_2 & 0xfffffffffffffff0;
      if ((param_2 & 0xf) != 0) goto LAB_001bf408;
    }
    else {
      uStack_38 = *(ulong *)((long)param_1 + 0x18) ^ 0x5c5c5c5c5c5c5c5c;
      local_40 = *(ulong *)((long)param_1 + 0x10) ^ 0x5c5c5c5c5c5c5c5c;
      if (uVar2 == 2) goto LAB_001bf3fc;
      uStack_28 = *(ulong *)((long)param_1 + 0x28) ^ 0x5c5c5c5c5c5c5c5c;
      local_30 = *(ulong *)((long)param_1 + 0x20) ^ 0x5c5c5c5c5c5c5c5c;
      if (uVar2 == 3) goto LAB_001bf3fc;
      local_20 = *(ulong *)((long)param_1 + 0x30) ^ 0x5c5c5c5c5c5c5c5c;
      uStack_18 = *(ulong *)((long)param_1 + 0x38) ^ 0x5c5c5c5c5c5c5c5c;
    }
LAB_001bf374:
    uVar2 = param_2 + 1;
    if (param_2 == 0x40) goto LAB_001bf39c;
  }
  sVar4 = 0x40 - param_2;
  if (0x40 < uVar2) {
    sVar4 = 1;
  }
  memset((void *)((long)&local_50 + param_2),0x5c,sVar4);
LAB_001bf39c:
  sha256_process(asStack_100,&local_50,0x40);
  sha256_process(asStack_100,auStack_70,0x20);
  sha256_done(asStack_100,(uchar *)param_4);
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_8 - ___stack_chk_guard,0);
  }
  return;
}


