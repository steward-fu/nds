/*
 * Ghidra decompilation
 *
 * Function : _ZN11SecPassword6LengthEv
 * Address  : 001c48b0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SecPassword::Length() */

void SecPassword::Length(void)

{
  char cVar1;
  __pid_t _Var2;
  void *in_x0;
  size_t sVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char cVar8;
  char cVar9;
  undefined4 local_210;
  undefined8 auStack_190 [47];
  undefined4 local_14;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(char *)((long)in_x0 + 0x200) == '\0') {
    local_210 = 0;
  }
  else {
    memcpy(&local_210,in_x0,0x200);
    _Var2 = getpid();
    cVar1 = (char)_Var2 + 'K';
    puVar5 = (undefined8 *)&local_210;
    cVar9 = '\x01';
    cVar8 = '\0';
    do {
      uVar7 = puVar5[1];
      uVar6 = *puVar5;
      puVar4 = puVar5 + 2;
      puVar5[1] = CONCAT17((byte)((ulong)uVar7 >> 0x38) ^ cVar9 + '\x0e' + cVar1,
                           CONCAT16((byte)((ulong)uVar7 >> 0x30) ^ cVar8 + '\x0e' + cVar1,
                                    CONCAT15((byte)((ulong)uVar7 >> 0x28) ^ cVar9 + '\f' + cVar1,
                                             CONCAT14((byte)((ulong)uVar7 >> 0x20) ^
                                                      cVar8 + '\f' + cVar1,
                                                      CONCAT13((byte)((ulong)uVar7 >> 0x18) ^
                                                               cVar9 + '\n' + cVar1,
                                                               CONCAT12((byte)((ulong)uVar7 >> 0x10)
                                                                        ^ cVar8 + '\n' + cVar1,
                                                                        CONCAT11((byte)((ulong)uVar7
                                                                                       >> 8) ^
                                                                                 cVar9 + '\b' +
                                                                                 cVar1,(byte)uVar7 ^
                                                                                       cVar8 + '\b'
                                                                                       + cVar1))))))
                          );
      *puVar5 = CONCAT17((byte)((ulong)uVar6 >> 0x38) ^ cVar9 + '\x06' + cVar1,
                         CONCAT16((byte)((ulong)uVar6 >> 0x30) ^ cVar8 + '\x06' + cVar1,
                                  CONCAT15((byte)((ulong)uVar6 >> 0x28) ^ cVar9 + '\x04' + cVar1,
                                           CONCAT14((byte)((ulong)uVar6 >> 0x20) ^
                                                    cVar8 + '\x04' + cVar1,
                                                    CONCAT13((byte)((ulong)uVar6 >> 0x18) ^
                                                             cVar9 + '\x02' + cVar1,
                                                             CONCAT12((byte)((ulong)uVar6 >> 0x10) ^
                                                                      cVar8 + '\x02' + cVar1,
                                                                      CONCAT11((byte)((ulong)uVar6
                                                                                     >> 8) ^
                                                                               cVar9 + cVar1,
                                                                               (byte)uVar6 ^
                                                                               cVar8 + cVar1)))))));
      puVar5 = puVar4;
      cVar9 = cVar9 + '\x10';
      cVar8 = cVar8 + '\x10';
    } while (puVar4 != &uStack_10);
    local_14 = 0;
  }
  sVar3 = wcslen(&local_210);
  puVar5 = (undefined8 *)&local_210;
  do {
    puVar4 = (undefined8 *)((long)puVar5 + 1);
    *(undefined *)puVar5 = 0;
    puVar5 = puVar4;
  } while (auStack_190 != puVar4);
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(sVar3,local_8 - ___stack_chk_guard,0);
}


