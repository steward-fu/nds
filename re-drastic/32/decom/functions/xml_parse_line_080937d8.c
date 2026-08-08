/*
 * Ghidra decompilation
 *
 * Function : xml_parse_line
 * Address  : 080937d8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

s32 xml_parse_line(FILE *xml_file,xml_line_struct *xml_line,char *error_message)

{
  int iVar1;
  char *pcVar2;
  byte *__s;
  ushort **ppuVar3;
  byte *pbVar4;
  s32 sVar5;
  byte bVar6;
  uint uVar7;
  u32 uVar8;
  char *line_buffer_ptr;
  char **ppcVar9;
  bool bVar10;
  char str_original [1024];
  
  iVar1 = __stack_chk_guard;
  pcVar2 = fgets(xml_line->line_buffer,0x100,(FILE *)xml_file);
  if (pcVar2 == (char *)0x0) {
    sVar5 = -1;
    *(undefined4 *)error_message = 0x78656e55;
    *(undefined4 *)(error_message + 4) = 0x74636570;
    *(undefined4 *)(error_message + 8) = 0x65206465;
    *(undefined4 *)(error_message + 0xc) = 0x6f20646e;
    *(undefined4 *)(error_message + 0x10) = 0x69662066;
    *(undefined4 *)(error_message + 0x14) = 0xa2e656c;
    error_message[0x18] = '\0';
  }
  else {
    __strcpy_chk(str_original,xml_line,0x400);
    pcVar2 = skip_whitespace(xml_line->line_buffer);
    if (*pcVar2 == '<') {
      if (pcVar2[1] == '/') {
        xml_line->tag_name = pcVar2 + 2;
        xml_line->num_parameters = 0;
        xml_line->tag_type = '\x01';
        pcVar2 = strchr(pcVar2 + 3,0x3e);
        if (pcVar2 == (char *)0x0) {
          sVar5 = -1;
          *(undefined4 *)error_message = 0x6c756f43;
          *(undefined4 *)(error_message + 4) = 0x74276e64;
          *(undefined4 *)(error_message + 8) = 0x6e696620;
          *(undefined4 *)(error_message + 0xc) = 0x6c632064;
          *(undefined4 *)(error_message + 0x10) = 0x6e69736f;
          *(undefined4 *)(error_message + 0x14) = 0x3e2067;
        }
        else {
          *pcVar2 = '\0';
          sVar5 = 0;
        }
      }
      else {
        uVar8 = 0;
        xml_line->tag_name = pcVar2 + 1;
        __s = (byte *)skip_to_whitespace(pcVar2 + 1);
        ppuVar3 = __ctype_b_loc();
        ppcVar9 = &xml_line->tag_name;
        while( true ) {
          uVar7 = (uint)*__s;
          if (((*ppuVar3)[uVar7] & 0x2000) != 0) {
            *__s = 0;
            __s = (byte *)skip_whitespace((char *)(__s + 1));
            uVar7 = (uint)*__s;
          }
          if (uVar7 == 0x2f) {
            if (__s[1] == 0x3e) {
              sVar5 = 0;
              *__s = 0;
              xml_line->num_parameters = uVar8;
              xml_line->tag_type = '\x02';
            }
            else {
              sVar5 = -1;
              *(undefined4 *)error_message = 0x736f6c43;
              *(undefined4 *)(error_message + 4) = 0x20676e69;
              *(undefined4 *)(error_message + 8) = 0x6f6e202f;
              *(undefined4 *)(error_message + 0xc) = 0x6f662074;
              *(undefined4 *)(error_message + 0x10) = 0x776f6c6c;
              *(undefined4 *)(error_message + 0x14) = 0x62206465;
              *(undefined4 *)(error_message + 0x18) = 0x2e3e2079;
              *(undefined2 *)(error_message + 0x1c) = 10;
            }
            goto LAB_08093970;
          }
          if (uVar7 == 0x3e) {
            sVar5 = 0;
            *__s = 0;
            xml_line->num_parameters = uVar8;
            xml_line->tag_type = '\0';
            goto LAB_08093970;
          }
          if (uVar7 == 0) {
            __sprintf_chk(error_message,1,0xffffffff,"Unexpected end of string (%s).\n",str_original
                         );
            sVar5 = -1;
            goto LAB_08093970;
          }
          ppcVar9[1] = (char *)__s;
          pcVar2 = strchr((char *)__s,0x3d);
          if (pcVar2 == (char *)0x0) {
            __sprintf_chk(error_message,1,0xffffffff,"Couldn\'t find = after parameter (%s).\n",__s)
            ;
            sVar5 = -1;
            goto LAB_08093970;
          }
          *pcVar2 = '\0';
          if (pcVar2[1] != '\'') break;
          pbVar4 = (byte *)(pcVar2 + 2);
          pcVar2[1] = '\0';
          ppcVar9[0x21] = (char *)pbVar4;
          bVar6 = pcVar2[2];
          if (bVar6 != 0 && bVar6 != 0x27) {
            do {
              while (bVar10 = bVar6 == 0x5c, bVar6 = pbVar4[1], bVar10) {
                if (bVar6 == 0x27) {
                  bVar6 = pbVar4[2];
                  pbVar4 = pbVar4 + 1;
                }
                pbVar4 = pbVar4 + 1;
                if (bVar6 == 0x27 || bVar6 == 0) goto LAB_0809392c;
              }
              pbVar4 = pbVar4 + 1;
            } while (bVar6 != 0x27 && bVar6 != 0);
          }
LAB_0809392c:
          uVar8 = uVar8 + 1;
          __s = pbVar4 + 1;
          *pbVar4 = 0;
          ppcVar9 = ppcVar9 + 1;
        }
        sVar5 = -1;
        *(undefined4 *)error_message = 0x61726150;
        *(undefined4 *)(error_message + 4) = 0x6574656d;
        *(undefined4 *)(error_message + 8) = 0x61762072;
        *(undefined4 *)(error_message + 0xc) = 0x2065756c;
        *(undefined4 *)(error_message + 0x10) = 0x73656f64;
        *(undefined4 *)(error_message + 0x14) = 0x2074276e;
        *(undefined4 *)(error_message + 0x18) = 0x72617473;
        *(undefined4 *)(error_message + 0x1c) = 0x69772074;
        *(undefined4 *)(error_message + 0x20) = 0x6f206874;
        *(undefined4 *)(error_message + 0x24) = 0x696e6570;
        *(undefined4 *)(error_message + 0x28) = 0x7120676e;
        *(undefined4 *)(error_message + 0x2c) = 0x65746f75;
        *(undefined2 *)(error_message + 0x30) = 0xa2e;
        error_message[0x32] = '\0';
      }
    }
    else {
      sVar5 = -1;
      *(undefined4 *)error_message = 0x656e694c;
      *(undefined4 *)(error_message + 4) = 0x656f6420;
      *(undefined4 *)(error_message + 8) = 0x74276e73;
      *(undefined4 *)(error_message + 0xc) = 0x61747320;
      *(undefined4 *)(error_message + 0x10) = 0x77207472;
      *(undefined4 *)(error_message + 0x14) = 0x20687469;
      *(undefined2 *)(error_message + 0x18) = 0xa3c;
      error_message[0x1a] = '\0';
    }
  }
LAB_08093970:
  if (iVar1 == __stack_chk_guard) {
    return sVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


