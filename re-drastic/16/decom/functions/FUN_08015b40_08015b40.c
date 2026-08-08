/*
 * Ghidra decompilation
 *
 * Function : FUN_08015b40
 * Address  : 08015b40
 * Program  : drastic16
 */


void FUN_08015b40(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  char cVar9;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58 [7];
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  puVar8 = *(undefined4 **)(param_1 + 0x180);
  local_68 = 0;
  local_64 = 0;
  local_60 = 0;
  local_5c = 0;
  memset(local_58,0,0x40);
  uVar1 = local_5c;
  uVar6 = local_60;
  uVar3 = local_64;
  uVar2 = local_68;
  if (puVar8 == (undefined4 *)0x0) {
    cVar9 = '\0';
  }
  else {
    cVar9 = '\0';
    puVar4 = puVar8;
    do {
      puVar4 = (undefined4 *)puVar4[3];
      cVar9 = cVar9 + '\x01';
    } while (puVar4 != (undefined4 *)0x0);
    puVar4 = (undefined4 *)puVar8[3];
    local_68 = CONCAT31(local_68._1_3_,*(undefined *)(puVar8 + 5));
    local_58[0] = *puVar8;
    if (puVar4 != (undefined4 *)0x0) {
      puVar5 = (undefined4 *)puVar4[3];
      local_68._0_2_ = CONCAT11(*(undefined *)(puVar4 + 5),*(undefined *)(puVar8 + 5));
      local_58[1] = *puVar4;
      if (puVar5 != (undefined4 *)0x0) {
        puVar8 = (undefined4 *)puVar5[3];
        local_68._0_3_ = CONCAT12(*(undefined *)(puVar5 + 5),(undefined2)local_68);
        local_58[2] = *puVar5;
        if (puVar8 != (undefined4 *)0x0) {
          puVar4 = (undefined4 *)puVar8[3];
          local_68 = CONCAT13(*(undefined *)(puVar8 + 5),(undefined3)local_68);
          local_58[3] = *puVar8;
          if (puVar4 != (undefined4 *)0x0) {
            puVar8 = (undefined4 *)puVar4[3];
            local_64 = CONCAT31(local_64._1_3_,*(undefined *)(puVar4 + 5));
            local_58[4] = *puVar4;
            if (puVar8 != (undefined4 *)0x0) {
              puVar5 = (undefined4 *)puVar8[3];
              local_64._0_2_ = CONCAT11(*(undefined *)(puVar8 + 5),*(undefined *)(puVar4 + 5));
              local_58[5] = *puVar8;
              if (puVar5 != (undefined4 *)0x0) {
                puVar8 = (undefined4 *)puVar5[3];
                local_64._0_3_ = CONCAT12(*(undefined *)(puVar5 + 5),(undefined2)local_64);
                local_58[6] = *puVar5;
                if (puVar8 != (undefined4 *)0x0) {
                  puVar4 = (undefined4 *)puVar8[3];
                  local_64 = CONCAT13(*(undefined *)(puVar8 + 5),(undefined3)local_64);
                  local_3c = *puVar8;
                  if (puVar4 != (undefined4 *)0x0) {
                    puVar8 = (undefined4 *)puVar4[3];
                    local_60 = CONCAT31(local_60._1_3_,*(undefined *)(puVar4 + 5));
                    local_38 = *puVar4;
                    if (puVar8 != (undefined4 *)0x0) {
                      puVar5 = (undefined4 *)puVar8[3];
                      local_60._0_2_ =
                           CONCAT11(*(undefined *)(puVar8 + 5),*(undefined *)(puVar4 + 5));
                      local_34 = *puVar8;
                      if (puVar5 != (undefined4 *)0x0) {
                        puVar8 = (undefined4 *)puVar5[3];
                        local_60._0_3_ = CONCAT12(*(undefined *)(puVar5 + 5),(undefined2)local_60);
                        local_30 = *puVar5;
                        if (puVar8 != (undefined4 *)0x0) {
                          puVar4 = (undefined4 *)puVar8[3];
                          local_60 = CONCAT13(*(undefined *)(puVar8 + 5),(undefined3)local_60);
                          local_2c = *puVar8;
                          if (puVar4 != (undefined4 *)0x0) {
                            puVar8 = (undefined4 *)puVar4[3];
                            local_5c = CONCAT31(local_5c._1_3_,*(undefined *)(puVar4 + 5));
                            local_28 = *puVar4;
                            if (puVar8 != (undefined4 *)0x0) {
                              puVar5 = (undefined4 *)puVar8[3];
                              local_5c._0_2_ =
                                   CONCAT11(*(undefined *)(puVar8 + 5),*(undefined *)(puVar4 + 5));
                              local_24 = *puVar8;
                              if (puVar5 != (undefined4 *)0x0) {
                                puVar8 = (undefined4 *)puVar5[3];
                                local_5c._0_3_ =
                                     CONCAT12(*(undefined *)(puVar5 + 5),(undefined2)local_5c);
                                local_20 = *puVar5;
                                if (puVar8 != (undefined4 *)0x0) {
                                  local_5c = CONCAT13(*(undefined *)(puVar8 + 5),
                                                      (undefined3)local_5c);
                                  uStack_1c = *puVar8;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  **(char **)(param_2 + 0x10) = cVar9;
  iVar7 = *(int *)(param_2 + 0x10);
  *(int *)(param_2 + 0x10) = iVar7 + 1;
  *(undefined4 *)(iVar7 + 1) = local_68;
  *(undefined4 *)(iVar7 + 5) = local_64;
  *(undefined4 *)(iVar7 + 9) = local_60;
  *(undefined4 *)(iVar7 + 0xd) = local_5c;
  puVar4 = (undefined4 *)(*(int *)(param_2 + 0x10) + 0x10);
  *(undefined4 **)(param_2 + 0x10) = puVar4;
  puVar8 = &local_68;
  do {
    uVar2 = puVar8[5];
    uVar3 = puVar8[6];
    uVar6 = puVar8[7];
    puVar5 = puVar8 + 8;
    *puVar4 = puVar8[4];
    puVar4[1] = uVar2;
    puVar4[2] = uVar3;
    puVar4[3] = uVar6;
    puVar4 = puVar4 + 4;
    puVar8 = puVar8 + 4;
  } while (puVar5 != (undefined4 *)&stack0xffffffe8);
  *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 0x40;
  return;
}


