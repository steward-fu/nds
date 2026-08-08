/*
 * Ghidra decompilation
 *
 * Function : FUN_0805e270
 * Address  : 0805e270
 * Program  : drastic16
 */


uint FUN_0805e270(FILE *param_1,byte *param_2,undefined4 *param_3)

{
  char *pcVar1;
  ushort **ppuVar2;
  undefined4 uVar3;
  ushort uVar4;
  undefined4 uVar5;
  char cVar6;
  undefined4 uVar7;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined4 *puVar11;
  char **ppcVar12;
  int iVar13;
  char *pcVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  bool bVar17;
  char acStack_420 [1024];
  
  pcVar1 = fgets((char *)param_2,0x100,param_1);
  if (pcVar1 == (char *)0x0) {
    uVar8 = 0xffffffff;
    *param_3 = 0x78656e55;
    param_3[1] = 0x74636570;
    param_3[3] = 0x6f20646e;
    param_3[2] = 0x65206465;
    param_3[4] = 0x69662066;
    param_3[5] = 0xa2e656c;
    *(char *)(param_3 + 6) = '\0';
  }
  else {
    strcpy(acStack_420,(char *)param_2);
    ppuVar2 = __ctype_b_loc();
    pbVar9 = param_2;
    do {
      pbVar10 = pbVar9;
      uVar8 = (*ppuVar2)[*pbVar10] & 0x2000;
      pbVar9 = pbVar10 + 1;
    } while (((*ppuVar2)[*pbVar10] & 0x2000) != 0);
    if (*pbVar10 == 0x3c) {
      if (pbVar10[1] == 0x2f) {
        *(uint *)(param_2 + 0x204) = uVar8;
        *(byte **)(param_2 + 0x100) = pbVar10 + 2;
        param_2[0x208] = 1;
        pcVar1 = strchr((char *)(pbVar10 + 3),0x3e);
        if (pcVar1 == (char *)0x0) {
          uVar8 = 0xffffffff;
          *param_3 = 0x6c756f43;
          param_3[1] = 0x74276e64;
          param_3[2] = 0x6e696620;
          param_3[3] = 0x6c632064;
          param_3[4] = 0x6e69736f;
          param_3[5] = 0x3e2067;
        }
        else {
          *pcVar1 = '\0';
        }
      }
      else {
        pbVar9 = pbVar10 + 1;
        *(byte **)(param_2 + 0x100) = pbVar9;
        uVar8 = (uint)pbVar10[1];
        uVar4 = (*ppuVar2)[uVar8];
        if (((((uVar4 & 0x2000) == 0) && (uVar8 != 0x3e)) && (uVar8 != 0x2f)) && (uVar8 != 0)) {
          pbVar10 = pbVar10 + 2;
          while( true ) {
            pbVar9 = pbVar10;
            uVar8 = (uint)*pbVar9;
            uVar4 = (*ppuVar2)[uVar8];
            if (((uVar4 & 0x2000) != 0) || (uVar8 == 0x3e)) break;
            if ((uVar8 == 0x2f) || (pbVar10 = pbVar9 + 1, uVar8 == 0)) break;
          }
        }
        iVar13 = 0;
        ppcVar12 = (char **)(param_2 + 0x180);
        pbVar10 = pbVar9;
        if ((uVar4 & 0x2000) != 0) goto LAB_0805e430;
LAB_0805e374:
        if (uVar8 != 0x2f) {
          do {
            if (uVar8 == 0x3e) {
              *pbVar9 = 0;
              param_2[0x208] = 0;
              *(int *)(param_2 + 0x204) = iVar13;
              return 0;
            }
            if (uVar8 == 0) {
              sprintf((char *)param_3,"Unexpected end of string (%s).\n",acStack_420);
              return 0xffffffff;
            }
            ppcVar12[-0x1f] = (char *)pbVar9;
            pcVar1 = strchr((char *)pbVar9,0x3d);
            if (pcVar1 == (char *)0x0) {
              sprintf((char *)param_3,"Couldn\'t find = after parameter (%s).\n",pbVar9);
              return 0xffffffff;
            }
            *pcVar1 = '\0';
            if (pcVar1[1] != '\'') {
              puVar15 = (undefined4 *)"Parameter value doesn\'t start with opening quote.\n";
              do {
                puVar11 = param_3;
                uVar3 = puVar15[1];
                uVar5 = puVar15[2];
                uVar7 = puVar15[3];
                puVar16 = puVar15 + 4;
                bVar17 = puVar15 != (undefined4 *)0x80e8090;
                *puVar11 = *puVar15;
                puVar11[1] = uVar3;
                puVar11[2] = uVar5;
                puVar11[3] = uVar7;
                param_3 = puVar11 + 4;
                puVar15 = puVar16;
              } while (bVar17);
              *(undefined2 *)(puVar11 + 4) = *(undefined2 *)puVar16;
              *(char *)((int)puVar11 + 0x12) = '\0';
              return 0xffffffff;
            }
            pcVar1[1] = '\0';
            pcVar14 = pcVar1 + 2;
            ppcVar12 = ppcVar12 + 1;
            *ppcVar12 = pcVar14;
            cVar6 = pcVar1[2];
            if (cVar6 != '\0' && cVar6 != '\'') {
              do {
                while (bVar17 = cVar6 == '\\', cVar6 = pcVar14[1], bVar17) {
                  if (cVar6 == '\'') {
                    cVar6 = pcVar14[2];
                    pcVar14 = pcVar14 + 1;
                  }
                  pcVar14 = pcVar14 + 1;
                  if (cVar6 == '\0' || cVar6 == '\'') goto LAB_0805e40c;
                }
                pcVar14 = pcVar14 + 1;
              } while (cVar6 != '\0' && cVar6 != '\'');
            }
LAB_0805e40c:
            iVar13 = iVar13 + 1;
            pbVar9 = (byte *)(pcVar14 + 1);
            *pcVar14 = '\0';
            uVar8 = (uint)(byte)pcVar14[1];
            pbVar10 = pbVar9;
            if (((*ppuVar2)[uVar8] & 0x2000) == 0) goto LAB_0805e374;
LAB_0805e430:
            pbVar9 = pbVar10 + 1;
            *pbVar10 = 0;
            uVar8 = (uint)pbVar10[1];
            if (((*ppuVar2)[uVar8] & 0x2000) == 0) goto LAB_0805e374;
            pbVar10 = pbVar10 + 2;
            do {
              pbVar9 = pbVar10;
              uVar8 = (uint)*pbVar9;
              pbVar10 = pbVar9 + 1;
            } while (((*ppuVar2)[uVar8] & 0x2000) != 0);
            if (uVar8 == 0x2f) break;
          } while( true );
        }
        if (pbVar9[1] == 0x3e) {
          *pbVar9 = 0;
          *(int *)(param_2 + 0x204) = iVar13;
          param_2[0x208] = 2;
          return 0;
        }
        uVar8 = 0xffffffff;
        *param_3 = 0x736f6c43;
        param_3[1] = 0x20676e69;
        param_3[2] = 0x6f6e202f;
        param_3[3] = 0x6f662074;
        param_3[4] = 0x776f6c6c;
        param_3[5] = 0x62206465;
        *(undefined2 *)(param_3 + 7) = 10;
        param_3[6] = 0x2e3e2079;
      }
    }
    else {
      uVar8 = 0xffffffff;
      *param_3 = 0x656e694c;
      param_3[1] = 0x656f6420;
      param_3[2] = 0x74276e73;
      param_3[3] = 0x61747320;
      param_3[4] = 0x77207472;
      param_3[5] = 0x20687469;
      *(undefined2 *)(param_3 + 6) = 0xa3c;
      *(char *)((int)param_3 + 0x1a) = '\0';
    }
  }
  return uVar8;
}


