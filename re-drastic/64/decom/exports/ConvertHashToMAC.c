/*
 * Ghidra decompilation
 *
 * Function : ConvertHashToMAC
 * Address  : 001c12d0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ConvertHashToMAC(HashValue*, unsigned char*) */

void ConvertHashToMAC(HashValue *param_1,uchar *param_2)

{
  int iVar1;
  undefined8 *in_x4;
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined4 local_38 [2];
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = *(int *)param_1;
  if (iVar1 == 2) {
    local_38[0] = *(undefined4 *)(param_1 + 4);
    in_x4 = &local_30;
    hmac_sha256(param_2,0x20,(uchar *)local_38,4,(uchar *)in_x4);
    iVar1 = *(int *)param_1;
    auVar2[0] = (byte)((ulong)uStack_18 >> 0x20) ^
                (byte)uStack_18 ^
                (byte)((ulong)uStack_28 >> 0x20) ^
                (byte)((ulong)local_20 >> 0x20) ^
                (byte)uStack_28 ^ (byte)local_20 ^ (byte)((ulong)local_30 >> 0x20) ^ (byte)local_30;
    auVar2._1_3_ = 0;
    auVar2[4] = (byte)((ulong)uStack_18 >> 0x28) ^
                (byte)((ulong)uStack_18 >> 8) ^
                (byte)((ulong)uStack_28 >> 0x28) ^
                (byte)((ulong)local_20 >> 0x28) ^
                (byte)((ulong)uStack_28 >> 8) ^
                (byte)((ulong)local_20 >> 8) ^
                (byte)((ulong)local_30 >> 0x28) ^ (byte)((ulong)local_30 >> 8);
    auVar2._5_3_ = 0;
    auVar2[8] = (byte)((ulong)uStack_18 >> 0x30) ^
                (byte)((ulong)uStack_18 >> 0x10) ^
                (byte)((ulong)uStack_28 >> 0x30) ^
                (byte)((ulong)local_20 >> 0x30) ^
                (byte)((ulong)uStack_28 >> 0x10) ^
                (byte)((ulong)local_20 >> 0x10) ^
                (byte)((ulong)local_30 >> 0x30) ^ (byte)((ulong)local_30 >> 0x10);
    auVar2._9_3_ = 0;
    auVar2[12] = (byte)((ulong)uStack_18 >> 0x38) ^
                 (byte)((ulong)uStack_18 >> 0x18) ^
                 (byte)((ulong)uStack_28 >> 0x38) ^
                 (byte)((ulong)local_20 >> 0x38) ^
                 (byte)((ulong)uStack_28 >> 0x18) ^
                 (byte)((ulong)local_20 >> 0x18) ^
                 (byte)((ulong)local_30 >> 0x38) ^ (byte)((ulong)local_30 >> 0x18);
    auVar2._13_3_ = 0;
    auVar2 = NEON_sshl(auVar2,_DAT_00228aa0,4);
    auVar4 = NEON_ext(auVar2,ZEXT816(0),8,1);
    auVar3[0] = auVar2[0] ^ auVar4[0];
    auVar3[1] = auVar2[1] ^ auVar4[1];
    auVar3[2] = auVar2[2] ^ auVar4[2];
    auVar3[3] = auVar2[3] ^ auVar4[3];
    auVar3[4] = auVar2[4] ^ auVar4[4];
    auVar3[5] = auVar2[5] ^ auVar4[5];
    auVar3[6] = auVar2[6] ^ auVar4[6];
    auVar3[7] = auVar2[7] ^ auVar4[7];
    auVar3[8] = auVar2[8] ^ auVar4[8];
    auVar3[9] = auVar2[9] ^ auVar4[9];
    auVar3[10] = auVar2[10] ^ auVar4[10];
    auVar3[11] = auVar2[11] ^ auVar4[11];
    auVar3[12] = auVar2[12] ^ auVar4[12];
    auVar3[13] = auVar2[13] ^ auVar4[13];
    auVar3[14] = auVar2[14] ^ auVar4[14];
    auVar3[15] = auVar2[15] ^ auVar4[15];
    auVar2 = NEON_ext(auVar3,ZEXT816(0),4,1);
    *(uint *)(param_1 + 4) =
         CONCAT13(auVar3[3] ^ auVar2[3],
                  CONCAT12(auVar3[2] ^ auVar2[2],
                           CONCAT11(auVar3[1] ^ auVar2[1],auVar3[0] ^ auVar2[0])));
  }
  if (iVar1 == 3) {
                    /* WARNING: Read-only address (ram,0x00228aa0) is written */
    hmac_sha256(param_2,0x20,(uchar *)(param_1 + 4),(ulong)&local_30,(uchar *)in_x4);
    *(undefined8 *)(param_1 + 4) = local_30;
    *(undefined8 *)(param_1 + 0xc) = uStack_28;
    *(undefined8 *)(param_1 + 0x14) = local_20;
    *(undefined8 *)(param_1 + 0x1c) = uStack_18;
  }
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


