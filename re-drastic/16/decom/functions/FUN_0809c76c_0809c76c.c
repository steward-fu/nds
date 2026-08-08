/*
 * Ghidra decompilation
 *
 * Function : FUN_0809c76c
 * Address  : 0809c76c
 * Program  : drastic16
 */


uint FUN_0809c76c(uint *param_1,void *param_2,uint *param_3,byte *param_4,uint *param_5,int param_6,
                 int *param_7)

{
  byte bVar1;
  uint uVar2;
  void *extraout_r1;
  uint uVar3;
  int iVar4;
  uint uVar5;
  void *pvVar6;
  uint uVar7;
  uint uVar8;
  size_t __n;
  void *pvVar9;
  void *pvVar10;
  byte *__src;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  bool bVar15;
  void *local_48;
  byte *local_44;
  undefined4 local_3c;
  uint local_30 [3];
  
  uVar11 = *param_3;
  uVar12 = *param_5;
  *param_3 = 0;
  *param_5 = 0;
  local_48 = param_2;
  local_44 = param_4;
  do {
    pvVar6 = (void *)param_1[9];
    pvVar9 = (void *)param_1[10];
    uVar8 = 0;
    bVar15 = pvVar6 == pvVar9;
    uVar5 = param_1[0x1e];
    if (bVar15) {
      pvVar6 = (void *)0x0;
      param_2 = pvVar6;
    }
    if (bVar15) {
      param_1[9] = (uint)param_2;
    }
    if ((uint)((int)pvVar9 - (int)pvVar6) < uVar11) {
      iVar13 = 0;
    }
    else {
      pvVar9 = (void *)((int)pvVar6 + uVar11);
      iVar13 = param_6;
    }
    *param_7 = 0;
    __src = local_44;
LAB_0809c804:
    while (uVar5 != 8) {
      while( true ) {
        pvVar10 = (void *)param_1[9];
        if (uVar5 == 9) goto LAB_0809cbe0;
        if (iVar13 == 0 && pvVar9 == pvVar10) {
          *param_7 = 2;
          goto LAB_0809cbf8;
        }
        uVar2 = 0;
        if (uVar5 - 6 < 2) break;
        if (uVar12 == uVar8) {
          *param_7 = 3;
          uVar14 = uVar2;
          goto LAB_0809c96c;
        }
        uVar8 = uVar8 + 1;
        bVar1 = *__src;
        uVar2 = (uint)bVar1;
        switch(uVar5) {
        case 0:
          *(byte *)(param_1 + 0x1f) = bVar1;
          if (uVar2 == 0) {
            uVar5 = 8;
          }
          else if ((bVar1 & 0x80) == 0) {
            if (2 < uVar2) goto switchD_0809c854_caseD_6;
            uVar5 = 1;
            param_1[0x1d] = 0;
          }
          else {
            uVar5 = 1;
            param_1[0x1d] = (uVar2 & 0x1f) << 0x10;
          }
          break;
        case 1:
          uVar5 = 2;
          param_1[0x1d] = param_1[0x1d] | uVar2 << 8;
          break;
        case 2:
          if (*(char *)(param_1 + 0x1f) < '\0') {
            uVar5 = 3;
          }
          else {
            uVar5 = 6;
          }
          param_1[0x1d] = (uVar2 | param_1[0x1d]) + 1;
          break;
        case 3:
          uVar5 = 4;
          param_1[0x1c] = uVar2 << 8;
          break;
        case 4:
          param_1[0x1c] = (uVar2 | param_1[0x1c]) + 1;
          if (((uint)*(byte *)(param_1 + 0x1f) << 0x19) >> 0x1e < 2) {
            if (param_1[0x22] != 0) goto switchD_0809c854_caseD_6;
            uVar5 = 6;
          }
          else {
            uVar5 = 5;
          }
          break;
        case 5:
          if (uVar2 < 0xe1) {
            param_1[2] = (uVar2 / 9) / 5;
            uVar14 = (uVar2 / 9) % 5;
            if (uVar2 % 9 + uVar14 < 5) {
              *param_1 = uVar2 % 9;
              uVar5 = 6;
              param_1[1] = uVar14;
              param_1[0x22] = 0;
              break;
            }
          }
        default:
switchD_0809c854_caseD_6:
          uVar5 = 9;
        }
        param_1[0x1e] = uVar5;
        __src = __src + 1;
        if (uVar5 == 8) goto LAB_0809c890;
      }
      uVar7 = param_1[0x1d];
      uVar2 = (int)pvVar9 - (int)pvVar10;
      uVar14 = uVar12 - uVar8;
      if (uVar2 < uVar7) {
        local_3c = 0;
      }
      bVar1 = *(byte *)(param_1 + 0x1f);
      uVar3 = (uint)bVar1;
      if (uVar2 >= uVar7) {
        local_3c = 1;
        uVar2 = uVar7;
      }
      local_30[0] = uVar14;
      if ((bVar1 & 0x80) != 0) {
        if (uVar5 == 6) {
          uVar5 = (uVar3 << 0x19) >> 0x1e;
          bVar15 = uVar5 != 3;
          if (uVar5 != 0) {
            uVar5 = 1;
          }
          if (((bVar15) && (param_1[0x20] != 0)) || ((uVar5 == 0 && (param_1[0x21] != 0))))
          goto LAB_0809cbd4;
          FUN_0809ad80(param_1);
          param_1[0x20] = 0;
          param_1[0x21] = 0;
          param_1[0x1e] = 7;
        }
        if (param_1[0x1c] < local_30[0]) {
          local_30[0] = param_1[0x1c];
        }
        uVar2 = FUN_0809addc(param_1,uVar2 + (int)pvVar10,__src,local_30,local_3c,param_7);
        uVar5 = param_1[0x1c];
        __src = __src + local_30[0];
        uVar14 = param_1[0x1d] - (param_1[9] - (int)pvVar10);
        uVar8 = uVar8 + local_30[0];
        param_1[0x1d] = uVar14;
        param_1[0x1c] = uVar5 - local_30[0];
        if (uVar2 == 0) {
          iVar4 = *param_7;
          if (iVar4 == 3) {
LAB_0809cbf8:
            uVar14 = uVar12 - uVar8;
            uVar2 = 0;
          }
          else {
            if ((param_1[9] - (int)pvVar10 | local_30[0]) != 0) goto LAB_0809cbb8;
            if (((iVar4 == 4) && (uVar14 == 0)) && (uVar5 - local_30[0] == 0)) {
              param_1[0x1e] = 0;
              uVar5 = 0;
              goto LAB_0809cb5c;
            }
LAB_0809cbe0:
            uVar14 = uVar12 - uVar8;
            uVar2 = 1;
          }
        }
        else {
          uVar14 = uVar12 - uVar8;
        }
        goto LAB_0809c96c;
      }
      if (uVar12 == uVar8) {
        uVar2 = 0;
        *param_7 = 3;
        goto LAB_0809c96c;
      }
      if (uVar5 == 6) {
        if (uVar3 == 1) {
          param_1[0x21] = 1;
          param_1[0x22] = 1;
        }
        else if (param_1[0x20] != 0) goto LAB_0809cbd4;
        param_1[0x20] = 0;
        FUN_0809ad80(param_1,uVar3 == 1,0);
      }
      if (uVar2 < local_30[0]) {
        local_30[0] = uVar2;
      }
      uVar5 = local_30[0];
      if (local_30[0] == 0) {
LAB_0809cbd4:
        uVar2 = 1;
        goto LAB_0809c96c;
      }
      memcpy((void *)(param_1[5] + param_1[9]),__src,local_30[0]);
      param_1[9] = param_1[9] + uVar5;
      if (param_1[0xc] == 0) {
        uVar2 = param_1[0xb];
        if (param_1[3] - uVar2 <= uVar5) {
          param_1[0xc] = param_1[3];
        }
      }
      else {
        uVar2 = param_1[0xb];
      }
      uVar14 = param_1[0x1d];
      param_1[0xb] = uVar2 + uVar5;
      __src = __src + local_30[0];
      uVar8 = uVar8 + local_30[0];
      param_1[0x1d] = uVar14 - local_30[0];
      if (uVar14 - local_30[0] == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = 7;
      }
      param_1[0x1e] = uVar5;
    }
LAB_0809c890:
    uVar2 = 0;
    *param_7 = 1;
    uVar14 = uVar12 - uVar8;
LAB_0809c96c:
    uVar12 = param_1[5];
    local_44 = local_44 + uVar8;
    *param_5 = *param_5 + uVar8;
    __n = param_1[9] - (int)pvVar6;
    uVar11 = uVar11 - __n;
    memcpy(local_48,(void *)(uVar12 + (int)pvVar6),__n);
    *param_3 = *param_3 + __n;
    if ((uVar2 != 0) ||
       (param_2 = extraout_r1, uVar12 = uVar14, local_48 = (void *)((int)local_48 + __n),
       __n == 0 || uVar11 == 0)) {
      return uVar2;
    }
  } while( true );
LAB_0809cbb8:
  uVar5 = param_1[0x1e];
  if (iVar4 == 4) {
LAB_0809cb5c:
    *param_7 = 2;
  }
  goto LAB_0809c804;
}


