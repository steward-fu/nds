/*
 * Ghidra decompilation
 *
 * Function : FUN_0805cd0c
 * Address  : 0805cd0c
 * Program  : drastic16
 */


uint FUN_0805cd0c(undefined4 *param_1,uint param_2)

{
  int iVar1;
  tm *ptVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  undefined4 *puVar6;
  uint uVar7;
  char cVar8;
  byte bVar9;
  time_t local_28 [2];
  
  if (((param_2 & 2 ^ 2) & (uint)*(byte *)((int)param_1 + 0x15)) == 0) {
    uVar3 = (uint)*(byte *)(param_1 + 5);
  }
  else if ((param_2 & 0x10) == 0) {
    if (*(char *)(param_1 + 4) == '\x01') {
      cVar8 = *(char *)((int)param_1 + 0x17) + '\x01';
      uVar3 = *(byte *)((int)param_1 + 0x16) & 1;
      *(char *)(param_1 + 5) = (char)uVar3;
      *(char *)((int)param_1 + 0x17) = cVar8;
      *(byte *)((int)param_1 + 0x16) = *(byte *)((int)param_1 + 0x16) >> 1;
      if (cVar8 == '\b') {
        if (*(char *)(param_1 + 6) == '\0') {
          *(undefined *)(param_1 + 4) = 0;
        }
        else {
          bVar9 = *(char *)(param_1 + 6) - 1;
          *(byte *)(param_1 + 6) = bVar9;
          *(undefined *)((int)param_1 + 0x16) = *(undefined *)((int)param_1 + bVar9 + 8);
        }
        *(undefined *)((int)param_1 + 0x17) = 0;
      }
    }
    else {
      *(undefined *)(param_1 + 5) = 0;
      uVar3 = 0;
    }
  }
  else {
    cVar8 = *(char *)((int)param_1 + 0x17) + '\x01';
    bVar5 = *(byte *)((int)param_1 + 0x16) >> 1;
    uVar3 = (param_2 & 0xff) << 7;
    bVar9 = bVar5 | (byte)uVar3;
    *(char *)((int)param_1 + 0x17) = cVar8;
    *(byte *)((int)param_1 + 0x16) = bVar9;
    if (cVar8 == '\b') {
      if (*(char *)(param_1 + 4) == '\x02') {
        bVar5 = *(char *)(param_1 + 6) - 1;
        *(byte *)(param_1 + 6) = bVar5;
        *(byte *)((int)param_1 + bVar5 + 8) = bVar9;
        if (bVar5 == 0) {
          printf("Unsupported RTC command write: %x\n");
        }
      }
      else {
        uVar4 = (uint)bVar5 << 0x19;
        *(byte *)((int)param_1 + 0x11) = (byte)(uVar4 >> 0x1d);
        if ((uVar3 & 0xff) == 0) {
          *(undefined *)(param_1 + 4) = 2;
        }
        else {
          *(undefined *)(param_1 + 4) = 1;
          switch(uVar4 >> 0x1d) {
          case 0:
            uVar7 = 0;
            *(undefined *)(param_1 + 2) = *(undefined *)((int)param_1 + 0x12);
            break;
          default:
            printf("Unsupported RTC command read: %x\n");
            uVar7 = (uint)*(byte *)((int)param_1 + 0x11);
            break;
          case 2:
            puVar6 = (undefined4 *)*param_1;
            if (puVar6[0x205f1] == 0) {
              iVar1 = __aeabi_uldivmod(*puVar6,puVar6[1],0x3c,0);
              local_28[0] = param_1[1] + iVar1;
            }
            else {
              local_28[0] = time((time_t *)0x0);
            }
            ptVar2 = localtime(local_28);
            uVar3 = ptVar2->tm_hour;
            if (uVar3 < 0xc) {
              bVar9 = 0;
            }
            else {
              bVar9 = 0x40;
              if ((*(byte *)((int)param_1 + 0x12) & 2) == 0) {
                uVar3 = uVar3 - 0xc;
              }
            }
            uVar7 = (uint)*(byte *)((int)param_1 + 0x11);
            *(char *)(param_1 + 2) =
                 (char)ptVar2->tm_sec + (char)((uint)ptVar2->tm_sec / 10) * '\x06';
            uVar4 = ptVar2->tm_min;
            *(byte *)((int)param_1 + 10) = (char)uVar3 + (char)(uVar3 / 10) * '\x06' | bVar9;
            *(char *)((int)param_1 + 9) = (char)uVar4 + (char)(uVar4 / 10) * '\x06';
            *(char *)((int)param_1 + 0xb) = (char)ptVar2->tm_wday;
            *(char *)(param_1 + 3) =
                 (char)ptVar2->tm_mday + (char)((uint)ptVar2->tm_mday / 10) * '\x06';
            uVar3 = ptVar2->tm_mon + 1;
            *(char *)((int)param_1 + 0xd) = (char)uVar3 + (char)(uVar3 / 10) * '\x06';
            uVar3 = ptVar2->tm_year - 100;
            *(char *)((int)param_1 + 0xe) = (char)uVar3 + (char)(uVar3 / 10) * '\x06';
            break;
          case 4:
            uVar7 = 4;
            *(undefined *)(param_1 + 2) = *(undefined *)((int)param_1 + 0x13);
            break;
          case 6:
            puVar6 = (undefined4 *)*param_1;
            if (puVar6[0x205f1] == 0) {
              iVar1 = __aeabi_uldivmod(*puVar6,puVar6[1],0x3c,0);
              local_28[0] = param_1[1] + iVar1;
            }
            else {
              local_28[0] = time((time_t *)0x0);
            }
            ptVar2 = localtime(local_28);
            uVar3 = ptVar2->tm_hour;
            if (uVar3 < 0xc) {
              bVar9 = 0;
            }
            else {
              bVar9 = 0x40;
              if ((*(byte *)((int)param_1 + 0x12) & 2) == 0) {
                uVar3 = uVar3 - 0xc;
              }
            }
            uVar7 = (uint)*(byte *)((int)param_1 + 0x11);
            *(char *)(param_1 + 2) =
                 (char)ptVar2->tm_sec + (char)((uint)ptVar2->tm_sec / 10) * '\x06';
            uVar4 = ptVar2->tm_min;
            *(byte *)((int)param_1 + 10) = (char)uVar3 + (char)(uVar3 / 10) * '\x06' | bVar9;
            *(char *)((int)param_1 + 9) = (char)uVar4 + (char)(uVar4 / 10) * '\x06';
          }
          cVar8 = (&DAT_080e7980)[uVar7];
          *(byte *)(param_1 + 6) = cVar8 - 1U;
          *(undefined *)((int)param_1 + 0x16) =
               *(undefined *)((int)param_1 + (byte)(cVar8 - 1U) + 8);
        }
      }
      uVar3 = (uint)*(byte *)(param_1 + 5);
      *(undefined *)((int)param_1 + 0x17) = 0;
    }
    else {
      uVar3 = (uint)*(byte *)(param_1 + 5);
    }
  }
  *(char *)((int)param_1 + 0x15) = (char)(param_2 & 2);
  return uVar3 | param_2 & 0xfe;
}


