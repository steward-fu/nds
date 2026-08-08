/*
 * Ghidra decompilation
 *
 * Function : FUN_001149cc
 * Address  : 001149cc
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001149cc(long param_1,ulong param_2,ulong param_3)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  byte bVar4;
  undefined uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  uint uStack_18;
  uint uStack_14;
  undefined uStack_f;
  long lStack_8;
  
  uVar6 = (uint)param_2;
  uVar7 = (uint)param_3;
  uVar9 = uVar7 & 0xff;
  lStack_8 = ___stack_chk_guard;
  bVar4 = (byte)param_3;
  if (0x249 < uVar6) {
    if (uVar6 < 0x340) {
      if (uVar6 < 0x330) {
        if (uVar6 == 0x2b0) {
LAB_00115448:
          *(undefined *)(param_1 + 0xfd511) = 0;
        }
        else if (uVar6 < 0x2b1) {
          if (uVar6 == 0x281) {
            *(undefined *)(param_1 + 0xfd510) = 0;
            uVar9 = uVar7 & 0x7f;
          }
          else if (uVar6 < 0x282) {
            if (uVar6 == 0x280) goto LAB_00114b24;
          }
          else if (uVar6 - 0x290 < 0x10) {
LAB_00114b24:
            *(undefined *)(param_1 + 0xfd510) = 0;
          }
        }
        else if (uVar6 < 700) {
          if (0x2b7 < uVar6) goto LAB_00115448;
          if (uVar6 == 0x2b1) {
            *(undefined *)(param_1 + 0xfd511) = 0;
            uVar9 = uVar7 & 0x7f;
          }
        }
        else if ((uVar6 == 0x305) &&
                (uVar3 = *(ushort *)(*(long *)(param_1 + 0xfba68) + 0x14),
                uVar3 < 0xc0 && (char)(bVar4 ^ *(byte *)(param_1 + 0x1b375)) < '\0')) {
          lVar10 = *(long *)(param_1 + 0xfba70);
          video_2d_queue_event(lVar10 + 0x2e78,param_2,uVar9,1,uVar3);
          video_2d_queue_event(lVar10 + 0x84298,param_2 & 0xffffffff,uVar9,1,uVar3);
        }
      }
      else {
        uVar7 = uVar6 - 0x330 >> 1;
        uVar6 = geometry_load_edge_color_entry(*(undefined8 *)(param_1 + 0xfba78),uVar7);
        uVar6 = uVar6 & 0xff;
        if ((param_2 & 1) == 0) {
          uVar6 = uVar9;
        }
        geometry_store_edge_color_entry(*(undefined8 *)(param_1 + 0xfba78),uVar7,uVar6);
        uVar9 = uVar6;
      }
    }
    else if (uVar6 < 0x3c0) {
      if (uVar6 < 0x380) {
        if (uVar6 == 0x340) {
          *(byte *)(*(long *)(param_1 + 0xfba78) + 0x9abf) = bVar4;
        }
        else if (uVar6 - 0x360 < 0x20) {
          geometry_store_fog_table_entry(*(undefined8 *)(param_1 + 0xfba78),uVar6 - 0x360,uVar9);
        }
      }
      else {
        uVar7 = uVar6 - 0x380 >> 1;
        uVar6 = geometry_load_toon_table_entry
                          (*(undefined8 *)(param_1 + 0xfba78),uVar7,param_3,&__stack_chk_guard,0);
        uVar6 = uVar6 & 0xff;
        if ((param_2 & 1) == 0) {
          uVar6 = uVar9;
        }
        geometry_store_toon_table_entry(*(undefined8 *)(param_1 + 0xfba78),uVar7,uVar6);
        uVar9 = uVar6;
      }
    }
    else if (uVar6 < 0x1004) {
      if (0xfff < uVar6) goto LAB_00114bf4;
      if (uVar6 == 0x603) {
        uVar9 = uVar9 >> 6;
        if ((uVar9 - 1 & 0xff) < 2) {
          lVar8 = *(long *)(*(long *)(nds_system + *(long *)(param_1 + 0xfba88) + 0xb04010) + 0x2080
                           );
          uVar6 = *(uint *)(lVar8 + 0x214) | 0x200000;
          *(uint *)(lVar8 + 0x214) = uVar6;
          lVar10 = *(long *)(nds_system + *(long *)(param_1 + 0xfba88) + 0xb04010);
          if ((*(uint *)(lVar10 + 0x2110) & 6) == 0) {
            uVar6 = -*(int *)(lVar8 + 0x208) & uVar6 & *(uint *)(lVar8 + 0x210);
            *(uint *)(lVar10 + 0x2108) = uVar6;
          }
          else {
            uVar6 = *(uint *)(lVar10 + 0x2108);
          }
          if (uVar6 != 0) {
            *(uint *)(lVar10 + 0x22a8) = *(uint *)(lVar10 + 0x22a8) | 2;
          }
        }
        else {
          *(uint *)(param_1 + 0x1b284) = *(uint *)(param_1 + 0x1b284) & 0xffdfffff;
          *(uint *)(*(long *)(nds_system + *(long *)(param_1 + 0xfba88) + 0xb04010) + 0x2108) =
               *(uint *)(*(long *)(nds_system + *(long *)(param_1 + 0xfba88) + 0xb04010) + 0x2108) &
               0xffdfffff;
        }
      }
    }
    else if (uVar6 < 0x1056) {
      if (0x1007 < uVar6) goto LAB_00114bf4;
    }
    else if (uVar6 - 0x106c < 4) {
LAB_00114bf4:
      lVar10 = *(long *)(param_1 + 0xfba70) + 0x84298;
      if (0xbf < *(ushort *)(*(long *)(param_1 + 0xfba68) + 0x14)) goto LAB_00114d3c;
LAB_00114c14:
      video_2d_queue_event(lVar10,param_2 & 0xffffffff,uVar9,1);
    }
    goto switchD_00114c98_caseD_182;
  }
  if (uVar6 < 0x180) {
    if (uVar6 == 199) {
      uVar9 = *(uint *)(param_1 + 0x1b134) & 0xff000000 | uVar9 << 0x18;
      *(uint *)(param_1 + 0x1b134) = uVar9;
      if (((int)uVar9 < 0) && (-1 < *(int *)(param_1 + 0xfd2f0))) {
        uVar6 = uVar9 >> 0x1b & 7;
        *(char *)(param_1 + 0xfd2f4) = (char)uVar6;
        *(undefined4 *)(param_1 + 0xfd2e8) = **(undefined4 **)(param_1 + 0xfd2e0);
        *(undefined4 *)(param_1 + 0xfd2ec) = (*(undefined4 **)(param_1 + 0xfd2e0))[1];
        *(uint *)(param_1 + 0xfd2f0) = uVar9;
        if (uVar6 == 0 || uVar6 == 7) {
          dma_transfer(param_1 + 0xfd298,param_1 + 0xfd2d0);
        }
      }
      else {
        *(uint *)(param_1 + 0xfd2f0) = uVar9;
      }
      goto switchD_00114c98_caseD_180;
    }
    if (uVar6 < 200) {
      if (uVar6 == 0xba) {
        uVar9 = *(uint *)(param_1 + 0x1b128) & 0xff0000 | uVar9 << 0x10;
        *(uint *)(param_1 + 0x1b128) = uVar9;
        *(uint *)(param_1 + 0xfd2c8) = uVar9;
        goto switchD_00114c98_caseD_180;
      }
      if (uVar6 < 0xbb) {
        if (uVar6 == 4) {
          uVar9 = uVar7 & 0xf8 | *(byte *)(param_1 + 0x1b074) & 7;
        }
        else {
          if (uVar6 < 5) {
            if (uVar6 == 4) goto switchD_00114c98_caseD_182;
          }
          else if (uVar6 < 0x56) {
            if (uVar6 < 8) {
              uVar6 = uVar6 - 6;
              goto joined_r0x00114cc0;
            }
          }
          else if (3 < uVar6 - 0x6c) goto switchD_00114c98_caseD_182;
          lVar10 = *(long *)(param_1 + 0xfba70) + 0x2e78;
          if (*(ushort *)(*(long *)(param_1 + 0xfba68) + 0x14) < 0xc0) goto LAB_00114c14;
LAB_00114d3c:
          uStack_f = 1;
          uStack_18 = uVar6;
          uStack_14 = uVar9;
          video_2d_process_event(lVar10,&uStack_18);
        }
      }
      else {
        if (uVar6 == 0xbb) {
          uVar9 = *(uint *)(param_1 + 0x1b128) & 0xff000000 | uVar9 << 0x18;
          *(uint *)(param_1 + 0x1b128) = uVar9;
          if (((int)uVar9 < 0) && (-1 < *(int *)(param_1 + 0xfd2c8))) {
            uVar6 = uVar9 >> 0x1b & 7;
            *(char *)(param_1 + 0xfd2cc) = (char)uVar6;
            *(undefined4 *)(param_1 + 0xfd2c0) = **(undefined4 **)(param_1 + 0xfd2b8);
            *(undefined4 *)(param_1 + 0xfd2c4) = (*(undefined4 **)(param_1 + 0xfd2b8))[1];
            *(uint *)(param_1 + 0xfd2c8) = uVar9;
            if (uVar6 == 0 || uVar6 == 7) {
              dma_transfer(param_1 + 0xfd298,param_1 + 0xfd2a8);
            }
          }
          else {
            *(uint *)(param_1 + 0xfd2c8) = uVar9;
          }
          goto switchD_00114c98_caseD_180;
        }
        if (uVar6 == 0xc6) {
          uVar9 = *(uint *)(param_1 + 0x1b134) & 0xff0000 | uVar9 << 0x10;
          *(uint *)(param_1 + 0x1b134) = uVar9;
          *(uint *)(param_1 + 0xfd2f0) = uVar9;
          goto switchD_00114c98_caseD_180;
        }
      }
    }
    else {
      if (uVar6 == 0xde) {
        uVar9 = *(uint *)(param_1 + 0x1b14c) & 0xff0000 | uVar9 << 0x10;
        *(uint *)(param_1 + 0x1b14c) = uVar9;
        *(uint *)(param_1 + 0xfd340) = uVar9;
        goto switchD_00114c98_caseD_180;
      }
      if (uVar6 < 0xdf) {
        if (uVar6 == 0xd2) {
          uVar9 = *(uint *)(param_1 + 0x1b140) & 0xff0000 | uVar9 << 0x10;
          *(uint *)(param_1 + 0x1b140) = uVar9;
          *(uint *)(param_1 + 0xfd318) = uVar9;
          goto switchD_00114c98_caseD_180;
        }
        if (uVar6 == 0xd3) {
          uVar9 = *(uint *)(param_1 + 0x1b140) & 0xff000000 | uVar9 << 0x18;
          *(uint *)(param_1 + 0x1b140) = uVar9;
          if (((int)uVar9 < 0) && (-1 < *(int *)(param_1 + 0xfd318))) {
            uVar6 = uVar9 >> 0x1b & 7;
            *(char *)(param_1 + 0xfd31c) = (char)uVar6;
            *(undefined4 *)(param_1 + 0xfd310) = **(undefined4 **)(param_1 + 0xfd308);
            *(undefined4 *)(param_1 + 0xfd314) = (*(undefined4 **)(param_1 + 0xfd308))[1];
            *(uint *)(param_1 + 0xfd318) = uVar9;
            if (uVar6 == 0 || uVar6 == 7) {
              dma_transfer(param_1 + 0xfd298,param_1 + 0xfd2f8);
            }
          }
          else {
            *(uint *)(param_1 + 0xfd318) = uVar9;
          }
          goto switchD_00114c98_caseD_180;
        }
      }
      else {
        if (uVar6 == 0xdf) {
          uVar9 = *(uint *)(param_1 + 0x1b14c) & 0xff000000 | uVar9 << 0x18;
          *(uint *)(param_1 + 0x1b14c) = uVar9;
          if (((int)uVar9 < 0) && (-1 < *(int *)(param_1 + 0xfd340))) {
            uVar6 = uVar9 >> 0x1b & 7;
            *(char *)(param_1 + 0xfd344) = (char)uVar6;
            *(undefined4 *)(param_1 + 0xfd338) = **(undefined4 **)(param_1 + 0xfd330);
            *(undefined4 *)(param_1 + 0xfd33c) = (*(undefined4 **)(param_1 + 0xfd330))[1];
            *(uint *)(param_1 + 0xfd340) = uVar9;
            if (uVar6 == 0 || uVar6 == 7) {
              dma_transfer(param_1 + 0xfd298,param_1 + 0xfd320);
            }
          }
          else {
            *(uint *)(param_1 + 0xfd340) = uVar9;
          }
          goto switchD_00114c98_caseD_180;
        }
        uVar6 = uVar6 - 0x130;
joined_r0x00114cc0:
        if (uVar6 < 2) goto switchD_00114c98_caseD_180;
      }
    }
    goto switchD_00114c98_caseD_182;
  }
  switch(uVar6) {
  case 0x180:
  case 0x1a3:
  case 0x209:
  case 0x20a:
  case 0x20b:
  case 0x215:
  case 0x216:
  case 0x217:
    goto switchD_00114c98_caseD_180;
  case 0x181:
    if (((uVar9 >> 5 & 1) != 0) && ((*(byte *)(param_1 + 0x231f1) >> 6 & 1) != 0)) {
      lVar10 = *(long *)(nds_system + *(long *)(param_1 + 0xfba88) + 0xb04010);
      if (*(int *)(lVar10 + 0x210c) == 1) {
        *(uint *)(lVar10 + 0x22a8) = *(uint *)(lVar10 + 0x22a8) | 4;
      }
      lVar10 = *(long *)(*(long *)(nds_system + *(long *)(param_1 + 0xfba90) + 0xb04010) + 0x2080);
      uVar6 = *(uint *)(lVar10 + 0x214) | 0x10000;
      *(uint *)(lVar10 + 0x214) = uVar6;
      if ((*(uint *)(*(long *)(nds_system + *(long *)(param_1 + 0xfba90) + 0xb04010) + 0x2110) & 6)
          == 0) {
        *(uint *)(*(long *)(nds_system + *(long *)(param_1 + 0xfba90) + 0xb04010) + 0x2108) =
             -*(int *)(lVar10 + 0x208) & uVar6 & *(uint *)(lVar10 + 0x210);
      }
    }
    *(byte *)(param_1 + 0x231f0) = bVar4 & 0xf;
    *(ushort *)(param_1 + 0x1b1f1) = (ushort)uVar9 & 0x4f;
    break;
  case 0x184:
    if (((uVar9 >> 2 & 1) != 0) && ((*(byte *)(param_1 + 0xfd4b2) & 1) != 0)) {
      lVar10 = *(long *)(*(long *)(nds_system + *(long *)(param_1 + 0xfba88) + 0xb04010) + 0x2080);
      uVar6 = *(uint *)(lVar10 + 0x214) | 0x20000;
      *(uint *)(lVar10 + 0x214) = uVar6;
      lVar8 = *(long *)(nds_system + *(long *)(param_1 + 0xfba88) + 0xb04010);
      if ((*(uint *)(lVar8 + 0x2110) & 6) == 0) {
        uVar6 = -*(int *)(lVar10 + 0x208) & uVar6 & *(uint *)(lVar10 + 0x210);
        *(uint *)(lVar8 + 0x2108) = uVar6;
      }
      else {
        uVar6 = *(uint *)(lVar8 + 0x2108);
      }
      if (uVar6 != 0) {
        *(uint *)(lVar8 + 0x22a8) = *(uint *)(lVar8 + 0x22a8) | 2;
      }
    }
    if ((uVar9 >> 3 & 1) != 0) {
      ipc_fifo_clear(param_1 + 0xfd458);
    }
    *(byte *)(param_1 + 0x1b1f4) = *(byte *)(param_1 + 0x1b1f4) & 0xfb | bVar4 & 4;
    goto switchD_00114c98_caseD_180;
  case 0x185:
    bVar2 = *(byte *)(param_1 + 0x1b1f5);
    if (((uVar9 >> 2 & 1) != 0) && ((*(byte *)(param_1 + 0xfd452) & 1) == 0)) {
      lVar10 = *(long *)(*(long *)(nds_system + *(long *)(param_1 + 0xfba88) + 0xb04010) + 0x2080);
      uVar9 = *(uint *)(lVar10 + 0x214) | 0x40000;
      *(uint *)(lVar10 + 0x214) = uVar9;
      lVar8 = *(long *)(nds_system + *(long *)(param_1 + 0xfba88) + 0xb04010);
      if ((*(uint *)(lVar8 + 0x2110) & 6) == 0) {
        uVar9 = -*(int *)(lVar10 + 0x208) & uVar9 & *(uint *)(lVar10 + 0x210);
        *(uint *)(lVar8 + 0x2108) = uVar9;
      }
      else {
        uVar9 = *(uint *)(lVar8 + 0x2108);
      }
      if (uVar9 != 0) {
        *(uint *)(lVar8 + 0x22a8) = *(uint *)(lVar8 + 0x22a8) | 2;
      }
    }
    bVar1 = bVar2 & 0xbf;
    if ((param_3 & 0x40) == 0) {
      bVar1 = bVar2;
    }
    *(byte *)(param_1 + 0x1b1f5) = bVar1 & 0x7b | bVar4 & 0x84;
    goto switchD_00114c98_caseD_180;
  case 0x188:
  case 0x189:
  case 0x18a:
  case 0x18b:
    puts("store io8 ARM9 IPCFIFOSEND");
    break;
  case 0x1a2:
    uVar3 = *(ushort *)(param_1 + 0x1b210);
    uVar5 = backup_transfer(*(long *)(param_1 + 0xfd4b8) + 0x968,uVar9);
    if ((uVar3 >> 6 & 1) == 0) {
      backup_deselect(*(long *)(param_1 + 0xfd4b8) + 0x968);
    }
    *(undefined *)(param_1 + 0x1b212) = uVar5;
    goto switchD_00114c98_caseD_180;
  case 0x208:
    uVar9 = uVar7 & 1;
    lVar10 = *(long *)(nds_system + *(long *)(param_1 + 0xfba88) + 0xb04010);
    if (((param_3 & 1) == 0) || (*(int *)(param_1 + 0x1b278) != 0)) {
      *(undefined4 *)(lVar10 + 0x2108) = 0;
    }
    else {
      uVar6 = *(uint *)(param_1 + 0x1b284) & *(uint *)(param_1 + 0x1b280);
      *(uint *)(lVar10 + 0x2108) = uVar6;
      if (uVar6 != 0) {
        *(uint *)(lVar10 + 0x22a8) = *(uint *)(lVar10 + 0x22a8) | 2;
      }
    }
    break;
  case 0x210:
    uVar6 = *(uint *)(param_1 + 0x1b280);
    uVar9 = uVar9 | uVar6 & 0xffffff00;
    *(uint *)(param_1 + 0x1b280) = uVar9;
    uVar6 = uVar9 & (uVar6 ^ 0xffffffff);
    goto joined_r0x00114f6c;
  case 0x211:
    uVar6 = *(uint *)(param_1 + 0x1b280);
    uVar9 = uVar6 & 0xffff00ff | uVar9 << 8;
    *(uint *)(param_1 + 0x1b280) = uVar9;
    uVar6 = uVar9 & (uVar6 ^ 0xffffffff);
joined_r0x00114f6c:
    if (uVar6 != 0) {
LAB_00114ef4:
      uVar9 = -*(int *)(param_1 + 0x1b278) & *(uint *)(param_1 + 0x1b284) & uVar9;
      lVar10 = *(long *)(nds_system + *(long *)(param_1 + 0xfba88) + 0xb04010);
      *(uint *)(lVar10 + 0x2108) = uVar9;
      if (uVar9 != 0) {
        *(uint *)(lVar10 + 0x22a8) = *(uint *)(lVar10 + 0x22a8) | 2;
      }
    }
    goto switchD_00114c98_caseD_180;
  case 0x212:
    uVar6 = *(uint *)(param_1 + 0x1b280);
    uVar9 = uVar6 & 0xff00ffff | uVar9 << 0x10;
    *(uint *)(param_1 + 0x1b280) = uVar9;
    uVar6 = uVar9 & (uVar6 ^ 0xffffffff);
    goto joined_r0x00114ef0;
  case 0x213:
    uVar6 = *(uint *)(param_1 + 0x1b280);
    uVar9 = uVar6 & 0xffffff | uVar9 << 0x18;
    *(uint *)(param_1 + 0x1b280) = uVar9;
    uVar6 = uVar9 & (uVar6 ^ 0xffffffff);
joined_r0x00114ef0:
    if (uVar6 == 0) goto switchD_00114c98_caseD_180;
    goto LAB_00114ef4;
  case 0x214:
    *(uint *)(param_1 + 0x1b284) = *(uint *)(param_1 + 0x1b284) & (uVar9 ^ 0xffffffff);
    *(uint *)(*(long *)(nds_system + *(long *)(param_1 + 0xfba88) + 0xb04010) + 0x2108) =
         *(uint *)(*(long *)(nds_system + *(long *)(param_1 + 0xfba88) + 0xb04010) + 0x2108) &
         (uVar9 ^ 0xffffffff);
    goto switchD_00114c98_caseD_180;
  case 0x240:
    remap_vram(*(undefined8 *)(param_1 + 0xfba70),*(undefined8 *)(param_1 + 0x15020),0,uVar9);
    break;
  case 0x241:
    remap_vram(*(undefined8 *)(param_1 + 0xfba70),*(undefined8 *)(param_1 + 0x15028),1,uVar9);
    break;
  case 0x242:
    remap_vram(*(undefined8 *)(param_1 + 0xfba70),*(undefined8 *)(param_1 + 0x15030),2,uVar9);
    break;
  case 0x243:
    remap_vram(*(undefined8 *)(param_1 + 0xfba70),*(undefined8 *)(param_1 + 0x15038),3,uVar9);
    break;
  case 0x244:
    remap_vram(*(undefined8 *)(param_1 + 0xfba70),*(undefined8 *)(param_1 + 0x15040),4,uVar9);
    break;
  case 0x245:
    remap_vram(*(undefined8 *)(param_1 + 0xfba70),*(undefined8 *)(param_1 + 0x15048),5,uVar9);
    break;
  case 0x246:
    remap_vram(*(undefined8 *)(param_1 + 0xfba70),*(undefined8 *)(param_1 + 0x15050),6,uVar9);
    break;
  case 0x247:
    uVar9 = uVar7 & 3;
    if (*(byte *)(param_1 + 0x1b2b7) != uVar9) {
      remap_wram(param_1);
      *(char *)(param_1 + 0x232b1) = (char)uVar9;
    }
    break;
  case 0x248:
    remap_vram(*(undefined8 *)(param_1 + 0xfba70),*(undefined8 *)(param_1 + 0x15058),7,uVar9);
    break;
  case 0x249:
    remap_vram(*(undefined8 *)(param_1 + 0xfba70),*(undefined8 *)(param_1 + 0x15060),8,uVar9);
  }
switchD_00114c98_caseD_182:
  *(char *)(param_1 + (param_2 & 0x7fff) + 0x1b070) = (char)uVar9;
switchD_00114c98_caseD_180:
  if (lStack_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&__stack_chk_guard,lStack_8 - ___stack_chk_guard,0);
}


