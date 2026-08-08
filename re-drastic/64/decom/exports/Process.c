/*
 * Ghidra decompilation
 *
 * Function : Process
 * Address  : 001c41a0
 * Program  : drastic64
 */


/* SecPassword::Process(wchar_t const*, unsigned long, wchar_t*, unsigned long, bool) */

void SecPassword::Process
               (wchar_t *param_1,ulong param_2,wchar_t *param_3,ulong param_4,bool param_5)

{
  ulong uVar1;
  size_t __n;
  char cVar2;
  __pid_t _Var3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  wchar_t *pwVar7;
  ulong uVar8;
  char cVar9;
  char cVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  pwVar7 = (wchar_t *)(ulong)param_5;
  uVar8 = (long)pwVar7 * 4;
  __n = (long)param_3 << 2;
  if (pwVar7 <= param_3) {
    __n = uVar8;
  }
  memcpy((void *)param_4,(void *)param_2,__n);
  _Var3 = getpid();
  if (pwVar7 != (wchar_t *)0x0) {
    cVar2 = (char)_Var3 + 'K';
    if (uVar8 - 1 < 0xf) {
      uVar6 = 0;
    }
    else {
      puVar4 = (undefined8 *)param_4;
      cVar10 = '\x01';
      cVar9 = '\0';
      do {
        uVar12 = puVar4[1];
        uVar11 = *puVar4;
        puVar5 = puVar4 + 2;
        puVar4[1] = CONCAT17(cVar10 + '\x0e' + cVar2 ^ (byte)((ulong)uVar12 >> 0x38),
                             CONCAT16(cVar9 + '\x0e' + cVar2 ^ (byte)((ulong)uVar12 >> 0x30),
                                      CONCAT15(cVar10 + '\f' + cVar2 ^ (byte)((ulong)uVar12 >> 0x28)
                                               ,CONCAT14(cVar9 + '\f' + cVar2 ^
                                                         (byte)((ulong)uVar12 >> 0x20),
                                                         CONCAT13(cVar10 + '\n' + cVar2 ^
                                                                  (byte)((ulong)uVar12 >> 0x18),
                                                                  CONCAT12(cVar9 + '\n' + cVar2 ^
                                                                           (byte)((ulong)uVar12 >>
                                                                                 0x10),
                                                                           CONCAT11(cVar10 + '\b' +
                                                                                    cVar2 ^ (byte)((
                                                  ulong)uVar12 >> 8),
                                                  cVar9 + '\b' + cVar2 ^ (byte)uVar12)))))));
        *puVar4 = CONCAT17(cVar10 + '\x06' + cVar2 ^ (byte)((ulong)uVar11 >> 0x38),
                           CONCAT16(cVar9 + '\x06' + cVar2 ^ (byte)((ulong)uVar11 >> 0x30),
                                    CONCAT15(cVar10 + '\x04' + cVar2 ^ (byte)((ulong)uVar11 >> 0x28)
                                             ,CONCAT14(cVar9 + '\x04' + cVar2 ^
                                                       (byte)((ulong)uVar11 >> 0x20),
                                                       CONCAT13(cVar10 + '\x02' + cVar2 ^
                                                                (byte)((ulong)uVar11 >> 0x18),
                                                                CONCAT12(cVar9 + '\x02' + cVar2 ^
                                                                         (byte)((ulong)uVar11 >>
                                                                               0x10),
                                                                         CONCAT11(cVar10 + cVar2 ^
                                                                                  (byte)((ulong)
                                                  uVar11 >> 8),cVar9 + cVar2 ^ (byte)uVar11)))))));
        puVar4 = puVar5;
        cVar10 = cVar10 + '\x10';
        cVar9 = cVar9 + '\x10';
      } while (puVar5 != (undefined8 *)((uVar8 & 0xfffffffffffffff0) + param_4));
      uVar6 = uVar8 & 0xfffffffffffffff0;
      if ((uVar8 & 0xf) == 0) {
        return;
      }
    }
    *(byte *)(param_4 + uVar6) = cVar2 + (char)uVar6 ^ *(byte *)(param_4 + uVar6);
    uVar1 = uVar6 + 1;
    if (uVar1 < uVar8) {
      *(byte *)(param_4 + uVar1) = cVar2 + (char)uVar1 ^ *(byte *)(param_4 + uVar1);
      uVar1 = uVar6 + 2;
      if (uVar1 <= uVar8 && uVar8 - uVar1 != 0) {
        *(byte *)(param_4 + uVar1) = cVar2 + (char)uVar1 ^ *(byte *)(param_4 + uVar1);
        uVar1 = uVar6 + 3;
        if (uVar1 <= uVar8 && uVar8 - uVar1 != 0) {
          *(byte *)(param_4 + uVar1) = cVar2 + (char)uVar1 ^ *(byte *)(param_4 + uVar1);
          uVar1 = uVar6 + 4;
          if (uVar1 <= uVar8 && uVar8 - uVar1 != 0) {
            *(byte *)(param_4 + uVar1) = cVar2 + (char)uVar1 ^ *(byte *)(param_4 + uVar1);
            uVar1 = uVar6 + 5;
            if (uVar1 <= uVar8 && uVar8 - uVar1 != 0) {
              *(byte *)(param_4 + uVar1) = cVar2 + (char)uVar1 ^ *(byte *)(param_4 + uVar1);
              uVar1 = uVar6 + 6;
              if (uVar1 <= uVar8 && uVar8 - uVar1 != 0) {
                *(byte *)(param_4 + uVar1) = cVar2 + (char)uVar1 ^ *(byte *)(param_4 + uVar1);
                uVar1 = uVar6 + 7;
                if (uVar1 <= uVar8 && uVar8 - uVar1 != 0) {
                  *(byte *)(param_4 + uVar1) = cVar2 + (char)uVar1 ^ *(byte *)(param_4 + uVar1);
                  uVar1 = uVar6 + 8;
                  if (uVar1 <= uVar8 && uVar8 - uVar1 != 0) {
                    *(byte *)(param_4 + uVar1) = cVar2 + (char)uVar1 ^ *(byte *)(param_4 + uVar1);
                    uVar1 = uVar6 + 9;
                    if (uVar1 <= uVar8 && uVar8 - uVar1 != 0) {
                      *(byte *)(param_4 + uVar1) = cVar2 + (char)uVar1 ^ *(byte *)(param_4 + uVar1);
                      uVar1 = uVar6 + 10;
                      if (uVar1 <= uVar8 && uVar8 - uVar1 != 0) {
                        *(byte *)(param_4 + uVar1) =
                             cVar2 + (char)uVar1 ^ *(byte *)(param_4 + uVar1);
                        uVar1 = uVar6 + 0xb;
                        if (uVar1 <= uVar8 && uVar8 - uVar1 != 0) {
                          *(byte *)(param_4 + uVar1) =
                               cVar2 + (char)uVar1 ^ *(byte *)(param_4 + uVar1);
                          uVar1 = uVar6 + 0xc;
                          if (uVar1 <= uVar8 && uVar8 - uVar1 != 0) {
                            *(byte *)(param_4 + uVar1) =
                                 cVar2 + (char)uVar1 ^ *(byte *)(param_4 + uVar1);
                            uVar1 = uVar6 + 0xd;
                            if (uVar1 <= uVar8 && uVar8 - uVar1 != 0) {
                              *(byte *)(param_4 + uVar1) =
                                   cVar2 + (char)uVar1 ^ *(byte *)(param_4 + uVar1);
                              uVar6 = uVar6 + 0xe;
                              if (uVar6 <= uVar8 && uVar8 - uVar6 != 0) {
                                *(byte *)(param_4 + uVar6) =
                                     cVar2 + (char)uVar6 ^ *(byte *)(param_4 + uVar6);
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


