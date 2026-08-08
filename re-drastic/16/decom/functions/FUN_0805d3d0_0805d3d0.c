/*
 * Ghidra decompilation
 *
 * Function : FUN_0805d3d0
 * Address  : 0805d3d0
 * Program  : drastic16
 */


uint FUN_0805d3d0(int param_1,uint param_2)

{
  byte bVar1;
  ushort uVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  
  switch(*(undefined *)(param_1 + 0x41a)) {
  case 0:
    break;
  case 1:
    cVar3 = *(char *)(param_1 + 0x41d) + '\x01';
    *(char *)(param_1 + 0x41d) = cVar3;
    uVar5 = param_2 | *(int *)(param_1 + 0x404) << 8;
    *(uint *)(param_1 + 0x404) = uVar5;
    if (*(char *)(param_1 + 0x41c) == cVar3) {
      uVar2 = *(ushort *)(param_1 + 0x418);
      uVar5 = uVar5 & *(uint *)(param_1 + 0x408);
      *(undefined *)(param_1 + 0x41d) = 0;
      *(uint *)(param_1 + 0x404) = uVar5;
      if (uVar2 == 0xd8) {
        *(undefined4 *)(param_1 + 0x414) = 0x3c;
        memset((void *)(*(int *)(param_1 + 0x40c) + (uVar5 & 0xffff0000)),0xff,0x10000);
      }
      else if (uVar2 < 0xd9) {
        if (uVar2 == 3) {
          *(undefined *)(param_1 + 0x41a) = 5;
          return param_2 & 0xff;
        }
        if (uVar2 < 4) {
          if (uVar2 == 2) goto LAB_0805d6e8;
        }
        else {
          if (uVar2 == 10) {
LAB_0805d6e8:
            *(undefined4 *)(param_1 + 0x414) = 0x3c;
            *(undefined *)(param_1 + 0x41a) = 6;
            return param_2 & 0xff;
          }
          if (uVar2 == 0xb) {
            *(undefined *)(param_1 + 0x41a) = 7;
            return param_2 & 0xff;
          }
        }
      }
      else {
        if (uVar2 == 0x102) goto LAB_0805d6e8;
        if (uVar2 < 0x103) {
          if (uVar2 == 0xdb) {
            *(undefined4 *)(param_1 + 0x414) = 0x3c;
            memset((void *)(*(int *)(param_1 + 0x40c) + (uVar5 & 0xffffff00)),0xff,0x100);
            return param_2 & 0xff;
          }
        }
        else {
          if (uVar2 == 0x10a) {
            *(uint *)(param_1 + 0x404) = uVar5 | 0x100;
            *(undefined4 *)(param_1 + 0x414) = 0x3c;
            *(undefined *)(param_1 + 0x41a) = 6;
            return param_2 & 0xff;
          }
          if (uVar2 == 0x10b) {
            *(uint *)(param_1 + 0x404) = uVar5 | 0x100;
            *(undefined *)(param_1 + 0x41a) = 5;
            return param_2 & 0xff;
          }
        }
      }
    }
  default:
    return param_2 & 0xff;
  case 2:
    bVar4 = *(byte *)(param_1 + 0x41d);
    uVar5 = (uint)bVar4;
    if (uVar5 != 2) {
      bVar4 = bVar4 + 1;
    }
    bVar1 = *(byte *)(param_1 + uVar5 + 0x410);
    if (uVar5 == 2) {
      bVar4 = 0;
    }
    *(byte *)(param_1 + 0x41d) = bVar4;
    return (uint)bVar1;
  case 3:
    return *(byte *)(param_1 + 0x41b) | 0xc;
  case 4:
    *(byte *)(param_1 + 0x41b) = (byte)param_2 & 0xfc | *(byte *)(param_1 + 0x41b) & 3;
    return param_2 & 0xff;
  case 5:
    bVar4 = *(byte *)(*(int *)(param_1 + 0x40c) + *(int *)(param_1 + 0x404));
    *(uint *)(param_1 + 0x404) = *(int *)(param_1 + 0x404) + 1U & *(uint *)(param_1 + 0x408);
    return (uint)bVar4;
  case 6:
    *(byte *)(*(int *)(param_1 + 0x40c) + *(int *)(param_1 + 0x404)) = (byte)param_2;
    *(uint *)(param_1 + 0x404) = *(int *)(param_1 + 0x404) + 1U & *(uint *)(param_1 + 0x408);
    return param_2 & 0xff;
  case 0xb:
    *(undefined *)(param_1 + 0x41d) = 0;
    return 0xaa;
  }
  if (param_2 == 5) {
    *(undefined *)(param_1 + 0x41a) = 3;
    goto switchD_0805d464_caseD_3;
  }
  if (5 < param_2) {
    if (param_2 == 8) {
      *(undefined *)(param_1 + 0x41a) = 0xb;
    }
    else if (param_2 == 0x9f) {
      *(undefined *)(param_1 + 0x41a) = 2;
    }
    else {
      if (param_2 != 6) goto LAB_0805d450;
      *(undefined *)(param_1 + 0x41a) = 0;
      *(byte *)(param_1 + 0x41b) = *(byte *)(param_1 + 0x41b) | 2;
    }
    goto switchD_0805d464_caseD_3;
  }
  if (param_2 == 3) {
LAB_0805d598:
    *(undefined *)(param_1 + 0x41a) = 1;
    goto switchD_0805d464_caseD_3;
  }
  if (param_2 == 4) {
    *(undefined *)(param_1 + 0x41a) = 0;
    *(byte *)(param_1 + 0x41b) = *(byte *)(param_1 + 0x41b) & 0xfd;
    goto switchD_0805d464_caseD_3;
  }
LAB_0805d450:
  if (*(int *)(param_1 + 0x400) == 1) {
    if (param_2 == 0xab) {
      *(undefined *)(param_1 + 0x41a) = 0;
      goto LAB_0805d568;
    }
    if (param_2 < 0xac) {
      if ((param_2 == 2) || ((1 < param_2 && (param_2 - 10 < 2)))) goto LAB_0805d748;
    }
    else {
      if ((param_2 == 0xd8) || (param_2 == 0xdb)) {
LAB_0805d748:
        param_2 = param_2 & 0xffff;
        *(undefined *)(param_1 + 0x41a) = 1;
        goto LAB_0805d568;
      }
      if (param_2 == 0xb9) {
        *(undefined *)(param_1 + 0x41a) = 10;
        goto LAB_0805d568;
      }
    }
    goto switchD_0805d464_caseD_3;
  }
  switch(param_2) {
  case 1:
    param_2 = 1;
    *(undefined *)(param_1 + 0x41a) = 4;
    break;
  case 2:
    param_2 = 0x102;
    *(undefined *)(param_1 + 0x41a) = 1;
    break;
  case 10:
  case 0xb:
    if (*(int *)(param_1 + 0x408) == 0x1ff) {
      param_2 = param_2 | 0x100;
      goto LAB_0805d598;
    }
  default:
switchD_0805d464_caseD_3:
    param_2 = param_2 & 0xffff;
  }
LAB_0805d568:
  *(short *)(param_1 + 0x418) = (short)param_2;
  *(undefined *)(param_1 + 0x41d) = 0;
  *(undefined4 *)(param_1 + 0x404) = 0;
  return 0;
}


