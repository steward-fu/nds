/*
 * Ghidra decompilation
 *
 * Function : store_io_register_arm9_16
 * Address  : 001155b0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void store_io_register_arm9_16(long param_1,ulong param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  ushort uVar8;
  long lVar9;
  uint local_18;
  uint uStack_14;
  undefined local_f;
  long local_8;
  
  uVar7 = (uint)param_2;
  local_8 = ___stack_chk_guard;
  uVar1 = param_3 & 0xffff;
  uVar8 = (ushort)param_3;
  if (0x3be < uVar7) {
    if (uVar7 < 0x1004) {
      if (0xfff < uVar7) goto LAB_001158b0;
      if (uVar7 == 0x610) {
        *(ushort *)(*(long *)(param_1 + 0xfba78) + 0x9aac) = uVar8;
        goto LAB_00115790;
      }
    }
    else if (uVar7 < 0x1056) {
      if (0x1007 < uVar7) {
LAB_001158b0:
        lVar9 = *(long *)(param_1 + 0xfba70) + 0x84298;
        if (*(ushort *)(*(long *)(param_1 + 0xfba68) + 0x14) < 0xc0) {
LAB_001158d0:
          video_2d_queue_event(lVar9,param_2 & 0xffffffff,uVar1,2);
        }
        else {
LAB_00115b34:
          local_f = 2;
          local_18 = uVar7;
          uStack_14 = uVar1;
          video_2d_process_event(lVar9,&local_18);
        }
        goto LAB_00115790;
      }
    }
    else if (uVar7 - 0x106c < 4) goto LAB_001158b0;
switchD_00115610_caseD_189:
    store_io_register_arm9_8(param_1,param_2 & 0xffffffff,uVar1);
    store_io_register_arm9_8(param_1,uVar7 + 1,uVar1 >> 8);
    goto switchD_00115610_caseD_216;
  }
  if (uVar7 < 0x188) {
    if (uVar7 == 0x100) {
      *(ushort *)(*(long *)(nds_system + *(long *)(param_1 + 0xfba88) + 0xb04010) + 0x18) = uVar8;
    }
    else {
      if (uVar7 < 0x101) {
        if (uVar7 == 0xba) {
          *(ushort *)(param_1 + 0x1b12a) = uVar8;
          uVar7 = (uint)*(ushort *)(param_1 + 0x1b128) | uVar1 << 0x10;
          if ((uVar1 >> 0xf == 0) || (*(int *)(param_1 + 0xfd2c8) < 0)) {
            *(uint *)(param_1 + 0xfd2c8) = uVar7;
          }
          else {
            uVar1 = (uVar1 << 0x10) >> 0x1b & 7;
            *(char *)(param_1 + 0xfd2cc) = (char)uVar1;
            *(undefined4 *)(param_1 + 0xfd2c0) = **(undefined4 **)(param_1 + 0xfd2b8);
            *(undefined4 *)(param_1 + 0xfd2c4) = (*(undefined4 **)(param_1 + 0xfd2b8))[1];
            *(uint *)(param_1 + 0xfd2c8) = uVar7;
            if (uVar1 == 0 || uVar1 == 7) {
              dma_transfer(param_1 + 0xfd298,param_1 + 0xfd2a8);
            }
          }
          goto switchD_00115610_caseD_216;
        }
        if (0xba < uVar7) {
          if (uVar7 == 0xd2) {
            *(ushort *)(param_1 + 0x1b142) = uVar8;
            uVar7 = (uint)*(ushort *)(param_1 + 0x1b140) | uVar1 << 0x10;
            if ((uVar1 >> 0xf == 0) || (*(int *)(param_1 + 0xfd318) < 0)) {
              *(uint *)(param_1 + 0xfd318) = uVar7;
            }
            else {
              uVar1 = (uVar1 << 0x10) >> 0x1b & 7;
              *(char *)(param_1 + 0xfd31c) = (char)uVar1;
              *(undefined4 *)(param_1 + 0xfd310) = **(undefined4 **)(param_1 + 0xfd308);
              *(undefined4 *)(param_1 + 0xfd314) = (*(undefined4 **)(param_1 + 0xfd308))[1];
              *(uint *)(param_1 + 0xfd318) = uVar7;
              if (uVar1 == 0 || uVar1 == 7) {
                dma_transfer(param_1 + 0xfd298,param_1 + 0xfd2f8);
              }
            }
            goto switchD_00115610_caseD_216;
          }
          if (uVar7 == 0xde) {
            *(ushort *)(param_1 + 0x1b14e) = uVar8;
            uVar7 = (uint)*(ushort *)(param_1 + 0x1b14c) | uVar1 << 0x10;
            if ((uVar1 >> 0xf == 0) || (*(int *)(param_1 + 0xfd340) < 0)) {
              *(uint *)(param_1 + 0xfd340) = uVar7;
            }
            else {
              uVar1 = (uVar1 << 0x10) >> 0x1b & 7;
              *(char *)(param_1 + 0xfd344) = (char)uVar1;
              *(undefined4 *)(param_1 + 0xfd338) = **(undefined4 **)(param_1 + 0xfd330);
              *(undefined4 *)(param_1 + 0xfd33c) = (*(undefined4 **)(param_1 + 0xfd330))[1];
              *(uint *)(param_1 + 0xfd340) = uVar7;
              if (uVar1 == 0 || uVar1 == 7) {
                dma_transfer(param_1 + 0xfd298,param_1 + 0xfd320);
              }
            }
            goto switchD_00115610_caseD_216;
          }
          if (uVar7 == 0xc6) {
            *(ushort *)(param_1 + 0x1b136) = uVar8;
            uVar7 = (uint)*(ushort *)(param_1 + 0x1b134) | uVar1 << 0x10;
            if ((uVar1 >> 0xf == 0) || (*(int *)(param_1 + 0xfd2f0) < 0)) {
              *(uint *)(param_1 + 0xfd2f0) = uVar7;
            }
            else {
              uVar1 = (uVar1 << 0x10) >> 0x1b & 7;
              *(char *)(param_1 + 0xfd2f4) = (char)uVar1;
              *(undefined4 *)(param_1 + 0xfd2e8) = **(undefined4 **)(param_1 + 0xfd2e0);
              *(undefined4 *)(param_1 + 0xfd2ec) = (*(undefined4 **)(param_1 + 0xfd2e0))[1];
              *(uint *)(param_1 + 0xfd2f0) = uVar7;
              if (uVar1 == 0 || uVar1 == 7) {
                dma_transfer(param_1 + 0xfd298,param_1 + 0xfd2d0);
              }
            }
            goto switchD_00115610_caseD_216;
          }
          goto switchD_00115610_caseD_189;
        }
        if (uVar7 == 0x60) {
          uVar8 = (ushort)(param_3 & 0xcfff);
          *(uint *)(*(long *)(param_1 + 0xfba78) + 0x9a88) = param_3 & 0xcfff;
          goto LAB_00115790;
        }
        if (uVar7 < 0x61) {
          if ((uVar7 < 4) || (uVar7 - 8 < 0x4e)) goto LAB_00115b14;
        }
        else if (uVar7 - 0x6c < 4) {
LAB_00115b14:
          lVar9 = *(long *)(param_1 + 0xfba70) + 0x2e78;
          if (*(ushort *)(*(long *)(param_1 + 0xfba68) + 0x14) < 0xc0) goto LAB_001158d0;
          goto LAB_00115b34;
        }
        goto switchD_00115610_caseD_189;
      }
      if (uVar7 == 0x108) {
        *(ushort *)(*(long *)(nds_system + *(long *)(param_1 + 0xfba88) + 0xb04010) + 0x58) = uVar8;
      }
      else if (uVar7 < 0x109) {
        if (uVar7 != 0x104) {
          if (uVar7 == 0x106) {
            lVar6 = *(long *)(nds_system + *(long *)(param_1 + 0xfba88) + 0xb04010);
            if ((param_3 & 3) == 0) {
              uVar3 = 1;
              *(undefined *)(lVar6 + 0x3c) = 1;
            }
            else {
              uVar7 = (param_3 & 3) * 2 + 5;
              uVar3 = (ulong)uVar7;
              *(char *)(lVar6 + 0x3c) = (char)uVar7;
            }
            lVar9 = lVar6 + 0x20;
            iVar2 = 0x10000 - (uint)*(ushort *)(lVar6 + 0x38) << uVar3;
            *(int *)(lVar6 + 0x34) = iVar2;
            if ((uVar1 >> 7 & 1) == 0) {
              if (*(char *)(lVar6 + 0x3e) != '\0') {
                remove_event(*(long *)(param_1 + 0xfba68) + 0x18,8);
                *(undefined *)(lVar6 + 0x3e) = 0;
              }
            }
            else if ((*(ushort *)(lVar6 + 0x3a) & 0x80 | param_3 & 4) == 0) {
              lVar4 = *(long *)(param_1 + 0xfba68);
              uVar7 = *(uint *)(lVar4 + 0x10);
              lVar5 = (*(long *)(lVar4 + 8) + (ulong)uVar7) - (long)*(int *)(lVar6 + 0x2290);
              uVar1 = ((int)lVar5 - (int)*(long *)(lVar4 + 8)) + iVar2;
              *(long *)(lVar6 + 0x28) = lVar5;
              if (uVar1 < uVar7) {
                uVar1 = uVar7;
              }
              if (*(char *)(lVar6 + 0x3e) != '\0') {
                remove_event(lVar4 + 0x18,8);
              }
              schedule_event(lVar4 + 0x18,uVar1,8);
              *(undefined *)(lVar6 + 0x3e) = 1;
            }
          }
          else {
            if (uVar7 != 0x102) goto switchD_00115610_caseD_189;
            lVar9 = *(long *)(nds_system + *(long *)(param_1 + 0xfba88) + 0xb04010);
            if ((param_3 & 3) == 0) {
              uVar3 = 1;
              *(undefined *)(lVar9 + 0x1c) = 1;
            }
            else {
              uVar7 = (param_3 & 3) * 2 + 5;
              uVar3 = (ulong)uVar7;
              *(char *)(lVar9 + 0x1c) = (char)uVar7;
            }
            iVar2 = 0x10000 - (uint)*(ushort *)(lVar9 + 0x18) << uVar3;
            *(int *)(lVar9 + 0x14) = iVar2;
            if ((uVar1 >> 7 & 1) == 0) {
              if (*(char *)(lVar9 + 0x1e) != '\0') {
                remove_event(*(long *)(param_1 + 0xfba68) + 0x18,7);
                *(undefined *)(lVar9 + 0x1e) = 0;
              }
            }
            else if ((*(ushort *)(lVar9 + 0x1a) & 0x80 | param_3 & 4) == 0) {
              lVar6 = *(long *)(param_1 + 0xfba68);
              uVar7 = *(uint *)(lVar6 + 0x10);
              lVar4 = (*(long *)(lVar6 + 8) + (ulong)uVar7) - (long)*(int *)(lVar9 + 0x2290);
              uVar1 = ((int)lVar4 - (int)*(long *)(lVar6 + 8)) + iVar2;
              *(long *)(lVar9 + 8) = lVar4;
              if (uVar1 < uVar7) {
                uVar1 = uVar7;
              }
              if (*(char *)(lVar9 + 0x1e) != '\0') {
                remove_event(lVar6 + 0x18,7);
              }
              schedule_event(lVar6 + 0x18,uVar1,7);
              *(undefined *)(lVar9 + 0x1e) = 1;
            }
          }
          goto LAB_001159b0;
        }
        *(ushort *)(*(long *)(nds_system + *(long *)(param_1 + 0xfba88) + 0xb04010) + 0x38) = uVar8;
      }
      else {
        if (uVar7 != 0x10c) {
          if (uVar7 == 0x10e) {
            lVar6 = *(long *)(nds_system + *(long *)(param_1 + 0xfba88) + 0xb04010);
            if ((param_3 & 3) == 0) {
              uVar3 = 1;
              *(undefined *)(lVar6 + 0x7c) = 1;
            }
            else {
              uVar7 = (param_3 & 3) * 2 + 5;
              uVar3 = (ulong)uVar7;
              *(char *)(lVar6 + 0x7c) = (char)uVar7;
            }
            lVar9 = lVar6 + 0x60;
            iVar2 = 0x10000 - (uint)*(ushort *)(lVar6 + 0x78) << uVar3;
            *(int *)(lVar6 + 0x74) = iVar2;
            if ((uVar1 >> 7 & 1) == 0) {
              if (*(char *)(lVar6 + 0x7e) != '\0') {
                remove_event(*(long *)(param_1 + 0xfba68) + 0x18,10);
                *(undefined *)(lVar6 + 0x7e) = 0;
              }
            }
            else if ((*(ushort *)(lVar6 + 0x7a) & 0x80 | param_3 & 4) == 0) {
              lVar4 = *(long *)(param_1 + 0xfba68);
              uVar7 = *(uint *)(lVar4 + 0x10);
              lVar5 = (*(long *)(lVar4 + 8) + (ulong)uVar7) - (long)*(int *)(lVar6 + 0x2290);
              uVar1 = ((int)lVar5 - (int)*(long *)(lVar4 + 8)) + iVar2;
              *(long *)(lVar6 + 0x68) = lVar5;
              if (uVar1 < uVar7) {
                uVar1 = uVar7;
              }
              if (*(char *)(lVar6 + 0x7e) != '\0') {
                remove_event(lVar4 + 0x18,10);
              }
              schedule_event(lVar4 + 0x18,uVar1,10);
              *(undefined *)(lVar6 + 0x7e) = 1;
            }
          }
          else {
            if (uVar7 != 0x10a) goto switchD_00115610_caseD_189;
            lVar6 = *(long *)(nds_system + *(long *)(param_1 + 0xfba88) + 0xb04010);
            if ((param_3 & 3) == 0) {
              uVar3 = 1;
              *(undefined *)(lVar6 + 0x5c) = 1;
            }
            else {
              uVar7 = (param_3 & 3) * 2 + 5;
              uVar3 = (ulong)uVar7;
              *(char *)(lVar6 + 0x5c) = (char)uVar7;
            }
            lVar9 = lVar6 + 0x40;
            iVar2 = 0x10000 - (uint)*(ushort *)(lVar6 + 0x58) << uVar3;
            *(int *)(lVar6 + 0x54) = iVar2;
            if ((uVar1 >> 7 & 1) == 0) {
              if (*(char *)(lVar6 + 0x5e) != '\0') {
                remove_event(*(long *)(param_1 + 0xfba68) + 0x18,9);
                *(undefined *)(lVar6 + 0x5e) = 0;
              }
            }
            else if ((*(ushort *)(lVar6 + 0x5a) & 0x80 | param_3 & 4) == 0) {
              lVar4 = *(long *)(param_1 + 0xfba68);
              uVar7 = *(uint *)(lVar4 + 0x10);
              lVar5 = (*(long *)(lVar4 + 8) + (ulong)uVar7) - (long)*(int *)(lVar6 + 0x2290);
              uVar1 = ((int)lVar5 - (int)*(long *)(lVar4 + 8)) + iVar2;
              *(long *)(lVar6 + 0x48) = lVar5;
              if (uVar1 < uVar7) {
                uVar1 = uVar7;
              }
              if (*(char *)(lVar6 + 0x5e) != '\0') {
                remove_event(lVar4 + 0x18,9);
              }
              schedule_event(lVar4 + 0x18,uVar1,9);
              *(undefined *)(lVar6 + 0x5e) = 1;
            }
          }
LAB_001159b0:
          *(ushort *)(lVar9 + 0x1a) = uVar8;
          *(ushort *)(param_1 + (param_2 & 0x7fff) + 0x1b070) = uVar8;
          goto switchD_00115610_caseD_216;
        }
        *(ushort *)(*(long *)(nds_system + *(long *)(param_1 + 0xfba88) + 0xb04010) + 0x78) = uVar8;
      }
    }
    goto LAB_00115790;
  }
  switch(uVar7) {
  case 0x188:
    __printf_chk(1,"ARM9 IPCFIFOSEND write16 %x\n",uVar1);
    goto switchD_00115610_caseD_216;
  default:
    goto switchD_00115610_caseD_189;
  case 0x1a0:
    *(ushort *)(param_1 + 0x1b210) = uVar8 & 0xff7f;
    goto switchD_00115610_caseD_216;
  case 0x208:
    uVar8 = uVar8 & 1;
    lVar9 = *(long *)(nds_system + *(long *)(param_1 + 0xfba88) + 0xb04010);
    if (((param_3 & 1) == 0) || (*(int *)(param_1 + 0x1b278) != 0)) {
      *(undefined4 *)(lVar9 + 0x2108) = 0;
    }
    else {
      uVar1 = *(uint *)(param_1 + 0x1b284) & *(uint *)(param_1 + 0x1b280);
      *(uint *)(lVar9 + 0x2108) = uVar1;
      if (uVar1 != 0) {
        *(uint *)(lVar9 + 0x22a8) = *(uint *)(lVar9 + 0x22a8) | 2;
      }
    }
    break;
  case 0x210:
    uVar7 = *(uint *)(param_1 + 0x1b280);
    uVar1 = uVar1 | uVar7 & 0xffff0000;
    *(uint *)(param_1 + 0x1b280) = uVar1;
    uVar7 = uVar1 & (uVar7 ^ 0xffffffff);
    goto joined_r0x00115cb4;
  case 0x212:
    uVar7 = *(uint *)(param_1 + 0x1b280);
    uVar1 = uVar7 & 0xffff | uVar1 << 0x10;
    *(uint *)(param_1 + 0x1b280) = uVar1;
    uVar7 = uVar1 & (uVar7 ^ 0xffffffff);
joined_r0x00115cb4:
    if (uVar7 != 0) {
      uVar1 = -*(int *)(param_1 + 0x1b278) & *(uint *)(param_1 + 0x1b284) & uVar1;
      lVar9 = *(long *)(nds_system + *(long *)(param_1 + 0xfba88) + 0xb04010);
      *(uint *)(lVar9 + 0x2108) = uVar1;
      if (uVar1 != 0) {
        *(uint *)(lVar9 + 0x22a8) = *(uint *)(lVar9 + 0x22a8) | 2;
      }
    }
    goto switchD_00115610_caseD_216;
  case 0x214:
    *(uint *)(param_1 + 0x1b284) = *(uint *)(param_1 + 0x1b284) & (uVar1 ^ 0xffffffff);
    *(uint *)(*(long *)(nds_system + *(long *)(param_1 + 0xfba88) + 0xb04010) + 0x2108) =
         *(uint *)(*(long *)(nds_system + *(long *)(param_1 + 0xfba88) + 0xb04010) + 0x2108) &
         (uVar1 ^ 0xffffffff);
  case 0x216:
    goto switchD_00115610_caseD_216;
  case 0x280:
    uVar8 = uVar8 & 0x7fff;
    *(undefined *)(param_1 + 0xfd510) = 0;
    break;
  case 0x290:
  case 0x292:
  case 0x294:
  case 0x296:
  case 0x298:
  case 0x29a:
  case 0x29c:
  case 0x29e:
    *(undefined *)(param_1 + 0xfd510) = 0;
    break;
  case 0x2b0:
    uVar8 = uVar8 & 0x7fff;
    *(undefined *)(param_1 + 0xfd511) = 0;
    break;
  case 0x2b8:
  case 0x2ba:
    *(undefined *)(param_1 + 0xfd511) = 0;
    break;
  case 0x330:
  case 0x332:
  case 0x334:
  case 0x336:
  case 0x338:
  case 0x33a:
  case 0x33c:
  case 0x33e:
    geometry_store_edge_color_entry(*(undefined8 *)(param_1 + 0xfba78),uVar7 - 0x330 >> 1,uVar1);
    break;
  case 0x350:
    *(ushort *)(*(long *)(param_1 + 0xfba78) + 0x9a8c) = uVar8;
    break;
  case 0x352:
    *(ushort *)(*(long *)(param_1 + 0xfba78) + 0x9a8e) = uVar8;
    break;
  case 0x354:
    *(ushort *)(*(long *)(param_1 + 0xfba78) + 0x9aa6) = uVar8;
    break;
  case 0x356:
    *(ushort *)(*(long *)(param_1 + 0xfba78) + 0x9aa8) = uVar8;
    break;
  case 0x35c:
    *(ushort *)(*(long *)(param_1 + 0xfba78) + 0x9aaa) = uVar8;
    break;
  case 0x360:
  case 0x362:
  case 0x364:
  case 0x366:
  case 0x368:
  case 0x36a:
  case 0x36c:
  case 0x36e:
  case 0x370:
  case 0x372:
  case 0x374:
  case 0x376:
  case 0x378:
  case 0x37a:
  case 0x37c:
  case 0x37e:
    geometry_store_fog_table_entry(*(undefined8 *)(param_1 + 0xfba78),uVar7 - 0x360,uVar1);
    geometry_store_fog_table_entry(*(undefined8 *)(param_1 + 0xfba78),uVar7 - 0x35f,uVar1 >> 8);
    break;
  case 0x380:
  case 0x382:
  case 900:
  case 0x386:
  case 0x388:
  case 0x38a:
  case 0x38c:
  case 0x38e:
  case 0x390:
  case 0x392:
  case 0x394:
  case 0x396:
  case 0x398:
  case 0x39a:
  case 0x39c:
  case 0x39e:
  case 0x3a0:
  case 0x3a2:
  case 0x3a4:
  case 0x3a6:
  case 0x3a8:
  case 0x3aa:
  case 0x3ac:
  case 0x3ae:
  case 0x3b0:
  case 0x3b2:
  case 0x3b4:
  case 0x3b6:
  case 0x3b8:
  case 0x3ba:
  case 0x3bc:
  case 0x3be:
    geometry_store_toon_table_entry(*(undefined8 *)(param_1 + 0xfba78),uVar7 - 0x380 >> 1,uVar1);
  }
LAB_00115790:
  *(ushort *)(param_1 + (param_2 & 0x7fff) + 0x1b070) = uVar8;
switchD_00115610_caseD_216:
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&__stack_chk_guard,local_8 - ___stack_chk_guard,0);
}


