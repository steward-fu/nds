/*
 * Ghidra decompilation
 *
 * Function : DumpFunction
 * Address  : 001f75b0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void DumpFunction(long param_1,long param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(int *)(param_3 + 3) == 0) && (*(long *)(param_1 + 0x68) != param_2)) {
    DumpString(*(long *)(param_1 + 0x68),param_3,0,&__stack_chk_guard,0);
    iVar2 = *(int *)((long)param_3 + 0x1c);
LAB_001f7604:
    local_c = *(int *)(param_1 + 0x28);
    if (iVar2 != 0) goto LAB_001f7a3c;
LAB_001f7610:
    iVar2 = (*(code *)param_3[1])(*param_3,&local_c,4,param_3[2]);
    local_c = *(int *)(param_1 + 0x2c);
    *(int *)((long)param_3 + 0x1c) = iVar2;
    if (iVar2 != 0) goto LAB_001f7a3c;
    iVar2 = (*(code *)param_3[1])(*param_3,&local_c,4,param_3[2]);
    *(int *)((long)param_3 + 0x1c) = iVar2;
    local_c = CONCAT31(local_c._1_3_,*(undefined *)(param_1 + 10));
    if (iVar2 != 0) goto LAB_001f7a3c;
    iVar2 = (*(code *)param_3[1])(*param_3,&local_c,1,param_3[2]);
    *(int *)((long)param_3 + 0x1c) = iVar2;
    local_c = CONCAT31(local_c._1_3_,*(undefined *)(param_1 + 0xb));
    if (iVar2 != 0) goto LAB_001f7a3c;
    iVar2 = (*(code *)param_3[1])(*param_3,&local_c,1,param_3[2]);
    *(int *)((long)param_3 + 0x1c) = iVar2;
    local_c = CONCAT31(local_c._1_3_,*(undefined *)(param_1 + 0xc));
    if (iVar2 != 0) goto LAB_001f7a3c;
    iVar2 = (*(code *)param_3[1])(*param_3,&local_c,1,param_3[2]);
    *(int *)((long)param_3 + 0x1c) = iVar2;
    local_c = *(int *)(param_1 + 0x18);
    if (iVar2 != 0) goto LAB_001f7a3c;
    iVar2 = (*(code *)param_3[1])(*param_3,&local_c,4,param_3[2]);
    *(int *)((long)param_3 + 0x1c) = iVar2;
    if (iVar2 != 0) goto LAB_001f7a3c;
    iVar2 = (*(code *)param_3[1])
                      (*param_3,*(undefined8 *)(param_1 + 0x38),
                       -(ulong)(*(uint *)(param_1 + 0x18) >> 0x1f) & 0xfffffffc00000000 |
                       (ulong)*(uint *)(param_1 + 0x18) << 2,param_3[2]);
    *(int *)((long)param_3 + 0x1c) = iVar2;
    iVar4 = *(int *)(param_1 + 0x14);
    local_c = iVar4;
    if (iVar2 != 0) goto LAB_001f7a40;
    iVar2 = (*(code *)param_3[1])(*param_3,&local_c,4,param_3[2]);
    *(int *)((long)param_3 + 0x1c) = iVar2;
    if (0 < iVar4) goto LAB_001f772c;
LAB_001f77e8:
    iVar4 = *(int *)(param_1 + 0x10);
    local_c = iVar4;
    if (iVar2 != 0) goto LAB_001f7a50;
    iVar2 = (*(code *)param_3[1])(*param_3,&local_c,4,param_3[2]);
    *(int *)((long)param_3 + 0x1c) = iVar2;
    if (0 < iVar4) goto LAB_001f7818;
LAB_001f7a5c:
    iVar4 = *(int *)(param_1 + 0x20);
    local_c = iVar4;
    if (iVar2 == 0) {
      iVar2 = (*(code *)param_3[1])(*param_3,&local_c,4,param_3[2]);
      *(int *)((long)param_3 + 0x1c) = iVar2;
    }
  }
  else {
    iVar2 = *(int *)((long)param_3 + 0x1c);
    local_c = local_c & 0xffffff00;
    if (iVar2 != 0) goto LAB_001f7604;
    iVar2 = (*(code *)param_3[1])(*param_3,&local_c,1,param_3[2]);
    local_c = *(int *)(param_1 + 0x28);
    *(int *)((long)param_3 + 0x1c) = iVar2;
    if (iVar2 == 0) goto LAB_001f7610;
LAB_001f7a3c:
    iVar4 = *(int *)(param_1 + 0x14);
LAB_001f7a40:
    if (0 < iVar4) {
LAB_001f772c:
      lVar8 = ((ulong)(iVar4 - 1) + 1) * 0x10;
      lVar10 = 0;
      do {
        while( true ) {
          puVar1 = (undefined8 *)(*(long *)(param_1 + 0x30) + lVar10);
          uVar6 = *(uint *)(puVar1 + 1) & 0x3f;
          local_c = CONCAT31(local_c._1_3_,(char)uVar6);
          if (iVar2 == 0) {
            iVar2 = (*(code *)param_3[1])(*param_3,&local_c,1,param_3[2]);
            uVar6 = *(uint *)(puVar1 + 1);
            *(int *)((long)param_3 + 0x1c) = iVar2;
            uVar6 = uVar6 & 0x3f;
          }
          if (uVar6 != 4) break;
LAB_001f7aa4:
          DumpString(*puVar1,param_3);
          iVar2 = *(int *)((long)param_3 + 0x1c);
LAB_001f7778:
          lVar10 = lVar10 + 0x10;
          if (lVar8 - lVar10 == 0) goto LAB_001f77e8;
        }
        if (uVar6 < 5) {
          if (uVar6 == 1) {
            local_c = CONCAT31(local_c._1_3_,(char)*(int *)puVar1);
            if (iVar2 == 0) {
              uVar7 = 1;
              uVar5 = *param_3;
              goto LAB_001f7768;
            }
          }
          else if ((uVar6 == 3) && (local_c = *(uint *)puVar1, iVar2 == 0)) goto LAB_001f7760;
          goto LAB_001f7778;
        }
        if (uVar6 != 0x13) {
          if (uVar6 == 0x14) goto LAB_001f7aa4;
          goto LAB_001f7778;
        }
        local_c = *(uint *)puVar1;
        if (iVar2 == 0) {
LAB_001f7760:
          uVar5 = *param_3;
          uVar7 = 4;
LAB_001f7768:
          iVar2 = (*(code *)param_3[1])(uVar5,&local_c,uVar7,param_3[2]);
          *(int *)((long)param_3 + 0x1c) = iVar2;
          goto LAB_001f7778;
        }
        lVar10 = lVar10 + 0x10;
      } while (lVar8 - lVar10 != 0);
      goto LAB_001f77e8;
    }
    iVar4 = *(int *)(param_1 + 0x10);
LAB_001f7a50:
    if (0 < iVar4) {
LAB_001f7818:
      lVar8 = *(long *)(param_1 + 0x58);
      lVar11 = ((ulong)(iVar4 - 1) + 1) * 0x10;
      lVar10 = 0;
      do {
        local_c = CONCAT31(local_c._1_3_,*(undefined *)(lVar8 + lVar10 + 8));
        while (iVar2 == 0) {
          iVar2 = (*(code *)param_3[1])(*param_3,&local_c,1,param_3[2]);
          lVar8 = *(long *)(param_1 + 0x58);
          *(int *)((long)param_3 + 0x1c) = iVar2;
          local_c = CONCAT31(local_c._1_3_,*(undefined *)(lVar8 + lVar10 + 9));
          if (iVar2 != 0) break;
          lVar10 = lVar10 + 0x10;
          iVar2 = (*(code *)param_3[1])(*param_3,&local_c,1,param_3[2]);
          *(int *)((long)param_3 + 0x1c) = iVar2;
          if (lVar10 == lVar11) goto LAB_001f7a5c;
          lVar8 = *(long *)(param_1 + 0x58);
          local_c = CONCAT31(local_c._1_3_,*(undefined *)(lVar8 + lVar10 + 8));
        }
        lVar10 = lVar10 + 0x10;
      } while (lVar11 - lVar10 != 0);
    }
    iVar4 = *(int *)(param_1 + 0x20);
  }
  if (0 < iVar4) {
    lVar10 = 0;
    do {
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x40) + lVar10);
      lVar10 = lVar10 + 8;
      DumpFunction(*puVar1,*(undefined8 *)(param_1 + 0x68),param_3);
    } while (((ulong)(iVar4 - 1) + 1) * 8 - lVar10 != 0);
    iVar2 = *(int *)((long)param_3 + 0x1c);
  }
  iVar4 = *(int *)(param_3 + 3);
  if (iVar4 == 0) {
    local_c = *(uint *)(param_1 + 0x1c);
    uVar9 = -(ulong)(local_c >> 0x1f) & 0xfffffffc00000000 | (ulong)local_c << 2;
  }
  else {
    uVar9 = 0;
    local_c = 0;
  }
  if (iVar2 == 0) {
    iVar2 = (*(code *)param_3[1])(*param_3,&local_c,4,param_3[2]);
    *(int *)((long)param_3 + 0x1c) = iVar2;
    if (iVar2 != 0) {
      iVar4 = *(int *)(param_3 + 3);
      goto LAB_001f7ac0;
    }
    iVar2 = (*(code *)param_3[1])(*param_3,*(undefined8 *)(param_1 + 0x48),uVar9,param_3[2]);
    *(int *)((long)param_3 + 0x1c) = iVar2;
    if (*(int *)(param_3 + 3) == 0) {
      uVar6 = *(uint *)(param_1 + 0x24);
      local_c = uVar6;
      if (iVar2 == 0) goto LAB_001f7958;
    }
    else {
      if (iVar2 != 0) goto LAB_001f7ac4;
      local_c = 0;
LAB_001f7958:
      uVar6 = local_c;
      uVar3 = (*(code *)param_3[1])(*param_3,&local_c,4,param_3[2]);
      *(undefined4 *)((long)param_3 + 0x1c) = uVar3;
    }
  }
  else {
LAB_001f7ac0:
    if (iVar4 != 0) goto LAB_001f7ac4;
    uVar6 = *(uint *)(param_1 + 0x24);
  }
  if ((int)uVar6 < 1) {
    iVar2 = *(int *)(param_3 + 3);
    iVar4 = *(int *)((long)param_3 + 0x1c);
  }
  else {
    lVar8 = *(long *)(param_1 + 0x50);
    lVar11 = ((ulong)(uVar6 - 1) + 1) * 0x10;
    lVar10 = 0;
LAB_001f7990:
    do {
      DumpString(*(undefined8 *)(lVar8 + lVar10),param_3);
      lVar8 = *(long *)(param_1 + 0x50);
      iVar4 = *(int *)((long)param_3 + 0x1c);
      local_c = *(uint *)(lVar8 + lVar10 + 8);
      if (iVar4 == 0) {
        iVar4 = (*(code *)param_3[1])(*param_3,&local_c,4,param_3[2]);
        lVar8 = *(long *)(param_1 + 0x50);
        local_c = *(uint *)(lVar8 + lVar10 + 0xc);
        *(int *)((long)param_3 + 0x1c) = iVar4;
        if (iVar4 == 0) {
          lVar10 = lVar10 + 0x10;
          iVar4 = (*(code *)param_3[1])(*param_3,&local_c,4,param_3[2]);
          *(int *)((long)param_3 + 0x1c) = iVar4;
          if (lVar10 == lVar11) break;
          lVar8 = *(long *)(param_1 + 0x50);
          goto LAB_001f7990;
        }
      }
      lVar10 = lVar10 + 0x10;
    } while (lVar11 - lVar10 != 0);
    iVar2 = *(int *)(param_3 + 3);
  }
  if (iVar2 == 0) {
    uVar6 = *(uint *)(param_1 + 0x10);
    local_c = uVar6;
    if (iVar4 == 0) goto LAB_001f7b84;
  }
  else {
    if (iVar4 != 0) goto LAB_001f7ac4;
    local_c = 0;
LAB_001f7b84:
    uVar6 = local_c;
    uVar3 = (*(code *)param_3[1])(*param_3,&local_c,4,param_3[2]);
    *(undefined4 *)((long)param_3 + 0x1c) = uVar3;
  }
  if (0 < (int)uVar6) {
    lVar10 = 0;
    do {
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x58) + lVar10);
      lVar10 = lVar10 + 0x10;
      DumpString(*puVar1,param_3);
    } while (((ulong)(uVar6 - 1) + 1) * 0x10 - lVar10 != 0);
  }
LAB_001f7ac4:
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


