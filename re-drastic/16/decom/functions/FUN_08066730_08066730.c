/*
 * Ghidra decompilation
 *
 * Function : FUN_08066730
 * Address  : 08066730
 * Program  : drastic16
 */


/* WARNING: Removing unreachable block (ram,0x08066d08) */
/* WARNING: Removing unreachable block (ram,0x08066e0c) */
/* WARNING: Removing unreachable block (ram,0x08066ce0) */
/* WARNING: Removing unreachable block (ram,0x08066cf4) */

void FUN_08066730(int param_1,int param_2)

{
  code **ppcVar1;
  uint uVar2;
  FILE *__stream;
  size_t sVar3;
  code **__ptr;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  code *pcVar8;
  code *pcVar9;
  code **ppcVar10;
  void *pvVar11;
  undefined (*pauVar12) [16];
  bool bVar13;
  undefined auVar14 [16];
  undefined auVar15 [16];
  int local_570;
  undefined (*local_56c) [16];
  code **local_568;
  undefined4 local_564;
  undefined4 local_560;
  void *local_55c;
  void *local_558;
  void *local_554;
  int local_550;
  int local_54c;
  int local_548;
  undefined4 local_544;
  uint local_540;
  int local_53c;
  undefined8 local_538;
  byte local_530;
  byte local_52f;
  byte local_52e;
  undefined local_52d [261];
  int local_428 [257];
  
  pauVar12 = (undefined (*) [16])(param_1 + 0x81320);
  auVar14._0_8_ = VectorCopyNarrow(*pauVar12,4);
  local_540 = *(uint *)(param_1 + 0x8176c);
  local_54c = 0;
  iVar6 = *(int *)(param_1 + 0x817a8);
  auVar14._8_8_ = VectorCopyNarrow(*(undefined (*) [16])(param_1 + 0x81330),4);
  if (2 < local_540) {
    local_540 = local_540 - 1;
  }
  local_52e = (byte)*(undefined4 *)(param_1 + 0x81348);
  local_538 = VectorCopyNarrow(auVar14,2);
  local_530 = (byte)*(undefined4 *)(param_1 + 0x81340);
  local_52f = (byte)*(undefined4 *)(param_1 + 0x81344);
  if (iVar6 == 100000) {
    local_53c = 1;
LAB_080667fc:
    if (iVar6 == 20000) {
      local_53c = 4;
    }
    else {
LAB_08066808:
      if (iVar6 != 0x411a) goto LAB_08066814;
      local_53c = 5;
    }
  }
  else {
    if (iVar6 == 0x8235) {
      local_53c = 2;
      goto LAB_08066808;
    }
    local_53c = 0;
    if (iVar6 != 25000) goto LAB_080667fc;
    local_53c = 3;
LAB_08066814:
    if (iVar6 == 0x37cd) {
      local_53c = 6;
      goto LAB_0806682c;
    }
  }
  if (iVar6 == 0x30d4) {
    local_53c = 7;
  }
LAB_0806682c:
  local_570 = param_1;
  local_56c = pauVar12;
  if (*(char *)(param_1 + 0x82830) == '\0') {
    local_550 = 0;
  }
  else {
    local_550 = 1;
    pvVar11 = malloc(0x18000);
    local_55c = pvVar11;
    local_558 = malloc(0x18000);
    FUN_080771e4(pvVar11,0);
    FUN_080771e4(local_558,1);
  }
  iVar6 = local_570;
  uVar2 = time((time_t *)0x0);
  sprintf((char *)local_428,"%s%cdrastic_logo_%d.raw",iVar6 + 0x81c30,0x2f,uVar2 & 1);
  __stream = fopen((char *)local_428,"rb");
  if (__stream == (FILE *)0x0) {
    local_554 = (void *)0x0;
  }
  else {
    local_554 = malloc(120000);
    sVar3 = fread(local_554,120000,1,__stream);
    if (sVar3 != 1) {
      free(local_554);
      local_554 = (void *)0x0;
    }
    fclose(__stream);
  }
  __ptr = (code **)FUN_08066000(&local_570);
  local_564 = 0;
  local_560 = 0;
  local_548 = 0;
  local_52d[0] = 0;
  local_544 = 1;
  local_568 = __ptr;
  uVar4 = FUN_0807908c(param_1 + 0x155e000);
  FUN_0807b4cc();
  if (((param_2 != 0) &&
      (iVar5 = FUN_08062bc8(&local_570,&DAT_080fa798,local_428), iVar6 = local_570, iVar5 != -1)) &&
     (iVar5 = FUN_0805b738(local_570 + 0x1a0,local_428), -1 < iVar5)) {
    local_54c = 1;
    local_540 = *(uint *)(iVar6 + 0x8176c);
    local_548 = 1;
    local_544 = 0;
  }
LAB_08066940:
  if (local_548 == 0) {
    do {
      ppcVar10 = local_568;
      usleep(10000);
      if (*(char *)(local_570 + 0x2916467) == '\x02') {
        FUN_08078bf4(local_570 + 0x155e000);
      }
      FUN_08066498(&local_570);
      FUN_080771cc();
      FUN_08076bb8(local_52d,0xa676,0,0x10,0x10);
      FUN_080771b4();
      if (ppcVar10[3] != (code *)0x0) {
        pcVar9 = (code *)0x0;
        do {
          iVar6 = (int)pcVar9 * 4;
          bVar13 = pcVar9 == ppcVar10[4];
          pcVar9 = pcVar9 + 1;
          (**(code **)(*(int *)(ppcVar10[6] + iVar6) + 8))
                    (&local_570,*(int *)(ppcVar10[6] + iVar6),bVar13);
        } while (pcVar9 < ppcVar10[3]);
      }
      if (*ppcVar10 != (code *)0x0) {
        (**ppcVar10)(&local_570,ppcVar10);
      }
      iVar6 = *(int *)(ppcVar10[6] + (int)ppcVar10[4] * 4);
      FUN_0807b0dc();
      do {
        FUN_08079b70(local_428);
      } while (local_428[0] == 0xb);
      if (*(code **)(iVar6 + 0xc) == (code *)0x0) goto LAB_08066940;
      iVar5 = (**(code **)(iVar6 + 0xc))(&local_570,iVar6,local_428);
      ppcVar1 = local_568;
      if (iVar5 == 1) {
        iVar5 = 1;
LAB_08066c18:
        pcVar9 = ppcVar10[4];
        if (*(code **)(iVar6 + 0x10) != (code *)0x0) {
          (**(code **)(iVar6 + 0x10))(&local_570,iVar6,1);
        }
        pcVar7 = ppcVar10[3];
        pcVar9 = pcVar9 + iVar5;
        if ((int)pcVar9 < 0) {
          pcVar9 = pcVar7 + -1;
        }
        if (pcVar9 < pcVar7) {
          pcVar8 = (code *)((int)pcVar9 << 2);
        }
        else {
          pcVar8 = (code *)0x0;
        }
        iVar6 = *(int *)(ppcVar10[6] + (int)pcVar8);
        if (pcVar9 >= pcVar7) {
          pcVar9 = pcVar8;
        }
        ppcVar10[4] = pcVar9;
        pcVar9 = *(code **)(iVar6 + 0x10);
        if (pcVar9 != (code *)0x0) {
          (*pcVar9)(&local_570,iVar6,0);
        }
        goto LAB_08066940;
      }
      if (iVar5 == 0) {
        iVar5 = -1;
        goto LAB_08066c18;
      }
      if (iVar5 != 6) goto LAB_08066940;
      if (*(code **)(iVar6 + 0x10) != (code *)0x0) {
        (**(code **)(iVar6 + 0x10))(&local_570,iVar6,1);
      }
      if (ppcVar1[1] != (code *)0x0) {
        (*ppcVar1[1])(&local_570,ppcVar1,1);
      }
      ppcVar10 = (code **)ppcVar1[7];
      if (ppcVar10 == (code **)0x0) goto LAB_08066ca0;
      if (ppcVar10[1] != (code *)0x0) {
        (*ppcVar10[1])(&local_570,ppcVar10,0);
      }
      local_568 = ppcVar10;
      if (local_548 != 0) break;
    } while( true );
  }
  goto LAB_08066ab0;
LAB_08066ca0:
  if (*(char *)(local_570 + 0x82830) != '\0') {
    local_548 = 1;
LAB_08066ab0:
    FUN_080779a8(param_1 + 0x155e000,uVar4);
    do {
      FUN_08079b70(local_428);
    } while (local_428[0] != 0xb);
    FUN_08079b48();
    if (__ptr[3] != (code *)0x0) {
      pcVar9 = (code *)0x0;
      do {
        pvVar11 = *(void **)(__ptr[6] + (int)pcVar9 * 4);
        if (*(code **)((int)pvVar11 + 0x14) != (code *)0x0) {
          (**(code **)((int)pvVar11 + 0x14))(&local_570,pvVar11);
        }
        pcVar9 = pcVar9 + 1;
        free(pvVar11);
      } while (pcVar9 < __ptr[3]);
    }
    free(__ptr[6]);
    free(__ptr);
    uVar2 = local_540;
    if (1 < local_540) {
      uVar2 = *(uint *)(param_1 + 0x8176c) | 2;
    }
    *(uint *)(param_1 + 0x8176c) = uVar2;
    if (local_53c == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = __aeabi_uidiv(5000000,*(undefined4 *)(&DAT_080e8bb0 + local_53c * 4));
    }
    *(undefined4 *)(param_1 + 0x817a8) = uVar4;
    if (local_56c < (undefined (*) [16])local_52d && &local_538 < local_56c[2] + 0xc) {
      *(uint *)*local_56c = (uint)(byte)local_538;
      *(uint *)(*local_56c + 4) = (uint)local_538._1_1_;
      *(uint *)(*local_56c + 8) = (uint)local_538._2_1_;
      *(uint *)(*local_56c + 0xc) = (uint)local_538._3_1_;
      *(uint *)local_56c[1] = (uint)local_538._4_1_;
      *(uint *)(local_56c[1] + 4) = (uint)local_538._5_1_;
      *(uint *)(local_56c[1] + 8) = (uint)local_538._6_1_;
      *(uint *)(local_56c[1] + 0xc) = (uint)local_538._7_1_;
    }
    else {
      auVar14 = VectorCopyLong(local_538,1,1);
      auVar15 = VectorCopyLong(auVar14._0_8_,2,1);
      auVar14 = VectorCopyLong(auVar14._8_8_,2,1);
      *(longlong *)*local_56c = auVar15._0_8_;
      *(longlong *)(*local_56c + 8) = auVar15._8_8_;
      *(longlong *)local_56c[1] = auVar14._0_8_;
      *(longlong *)(local_56c[1] + 8) = auVar14._8_8_;
    }
    *(uint *)local_56c[2] = (uint)local_530;
    *(uint *)(local_56c[2] + 4) = (uint)local_52f;
    *(uint *)(local_56c[2] + 8) = (uint)local_52e;
    FUN_08066ef0(pauVar12);
    FUN_0807a374();
    if (local_554 != (void *)0x0) {
      free(local_554);
    }
    if (local_54c != 0) {
      FUN_08005dd4(param_1);
    }
    if (local_550 != 0) {
      free(local_55c);
      free(local_558);
      if (local_54c != 0) {
        puts("Performing long jmp to reset.");
                    /* WARNING: Subroutine does not return */
        longjmp((__jmp_buf_tag *)(param_1 + 0x29162c0),0);
      }
    }
    return;
  }
  goto LAB_08066940;
}


