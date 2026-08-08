/*
 * Ghidra decompilation
 *
 * Function : FUN_080ccbd8
 * Address  : 080ccbd8
 * Program  : drastic16
 */


void FUN_080ccbd8(undefined4 *param_1)

{
  uint **ppuVar1;
  int *piVar2;
  undefined4 uVar3;
  void *pvVar4;
  void *pvVar5;
  int iVar6;
  uint uVar7;
  void **ppvVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  int iVar13;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  
  local_14 = param_1[0x1d];
  local_18 = param_1[0x1c] - local_14 & param_1[0x39be];
  local_1c = 0;
  do {
    uVar10 = FUN_080d5490(param_1 + 0x39b4);
    if (uVar10 <= local_1c) {
      FUN_080d0238(param_1,local_14,param_1[0x1c]);
      param_1[0x1d] = param_1[0x1c];
      return;
    }
    ppuVar1 = (uint **)FUN_080d5618(param_1 + 0x39b4,local_1c);
    puVar11 = *ppuVar1;
    if (puVar11 != (uint *)0x0) {
      if (*(char *)(puVar11 + 3) == '\0') {
        uVar10 = *puVar11;
        uVar12 = puVar11[1];
        if ((uVar10 - local_14 & param_1[0x39be]) < local_18) {
          if (local_14 != uVar10) {
            FUN_080d0238(param_1,local_14,uVar10);
            local_18 = param_1[0x1c] - uVar10 & param_1[0x39be];
            local_14 = uVar10;
          }
          if (local_18 < uVar12) {
            for (local_28 = local_1c; uVar10 = FUN_080d5490(param_1 + 0x39b4), local_28 < uVar10;
                local_28 = local_28 + 1) {
              piVar2 = (int *)FUN_080d5618(param_1 + 0x39b4,local_28);
              iVar13 = *piVar2;
              if ((iVar13 != 0) && (*(char *)(iVar13 + 0xc) != '\0')) {
                *(undefined *)(iVar13 + 0xc) = 0;
              }
            }
            param_1[0x1d] = local_14;
            return;
          }
          local_14 = uVar10 + uVar12 & param_1[0x39be];
          if ((uVar10 < local_14) || (local_14 == 0)) {
            FUN_080e18cc(param_1 + 0x399e,0,param_1[0x12cd] + uVar10,uVar12);
          }
          else {
            iVar13 = param_1[0x39bd];
            FUN_080e18cc(param_1 + 0x399e,0,param_1[0x12cd] + uVar10,iVar13 - uVar10);
            FUN_080e18cc(param_1 + 0x399e,iVar13 - uVar10,param_1[0x12cd],local_14);
          }
          piVar2 = (int *)FUN_080d5618(param_1 + 0x39b0,puVar11[4]);
          iVar13 = *piVar2;
          uVar12 = FUN_080a8838(iVar13 + 0x2c);
          if (0x40 < uVar12) {
            uVar3 = FUN_080a8838(iVar13 + 0x2c);
            FUN_080afadc(puVar11 + 0xb,uVar3);
            pvVar4 = (void *)FUN_080a609c(puVar11 + 0xb,0x40);
            pvVar5 = (void *)FUN_080a609c(iVar13 + 0x2c,0x40);
            iVar6 = FUN_080a8838(iVar13 + 0x2c);
            memcpy(pvVar4,pvVar5,iVar6 - 0x40);
          }
          FUN_080cd540(param_1,puVar11 + 5);
          uVar12 = FUN_080a8838(puVar11 + 0xb);
          if (uVar12 < 0x41) {
            FUN_080afb6c(iVar13 + 0x2c);
          }
          else {
            uVar12 = FUN_080a8838(iVar13 + 0x2c);
            uVar7 = FUN_080a8838(puVar11 + 0xb);
            if (uVar12 < uVar7) {
              uVar3 = FUN_080a8838(puVar11 + 0xb);
              FUN_080afadc(iVar13 + 0x2c,uVar3);
            }
            pvVar4 = (void *)FUN_080a609c(iVar13 + 0x2c,0x40);
            pvVar5 = (void *)FUN_080a609c(puVar11 + 0xb,0x40);
            iVar13 = FUN_080a8838(puVar11 + 0xb);
            memcpy(pvVar4,pvVar5,iVar13 - 0x40);
          }
          local_20 = puVar11[0x1a];
          local_24 = puVar11[0x1b];
          ppvVar8 = (void **)FUN_080d5618(param_1 + 0x39b4,local_1c);
          pvVar4 = *ppvVar8;
          if (pvVar4 != (void *)0x0) {
            FUN_080d5274(pvVar4);
            operator_delete(pvVar4);
          }
          puVar9 = (undefined4 *)FUN_080d5618(param_1 + 0x39b4,local_1c);
          *puVar9 = 0;
          while (uVar12 = FUN_080d5490(param_1 + 0x39b4), local_1c + 1 < uVar12) {
            ppuVar1 = (uint **)FUN_080d5618(param_1 + 0x39b4,local_1c + 1);
            puVar11 = *ppuVar1;
            if ((((puVar11 == (uint *)0x0) || (*puVar11 != uVar10)) || (puVar11[1] != local_24)) ||
               (*(char *)(puVar11 + 3) != '\0')) break;
            FUN_080e18cc(param_1 + 0x399e,0,local_20,local_24);
            piVar2 = (int *)FUN_080d5618(param_1 + 0x39b0,puVar11[4]);
            iVar13 = *piVar2;
            uVar12 = FUN_080a8838(iVar13 + 0x2c);
            if (0x40 < uVar12) {
              uVar3 = FUN_080a8838(iVar13 + 0x2c);
              FUN_080afadc(puVar11 + 0xb,uVar3);
              pvVar4 = (void *)FUN_080a609c(puVar11 + 0xb,0x40);
              pvVar5 = (void *)FUN_080a609c(iVar13 + 0x2c,0x40);
              iVar6 = FUN_080a8838(iVar13 + 0x2c);
              memcpy(pvVar4,pvVar5,iVar6 - 0x40);
            }
            FUN_080cd540(param_1,puVar11 + 5);
            uVar12 = FUN_080a8838(puVar11 + 0xb);
            if (uVar12 < 0x41) {
              FUN_080afb6c(iVar13 + 0x2c);
            }
            else {
              uVar12 = FUN_080a8838(iVar13 + 0x2c);
              uVar7 = FUN_080a8838(puVar11 + 0xb);
              if (uVar12 < uVar7) {
                uVar3 = FUN_080a8838(puVar11 + 0xb);
                FUN_080afadc(iVar13 + 0x2c,uVar3);
              }
              pvVar4 = (void *)FUN_080a609c(iVar13 + 0x2c,0x40);
              pvVar5 = (void *)FUN_080a609c(puVar11 + 0xb,0x40);
              iVar13 = FUN_080a8838(puVar11 + 0xb);
              memcpy(pvVar4,pvVar5,iVar13 - 0x40);
            }
            local_20 = puVar11[0x1a];
            local_24 = puVar11[0x1b];
            local_1c = local_1c + 1;
            ppvVar8 = (void **)FUN_080d5618(param_1 + 0x39b4,local_1c);
            pvVar4 = *ppvVar8;
            if (pvVar4 != (void *)0x0) {
              FUN_080d5274(pvVar4);
              operator_delete(pvVar4);
            }
            puVar9 = (undefined4 *)FUN_080d5618(param_1 + 0x39b4,local_1c);
            *puVar9 = 0;
          }
          FUN_080b6298(*param_1,local_20,local_24);
          *(undefined *)((int)param_1 + 0x4c4a) = 1;
          uVar10 = param_1[0x1314];
          param_1[0x1314] = local_24 + uVar10;
          param_1[0x1315] = param_1[0x1315] + (uint)CARRY4(local_24,uVar10);
          local_18 = param_1[0x1c] - local_14 & param_1[0x39be];
        }
      }
      else {
        *(undefined *)(puVar11 + 3) = 0;
      }
    }
    local_1c = local_1c + 1;
  } while( true );
}


