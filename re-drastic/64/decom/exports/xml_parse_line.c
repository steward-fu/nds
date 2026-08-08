/*
 * Ghidra decompilation
 *
 * Function : xml_parse_line
 * Address  : 00172d60
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void xml_parse_line(FILE *param_1,char *param_2,undefined8 *param_3)

{
  bool bVar1;
  char *pcVar2;
  undefined8 uVar3;
  byte *__s;
  ushort **ppuVar4;
  ulong uVar5;
  byte *pbVar6;
  byte bVar7;
  byte *pbVar8;
  byte *pbVar9;
  ulong uVar10;
  undefined4 uVar11;
  ulong uVar12;
  byte abStack_408 [1024];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = fgets(param_2,0x100,param_1);
  if (pcVar2 == (char *)0x0) {
    uVar3 = 0xffffffff;
    *param_3 = 0x7463657078656e55;
    param_3[1] = 0x6f20646e65206465;
    param_3[2] = 0xa2e656c69662066;
    *(char *)(param_3 + 3) = '\0';
  }
  else {
    pbVar8 = abStack_408;
    __strcpy_chk(pbVar8,param_2,0x400);
    pcVar2 = (char *)skip_whitespace(param_2);
    if (*pcVar2 == '<') {
      if (pcVar2[1] == '/') {
        *(char **)(param_2 + 0x100) = pcVar2 + 2;
        *(undefined4 *)(param_2 + 0x308) = 0;
        param_2[0x30c] = '\x01';
        pcVar2 = strchr(pcVar2 + 3,0x3e);
        if (pcVar2 == (char *)0x0) {
          uVar3 = 0xffffffff;
          *param_3 = 0x74276e646c756f43;
          param_3[1] = 0x6c6320646e696620;
          param_3[2] = 0x3e20676e69736f;
        }
        else {
          *pcVar2 = '\0';
          uVar3 = 0;
        }
      }
      else {
        *(char **)(param_2 + 0x100) = pcVar2 + 1;
        uVar10 = 0;
        __s = (byte *)skip_to_whitespace();
        ppuVar4 = __ctype_b_loc();
        uVar5 = (ulong)*__s;
        uVar12 = 0;
        if (((*ppuVar4)[uVar5] >> 0xd & 1) != 0) goto LAB_00172f24;
LAB_00172e88:
        uVar11 = (undefined4)uVar12;
        if ((int)uVar5 != 0x2f) {
          do {
            if ((int)uVar5 == 0x3e) {
              *__s = 0;
              param_2[0x30c] = '\0';
              uVar3 = 0;
              *(int *)(param_2 + 0x308) = (int)uVar12;
              goto LAB_00172e14;
            }
            if ((int)uVar5 == 0) {
              pcVar2 = "Unexpected end of string (%s).\n";
LAB_00172fac:
              __sprintf_chk(param_3,1,0xffffffffffffffff,pcVar2,pbVar8);
              uVar3 = 0xffffffff;
              goto LAB_00172e14;
            }
            *(byte **)(param_2 + uVar10 * 8 + 0x108) = __s;
            pcVar2 = strchr((char *)__s,0x3d);
            if (pcVar2 == (char *)0x0) {
              pcVar2 = "Couldn\'t find = after parameter (%s).\n";
              pbVar8 = __s;
              goto LAB_00172fac;
            }
            *pcVar2 = '\0';
            if (pcVar2[1] != '\'') {
              uVar3 = 0xffffffff;
              param_3[4] = 0x696e65706f206874;
              param_3[5] = 0x65746f757120676e;
              *param_3 = 0x6574656d61726150;
              param_3[1] = 0x2065756c61762072;
              param_3[2] = 0x2074276e73656f64;
              param_3[3] = 0x6977207472617473;
              *(undefined4 *)((long)param_3 + 0x2f) = 0xa2e65;
              goto LAB_00172e14;
            }
            pcVar2[1] = '\0';
            pbVar6 = (byte *)(pcVar2 + 2);
            *(byte **)(param_2 + uVar10 * 8 + 0x208) = pbVar6;
            bVar7 = pcVar2[2];
            if (bVar7 == 0x27 || bVar7 == 0) {
              __s = (byte *)(pcVar2 + 3);
              *pbVar6 = 0;
            }
            else {
              do {
                bVar1 = bVar7 == 0x5c;
                __s = pbVar6 + 2;
                pbVar9 = pbVar6 + 1;
                bVar7 = *pbVar9;
                if ((bVar1) && (bVar7 == 0x27)) {
                  bVar7 = pbVar6[2];
                  pbVar9 = __s;
                  __s = pbVar6 + 3;
                }
                pbVar6 = pbVar9;
              } while (bVar7 != 0x27 && bVar7 != 0);
              *pbVar9 = 0;
            }
            uVar10 = uVar10 + 1;
            uVar5 = (ulong)*__s;
            uVar12 = uVar10 & 0xffffffff;
            if (((*ppuVar4)[uVar5] >> 0xd & 1) == 0) goto LAB_00172e88;
LAB_00172f24:
            uVar11 = (undefined4)uVar12;
            *__s = 0;
            __s = (byte *)skip_whitespace(__s + 1);
            uVar5 = (ulong)*__s;
            if (*__s == 0x2f) break;
          } while( true );
        }
        if (__s[1] == 0x3e) {
          *__s = 0;
          param_2[0x30c] = '\x02';
          uVar3 = 0;
          *(undefined4 *)(param_2 + 0x308) = uVar11;
        }
        else {
          uVar3 = 0xffffffff;
          param_3[2] = 0x62206465776f6c6c;
          *param_3 = 0x20676e69736f6c43;
          param_3[1] = 0x6f6620746f6e202f;
          *(undefined8 *)((long)param_3 + 0x16) = 0xa2e3e20796220;
        }
      }
    }
    else {
      uVar3 = 0xffffffff;
      param_3[2] = 0x2068746977207472;
      *param_3 = 0x656f6420656e694c;
      param_3[1] = 0x6174732074276e73;
      *(undefined4 *)((long)param_3 + 0x17) = 0xa3c20;
    }
  }
LAB_00172e14:
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3,local_8 - ___stack_chk_guard,0);
}


