/*
 * Ghidra decompilation
 *
 * Function : FUN_0809c2cc
 * Address  : 0809c2cc
 * Program  : drastic16
 */


int FUN_0809c2cc(uint *param_1,uint param_2,byte *param_3,int *param_4,int param_5,int *param_6)

{
  byte bVar1;
  size_t sVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  undefined4 local_34;
  uint local_30 [3];
  
  iVar7 = *param_4;
  *param_4 = 0;
  uVar8 = param_1[0x1e];
  *param_6 = 0;
LAB_0809c310:
  do {
    while( true ) {
      if (uVar8 == 8) {
        *param_6 = 1;
        return 0;
      }
      uVar5 = param_1[9];
      if (uVar8 == 9) {
        return 1;
      }
      if (uVar5 == param_2 && param_5 == 0) {
        *param_6 = 2;
        return 0;
      }
      if (uVar8 - 6 < 2) break;
      if (*param_4 == iVar7) {
        *param_6 = 3;
        return 0;
      }
      *param_4 = *param_4 + 1;
      bVar1 = *param_3;
      uVar5 = (uint)bVar1;
      switch(param_1[0x1e]) {
      case 0:
        *(byte *)(param_1 + 0x1f) = bVar1;
        if (uVar5 == 0) {
          uVar8 = 8;
        }
        else if ((bVar1 & 0x80) == 0) {
          if (2 < uVar5) goto switchD_0809c36c_caseD_6;
          param_1[0x1d] = 0;
          uVar8 = 1;
        }
        else {
          uVar8 = 1;
          param_1[0x1d] = (uVar5 & 0x1f) << 0x10;
        }
        break;
      case 1:
        uVar8 = 2;
        param_1[0x1d] = param_1[0x1d] | uVar5 << 8;
        break;
      case 2:
        if (*(char *)(param_1 + 0x1f) < '\0') {
          uVar8 = 3;
        }
        else {
          uVar8 = 6;
        }
        param_1[0x1d] = (uVar5 | param_1[0x1d]) + 1;
        break;
      case 3:
        uVar8 = 4;
        param_1[0x1c] = uVar5 << 8;
        break;
      case 4:
        param_1[0x1c] = (uVar5 | param_1[0x1c]) + 1;
        if (((uint)*(byte *)(param_1 + 0x1f) << 0x19) >> 0x1e < 2) {
          if (param_1[0x22] != 0) goto switchD_0809c36c_caseD_6;
          uVar8 = 6;
        }
        else {
          uVar8 = 5;
        }
        break;
      case 5:
        if (uVar5 < 0xe1) {
          param_1[2] = (uVar5 / 9) / 5;
          uVar8 = (uVar5 / 9) % 5;
          if (uVar5 % 9 + uVar8 < 5) {
            param_1[1] = uVar8;
            uVar8 = 6;
            *param_1 = uVar5 % 9;
            param_1[0x22] = 0;
            break;
          }
        }
      default:
switchD_0809c36c_caseD_6:
        uVar8 = 9;
      }
      param_1[0x1e] = uVar8;
      param_3 = param_3 + 1;
    }
    uVar6 = param_1[0x1d];
    uVar4 = param_2 - uVar5;
    if (uVar4 < uVar6) {
      local_34 = 0;
    }
    local_30[0] = iVar7 - *param_4;
    if (uVar4 >= uVar6) {
      local_34 = 1;
      uVar4 = uVar6;
    }
    bVar1 = *(byte *)(param_1 + 0x1f);
    uVar6 = (uint)bVar1;
    if ((bVar1 & 0x80) != 0) {
      if (uVar8 == 6) {
        uVar8 = (uVar6 << 0x19) >> 0x1e;
        bVar9 = uVar8 != 3;
        if (uVar8 != 0) {
          uVar8 = 1;
        }
        if ((bVar9) && (param_1[0x20] != 0)) {
          return 1;
        }
        if ((uVar8 == 0) && (param_1[0x21] != 0)) {
          return 1;
        }
        FUN_0809ad80(param_1);
        param_1[0x20] = 0;
        param_1[0x21] = 0;
        param_1[0x1e] = 7;
      }
      if (param_1[0x1c] < local_30[0]) {
        local_30[0] = param_1[0x1c];
      }
      iVar3 = FUN_0809addc(param_1,uVar4 + uVar5,param_3,local_30,local_34,param_6);
      *param_4 = *param_4 + local_30[0];
      param_3 = param_3 + local_30[0];
      uVar4 = param_1[0x1c];
      uVar8 = param_1[0x1d] - (param_1[9] - uVar5);
      param_1[0x1d] = uVar8;
      param_1[0x1c] = uVar4 - local_30[0];
      if (iVar3 != 0) {
        return iVar3;
      }
      iVar3 = *param_6;
      if (iVar3 == 3) {
        return 0;
      }
      if ((param_1[9] - uVar5 | local_30[0]) != 0) break;
      if (iVar3 != 4) {
        return 1;
      }
      if (uVar8 != 0) {
        return 1;
      }
      if (uVar4 - local_30[0] != 0) {
        return 1;
      }
      param_1[0x1e] = 0;
      uVar8 = 0;
      goto LAB_0809c580;
    }
    if (iVar7 == *param_4) {
      *param_6 = 3;
      return 0;
    }
    if (uVar8 == 6) {
      if (uVar6 == 1) {
        param_1[0x21] = 1;
        param_1[0x22] = 1;
      }
      else if (param_1[0x20] != 0) {
        return 1;
      }
      param_1[0x20] = 0;
      FUN_0809ad80(param_1,uVar6 == 1,0);
    }
    if (uVar4 < local_30[0]) {
      local_30[0] = uVar4;
    }
    sVar2 = local_30[0];
    if (local_30[0] == 0) {
      return 1;
    }
    memcpy((void *)(param_1[5] + param_1[9]),param_3,local_30[0]);
    param_1[9] = param_1[9] + sVar2;
    if (param_1[0xc] == 0) {
      uVar8 = param_1[0xb];
      if (param_1[3] - uVar8 <= sVar2) {
        param_1[0xc] = param_1[3];
      }
    }
    else {
      uVar8 = param_1[0xb];
    }
    param_1[0xb] = uVar8 + sVar2;
    param_3 = param_3 + local_30[0];
    *param_4 = *param_4 + local_30[0];
    uVar8 = param_1[0x1d];
    param_1[0x1d] = uVar8 - local_30[0];
    if (uVar8 - local_30[0] == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = 7;
    }
    param_1[0x1e] = uVar8;
  } while( true );
  uVar8 = param_1[0x1e];
  if (iVar3 == 4) {
LAB_0809c580:
    *param_6 = 2;
  }
  goto LAB_0809c310;
}


