/*
 * Ghidra decompilation
 *
 * Function : rtc_write
 * Address  : 00171600
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rtc_write(ulong **param_1,uint param_2)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  tm *ptVar6;
  byte bVar7;
  long local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((param_2 & 2 ^ 2) & (uint)*(byte *)((long)param_1 + 0x1d)) != 0) {
    if ((param_2 >> 4 & 1) == 0) {
      if (*(char *)(param_1 + 3) == '\x01') {
        uVar3 = *(byte *)((long)param_1 + 0x1e) & 1;
        cVar1 = *(char *)((long)param_1 + 0x1f) + '\x01';
        *(char *)((long)param_1 + 0x1c) = (char)uVar3;
        *(byte *)((long)param_1 + 0x1e) = *(byte *)((long)param_1 + 0x1e) >> 1;
        *(char *)((long)param_1 + 0x1f) = cVar1;
        if (cVar1 == '\b') {
          if (*(char *)(param_1 + 4) == '\0') {
            *(undefined *)(param_1 + 3) = 0;
            *(undefined *)((long)param_1 + 0x1f) = 0;
          }
          else {
            bVar7 = *(char *)(param_1 + 4) - 1;
            *(byte *)(param_1 + 4) = bVar7;
            *(undefined *)((long)param_1 + 0x1e) =
                 *(undefined *)((long)param_1 + (ulong)bVar7 + 0x10);
            *(undefined *)((long)param_1 + 0x1f) = 0;
          }
        }
      }
      else {
        uVar3 = 0;
        *(undefined *)((long)param_1 + 0x1c) = 0;
      }
      goto LAB_00171674;
    }
    bVar7 = *(byte *)((long)param_1 + 0x1e);
    bVar2 = (byte)((param_2 & 1) << 7) | bVar7 >> 1;
    cVar1 = *(char *)((long)param_1 + 0x1f) + '\x01';
    *(byte *)((long)param_1 + 0x1e) = bVar2;
    *(char *)((long)param_1 + 0x1f) = cVar1;
    if (cVar1 == '\b') {
      if (*(char *)(param_1 + 3) == '\x02') {
        bVar7 = *(char *)(param_1 + 4) - 1;
        *(byte *)(param_1 + 4) = bVar7;
        *(byte *)((long)param_1 + (ulong)bVar7 + 0x10) = bVar2;
        if (bVar7 == 0) {
          __printf_chk(1,"Unsupported RTC command write: %x\n");
        }
      }
      else {
        bVar7 = bVar7 >> 5;
        *(byte *)((long)param_1 + 0x19) = bVar7;
        if ((param_2 & 1) == 0) {
          *(undefined *)(param_1 + 3) = 2;
        }
        else {
          *(undefined *)(param_1 + 3) = 1;
          if (bVar7 == 4) {
            *(undefined *)(param_1 + 2) = *(undefined *)((long)param_1 + 0x1b);
            uVar3 = 4;
          }
          else if (bVar7 < 5) {
            if (bVar7 == 0) {
              uVar3 = 0;
              *(undefined *)(param_1 + 2) = *(undefined *)((long)param_1 + 0x1a);
            }
            else {
              if (bVar7 != 2) goto LAB_00171990;
              if (*(int *)(*param_1 + 0x10b4e) == 0) {
                local_10 = (long)param_1[1] + **param_1 / 0x3c;
              }
              else {
                local_10 = time((time_t *)0x0);
              }
              ptVar6 = localtime(&local_10);
              uVar5 = ptVar6->tm_hour;
              bVar7 = 0;
              if ((0xb < uVar5) && (bVar7 = 0x40, (*(byte *)((long)param_1 + 0x1a) >> 1 & 1) == 0))
              {
                uVar5 = uVar5 - 0xc;
              }
              uVar3 = (uint)*(byte *)((long)param_1 + 0x19);
              uVar4 = (uint)ptVar6->tm_sec / 10;
              *(char *)(param_1 + 2) = (char)ptVar6->tm_sec + (char)uVar4 * -10 + (char)(uVar4 << 4)
              ;
              uVar4 = ptVar6->tm_min;
              *(byte *)((long)param_1 + 0x12) =
                   (char)uVar5 + (char)(uVar5 / 10) * -10 + (char)(uVar5 / 10 << 4) | bVar7;
              uVar5 = uVar4 / 10;
              *(char *)((long)param_1 + 0x11) = (char)uVar4 + (char)uVar5 * -10 + (char)(uVar5 << 4)
              ;
              *(char *)((long)param_1 + 0x13) = (char)ptVar6->tm_wday;
              uVar5 = (uint)ptVar6->tm_mday / 10;
              *(char *)((long)param_1 + 0x14) =
                   (char)ptVar6->tm_mday + (char)uVar5 * -10 + (char)(uVar5 << 4);
              uVar5 = ptVar6->tm_mon + 1;
              uVar4 = uVar5 / 10;
              *(char *)((long)param_1 + 0x15) = (char)uVar5 + (char)uVar4 * -10 + (char)(uVar4 << 4)
              ;
              uVar5 = ptVar6->tm_year - 100;
              uVar4 = uVar5 / 10;
              *(char *)((long)param_1 + 0x16) = (char)uVar5 + (char)uVar4 * -10 + (char)(uVar4 << 4)
              ;
            }
          }
          else if (bVar7 == 6) {
            if (*(int *)(*param_1 + 0x10b4e) == 0) {
              local_10 = (long)param_1[1] + **param_1 / 0x3c;
            }
            else {
              local_10 = time((time_t *)0x0);
            }
            ptVar6 = localtime(&local_10);
            uVar5 = ptVar6->tm_hour;
            bVar7 = 0;
            if ((0xb < uVar5) && (bVar7 = 0x40, (*(byte *)((long)param_1 + 0x1a) >> 1 & 1) == 0)) {
              uVar5 = uVar5 - 0xc;
            }
            uVar3 = (uint)*(byte *)((long)param_1 + 0x19);
            uVar4 = (uint)ptVar6->tm_sec / 10;
            *(char *)(param_1 + 2) = (char)ptVar6->tm_sec + (char)uVar4 * -10 + (char)(uVar4 << 4);
            uVar4 = ptVar6->tm_min;
            *(byte *)((long)param_1 + 0x12) =
                 (char)uVar5 + (char)(uVar5 / 10) * -10 + (char)(uVar5 / 10 << 4) | bVar7;
            uVar5 = uVar4 / 10;
            *(char *)((long)param_1 + 0x11) = (char)uVar4 + (char)uVar5 * -10 + (char)(uVar5 << 4);
          }
          else {
LAB_00171990:
            __printf_chk(1,"Unsupported RTC command read: %x\n");
            uVar3 = (uint)*(byte *)((long)param_1 + 0x19);
          }
          cVar1 = (&command_parameter_counts_11153)[(int)uVar3];
          *(byte *)(param_1 + 4) = cVar1 - 1U;
          *(undefined *)((long)param_1 + 0x1e) =
               *(undefined *)((long)param_1 + (ulong)(byte)(cVar1 - 1U) + 0x10);
        }
      }
      uVar3 = (uint)*(byte *)((long)param_1 + 0x1c);
      *(undefined *)((long)param_1 + 0x1f) = 0;
      goto LAB_00171674;
    }
  }
  uVar3 = (uint)*(byte *)((long)param_1 + 0x1c);
LAB_00171674:
  *(char *)((long)param_1 + 0x1d) = (char)(param_2 & 2);
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3 | param_2 & 0xfe,&__stack_chk_guard,local_8 - ___stack_chk_guard,0);
}


