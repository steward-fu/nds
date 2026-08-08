/*
 * Ghidra decompilation
 *
 * Function : FUN_08079b70
 * Address  : 08079b70
 * Program  : drastic16
 */


uint FUN_08079b70(uint *param_1)

{
  ssize_t sVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  int local_44;
  uint local_40;
  int iStack_3c;
  undefined auStack_38 [8];
  short local_30;
  ushort local_2e;
  int local_2c;
  
  usleep(10000);
  uVar4 = 0xb;
LAB_08079bb4:
  do {
    while( true ) {
      do {
        sVar1 = read(DAT_0aaf9120,auStack_38,0x10);
        if ((0 < sVar1) && (local_30 == 1)) {
          if (local_2c == 1) {
            if (local_2e - 0x36 < 0x38) {
              uVar4 = (uint)(byte)(&UNK_080ebde2)[local_2e];
            }
            else {
              uVar4 = 0xb;
            }
            *(undefined *)((int)&DAT_0aaf9110 + uVar4) = 1;
          }
          else if (local_2c == 0) {
            if (local_2e - 0x36 < 0x38) {
              uVar2 = (uint)(byte)(&UNK_080ebde2)[local_2e];
            }
            else {
              uVar2 = 0xb;
            }
            *(undefined *)((int)&DAT_0aaf9110 + uVar2) = 0;
          }
        }
        sVar1 = read(DAT_0aaf9128,auStack_38,0x10);
        local_44 = DAT_081c5060;
        if (sVar1 < 1) {
          if (uVar4 - 10 < 2) {
            if (*(char *)((int)&DAT_0aaf9110 + DAT_081016dc) != '\0') {
              FUN_0807b7f0(&local_40);
              if (DAT_081c5070 == 1) {
                bVar5 = iStack_3c != DAT_081c506c + (uint)(local_40 < DAT_081c5068);
                if ((bVar5 || 249999 < local_40 - DAT_081c5068) &&
                    (bVar5 || local_40 - DAT_081c5068 != 250000)) {
                  DAT_081c5070 = 2;
                  DAT_081c5068 = local_40;
                  DAT_081c506c = iStack_3c;
                  uVar4 = DAT_081016dc;
                }
              }
              else if ((DAT_081c5070 == 2) &&
                      (bVar5 = iStack_3c != DAT_081c506c + (uint)(local_40 < DAT_081c5068),
                      (bVar5 || 49999 < local_40 - DAT_081c5068) &&
                      (bVar5 || local_40 - DAT_081c5068 != 50000))) {
                DAT_081c5068 = local_40;
                DAT_081c506c = iStack_3c;
                uVar4 = DAT_081016dc;
              }
            }
            *param_1 = uVar4;
            return uVar4;
          }
          FUN_0807b7f0(&DAT_081c5068);
          DAT_081c5070 = 1;
          DAT_081016dc = uVar4;
          *param_1 = uVar4;
          return uVar4;
        }
      } while (local_30 != 1);
      if (local_2c != 1) break;
      if (local_2e == 0x2a) {
        DAT_081c5060 = 2;
        goto LAB_08079dd4;
      }
      if (local_2e == 0xe) {
        uVar4 = 5;
LAB_08079ccc:
        *(undefined *)((int)&DAT_0aaf9110 + uVar4) = 1;
        uVar2 = FUN_080790cc(local_2e,local_44);
        param_1[1] = uVar2;
      }
      else {
        if (0xe < local_2e) {
          if ((local_2e != 0x1c) && (local_2e != 0x39)) goto LAB_08079dd4;
          uVar4 = 4;
          goto LAB_08079ccc;
        }
        if (local_2e == 1) {
          uVar4 = 6;
          goto LAB_08079ccc;
        }
LAB_08079dd4:
        local_44 = DAT_081c5060;
        uVar2 = FUN_080790cc(local_2e,DAT_081c5060);
        param_1[1] = uVar2;
        if (uVar2 != 0) {
          uVar4 = 10;
        }
      }
      if (local_44 != 0) {
        DAT_081c5060 = local_44 + -1;
      }
    }
  } while (local_2c != 0);
  if (local_2e == 0xe) {
    iVar3 = 5;
  }
  else if (local_2e < 0xf) {
    if (local_2e != 1) goto LAB_08079bb4;
    iVar3 = 6;
  }
  else {
    if ((local_2e != 0x1c) && (local_2e != 0x39)) goto LAB_08079bb4;
    iVar3 = 4;
  }
  *(undefined *)((int)&DAT_0aaf9110 + iVar3) = 0;
  goto LAB_08079bb4;
}


