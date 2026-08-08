/*
 * Ghidra decompilation
 *
 * Function : FUN_001c476c
 * Address  : 001c476c
 * Program  : drastic64
 */


void FUN_001c476c(undefined8 *param_1,wchar_t *param_2)

{
  __pid_t _Var1;
  size_t sVar2;
  size_t __n;
  undefined8 *puVar3;
  undefined8 *puVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if (*param_2 == L'\0') {
    *(undefined *)(param_1 + 0x40) = 0;
    memset(param_1,0,0x200);
    return;
  }
  *(undefined *)(param_1 + 0x40) = 1;
  sVar2 = wcslen(param_2);
  __n = (sVar2 + 1) * 4;
  if (0x7f < sVar2 + 1) {
    __n = 0x200;
  }
  memcpy(param_1,param_2,__n);
  _Var1 = getpid();
  cVar5 = (char)_Var1 + 'K';
  puVar3 = param_1;
  cVar7 = '\x01';
  cVar6 = '\0';
  do {
    uVar9 = puVar3[1];
    uVar8 = *puVar3;
    puVar4 = puVar3 + 2;
    puVar3[1] = CONCAT17(cVar7 + '\x0e' + cVar5 ^ (byte)((ulong)uVar9 >> 0x38),
                         CONCAT16(cVar6 + '\x0e' + cVar5 ^ (byte)((ulong)uVar9 >> 0x30),
                                  CONCAT15(cVar7 + '\f' + cVar5 ^ (byte)((ulong)uVar9 >> 0x28),
                                           CONCAT14(cVar6 + '\f' + cVar5 ^
                                                    (byte)((ulong)uVar9 >> 0x20),
                                                    CONCAT13(cVar7 + '\n' + cVar5 ^
                                                             (byte)((ulong)uVar9 >> 0x18),
                                                             CONCAT12(cVar6 + '\n' + cVar5 ^
                                                                      (byte)((ulong)uVar9 >> 0x10),
                                                                      CONCAT11(cVar7 + '\b' + cVar5
                                                                               ^ (byte)((ulong)uVar9
                                                                                       >> 8),
                                                                               cVar6 + '\b' + cVar5
                                                                               ^ (byte)uVar9)))))));
    *puVar3 = CONCAT17(cVar7 + '\x06' + cVar5 ^ (byte)((ulong)uVar8 >> 0x38),
                       CONCAT16(cVar6 + '\x06' + cVar5 ^ (byte)((ulong)uVar8 >> 0x30),
                                CONCAT15(cVar7 + '\x04' + cVar5 ^ (byte)((ulong)uVar8 >> 0x28),
                                         CONCAT14(cVar6 + '\x04' + cVar5 ^
                                                  (byte)((ulong)uVar8 >> 0x20),
                                                  CONCAT13(cVar7 + '\x02' + cVar5 ^
                                                           (byte)((ulong)uVar8 >> 0x18),
                                                           CONCAT12(cVar6 + '\x02' + cVar5 ^
                                                                    (byte)((ulong)uVar8 >> 0x10),
                                                                    CONCAT11(cVar7 + cVar5 ^
                                                                             (byte)((ulong)uVar8 >>
                                                                                   8),cVar6 + cVar5
                                                                                      ^ (byte)uVar8)
                                                                   ))))));
    puVar3 = puVar4;
    cVar7 = cVar7 + '\x10';
    cVar6 = cVar6 + '\x10';
  } while (param_1 + 0x40 != puVar4);
  return;
}


