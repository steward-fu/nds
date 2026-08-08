/*
 * Ghidra decompilation
 *
 * Function : FUN_08079758
 * Address  : 08079758
 * Program  : drastic16
 */


void FUN_08079758(int param_1)

{
  ssize_t sVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined auStack_50 [8];
  uint local_48;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  
  uVar5 = *(uint *)(param_1 + 0x80008);
  while (sVar1 = read(DAT_0aaf9120,auStack_50,0x10), 0 < sVar1) {
    if ((short)local_48 == 1) {
      uVar4 = (local_48 >> 0x10) - 0x1c;
      if (local_44 == 1) {
        if (uVar4 < 0x52) {
          uVar4 = (uint)*(ushort *)(&UNK_080ebd70 + uVar4 * 2);
        }
        else {
          uVar4 = 0;
        }
        uVar5 = uVar5 | uVar4;
      }
      else {
        if (uVar4 < 0x52) {
          uVar4 = ~(uint)*(ushort *)(&UNK_080ebd70 + uVar4 * 2);
        }
        else {
          uVar4 = 0xffffffff;
        }
        uVar5 = uVar5 & uVar4;
      }
    }
    if (local_48 == 5) {
      iVar3 = local_44;
      if (local_44 != 1) {
        iVar3 = 0;
      }
      *(char *)(param_1 + 0x80014) = (char)iVar3;
    }
  }
  do {
    while( true ) {
      do {
        sVar1 = read(DAT_0aaf9128,auStack_50,0x10);
        if (sVar1 < 1) {
          while (iVar3 = ts_read(DAT_0aaf9124,&local_40,1), iVar3 == 1) {
            if (local_38 == 0) {
              *(undefined *)(param_1 + 0x80015) = 0;
            }
            else {
              FUN_0807b3e8(local_40,local_3c,param_1 + 0x8000c,param_1 + 0x80010,
                           *(undefined4 *)(*(int *)(param_1 + 0x80004) + 0x8178c));
              *(undefined *)(param_1 + 0x80015) = 1;
            }
          }
          *(uint *)(param_1 + 0x80008) = uVar5;
          return;
        }
      } while ((short)local_48 != 1);
      switch(local_48 >> 0x10) {
      case 1:
        uVar2 = 0xffefffff;
        uVar4 = 0x100000;
        break;
      case 2:
      case 0x1f:
        uVar2 = 0xffffdfff;
        uVar4 = 0x2000;
        break;
      case 3:
      case 0x26:
        uVar2 = 0xffffbfff;
        uVar4 = 0x4000;
        break;
      default:
        uVar2 = 0xffffffff;
        uVar4 = 0;
        break;
      case 0x1c:
        uVar2 = 0xfffffbff;
        uVar4 = 0x400;
        break;
      case 0x21:
        uVar2 = 0xfffdffff;
        uVar4 = 0x20000;
        break;
      case 0x2a:
        if (local_44 == 1) {
          DAT_081c5060 = 2;
          uVar4 = 0;
          goto LAB_08079a8c;
        }
        uVar2 = 0xffffffff;
        goto LAB_080799ec;
      case 0x2c:
        uVar2 = 0xff7fffff;
        uVar4 = 0x800000;
        break;
      case 0x2d:
        uVar2 = 0xffbfffff;
        uVar4 = 0x400000;
        break;
      case 0x2e:
        uVar2 = 0xfeffffff;
        uVar4 = 0x1000000;
        break;
      case 0x32:
      case 0x39:
        if (DAT_081c5060 == 0) {
          uVar2 = 0xffffefff;
          uVar4 = 0x1000;
        }
        else {
          uVar2 = 0xfdffffff;
          uVar4 = 0x2000000;
        }
      }
      if (local_44 == 1) break;
LAB_080799ec:
      if (local_44 == 0) {
        uVar5 = uVar5 & uVar2;
      }
    }
    if (DAT_081c5060 != 0) {
LAB_08079a8c:
      DAT_081c5060 = DAT_081c5060 + -1;
    }
    uVar5 = uVar5 | uVar4;
  } while( true );
}


