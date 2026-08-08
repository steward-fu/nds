/*
 * Ghidra decompilation
 *
 * Function : getoption
 * Address  : 0020e720
 * Program  : drastic64
 */


undefined8 getoption(undefined8 *param_1,byte **param_2,int *param_3)

{
  bool bVar1;
  byte *pbVar2;
  byte bVar3;
  bool bVar4;
  undefined8 uVar5;
  byte *pbVar6;
  int iVar7;
  
  pbVar6 = *param_2;
  *param_2 = pbVar6 + 1;
  bVar3 = *pbVar6;
  *param_3 = 0;
  switch(bVar3) {
  case 0x21:
    iVar7 = 8;
    if (pbVar6[1] - 0x30 < 10) {
      iVar7 = 0;
      pbVar6 = pbVar6 + 2;
      do {
        *param_2 = pbVar6;
        iVar7 = (pbVar6[-1] - 0x30) + iVar7 * 10;
        bVar1 = *pbVar6 - 0x30 < 10;
        bVar4 = false;
        if (bVar1) {
          bVar4 = iVar7 + -0xccccccb < 0;
        }
        pbVar6 = pbVar6 + 1;
      } while (bVar1 && iVar7 == 0xccccccb || bVar4 != (bVar1 && SBORROW4(iVar7,0xccccccb)));
      if (0xf < iVar7 - 1U) {
        luaL_error(*param_1,"integral size (%d) out of limits [1,%d]",iVar7,0x10);
      }
    }
    uVar5 = 8;
    *(int *)((long)param_1 + 0xc) = iVar7;
    break;
  default:
    luaL_error(*param_1,"invalid format option \'%c\'");
  case 0x20:
    uVar5 = 8;
    break;
  case 0x3c:
  case 0x3d:
    uVar5 = 8;
    *(undefined4 *)(param_1 + 1) = 1;
    break;
  case 0x3e:
    uVar5 = 8;
    *(undefined4 *)(param_1 + 1) = 0;
    break;
  case 0x42:
    uVar5 = 1;
    *param_3 = 1;
    break;
  case 0x48:
    uVar5 = 1;
    *param_3 = 2;
    break;
  case 0x49:
    iVar7 = 4;
    if (pbVar6[1] - 0x30 < 10) {
      iVar7 = 0;
      pbVar6 = pbVar6 + 2;
      do {
        *param_2 = pbVar6;
        iVar7 = (pbVar6[-1] - 0x30) + iVar7 * 10;
        bVar1 = *pbVar6 - 0x30 < 10;
        bVar4 = false;
        if (bVar1) {
          bVar4 = iVar7 + -0xccccccb < 0;
        }
        pbVar6 = pbVar6 + 1;
      } while (bVar1 && iVar7 == 0xccccccb || bVar4 != (bVar1 && SBORROW4(iVar7,0xccccccb)));
      if (0xf < iVar7 - 1U) {
        luaL_error(*param_1,"integral size (%d) out of limits [1,%d]",iVar7,0x10);
      }
    }
    uVar5 = 1;
    *param_3 = iVar7;
    break;
  case 0x4a:
    uVar5 = 1;
    *param_3 = 4;
    break;
  case 0x4c:
  case 0x54:
    uVar5 = 1;
    *param_3 = 8;
    break;
  case 0x58:
    uVar5 = 7;
    break;
  case 0x62:
    uVar5 = 0;
    *param_3 = 1;
    break;
  case 99:
    if (pbVar6[1] - 0x30 < 10) {
      iVar7 = 0;
      pbVar6 = pbVar6 + 1;
      do {
        pbVar2 = pbVar6 + 1;
        *param_2 = pbVar2;
        iVar7 = (*pbVar6 - 0x30) + iVar7 * 10;
        if (9 < *pbVar2 - 0x30) {
          *param_3 = iVar7;
          if (iVar7 != -1) {
            return 3;
          }
          goto LAB_0020eac8;
        }
        pbVar6 = pbVar2;
      } while (iVar7 < 0xccccccc);
      uVar5 = 3;
      *param_3 = iVar7;
    }
    else {
      *param_3 = -1;
LAB_0020eac8:
      luaL_error(*param_1,"missing size for format option \'c\'");
      uVar5 = 3;
    }
    break;
  case 100:
    uVar5 = 2;
    *param_3 = 8;
    break;
  case 0x66:
  case 0x6e:
    uVar5 = 2;
    *param_3 = 4;
    break;
  case 0x68:
    uVar5 = 0;
    *param_3 = 2;
    break;
  case 0x69:
    iVar7 = 4;
    if (pbVar6[1] - 0x30 < 10) {
      iVar7 = 0;
      pbVar6 = pbVar6 + 2;
      do {
        *param_2 = pbVar6;
        iVar7 = (pbVar6[-1] - 0x30) + iVar7 * 10;
        bVar1 = *pbVar6 - 0x30 < 10;
        bVar4 = false;
        if (bVar1) {
          bVar4 = iVar7 + -0xccccccb < 0;
        }
        pbVar6 = pbVar6 + 1;
      } while (bVar1 && iVar7 == 0xccccccb || bVar4 != (bVar1 && SBORROW4(iVar7,0xccccccb)));
      if (0xf < iVar7 - 1U) {
        luaL_error(*param_1,"integral size (%d) out of limits [1,%d]",iVar7,0x10);
      }
    }
    uVar5 = 0;
    *param_3 = iVar7;
    break;
  case 0x6a:
    uVar5 = 0;
    *param_3 = 4;
    break;
  case 0x6c:
    uVar5 = 0;
    *param_3 = 8;
    break;
  case 0x73:
    iVar7 = 8;
    if (pbVar6[1] - 0x30 < 10) {
      iVar7 = 0;
      pbVar6 = pbVar6 + 2;
      do {
        *param_2 = pbVar6;
        iVar7 = (pbVar6[-1] - 0x30) + iVar7 * 10;
        bVar1 = *pbVar6 - 0x30 < 10;
        bVar4 = false;
        if (bVar1) {
          bVar4 = iVar7 + -0xccccccb < 0;
        }
        pbVar6 = pbVar6 + 1;
      } while (bVar1 && iVar7 == 0xccccccb || bVar4 != (bVar1 && SBORROW4(iVar7,0xccccccb)));
      if (0xf < iVar7 - 1U) {
        luaL_error(*param_1,"integral size (%d) out of limits [1,%d]",iVar7,0x10);
      }
    }
    uVar5 = 4;
    *param_3 = iVar7;
    break;
  case 0x78:
    uVar5 = 6;
    *param_3 = 1;
    break;
  case 0x7a:
    uVar5 = 5;
  }
  return uVar5;
}


