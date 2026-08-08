/*
 * Ghidra decompilation
 *
 * Function : _ZN11SecPasswordeqERS_
 * Address  : 001c4a20
 * Program  : drastic64
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SecPassword::TEMPNAMEPLACEHOLDERVALUE(SecPassword&) */

void __thiscall SecPassword::operator==(SecPassword *this,SecPassword *param_1)

{
  SecPassword SVar1;
  char cVar2;
  int iVar3;
  __pid_t _Var4;
  wchar_t *pwVar5;
  undefined8 *puVar7;
  undefined8 uVar9;
  undefined8 uVar10;
  char cVar11;
  char cVar12;
  undefined8 local_410 [16];
  wchar_t awStack_390 [95];
  undefined4 local_214;
  undefined4 local_210;
  undefined8 auStack_190 [47];
  undefined4 local_14;
  undefined8 uStack_10;
  long local_8;
  wchar_t *pwVar6;
  undefined8 *puVar8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x200] == (SecPassword)0x0) {
    SVar1 = param_1[0x200];
    local_410[0]._0_4_ = L'\0';
  }
  else {
    memcpy(local_410,this,0x200);
    _Var4 = getpid();
    cVar2 = (char)_Var4 + 'K';
    puVar8 = local_410;
    cVar12 = '\x01';
    cVar11 = '\0';
    do {
      uVar10 = puVar8[1];
      uVar9 = *puVar8;
      puVar7 = puVar8 + 2;
      puVar8[1] = CONCAT17((byte)((ulong)uVar10 >> 0x38) ^ cVar12 + '\x0e' + cVar2,
                           CONCAT16((byte)((ulong)uVar10 >> 0x30) ^ cVar11 + '\x0e' + cVar2,
                                    CONCAT15((byte)((ulong)uVar10 >> 0x28) ^ cVar12 + '\f' + cVar2,
                                             CONCAT14((byte)((ulong)uVar10 >> 0x20) ^
                                                      cVar11 + '\f' + cVar2,
                                                      CONCAT13((byte)((ulong)uVar10 >> 0x18) ^
                                                               cVar12 + '\n' + cVar2,
                                                               CONCAT12((byte)((ulong)uVar10 >> 0x10
                                                                              ) ^ cVar11 + '\n' +
                                                                                  cVar2,
                                                                        CONCAT11((byte)((ulong)
                                                  uVar10 >> 8) ^ cVar12 + '\b' + cVar2,
                                                  (byte)uVar10 ^ cVar11 + '\b' + cVar2)))))));
      *puVar8 = CONCAT17((byte)((ulong)uVar9 >> 0x38) ^ cVar12 + '\x06' + cVar2,
                         CONCAT16((byte)((ulong)uVar9 >> 0x30) ^ cVar11 + '\x06' + cVar2,
                                  CONCAT15((byte)((ulong)uVar9 >> 0x28) ^ cVar12 + '\x04' + cVar2,
                                           CONCAT14((byte)((ulong)uVar9 >> 0x20) ^
                                                    cVar11 + '\x04' + cVar2,
                                                    CONCAT13((byte)((ulong)uVar9 >> 0x18) ^
                                                             cVar12 + '\x02' + cVar2,
                                                             CONCAT12((byte)((ulong)uVar9 >> 0x10) ^
                                                                      cVar11 + '\x02' + cVar2,
                                                                      CONCAT11((byte)((ulong)uVar9
                                                                                     >> 8) ^
                                                                               cVar12 + cVar2,
                                                                               (byte)uVar9 ^
                                                                               cVar11 + cVar2)))))))
      ;
      puVar8 = puVar7;
      cVar12 = cVar12 + '\x10';
      cVar11 = cVar11 + '\x10';
    } while (puVar7 != (undefined8 *)&local_210);
    SVar1 = param_1[0x200];
    local_214 = 0;
  }
  if (SVar1 == (SecPassword)0x0) {
    local_210 = 0;
  }
  else {
    memcpy(&local_210,param_1,0x200);
    _Var4 = getpid();
    cVar2 = (char)_Var4 + 'K';
    puVar8 = (undefined8 *)&local_210;
    cVar12 = '\x01';
    cVar11 = '\0';
    do {
      uVar10 = puVar8[1];
      uVar9 = *puVar8;
      puVar7 = puVar8 + 2;
      puVar8[1] = CONCAT17((byte)((ulong)uVar10 >> 0x38) ^ cVar12 + '\x0e' + cVar2,
                           CONCAT16((byte)((ulong)uVar10 >> 0x30) ^ cVar11 + '\x0e' + cVar2,
                                    CONCAT15((byte)((ulong)uVar10 >> 0x28) ^ cVar12 + '\f' + cVar2,
                                             CONCAT14((byte)((ulong)uVar10 >> 0x20) ^
                                                      cVar11 + '\f' + cVar2,
                                                      CONCAT13((byte)((ulong)uVar10 >> 0x18) ^
                                                               cVar12 + '\n' + cVar2,
                                                               CONCAT12((byte)((ulong)uVar10 >> 0x10
                                                                              ) ^ cVar11 + '\n' +
                                                                                  cVar2,
                                                                        CONCAT11((byte)((ulong)
                                                  uVar10 >> 8) ^ cVar12 + '\b' + cVar2,
                                                  (byte)uVar10 ^ cVar11 + '\b' + cVar2)))))));
      *puVar8 = CONCAT17((byte)((ulong)uVar9 >> 0x38) ^ cVar12 + '\x06' + cVar2,
                         CONCAT16((byte)((ulong)uVar9 >> 0x30) ^ cVar11 + '\x06' + cVar2,
                                  CONCAT15((byte)((ulong)uVar9 >> 0x28) ^ cVar12 + '\x04' + cVar2,
                                           CONCAT14((byte)((ulong)uVar9 >> 0x20) ^
                                                    cVar11 + '\x04' + cVar2,
                                                    CONCAT13((byte)((ulong)uVar9 >> 0x18) ^
                                                             cVar12 + '\x02' + cVar2,
                                                             CONCAT12((byte)((ulong)uVar9 >> 0x10) ^
                                                                      cVar11 + '\x02' + cVar2,
                                                                      CONCAT11((byte)((ulong)uVar9
                                                                                     >> 8) ^
                                                                               cVar12 + cVar2,
                                                                               (byte)uVar9 ^
                                                                               cVar11 + cVar2)))))))
      ;
      puVar8 = puVar7;
      cVar12 = cVar12 + '\x10';
      cVar11 = cVar11 + '\x10';
    } while (puVar7 != &uStack_10);
    local_14 = 0;
  }
  iVar3 = wcscmp((wchar_t *)local_410,&local_210);
  pwVar6 = (wchar_t *)local_410;
  do {
    pwVar5 = (wchar_t *)((long)pwVar6 + 1);
    *(undefined *)pwVar6 = 0;
    pwVar6 = pwVar5;
  } while (pwVar5 != awStack_390);
  puVar8 = (undefined8 *)&local_210;
  do {
    puVar7 = (undefined8 *)((long)puVar8 + 1);
    *(undefined *)puVar8 = 0;
    puVar8 = puVar7;
  } while (auStack_190 != puVar7);
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar3 == 0,local_8 - ___stack_chk_guard,0);
  }
  return;
}


