/*
 * Ghidra decompilation
 *
 * Function : rtc_write
 * Address  : 08091f80
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

u8 rtc_write(rtc_struct *rtc,u32 value)

{
  int iVar1;
  tm *ptVar2;
  tm *current_tm;
  tm *current_tm_1;
  system_struct *psVar3;
  u32 hour_1;
  uint uVar4;
  u8 uVar6;
  byte bVar7;
  uint uVar8;
  u32 hour;
  byte unaff_r4;
  byte bVar9;
  u32 clock;
  byte bVar10;
  time_t current_time;
  int local_24;
  uint uVar5;
  
  local_24 = __stack_chk_guard;
  bVar9 = (byte)value;
  if (((value & 2 ^ 2) & (uint)rtc->last_clock) == 0) {
    bVar10 = rtc->last_output_bit;
    unaff_r4 = bVar9;
  }
  else {
    bVar10 = (byte)(value & 0x10);
    if ((value & 0x10) == 0) {
      if (rtc->state == '\x01') {
        uVar6 = rtc->shift_register_position + '\x01';
        bVar10 = rtc->shift_register & 1;
        if (uVar6 != '\b') {
          unaff_r4 = bVar9;
        }
        rtc->last_output_bit = bVar10;
        rtc->shift_register = rtc->shift_register >> 1;
        rtc->shift_register_position = uVar6;
        if (uVar6 == '\b') {
          if (rtc->parameter_buffer_position == '\0') {
            rtc->state = '\0';
          }
          else {
            bVar7 = rtc->parameter_buffer_position - 1;
            rtc->parameter_buffer_position = bVar7;
            rtc->shift_register = rtc->parameter_buffer[bVar7];
          }
          rtc->shift_register_position = '\0';
          unaff_r4 = bVar9;
        }
      }
      else {
        rtc->last_output_bit = '\0';
        unaff_r4 = bVar9;
      }
    }
    else {
      uVar8 = (value & 0xff) << 7;
      uVar6 = rtc->shift_register_position + '\x01';
      bVar7 = rtc->shift_register >> 1;
      bVar10 = (byte)uVar8 | bVar7;
      rtc->shift_register = bVar10;
      rtc->shift_register_position = uVar6;
      if (uVar6 == '\b') {
        if (rtc->state == '\x02') {
          bVar7 = rtc->parameter_buffer_position - 1;
          rtc->parameter_buffer_position = bVar7;
          rtc->parameter_buffer[bVar7] = bVar10;
          if (bVar7 == 0) {
            __printf_chk(1,"Unsupported RTC command write: %x\n",2);
          }
        }
        else {
          uVar8 = (uVar8 & 0xff) >> 7;
          uVar6 = (u8)uVar8;
          uVar4 = (uint)bVar7 << 0x19;
          uVar5 = uVar4 >> 0x1d;
          if (uVar8 == 0) {
            uVar6 = '\x02';
          }
          rtc->command = (byte)(uVar4 >> 0x1d);
          if (uVar8 == 0) {
            rtc->state = uVar6;
          }
          else {
            rtc->state = '\x01';
            switch(uVar5) {
            case 0:
              rtc->parameter_buffer[0] = rtc->status1;
              break;
            default:
              __printf_chk(1,"Unsupported RTC command read: %x\n");
              uVar5 = (uint)rtc->command;
              break;
            case 2:
              psVar3 = rtc->system;
              if ((psVar3->config).rtc_system_time == 0) {
                iVar1 = __aeabi_uldivmod(*(undefined4 *)&psVar3->frame_number,
                                         *(undefined4 *)((int)&psVar3->frame_number + 4),0x3c,0);
                current_time = rtc->base_time + iVar1;
              }
              else {
                current_time = time((time_t *)0x0);
              }
              ptVar2 = localtime(&current_time);
              uVar8 = ptVar2->tm_hour;
              if (uVar8 < 0xc) {
                bVar10 = 0;
              }
              else {
                bVar10 = 0x40;
                if ((rtc->status1 & 2) == 0) {
                  uVar8 = uVar8 - 0xc;
                }
              }
              uVar5 = (uint)rtc->command;
              rtc->parameter_buffer[0] =
                   (char)ptVar2->tm_sec + (char)((uint)ptVar2->tm_sec / 10) * '\x06';
              uVar4 = ptVar2->tm_min;
              rtc->parameter_buffer[2] = (char)uVar8 + (char)(uVar8 / 10) * '\x06' | bVar10;
              rtc->parameter_buffer[1] = (char)uVar4 + (char)(uVar4 / 10) * '\x06';
              rtc->parameter_buffer[3] = (u8)ptVar2->tm_wday;
              rtc->parameter_buffer[4] =
                   (char)ptVar2->tm_mday + (char)((uint)ptVar2->tm_mday / 10) * '\x06';
              uVar8 = ptVar2->tm_mon + 1;
              rtc->parameter_buffer[5] = (char)uVar8 + (char)(uVar8 / 10) * '\x06';
              uVar8 = ptVar2->tm_year - 100;
              rtc->parameter_buffer[6] = (char)uVar8 + (char)(uVar8 / 10) * '\x06';
              break;
            case 4:
              rtc->parameter_buffer[0] = rtc->status2;
              break;
            case 6:
              psVar3 = rtc->system;
              if ((psVar3->config).rtc_system_time == 0) {
                iVar1 = __aeabi_uldivmod(*(undefined4 *)&psVar3->frame_number,
                                         *(undefined4 *)((int)&psVar3->frame_number + 4),0x3c,0);
                current_time = rtc->base_time + iVar1;
              }
              else {
                current_time = time((time_t *)0x0);
              }
              ptVar2 = localtime(&current_time);
              uVar8 = ptVar2->tm_hour;
              if (uVar8 < 0xc) {
                bVar10 = 0;
              }
              else {
                bVar10 = 0x40;
                if ((rtc->status1 & 2) == 0) {
                  uVar8 = uVar8 - 0xc;
                }
              }
              uVar5 = (uint)rtc->command;
              rtc->parameter_buffer[0] =
                   (char)ptVar2->tm_sec + (char)((uint)ptVar2->tm_sec / 10) * '\x06';
              uVar4 = ptVar2->tm_min;
              rtc->parameter_buffer[2] = (char)uVar8 + (char)(uVar8 / 10) * '\x06' | bVar10;
              rtc->parameter_buffer[1] = (char)uVar4 + (char)(uVar4 / 10) * '\x06';
            }
            uVar6 = "\x01\x01\a\x01\x01\x03\x03\x01"[uVar5];
            rtc->parameter_buffer_position = uVar6 - 1;
            rtc->shift_register = rtc->parameter_buffer[(byte)(uVar6 - 1)];
          }
        }
        bVar10 = rtc->last_output_bit;
        rtc->shift_register_position = '\0';
        unaff_r4 = bVar9;
      }
      else {
        bVar10 = rtc->last_output_bit;
        unaff_r4 = bVar9;
      }
    }
  }
  rtc->last_clock = (u8)(value & 2);
  if (local_24 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar10 | unaff_r4 & 0xfe;
}


