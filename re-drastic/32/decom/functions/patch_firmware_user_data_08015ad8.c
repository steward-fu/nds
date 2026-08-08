/*
 * Ghidra decompilation
 *
 * Function : patch_firmware_user_data
 * Address  : 08015ad8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void patch_firmware_user_data(config_firmware_struct *config_firmware,u8 *firmware_data)

{
  size_t sVar1;
  u32 username_length;
  u8 *__s;
  int iVar2;
  undefined2 *puVar3;
  uint uVar5;
  size_t sVar6;
  undefined4 *puVar7;
  u32 uVar8;
  uint uVar9;
  undefined8 uVar11;
  undefined auVar10 [16];
  undefined auVar12 [16];
  u16 username_utf16 [11];
  u16 message_utf16 [27];
  char message_char [26];
  int local_2c;
  undefined2 *puVar4;
  
  username_utf16[0] = 0;
  username_utf16[1] = 0;
  username_utf16[2] = 0;
  username_utf16[3] = 0;
  username_utf16[4] = 0;
  username_utf16[5] = 0;
  username_utf16[6] = 0;
  message_char[0] = 'd';
  message_char[1] = 'e';
  message_char[2] = 's';
  message_char[3] = 'p';
  message_char[4] = 'e';
  message_char[5] = 'r';
  message_char[6] = 'a';
  message_char[7] = 't';
  username_utf16[7] = 0;
  username_utf16[8] = 0;
  username_utf16[9] = 0;
  username_utf16[10] = 0;
  message_char[8] = 'e';
  message_char[9] = ' ';
  message_char[10] = 'd';
  message_char[11] = 'r';
  message_char[12] = 'a';
  message_char[13] = 's';
  message_char[14] = 't';
  message_char[15] = 'i';
  message_char[16] = 'c';
  message_char[17] = ' ';
  message_char[18] = 'm';
  message_char[19] = 'e';
  message_char[20] = 'a';
  message_char[21] = 's';
  message_char[22] = 'u';
  message_char[23] = 'r';
  message_char[24] = 'e';
  message_char[25] = '\0';
  local_2c = __stack_chk_guard;
  sVar1 = wcslen(config_firmware->username);
  if (sVar1 != 0) {
    iVar2 = (sVar1 - 8 >> 3) + 1;
    sVar6 = iVar2 * 8;
    if (sVar1 - 1 < 7) {
      sVar6 = 0;
    }
    else {
      username_utf16._0_8_ = VectorCopyNarrow(*(undefined (*) [16])config_firmware->username,4);
      uVar11 = VectorCopyNarrow(*(undefined (*) [16])(config_firmware->username + 4),4);
      username_utf16._8_4_ = (undefined4)uVar11;
      username_utf16[6] = (u16)((ulonglong)uVar11 >> 0x20);
      username_utf16[7] = (u16)((ulonglong)uVar11 >> 0x30);
      if (iVar2 != 1) {
        uVar11 = VectorCopyNarrow(*(undefined (*) [16])(config_firmware->username + 8),4);
        VectorCopyNarrow(*(undefined (*) [16])&config_firmware->favorite_color,4);
        username_utf16._16_4_ = (undefined4)uVar11;
        username_utf16[10] = (u16)((ulonglong)uVar11 >> 0x20);
      }
      if (sVar1 == sVar6) goto LAB_08015c98;
    }
    username_utf16[sVar6] = (u16)config_firmware->username[sVar6];
    if (sVar6 + 1 < sVar1) {
      username_utf16[sVar6 + 1] = (u16)config_firmware->username[sVar6 + 1];
      if (sVar6 + 2 < sVar1) {
        username_utf16[sVar6 + 2] = (u16)config_firmware->username[sVar6 + 2];
        if (sVar6 + 3 < sVar1) {
          username_utf16[sVar6 + 3] = (u16)config_firmware->username[sVar6 + 3];
          if (sVar6 + 4 < sVar1) {
            username_utf16[sVar6 + 4] = (u16)config_firmware->username[sVar6 + 4];
            if (sVar6 + 5 < sVar1) {
              username_utf16[sVar6 + 5] = (u16)config_firmware->username[sVar6 + 5];
              if (sVar6 + 6 < sVar1) {
                username_utf16[sVar6 + 6] = (u16)config_firmware->username[sVar6 + 6];
              }
            }
          }
        }
      }
    }
  }
LAB_08015c98:
  puVar7 = (undefined4 *)(firmware_data + 0x3fe06);
  auVar12 = VectorCopyLong(CONCAT44(message_char._4_4_,message_char._0_4_),1,1);
  message_utf16._32_4_ = CONCAT13(0,CONCAT12(message_char[17],(ushort)(byte)message_char[16]));
  auVar10 = VectorCopyLong(CONCAT44(message_char._12_4_,message_char._8_4_),1,1);
  message_utf16[20] = (u16)(byte)message_char[20];
  message_utf16._0_8_ = auVar12._0_8_;
  message_utf16._8_8_ = auVar12._8_8_;
  message_utf16[21] = (u16)(byte)message_char[21];
  message_utf16._16_8_ = auVar10._0_8_;
  message_utf16._24_8_ = auVar10._8_8_;
  message_utf16._32_6_ = CONCAT15(0,CONCAT14(message_char[18],message_utf16._32_4_));
  message_utf16[19]._0_1_ = message_char[19];
  message_utf16[19]._1_1_ = 0;
  message_utf16[22] = (u16)(byte)message_char[22];
  username_utf16[sVar1] = 0;
  do {
    *(undefined2 *)((int)puVar7 + -6) = 5;
    *(u8 *)(puVar7 + -1) = (u8)config_firmware->favorite_color;
    *(u8 *)((int)puVar7 + -3) = (char)config_firmware->birthday_month + '\x01';
    uVar8 = config_firmware->birthday_day;
    puVar7[3] = CONCAT22(username_utf16[7],username_utf16[6]);
    *(u8 *)((int)puVar7 + -1) = '\0';
    *(u8 *)((int)puVar7 + -2) = (u8)uVar8;
    *puVar7 = username_utf16._0_4_;
    puVar7[1] = username_utf16._4_4_;
    puVar7[2] = username_utf16._8_4_;
    puVar7[4] = username_utf16._16_4_;
    *(short *)(puVar7 + 5) = (short)sVar1;
    *(undefined4 *)((int)puVar7 + 0x1e) = message_utf16._8_4_;
    *(undefined4 *)((int)puVar7 + 0x22) = message_utf16._12_4_;
    *(undefined4 *)((int)puVar7 + 0x16) = message_utf16._0_4_;
    *(undefined4 *)((int)puVar7 + 0x2a) = message_utf16._20_4_;
    *(undefined4 *)((int)puVar7 + 0x1a) = message_utf16._4_4_;
    *(undefined4 *)((int)puVar7 + 0x32) = message_utf16._28_4_;
    *(undefined4 *)((int)puVar7 + 0x26) = message_utf16._16_4_;
    *(undefined4 *)((int)puVar7 + 0x2e) = message_utf16._24_4_;
    *(undefined2 *)((int)puVar7 + 0x4a) = 0x19;
    *(undefined2 *)((int)puVar7 + 0x52) = 0x200;
    *(undefined2 *)(puVar7 + 0x15) = 0x200;
    *(u8 *)((int)puVar7 + 0x56) = ' ';
    *(undefined4 *)((int)puVar7 + 0x36) = message_utf16._32_4_;
    *(undefined4 *)((int)puVar7 + 0x3a) = message_utf16._36_4_;
    *(uint *)((int)puVar7 + 0x3e) = CONCAT22(message_utf16[21],message_utf16[20]);
    *(uint *)((int)puVar7 + 0x42) = (uint)CONCAT12(message_char[23],message_utf16[22]);
    *(uint *)((int)puVar7 + 0x46) = (uint)(message_char._24_2_ & 0xff);
    *(u8 *)((int)puVar7 + 0x57) = ' ';
    *(undefined2 *)(puVar7 + 0x13) = 0;
    *(undefined2 *)((int)puVar7 + 0x4d) = 0;
    *(undefined2 *)((int)puVar7 + 0x4e) = 0;
    *(undefined2 *)(puVar7 + 0x14) = 0;
    *(u8 *)((int)puVar7 + 0x51) = '\0';
    *(undefined2 *)(puVar7 + 0x16) = 0xe00;
    *(undefined2 *)((int)puVar7 + 0x5a) = 0x800;
    *(u8 *)(puVar7 + 0x17) = 0xe0;
    uVar5 = 0xffff;
    *(u8 *)((int)puVar7 + 0x5d) = 0x80;
    uVar8 = config_firmware->language;
    *(undefined4 *)((int)puVar7 + 0x62) = 0;
    *(short *)((int)puVar7 + 0x5e) = (short)uVar8;
    *(undefined4 *)((int)puVar7 + 0x66) = 0xff;
    *(undefined2 *)((int)puVar7 + 0x6a) = 0;
    puVar4 = (undefined2 *)((int)puVar7 + -6);
    do {
      puVar3 = (undefined2 *)((int)puVar4 + 1);
      uVar9 = (uVar5 ^ *(byte *)puVar4) >> 1;
      if (((uVar5 ^ *(byte *)puVar4) & 1) != 0) {
        uVar9 = uVar9 ^ 0x606080;
      }
      uVar5 = uVar9 >> 1;
      if ((uVar9 & 1) != 0) {
        uVar5 = uVar9 >> 1 ^ 0x306040;
      }
      uVar9 = uVar5 >> 1;
      if ((uVar5 & 1) != 0) {
        uVar9 = uVar5 >> 1 ^ 0x186020;
      }
      uVar5 = uVar9 >> 1;
      if ((uVar9 & 1) != 0) {
        uVar5 = uVar9 >> 1 ^ 0xc6010;
      }
      uVar9 = uVar5 >> 1;
      if ((uVar5 & 1) != 0) {
        uVar9 = uVar5 >> 1 ^ 0x66008;
      }
      uVar5 = uVar9 >> 1;
      if ((uVar9 & 1) != 0) {
        uVar5 = uVar9 >> 1 ^ 0x36004;
      }
      uVar9 = uVar5 >> 1;
      if ((uVar5 & 1) != 0) {
        uVar9 = uVar5 >> 1 ^ 0x1e002;
      }
      uVar5 = uVar9 >> 1;
      if ((uVar9 & 1) != 0) {
        uVar5 = uVar9 >> 1 ^ 0xa001;
      }
      puVar4 = puVar3;
    } while (puVar3 != (undefined2 *)((int)puVar7 + 0x6a));
    *(short *)(puVar7 + 0x1b) = (short)uVar5;
    __s = (u8 *)((int)puVar7 + 0x72);
    puVar7 = puVar7 + 0x40;
    memset(__s,0,0x86);
  } while (puVar7 != (undefined4 *)(firmware_data + 0x40006));
  if (local_2c == __stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


