/*
 * Ghidra decompilation
 *
 * Function : pbkdf2
 * Address  : 001c10d0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* pbkdf2(unsigned char const*, unsigned long, unsigned char const*, unsigned long, unsigned char*,
   unsigned char*, unsigned char*, unsigned int) */

void pbkdf2(uchar *param_1,ulong param_2,uchar *param_3,ulong param_4,uchar *param_5,uchar *param_6,
           uchar *param_7,uint param_8)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  int iVar6;
  int aiStack_dc [2];
  undefined local_d4 [12];
  uchar *local_c8;
  uchar *puStack_c0;
  uchar *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  uchar auStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = param_4;
  if (0x3f < param_4) {
    uVar2 = 0x40;
  }
  __memcpy_chk(auStack_50,param_3,uVar2,0x44);
  auStack_50[param_4] = '\0';
  auStack_50[param_4 + 1] = '\0';
  auStack_50[param_4 + 2] = '\0';
  auStack_50[param_4 + 3] = '\x01';
  hmac_sha256(param_1,param_2,auStack_50,param_4 + 4,(uchar *)&local_b0);
  puVar4 = (undefined8 *)(ulong)(param_8 - 1);
  lVar5 = 1;
  aiStack_dc[1] = param_8 - 1;
  local_d4._0_8_ = 0x1000000010;
  local_90 = local_b0;
  uStack_88 = uStack_a8;
  local_80 = local_a0;
  uStack_78 = uStack_98;
  local_c8 = param_5;
  puStack_c0 = param_6;
  local_b8 = param_7;
  do {
    iVar3 = aiStack_dc[lVar5];
    if (iVar3 != 0) {
      iVar6 = 0;
      do {
        hmac_sha256(param_1,param_2,(uchar *)&local_b0,(ulong)&local_70,(uchar *)puVar4);
        uStack_a8 = uStack_68;
        local_b0 = local_70;
        iVar6 = iVar6 + 1;
        uStack_98 = uStack_58;
        local_a0 = local_60;
        local_90 = CONCAT17((byte)((ulong)local_90 >> 0x38) ^ (byte)((ulong)local_70 >> 0x38),
                            CONCAT16((byte)((ulong)local_90 >> 0x30) ^
                                     (byte)((ulong)local_70 >> 0x30),
                                     CONCAT15((byte)((ulong)local_90 >> 0x28) ^
                                              (byte)((ulong)local_70 >> 0x28),
                                              CONCAT14((byte)((ulong)local_90 >> 0x20) ^
                                                       (byte)((ulong)local_70 >> 0x20),
                                                       CONCAT13((byte)((ulong)local_90 >> 0x18) ^
                                                                (byte)((ulong)local_70 >> 0x18),
                                                                CONCAT12((byte)((ulong)local_90 >>
                                                                               0x10) ^
                                                                         (byte)((ulong)local_70 >>
                                                                               0x10),
                                                                         CONCAT11((byte)((ulong)
                                                  local_90 >> 8) ^ (byte)((ulong)local_70 >> 8),
                                                  (byte)local_90 ^ (byte)local_70)))))));
        uStack_88 = CONCAT17((byte)((ulong)uStack_88 >> 0x38) ^ (byte)((ulong)uStack_68 >> 0x38),
                             CONCAT16((byte)((ulong)uStack_88 >> 0x30) ^
                                      (byte)((ulong)uStack_68 >> 0x30),
                                      CONCAT15((byte)((ulong)uStack_88 >> 0x28) ^
                                               (byte)((ulong)uStack_68 >> 0x28),
                                               CONCAT14((byte)((ulong)uStack_88 >> 0x20) ^
                                                        (byte)((ulong)uStack_68 >> 0x20),
                                                        CONCAT13((byte)((ulong)uStack_88 >> 0x18) ^
                                                                 (byte)((ulong)uStack_68 >> 0x18),
                                                                 CONCAT12((byte)((ulong)uStack_88 >>
                                                                                0x10) ^
                                                                          (byte)((ulong)uStack_68 >>
                                                                                0x10),
                                                                          CONCAT11((byte)((ulong)
                                                  uStack_88 >> 8) ^ (byte)((ulong)uStack_68 >> 8),
                                                  (byte)uStack_88 ^ (byte)uStack_68)))))));
        local_80 = CONCAT17((byte)((ulong)local_80 >> 0x38) ^ (byte)((ulong)local_60 >> 0x38),
                            CONCAT16((byte)((ulong)local_80 >> 0x30) ^
                                     (byte)((ulong)local_60 >> 0x30),
                                     CONCAT15((byte)((ulong)local_80 >> 0x28) ^
                                              (byte)((ulong)local_60 >> 0x28),
                                              CONCAT14((byte)((ulong)local_80 >> 0x20) ^
                                                       (byte)((ulong)local_60 >> 0x20),
                                                       CONCAT13((byte)((ulong)local_80 >> 0x18) ^
                                                                (byte)((ulong)local_60 >> 0x18),
                                                                CONCAT12((byte)((ulong)local_80 >>
                                                                               0x10) ^
                                                                         (byte)((ulong)local_60 >>
                                                                               0x10),
                                                                         CONCAT11((byte)((ulong)
                                                  local_80 >> 8) ^ (byte)((ulong)local_60 >> 8),
                                                  (byte)local_80 ^ (byte)local_60)))))));
        uStack_78 = CONCAT17((byte)((ulong)uStack_78 >> 0x38) ^ (byte)((ulong)uStack_58 >> 0x38),
                             CONCAT16((byte)((ulong)uStack_78 >> 0x30) ^
                                      (byte)((ulong)uStack_58 >> 0x30),
                                      CONCAT15((byte)((ulong)uStack_78 >> 0x28) ^
                                               (byte)((ulong)uStack_58 >> 0x28),
                                               CONCAT14((byte)((ulong)uStack_78 >> 0x20) ^
                                                        (byte)((ulong)uStack_58 >> 0x20),
                                                        CONCAT13((byte)((ulong)uStack_78 >> 0x18) ^
                                                                 (byte)((ulong)uStack_58 >> 0x18),
                                                                 CONCAT12((byte)((ulong)uStack_78 >>
                                                                                0x10) ^
                                                                          (byte)((ulong)uStack_58 >>
                                                                                0x10),
                                                                          CONCAT11((byte)((ulong)
                                                  uStack_78 >> 8) ^ (byte)((ulong)uStack_58 >> 8),
                                                  (byte)uStack_78 ^ (byte)uStack_58)))))));
      } while (iVar3 != iVar6);
    }
    lVar1 = lVar5 * 8;
    lVar5 = lVar5 + 1;
    puVar4 = *(undefined8 **)(local_d4 + lVar1 + 4);
    *puVar4 = local_90;
    puVar4[1] = uStack_88;
    puVar4[2] = local_80;
    puVar4[3] = uStack_78;
  } while (lVar5 != 4);
  cleandata(auStack_50,0x44);
  cleandata(&local_90,0x20);
  cleandata(&local_b0,0x20);
  cleandata(&local_70,0x20);
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


