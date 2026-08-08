/*
 * Ghidra decompilation
 *
 * Function : FUN_08075790
 * Address  : 08075790
 * Program  : drastic16
 */


void FUN_08075790(uint param_1,undefined4 *param_2,int param_3,int *param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined *puVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  int iVar13;
  uint uVar14;
  undefined4 *puVar15;
  undefined4 uVar16;
  char *pcVar17;
  uint uVar18;
  uint uVar19;
  bool bVar20;
  undefined *apuStack_128 [65];
  
  uVar9 = param_1 >> 0x1c;
  pcVar17 = (&PTR_DAT_080fa8f0)[uVar9];
  sprintf((char *)param_2,"[error (%x)]",param_1);
  switch((param_1 << 4) >> 0x1d) {
  case 1:
    uVar9 = (param_1 << 0x14) >> 0x1c;
    sprintf((char *)apuStack_128,"#0x%x",
            (param_1 & 0xff) >> uVar9 * 2 | (param_1 & 0xff) << uVar9 * -2 + 0x20);
    if (((param_1 << 7) >> 0x1e == 2) && ((param_1 & 0x100000) == 0)) {
      uVar9 = (param_1 << 9) >> 0x1e;
      if (uVar9 == 1) {
        sprintf((char *)param_2,"msr%s %s, %s",pcVar17,
                *(undefined4 *)(&DAT_080fa9a8 + ((int)(param_1 << 9) >> 0x1f) * -4),apuStack_128);
      }
      else if (uVar9 == 0) {
        sprintf((char *)param_2,"movw%s %s, %08x",pcVar17,(&DAT_080fa8a0)[(param_1 << 0x10) >> 0x1c]
                ,param_1 >> 4 & 0xf000 | param_1 & 0xfff);
      }
      else if (uVar9 == 2) {
        sprintf((char *)param_2,"movt%s %s, %08x",pcVar17,(&DAT_080fa8a0)[(param_1 << 0x10) >> 0x1c]
                ,(param_1 >> 4 & 0xf000 | param_1 & 0xfff) << 0x10);
      }
    }
    else {
      FUN_0807535c(param_1,apuStack_128,param_2);
    }
    break;
  case 2:
    sprintf((char *)apuStack_128,"#%d",param_1 & 0xfff);
    FUN_08075458(param_1,apuStack_128,param_2);
    break;
  case 3:
    if ((param_1 & 0x10) != 0) {
      if (((param_1 << 7) >> 0x1c == 0xe) && ((param_1 & 0x60) == 0)) {
        uVar9 = (param_1 << 0x14) >> 0x1b;
        sprintf((char *)param_2,"bfi%s %s, %s, #%d, #%d",pcVar17,
                (&DAT_080fa8a0)[(param_1 << 0x10) >> 0x1c],(&DAT_080fa8a0)[param_1 & 0xf],uVar9,
                (((param_1 << 0xb) >> 0x1b) + 1) - uVar9);
        return;
      }
switchD_08075c48_caseD_2:
      *param_2 = 0x65646e75;
      param_2[1] = 0x656e6966;
      *(undefined2 *)(param_2 + 2) = 100;
      return;
    }
    uVar14 = (param_1 << 0x14) >> 0x1b;
    uVar10 = (param_1 << 0x19) >> 0x1e;
    uVar9 = param_1 & 0xf;
    if (uVar14 == 0) {
      if (uVar10 == 0) {
LAB_08076024:
        pcVar17 = (char *)(&DAT_080fa8a0)[uVar9];
        strcpy((char *)apuStack_128,pcVar17);
        goto LAB_08075fc4;
      }
      if (uVar10 < 3) {
        uVar14 = 0x20;
        pcVar17 = (char *)(&DAT_080fa8a0)[uVar9];
        goto LAB_08075fc4;
      }
      if (uVar10 != 3) goto LAB_08076024;
      sprintf((char *)apuStack_128,"%s, rrx #1",(&DAT_080fa8a0)[uVar9]);
    }
    else {
      pcVar17 = (char *)(&DAT_080fa8a0)[uVar9];
LAB_08075fc4:
      sprintf((char *)apuStack_128,"%s, %s #%d",pcVar17,*(undefined4 *)(&DAT_080fa8e0 + uVar10 * 4),
              uVar14);
    }
    FUN_08075458(param_1,apuStack_128,param_2);
    break;
  case 4:
    pcVar4 = "!";
    if ((param_1 & 0x200000) == 0) {
      pcVar4 = "";
    }
    pcVar6 = "^";
    if ((param_1 & 0x400000) == 0) {
      pcVar6 = "";
    }
    uVar5 = *(undefined4 *)(&DAT_080fa9f0 + ((param_1 << 7) >> 0x1e) * 4);
    uVar16 = *(undefined4 *)(&DAT_080faa00 + ((int)(param_1 << 0xb) >> 0x1f) * -4);
    FUN_0807565c(param_1,apuStack_128);
    sprintf((char *)param_2,"%s%s%s %s%s, %s%s",uVar16,pcVar17,uVar5,
            (&DAT_080fa8a0)[(param_1 << 0xc) >> 0x1c],pcVar4,apuStack_128,pcVar6);
    return;
  case 5:
    iVar2 = param_1 << 8;
    pcVar4 = "l";
    if ((param_1 & 0x1000000) == 0) {
      pcVar4 = "";
    }
    if (uVar9 == 0xf) {
      param_1 = (param_1 << 7) >> 0x1f;
    }
    iVar2 = param_3 + 8 + (iVar2 >> 8) * 4;
    if (uVar9 == 0xf) {
      iVar2 = iVar2 + param_1 * 2;
      pcVar4 = "lx";
      pcVar17 = "";
    }
    if (param_5 != 0) {
      if (*param_4 == iVar2) {
        iVar13 = 0;
      }
      else {
        iVar13 = 0;
        piVar1 = param_4 + 2;
        do {
          param_4 = piVar1;
          iVar13 = iVar13 + 1;
          if (iVar13 == param_5) goto LAB_08075a9c;
          piVar1 = param_4 + 2;
        } while (*param_4 != iVar2);
      }
      sprintf((char *)param_2,"b%s%s %s",pcVar4,pcVar17,param_4[1]);
      if (param_5 != iVar13) {
        return;
      }
    }
LAB_08075a9c:
    sprintf((char *)param_2,"b%s%s %x",pcVar4,pcVar17,iVar2);
    break;
  case 6:
    puVar11 = (undefined4 *)"coprocessor load/store (implement me)";
    do {
      puVar15 = param_2;
      uVar16 = puVar11[1];
      uVar5 = puVar11[2];
      uVar8 = puVar11[3];
      puVar12 = puVar11 + 4;
      bVar20 = puVar11 != (undefined4 *)0x80eb46c;
      *puVar15 = *puVar11;
      puVar15[1] = uVar16;
      puVar15[2] = uVar5;
      puVar15[3] = uVar8;
      puVar11 = puVar12;
      param_2 = puVar15 + 4;
    } while (bVar20);
    puVar15[4] = *puVar12;
    *(undefined2 *)(puVar15 + 5) = 0x29;
    break;
  case 7:
    if ((param_1 & 0x1000000) == 0) {
      bVar20 = (param_1 & 0x10) != 0;
      uVar14 = param_1 << 0x10;
      uVar9 = param_1 >> 0x15;
      uVar10 = param_1 << 0x14;
      uVar19 = param_1 << 0xc;
      uVar18 = param_1 & 0xf;
      if (bVar20) {
        param_1 = (param_1 << 0xb) >> 0x1f;
      }
      uVar3 = uVar9 & 7;
      if (bVar20) {
        puVar7 = *(undefined **)(param_1 * 4 + 0x80faa08);
        uVar9 = uVar3;
      }
      else {
        uVar9 = uVar9 & 0xf;
        puVar7 = &UNK_080eb27c;
      }
      sprintf((char *)param_2,"%s%s p%d, %d, %s, c%d, c%d, %d",puVar7,pcVar17,uVar10 >> 0x1c,uVar3,
              (&DAT_080fa8a0)[uVar14 >> 0x1c],uVar19 >> 0x1c,uVar18,uVar9);
    }
    else {
      sprintf((char *)param_2,"swi%s 0x%x",pcVar17,param_1 & 0xffffff);
    }
    break;
  default:
    if ((param_1 & 0x90) != 0x90) {
      if (((param_1 << 7) >> 0x1e != 2) || ((param_1 & 0x100000) != 0)) {
        FUN_080751a0(param_1 & 0xfff,apuStack_128);
        FUN_0807535c(param_1,apuStack_128,param_2);
        return;
      }
      if ((param_1 & 0x90) == 0x80) {
        uVar9 = (param_1 << 9) >> 0x1e;
        if (uVar9 == 2) {
          uVar19 = (param_1 << 0xc) >> 0x1c;
          uVar18 = param_1 & 0xf;
          uVar9 = (uint)(byte)(&DAT_080eb324)[-((int)(param_1 << 0x1a) >> 0x1f)];
          uVar14 = (param_1 << 0x14) >> 0x1c;
          uVar10 = (uint)(byte)(&DAT_080eb324)[-((int)(param_1 << 0x19) >> 0x1f)];
          uVar16 = (&DAT_080fa8a0)[(param_1 << 0x10) >> 0x1c];
          pcVar4 = "smlal%c%c%s %s, %s, %s, %s";
        }
        else if (uVar9 == 3) {
          uVar19 = param_1 & 0xf;
          uVar18 = (param_1 << 0x14) >> 0x1c;
          uVar9 = (uint)(byte)(&DAT_080eb324)[-((int)(param_1 << 0x1a) >> 0x1f)];
          uVar14 = (param_1 << 0x10) >> 0x1c;
          uVar10 = (uint)(byte)(&DAT_080eb324)[-((int)(param_1 << 0x19) >> 0x1f)];
          uVar16 = (&DAT_080fa8a0)[(param_1 << 0xc) >> 0x1c];
          pcVar4 = "smul%c%c%s %s, %s, %s, %s";
        }
        else {
          if (uVar9 == 1) {
            bVar20 = (param_1 & 0x20) == 0;
            uVar9 = (param_1 << 0x14) >> 0x1c;
            puVar11 = &DAT_080fa8a0 + uVar9;
            if (!bVar20) {
              uVar9 = 0xb328;
            }
            if (bVar20) {
              uVar9 = 0xb344;
            }
            sprintf((char *)param_2,(char *)(uVar9 | 0x80e0000),
                    (uint)(byte)(&DAT_080eb324)[-((int)(param_1 << 0x19) >> 0x1f)],pcVar17,
                    (&DAT_080fa8a0)[(param_1 << 0xc) >> 0x1c],(&DAT_080fa8a0)[param_1 & 0xf],
                    *puVar11,(&DAT_080fa8a0)[(param_1 << 0x10) >> 0x1c]);
            return;
          }
          uVar16 = (&DAT_080fa8a0)[(param_1 << 0xc) >> 0x1c];
          uVar19 = param_1 & 0xf;
          uVar18 = (param_1 << 0x14) >> 0x1c;
          uVar9 = (uint)(byte)(&DAT_080eb324)[-((int)(param_1 << 0x1a) >> 0x1f)];
          uVar14 = (param_1 << 0x10) >> 0x1c;
          uVar10 = (uint)(byte)(&DAT_080eb324)[-((int)(param_1 << 0x19) >> 0x1f)];
          pcVar4 = "smla%c%c%s %s, %s, %s, %s";
        }
        sprintf((char *)param_2,pcVar4,uVar9,uVar10,pcVar17,uVar16,(&DAT_080fa8a0)[uVar19],
                (&DAT_080fa8a0)[uVar18],(&DAT_080fa8a0)[uVar14]);
        return;
      }
      if ((param_1 & 0x10) == 0) {
        if ((param_1 & 0x200000) != 0) {
          FUN_080751a0(param_1 & 0xfff,apuStack_128);
          sprintf((char *)param_2,"msr%s %s_%s, %s",pcVar17,
                  *(undefined4 *)(&DAT_080fa9a8 + ((int)(param_1 << 9) >> 0x1f) * -4),
                  *(undefined4 *)(&DAT_080fa9b0 + ((param_1 << 0xc) >> 0x1c) * 4),apuStack_128);
          return;
        }
        sprintf((char *)param_2,"mrs%s %s, %s",pcVar17,(&DAT_080fa8a0)[(param_1 << 0x10) >> 0x1c],
                *(undefined4 *)(&DAT_080fa9a8 + ((int)(param_1 << 9) >> 0x1f) * -4));
        return;
      }
      uVar9 = (param_1 << 0x19) >> 0x1e;
      if (uVar9 == 2) {
        apuStack_128[0] = &DAT_080eb5b4;
        apuStack_128[1] = &DAT_080eb5bc;
        pcVar4 = "";
        if ((param_1 & 0x400000) != 0) {
          pcVar4 = "d";
        }
        sprintf((char *)param_2,"%s%s%s %s, %s, %s",apuStack_128[-((int)(param_1 << 10) >> 0x1f)],
                pcVar4,pcVar17,(&DAT_080fa8a0)[(param_1 << 0x10) >> 0x1c],
                (&DAT_080fa8a0)[param_1 & 0xf],(&DAT_080fa8a0)[(param_1 << 0xc) >> 0x1c]);
        return;
      }
      if (uVar9 == 3) {
        sprintf((char *)param_2,"bkpt%s 0x%x",pcVar17,param_1 & 0xffffff);
        return;
      }
      if (uVar9 == 1) {
        sprintf((char *)param_2,"blx%s %s",pcVar17,(&DAT_080fa8a0)[param_1 & 0xf]);
        return;
      }
      if ((param_1 & 0x400000) != 0) {
        sprintf((char *)param_2,"clz%s %s, %s",pcVar17,(&DAT_080fa8a0)[(param_1 << 0x10) >> 0x1c],
                (&DAT_080fa8a0)[param_1 & 0xf]);
        return;
      }
      sprintf((char *)param_2,"bx%s %s",pcVar17,(&DAT_080fa8a0)[param_1 & 0xf]);
      return;
    }
    if ((param_1 & 0x60) != 0) {
      if ((param_1 & 0x400000) == 0) {
        strcpy((char *)apuStack_128,(char *)(&DAT_080fa8a0)[param_1 & 0xf]);
      }
      else {
        sprintf((char *)apuStack_128,"#%d",param_1 >> 4 & 0xf0 | param_1 & 0xf);
      }
      FUN_08075554(param_1,apuStack_128,param_2);
      return;
    }
    pcVar4 = "s";
    uVar9 = (param_1 << 7) >> 0x1c;
    if ((param_1 & 0x100000) == 0) {
      pcVar4 = "";
    }
    switch(uVar9) {
    case 0:
      sprintf((char *)param_2,"mul%s%s %s, %s, %s",pcVar17,pcVar4,
              (&DAT_080fa8a0)[(param_1 << 0xc) >> 0x1c],(&DAT_080fa8a0)[param_1 & 0xf],
              (&DAT_080fa8a0)[(param_1 << 0x14) >> 0x1c]);
      break;
    case 1:
      sprintf((char *)param_2,"mla%s%s %s, %s, %s, %s",pcVar17,pcVar4,
              (&DAT_080fa8a0)[(param_1 << 0xc) >> 0x1c],(&DAT_080fa8a0)[param_1 & 0xf],
              (&DAT_080fa8a0)[(param_1 << 0x14) >> 0x1c],(&DAT_080fa8a0)[(param_1 << 0x10) >> 0x1c])
      ;
      break;
    default:
      goto switchD_08075c48_caseD_2;
    case 4:
    case 5:
    case 6:
    case 7:
      sprintf((char *)param_2,"%s%s%s %s, %s, %s, %s",(&PTR_s__080fa988)[uVar9],pcVar17,pcVar4,
              (&DAT_080fa8a0)[(param_1 << 0x10) >> 0x1c],(&DAT_080fa8a0)[(param_1 << 0xc) >> 0x1c],
              (&DAT_080fa8a0)[param_1 & 0xf],(&DAT_080fa8a0)[(param_1 << 0x14) >> 0x1c]);
      break;
    case 8:
      sprintf((char *)param_2,"swp%s %s, %s, [%s]",pcVar17,
              (&DAT_080fa8a0)[(param_1 << 0x10) >> 0x1c],(&DAT_080fa8a0)[param_1 & 0xf],
              (&DAT_080fa8a0)[(param_1 << 0xc) >> 0x1c]);
      break;
    case 10:
      sprintf((char *)param_2,"swpb%s %s, %s, [%s]",pcVar17,
              (&DAT_080fa8a0)[(param_1 << 0x10) >> 0x1c],(&DAT_080fa8a0)[param_1 & 0xf],
              (&DAT_080fa8a0)[(param_1 << 0xc) >> 0x1c]);
    }
  }
  return;
}


