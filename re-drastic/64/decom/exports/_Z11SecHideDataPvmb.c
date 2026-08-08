/*
 * Ghidra decompilation
 *
 * Function : _Z11SecHideDataPvmb
 * Address  : 001c4cc0
 * Program  : drastic64
 */


/* SecHideData(void*, unsigned long, bool) */

void SecHideData(void *param_1,ulong param_2,bool param_3)

{
  ulong uVar1;
  char cVar2;
  __pid_t _Var3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  char cVar7;
  char cVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  _Var3 = getpid();
  if (param_2 != 0) {
    cVar2 = (char)_Var3 + 'K';
    if (param_2 - 1 < 0xf) {
      uVar6 = 0;
    }
    else {
      puVar4 = (undefined8 *)param_1;
      cVar8 = '\x01';
      cVar7 = '\0';
      do {
        uVar10 = puVar4[1];
        uVar9 = *puVar4;
        puVar5 = puVar4 + 2;
        puVar4[1] = CONCAT17(cVar8 + '\x0e' + cVar2 ^ (byte)((ulong)uVar10 >> 0x38),
                             CONCAT16(cVar7 + '\x0e' + cVar2 ^ (byte)((ulong)uVar10 >> 0x30),
                                      CONCAT15(cVar8 + '\f' + cVar2 ^ (byte)((ulong)uVar10 >> 0x28),
                                               CONCAT14(cVar7 + '\f' + cVar2 ^
                                                        (byte)((ulong)uVar10 >> 0x20),
                                                        CONCAT13(cVar8 + '\n' + cVar2 ^
                                                                 (byte)((ulong)uVar10 >> 0x18),
                                                                 CONCAT12(cVar7 + '\n' + cVar2 ^
                                                                          (byte)((ulong)uVar10 >>
                                                                                0x10),
                                                                          CONCAT11(cVar8 + '\b' +
                                                                                   cVar2 ^ (byte)((
                                                  ulong)uVar10 >> 8),
                                                  cVar7 + '\b' + cVar2 ^ (byte)uVar10)))))));
        *puVar4 = CONCAT17(cVar8 + '\x06' + cVar2 ^ (byte)((ulong)uVar9 >> 0x38),
                           CONCAT16(cVar7 + '\x06' + cVar2 ^ (byte)((ulong)uVar9 >> 0x30),
                                    CONCAT15(cVar8 + '\x04' + cVar2 ^ (byte)((ulong)uVar9 >> 0x28),
                                             CONCAT14(cVar7 + '\x04' + cVar2 ^
                                                      (byte)((ulong)uVar9 >> 0x20),
                                                      CONCAT13(cVar8 + '\x02' + cVar2 ^
                                                               (byte)((ulong)uVar9 >> 0x18),
                                                               CONCAT12(cVar7 + '\x02' + cVar2 ^
                                                                        (byte)((ulong)uVar9 >> 0x10)
                                                                        ,CONCAT11(cVar8 + cVar2 ^
                                                                                  (byte)((ulong)
                                                  uVar9 >> 8),cVar7 + cVar2 ^ (byte)uVar9)))))));
        puVar4 = puVar5;
        cVar8 = cVar8 + '\x10';
        cVar7 = cVar7 + '\x10';
      } while (puVar5 != (undefined8 *)((param_2 & 0xfffffffffffffff0) + (long)param_1));
      uVar6 = param_2 & 0xfffffffffffffff0;
      if ((param_2 & 0xf) == 0) {
        return;
      }
    }
    *(byte *)((long)param_1 + uVar6) = cVar2 + (char)uVar6 ^ *(byte *)((long)param_1 + uVar6);
    uVar1 = uVar6 + 1;
    if (uVar1 < param_2) {
      *(byte *)((long)param_1 + uVar1) = cVar2 + (char)uVar1 ^ *(byte *)((long)param_1 + uVar1);
      uVar1 = uVar6 + 2;
      if (uVar1 < param_2) {
        *(byte *)((long)param_1 + uVar1) = cVar2 + (char)uVar1 ^ *(byte *)((long)param_1 + uVar1);
        uVar1 = uVar6 + 3;
        if (uVar1 < param_2) {
          *(byte *)((long)param_1 + uVar1) = cVar2 + (char)uVar1 ^ *(byte *)((long)param_1 + uVar1);
          uVar1 = uVar6 + 4;
          if (uVar1 < param_2) {
            *(byte *)((long)param_1 + uVar1) =
                 cVar2 + (char)uVar1 ^ *(byte *)((long)param_1 + uVar1);
            uVar1 = uVar6 + 5;
            if (uVar1 < param_2) {
              *(byte *)((long)param_1 + uVar1) =
                   cVar2 + (char)uVar1 ^ *(byte *)((long)param_1 + uVar1);
              uVar1 = uVar6 + 6;
              if (uVar1 < param_2) {
                *(byte *)((long)param_1 + uVar1) =
                     cVar2 + (char)uVar1 ^ *(byte *)((long)param_1 + uVar1);
                uVar1 = uVar6 + 7;
                if (uVar1 < param_2) {
                  *(byte *)((long)param_1 + uVar1) =
                       cVar2 + (char)uVar1 ^ *(byte *)((long)param_1 + uVar1);
                  uVar1 = uVar6 + 8;
                  if (uVar1 < param_2) {
                    *(byte *)((long)param_1 + uVar1) =
                         cVar2 + (char)uVar1 ^ *(byte *)((long)param_1 + uVar1);
                    uVar1 = uVar6 + 9;
                    if (uVar1 < param_2) {
                      *(byte *)((long)param_1 + uVar1) =
                           cVar2 + (char)uVar1 ^ *(byte *)((long)param_1 + uVar1);
                      uVar1 = uVar6 + 10;
                      if (uVar1 < param_2) {
                        *(byte *)((long)param_1 + uVar1) =
                             cVar2 + (char)uVar1 ^ *(byte *)((long)param_1 + uVar1);
                        uVar1 = uVar6 + 0xb;
                        if (uVar1 < param_2) {
                          *(byte *)((long)param_1 + uVar1) =
                               cVar2 + (char)uVar1 ^ *(byte *)((long)param_1 + uVar1);
                          uVar1 = uVar6 + 0xc;
                          if (uVar1 < param_2) {
                            *(byte *)((long)param_1 + uVar1) =
                                 cVar2 + (char)uVar1 ^ *(byte *)((long)param_1 + uVar1);
                            uVar1 = uVar6 + 0xd;
                            if (uVar1 < param_2) {
                              *(byte *)((long)param_1 + uVar1) =
                                   cVar2 + (char)uVar1 ^ *(byte *)((long)param_1 + uVar1);
                              uVar6 = uVar6 + 0xe;
                              if (uVar6 < param_2) {
                                *(byte *)((long)param_1 + uVar6) =
                                     cVar2 + (char)uVar6 ^ *(byte *)((long)param_1 + uVar6);
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
  }
  return;
}


