/*
 * Ghidra decompilation
 *
 * Function : _ZN11SecPassword3GetEPwm
 * Address  : 001c4470
 * Program  : drastic64
 */


/* SecPassword::Get(wchar_t*, unsigned long) */

void __thiscall SecPassword::Get(SecPassword *this,wchar_t *param_1,ulong param_2)

{
  ulong uVar1;
  size_t __n;
  char cVar2;
  __pid_t _Var3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  char cVar8;
  char cVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  if (this[0x200] == (SecPassword)0x0) {
    *param_1 = L'\0';
    return;
  }
  uVar7 = param_2 * 4;
  __n = uVar7;
  if (0x80 < param_2) {
    __n = 0x200;
  }
  memcpy(param_1,this,__n);
  _Var3 = getpid();
  if (uVar7 != 0) {
    cVar2 = (char)_Var3 + 'K';
    if (uVar7 - 1 < 0xf) {
      uVar6 = 0;
    }
    else {
      puVar4 = (undefined8 *)param_1;
      cVar9 = '\x01';
      cVar8 = '\0';
      do {
        uVar11 = puVar4[1];
        uVar10 = *puVar4;
        puVar5 = puVar4 + 2;
        puVar4[1] = CONCAT17(cVar9 + '\x0e' + cVar2 ^ (byte)((ulong)uVar11 >> 0x38),
                             CONCAT16(cVar8 + '\x0e' + cVar2 ^ (byte)((ulong)uVar11 >> 0x30),
                                      CONCAT15(cVar9 + '\f' + cVar2 ^ (byte)((ulong)uVar11 >> 0x28),
                                               CONCAT14(cVar8 + '\f' + cVar2 ^
                                                        (byte)((ulong)uVar11 >> 0x20),
                                                        CONCAT13(cVar9 + '\n' + cVar2 ^
                                                                 (byte)((ulong)uVar11 >> 0x18),
                                                                 CONCAT12(cVar8 + '\n' + cVar2 ^
                                                                          (byte)((ulong)uVar11 >>
                                                                                0x10),
                                                                          CONCAT11(cVar9 + '\b' +
                                                                                   cVar2 ^ (byte)((
                                                  ulong)uVar11 >> 8),
                                                  cVar8 + '\b' + cVar2 ^ (byte)uVar11)))))));
        *puVar4 = CONCAT17(cVar9 + '\x06' + cVar2 ^ (byte)((ulong)uVar10 >> 0x38),
                           CONCAT16(cVar8 + '\x06' + cVar2 ^ (byte)((ulong)uVar10 >> 0x30),
                                    CONCAT15(cVar9 + '\x04' + cVar2 ^ (byte)((ulong)uVar10 >> 0x28),
                                             CONCAT14(cVar8 + '\x04' + cVar2 ^
                                                      (byte)((ulong)uVar10 >> 0x20),
                                                      CONCAT13(cVar9 + '\x02' + cVar2 ^
                                                               (byte)((ulong)uVar10 >> 0x18),
                                                               CONCAT12(cVar8 + '\x02' + cVar2 ^
                                                                        (byte)((ulong)uVar10 >> 0x10
                                                                              ),CONCAT11(cVar9 + 
                                                  cVar2 ^ (byte)((ulong)uVar10 >> 8),
                                                  cVar8 + cVar2 ^ (byte)uVar10)))))));
        puVar4 = puVar5;
        cVar9 = cVar9 + '\x10';
        cVar8 = cVar8 + '\x10';
      } while (puVar5 != (undefined8 *)((uVar7 & 0xfffffffffffffff0) + (long)param_1));
      uVar6 = uVar7 & 0xfffffffffffffff0;
      if ((uVar7 & 0xf) == 0) goto LAB_001c4750;
    }
    *(byte *)((long)param_1 + uVar6) = cVar2 + (char)uVar6 ^ *(byte *)((long)param_1 + uVar6);
    uVar1 = uVar6 + 1;
    if (uVar1 <= uVar7 && uVar7 - uVar1 != 0) {
      *(byte *)((long)param_1 + uVar1) = cVar2 + (char)uVar1 ^ *(byte *)((long)param_1 + uVar1);
      uVar1 = uVar6 + 2;
      if (uVar1 <= uVar7 && uVar7 - uVar1 != 0) {
        *(byte *)((long)param_1 + uVar1) = cVar2 + (char)uVar1 ^ *(byte *)((long)param_1 + uVar1);
        uVar1 = uVar6 + 3;
        if (uVar1 <= uVar7 && uVar7 - uVar1 != 0) {
          *(byte *)((long)param_1 + uVar1) = cVar2 + (char)uVar1 ^ *(byte *)((long)param_1 + uVar1);
          uVar1 = uVar6 + 4;
          if (uVar1 <= uVar7 && uVar7 - uVar1 != 0) {
            *(byte *)((long)param_1 + uVar1) =
                 cVar2 + (char)uVar1 ^ *(byte *)((long)param_1 + uVar1);
            uVar1 = uVar6 + 5;
            if (uVar1 <= uVar7 && uVar7 - uVar1 != 0) {
              *(byte *)((long)param_1 + uVar1) =
                   cVar2 + (char)uVar1 ^ *(byte *)((long)param_1 + uVar1);
              uVar1 = uVar6 + 6;
              if (uVar1 <= uVar7 && uVar7 - uVar1 != 0) {
                *(byte *)((long)param_1 + uVar1) =
                     cVar2 + (char)uVar1 ^ *(byte *)((long)param_1 + uVar1);
                uVar1 = uVar6 + 7;
                if (uVar1 <= uVar7 && uVar7 - uVar1 != 0) {
                  *(byte *)((long)param_1 + uVar1) =
                       cVar2 + (char)uVar1 ^ *(byte *)((long)param_1 + uVar1);
                  uVar1 = uVar6 + 8;
                  if (uVar1 <= uVar7 && uVar7 - uVar1 != 0) {
                    *(byte *)((long)param_1 + uVar1) =
                         cVar2 + (char)uVar1 ^ *(byte *)((long)param_1 + uVar1);
                    uVar1 = uVar6 + 9;
                    if (uVar1 <= uVar7 && uVar7 - uVar1 != 0) {
                      *(byte *)((long)param_1 + uVar1) =
                           cVar2 + (char)uVar1 ^ *(byte *)((long)param_1 + uVar1);
                      uVar1 = uVar6 + 10;
                      if (uVar1 <= uVar7 && uVar7 - uVar1 != 0) {
                        *(byte *)((long)param_1 + uVar1) =
                             cVar2 + (char)uVar1 ^ *(byte *)((long)param_1 + uVar1);
                        uVar1 = uVar6 + 0xb;
                        if (uVar1 <= uVar7 && uVar7 - uVar1 != 0) {
                          *(byte *)((long)param_1 + uVar1) =
                               cVar2 + (char)uVar1 ^ *(byte *)((long)param_1 + uVar1);
                          uVar1 = uVar6 + 0xc;
                          if (uVar1 <= uVar7 && uVar7 - uVar1 != 0) {
                            *(byte *)((long)param_1 + uVar1) =
                                 cVar2 + (char)uVar1 ^ *(byte *)((long)param_1 + uVar1);
                            uVar1 = uVar6 + 0xd;
                            if (uVar1 <= uVar7 && uVar7 - uVar1 != 0) {
                              *(byte *)((long)param_1 + uVar1) =
                                   cVar2 + (char)uVar1 ^ *(byte *)((long)param_1 + uVar1);
                              uVar6 = uVar6 + 0xe;
                              if (uVar6 <= uVar7 && uVar7 - uVar6 != 0) {
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
LAB_001c4750:
  param_1[param_2 - 1] = L'\0';
  return;
}


