/*
 * Ghidra decompilation
 *
 * Function : FUN_080cece4
 * Address  : 080cece4
 * Program  : drastic16
 */


void FUN_080cece4(undefined4 *param_1)

{
  bool bVar1;
  void *__dest;
  undefined *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  uint __n;
  size_t __n_00;
  undefined4 uVar11;
  uint local_2c;
  int local_28;
  uint local_24;
  uint local_20;
  uint local_18;
  uint local_14;
  
  local_14 = param_1[0x1d];
  uVar10 = param_1[0x1c] - local_14 & param_1[0x39be];
  bVar1 = false;
  local_20 = 0;
  local_18 = uVar10;
  do {
    uVar3 = FUN_080d57d4(param_1 + 0x11);
    if (uVar3 <= local_20) goto LAB_080cf198;
    pcVar6 = (char *)FUN_080d586c(param_1 + 0x11,local_20);
    if (*pcVar6 != '\b') {
      if (pcVar6[0x15] == '\0') {
        uVar3 = *(uint *)(pcVar6 + 4);
        __n = *(uint *)(pcVar6 + 8);
        if ((uVar3 - local_14 & param_1[0x39be]) < local_18) {
          if (local_14 != uVar3) {
            FUN_080d0238(param_1,local_14,uVar3);
            local_18 = param_1[0x1c] - uVar3 & param_1[0x39be];
            local_14 = uVar3;
          }
          if (local_18 < __n) {
            param_1[0x1d] = local_14;
            for (local_24 = local_20; uVar10 = FUN_080d57d4(param_1 + 0x11), local_24 < uVar10;
                local_24 = local_24 + 1) {
              pcVar6 = (char *)FUN_080d586c(param_1 + 0x11,local_24);
              if (*pcVar6 != '\b') {
                pcVar6[0x15] = '\0';
              }
            }
            bVar1 = true;
LAB_080cf198:
            local_28 = 0;
            for (local_2c = 0; uVar10 = FUN_080d57d4(param_1 + 0x11), local_2c < uVar10;
                local_2c = local_2c + 1) {
              if (local_28 != 0) {
                puVar4 = (undefined4 *)FUN_080d586c(param_1 + 0x11,local_2c - local_28);
                puVar5 = (undefined4 *)FUN_080d586c(param_1 + 0x11,local_2c);
                uVar8 = puVar5[1];
                uVar9 = puVar5[2];
                uVar11 = puVar5[3];
                *puVar4 = *puVar5;
                puVar4[1] = uVar8;
                puVar4[2] = uVar9;
                puVar4[3] = uVar11;
                uVar8 = puVar5[5];
                puVar4[4] = puVar5[4];
                puVar4[5] = uVar8;
              }
              pcVar6 = (char *)FUN_080d586c(param_1 + 0x11,local_2c);
              if (*pcVar6 == '\b') {
                local_28 = local_28 + 1;
              }
            }
            if (local_28 != 0) {
              iVar7 = FUN_080d57d4(param_1 + 0x11);
              FUN_080d58b0(param_1 + 0x11,iVar7 - local_28);
            }
            if (!bVar1) {
              FUN_080d0238(param_1,local_14,param_1[0x1c]);
              param_1[0x1d] = param_1[0x1c];
            }
            uVar10 = param_1[0x39bd];
            if (0x3fffff < uVar10) {
              uVar10 = 0x400000;
            }
            param_1[0x12cc] = param_1[0x1c] + uVar10 & param_1[0x39be];
            if ((param_1[0x12cc] == param_1[0x1c]) ||
               ((param_1[0x1d] != param_1[0x1c] &&
                ((uint)(param_1[0x1d] - param_1[0x1c] & param_1[0x39be]) <
                 (uint)(param_1[0x12cc] - param_1[0x1c] & param_1[0x39be]))))) {
              param_1[0x12cc] = param_1[0x1d];
            }
            return;
          }
          if (__n != 0) {
            local_14 = uVar3 + __n & param_1[0x39be];
            FUN_080afadc(param_1 + 9,__n);
            __dest = (void *)FUN_080a609c(param_1 + 9,0);
            if ((uVar3 < local_14) || (local_14 == 0)) {
              if (*(char *)(param_1 + 0x130e) == '\0') {
                memcpy(__dest,(void *)(param_1[0x12cd] + uVar3),__n);
              }
              else {
                FUN_080d110c(param_1 + 0x12ce,__dest,uVar3,__n);
              }
            }
            else {
              __n_00 = param_1[0x39bd] - uVar3;
              if (*(char *)(param_1 + 0x130e) == '\0') {
                memcpy(__dest,(void *)(param_1[0x12cd] + uVar3),__n_00);
                memcpy((void *)((int)__dest + __n_00),(void *)param_1[0x12cd],local_14);
              }
              else {
                FUN_080d110c(param_1 + 0x12ce,__dest,uVar3,__n_00);
                FUN_080d110c(param_1 + 0x12ce,(int)__dest + __n_00,0,local_14);
              }
            }
            iVar7 = FUN_080cf628(param_1,__dest,__n,pcVar6);
            puVar2 = (undefined *)FUN_080d586c(param_1 + 0x11,local_20);
            *puVar2 = 8;
            if (iVar7 != 0) {
              FUN_080b6298(*param_1,iVar7,__n);
            }
            *(undefined *)((int)param_1 + 0x4c4a) = 1;
            uVar3 = param_1[0x1314];
            param_1[0x1314] = __n + uVar3;
            param_1[0x1315] = param_1[0x1315] + (uint)CARRY4(__n,uVar3);
            local_18 = param_1[0x1c] - local_14 & param_1[0x39be];
          }
        }
      }
      else if ((uint)(*(int *)(pcVar6 + 4) - param_1[0x1d] & param_1[0x39be]) <= uVar10) {
        pcVar6[0x15] = '\0';
      }
    }
    local_20 = local_20 + 1;
  } while( true );
}


