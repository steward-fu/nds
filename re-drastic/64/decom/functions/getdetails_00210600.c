/*
 * Ghidra decompilation
 *
 * Function : getdetails
 * Address  : 00210600
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 getdetails(undefined8 *param_1,uint param_2,byte **param_3,uint *param_4,uint *param_5)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  undefined8 uVar10;
  uint local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pbVar9 = *param_3;
  uVar7 = 0;
  *param_3 = pbVar9 + 1;
  bVar2 = *pbVar9;
  *param_4 = 0;
  switch(bVar2) {
  case 0x20:
    uVar10 = 8;
    goto LAB_00210688;
  case 0x21:
    iVar5 = 8;
    if (pbVar9[1] - 0x30 < 10) {
      iVar5 = 0;
      pbVar9 = pbVar9 + 2;
      do {
        *param_3 = pbVar9;
        iVar5 = (pbVar9[-1] - 0x30) + iVar5 * 10;
        bVar1 = *pbVar9 - 0x30 < 10;
        bVar4 = false;
        if (bVar1) {
          bVar4 = iVar5 + -0xccccccb < 0;
        }
        pbVar9 = pbVar9 + 1;
      } while (bVar1 && iVar5 == 0xccccccb || bVar4 != (bVar1 && SBORROW4(iVar5,0xccccccb)));
      if (0xf < iVar5 - 1U) {
        luaL_error(*param_1,"integral size (%d) out of limits [1,%d]",iVar5,0x10);
      }
    }
    *(int *)((long)param_1 + 0xc) = iVar5;
    uVar10 = 8;
    local_c = *param_4;
    goto joined_r0x00210728;
  default:
    luaL_error(*param_1,"invalid format option \'%c\'",bVar2,0);
    uVar10 = 8;
    local_c = *param_4;
    goto joined_r0x00210728;
  case 0x3c:
  case 0x3d:
    *(undefined4 *)(param_1 + 1) = 1;
    uVar10 = 8;
    local_c = *param_4;
    goto joined_r0x00210728;
  case 0x3e:
    *(undefined4 *)(param_1 + 1) = 0;
    uVar10 = 8;
    local_c = *param_4;
    goto joined_r0x00210728;
  case 0x42:
    uVar10 = 1;
    *param_4 = 1;
    goto LAB_00210688;
  case 0x48:
    uVar10 = 1;
    *param_4 = 2;
    local_c = 2;
    break;
  case 0x49:
    if (pbVar9[1] - 0x30 < 10) {
      uVar7 = 0;
      pbVar9 = pbVar9 + 2;
      do {
        *param_3 = pbVar9;
        uVar7 = (pbVar9[-1] - 0x30) + uVar7 * 10;
        bVar1 = *pbVar9 - 0x30 < 10;
        bVar4 = false;
        if (bVar1) {
          bVar4 = (int)(uVar7 + 0xf3333335) < 0;
        }
        pbVar9 = pbVar9 + 1;
      } while (bVar1 && uVar7 == 0xccccccb || bVar4 != (bVar1 && SBORROW4(uVar7,0xccccccb)));
      if (0xf < uVar7 - 1) {
        luaL_error(*param_1,"integral size (%d) out of limits [1,%d]",uVar7,0x10);
      }
      uVar10 = 1;
      *param_4 = uVar7;
      local_c = uVar7;
      goto joined_r0x00210728;
    }
    uVar10 = 1;
    uVar7 = 4;
    *param_4 = 4;
    local_c = 4;
LAB_00210794:
    uVar6 = *(uint *)((long)param_1 + 0xc);
    if ((int)uVar6 < (int)uVar7) goto LAB_002107a0;
    goto LAB_002107cc;
  case 0x4a:
    uVar10 = 1;
    *param_4 = 4;
    local_c = 4;
    break;
  case 0x4c:
  case 0x54:
    uVar10 = 1;
    *param_4 = 8;
    local_c = 8;
    break;
  case 0x58:
    local_c = 0;
    if (((pbVar9[1] == 0) || (iVar5 = getoption(param_1,param_3,&local_c), iVar5 == 3)) ||
       (uVar10 = 7, local_c == 0)) {
      luaL_argerror(*param_1,1,"invalid next option for option \'X\'");
      uVar10 = 7;
    }
    goto joined_r0x00210728;
  case 0x62:
    uVar10 = 0;
    *param_4 = 1;
    goto LAB_00210688;
  case 99:
    if (pbVar9[1] - 0x30 < 10) {
      pbVar9 = pbVar9 + 2;
      uVar7 = 0;
      do {
        *param_3 = pbVar9;
        uVar7 = (pbVar9[-1] - 0x30) + uVar7 * 10;
        if (9 < *pbVar9 - 0x30) {
          *param_4 = uVar7;
          uVar10 = 3;
          if (uVar7 == 0xffffffff) goto LAB_00210930;
          goto LAB_00210688;
        }
        pbVar9 = pbVar9 + 1;
      } while ((int)uVar7 < 0xccccccc);
      uVar10 = 3;
      *param_4 = uVar7;
    }
    else {
      *param_4 = 0xffffffff;
LAB_00210930:
      uVar10 = 3;
      luaL_error(*param_1,"missing size for format option \'c\'",param_3,uVar7);
    }
    goto LAB_00210688;
  case 100:
    uVar10 = 2;
    *param_4 = 8;
    local_c = 8;
    break;
  case 0x66:
  case 0x6e:
    uVar10 = 2;
    *param_4 = 4;
    local_c = 4;
    break;
  case 0x68:
    uVar10 = 0;
    *param_4 = 2;
    local_c = 2;
    break;
  case 0x69:
    if (9 < pbVar9[1] - 0x30) {
      uVar7 = 4;
      uVar10 = 0;
      *param_4 = 4;
      local_c = 4;
      goto LAB_00210794;
    }
    uVar7 = 0;
    pbVar9 = pbVar9 + 2;
    do {
      *param_3 = pbVar9;
      uVar7 = (pbVar9[-1] - 0x30) + uVar7 * 10;
      bVar1 = *pbVar9 - 0x30 < 10;
      bVar4 = false;
      if (bVar1) {
        bVar4 = (int)(uVar7 + 0xf3333335) < 0;
      }
      pbVar9 = pbVar9 + 1;
    } while (bVar1 && uVar7 == 0xccccccb || bVar4 != (bVar1 && SBORROW4(uVar7,0xccccccb)));
    if (0xf < uVar7 - 1) {
      luaL_error(*param_1,"integral size (%d) out of limits [1,%d]",uVar7,0x10);
    }
    uVar10 = 0;
    *param_4 = uVar7;
    local_c = uVar7;
    goto joined_r0x00210728;
  case 0x6a:
    uVar10 = 0;
    *param_4 = 4;
    local_c = 4;
    break;
  case 0x6c:
    uVar10 = 0;
    *param_4 = 8;
    local_c = 8;
    break;
  case 0x73:
    if (9 < pbVar9[1] - 0x30) {
      uVar10 = 4;
      uVar7 = 8;
      *param_4 = 8;
      local_c = 8;
      goto LAB_00210794;
    }
    uVar7 = 0;
    pbVar9 = pbVar9 + 2;
    do {
      *param_3 = pbVar9;
      uVar7 = (pbVar9[-1] - 0x30) + uVar7 * 10;
      bVar1 = *pbVar9 - 0x30 < 10;
      bVar4 = false;
      if (bVar1) {
        bVar4 = (int)(uVar7 + 0xf3333335) < 0;
      }
      pbVar9 = pbVar9 + 1;
    } while (bVar1 && uVar7 == 0xccccccb || bVar4 != (bVar1 && SBORROW4(uVar7,0xccccccb)));
    if (0xf < uVar7 - 1) {
      luaL_error(*param_1,"integral size (%d) out of limits [1,%d]",uVar7,0x10);
    }
    uVar10 = 4;
    *param_4 = uVar7;
    local_c = uVar7;
joined_r0x00210728:
    if ((int)local_c < 2) {
LAB_00210688:
      *param_5 = 0;
      goto LAB_0021068c;
    }
    break;
  case 0x78:
    uVar10 = 6;
    *param_4 = 1;
    goto LAB_00210688;
  case 0x7a:
    uVar10 = 5;
    goto LAB_00210688;
  }
  uVar6 = *(uint *)((long)param_1 + 0xc);
  if ((int)uVar6 < (int)local_c) {
LAB_002107a0:
    uVar8 = uVar6 - 1;
    uVar3 = uVar8 & uVar6;
    uVar7 = uVar6;
  }
  else {
    uVar8 = local_c - 1;
    uVar3 = uVar8 & local_c;
    uVar7 = local_c;
  }
  local_c = uVar7;
  if (uVar3 != 0) {
    luaL_argerror(*param_1,1,"format asks for alignment not power of 2");
    uVar7 = local_c;
LAB_002107cc:
    uVar8 = uVar7 - 1;
  }
  *param_5 = uVar7 - (uVar8 & param_2) & uVar8;
LAB_0021068c:
  if (local_8 - ___stack_chk_guard == 0) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&__stack_chk_guard,local_8 - ___stack_chk_guard,0);
}


