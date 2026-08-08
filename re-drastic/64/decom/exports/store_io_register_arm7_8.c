/*
 * Ghidra decompilation
 *
 * Function : store_io_register_arm7_8
 * Address  : 00110fa0
 * Program  : drastic64
 */


ulong store_io_register_arm7_8(ulong param_1,uint param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  ushort uVar4;
  byte bVar5;
  undefined uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  
  uVar11 = (ulong)param_2;
  uVar8 = param_3 & 0xff;
  bVar5 = (byte)param_3;
  uVar9 = param_1;
  if (0x217 < param_2) {
    if (param_2 < 0x500) {
      if (0x3ff < param_2) {
        uVar9 = param_1 + 0x23070;
        lVar13 = *(long *)(param_1 + 0xfba80);
        uVar7 = param_2 & 0xfffff00f;
        *(byte *)(uVar9 + uVar11) = bVar5;
        uVar12 = (ulong)(param_2 >> 4) & 0xf;
        if (uVar7 == 3) {
          if (uVar8 >> 7 == 0) {
            *(undefined *)(lVar13 + uVar12 * 200 + 0x400e6) = 0;
          }
          else {
            spu_key_on(lVar13,uVar12);
          }
          lVar13 = lVar13 + uVar12 * 200;
          *(byte *)(lVar13 + 0x400e5) = *(byte *)(lVar13 + 0x400e5) | 2;
          return lVar13 + 0x40000;
        }
        if (uVar7 < 4) {
          if (uVar7 == 3) {
            return uVar9;
          }
          lVar13 = lVar13 + uVar12 * 200;
          *(byte *)(lVar13 + 0x400e5) = *(byte *)(lVar13 + 0x400e5) | 2;
          *(byte *)(uVar9 + uVar11) = bVar5;
          return uVar9;
        }
        if (1 < uVar7 - 8) {
          return uVar9;
        }
        lVar13 = lVar13 + uVar12 * 200;
        *(byte *)(lVar13 + 0x400e5) = *(byte *)(lVar13 + 0x400e5) | 1;
        *(byte *)(uVar9 + uVar11) = bVar5;
        return uVar9;
      }
      if (param_2 == 0x241) {
        return param_1;
      }
      if (param_2 == 0x301) {
        uVar7 = uVar8 >> 6;
        if (uVar7 == 2) {
          *(uint *)(*(long *)(nds_system + *(long *)(param_1 + 0xfba90) + 0xb04010) + 0x22a8) =
               *(uint *)(*(long *)(nds_system + *(long *)(param_1 + 0xfba90) + 0xb04010) + 0x22a8) |
               0x10;
          uVar9 = execute_arm_halt_cpu_arm7();
        }
        else if (uVar7 == 3) {
          lVar13 = *(long *)(nds_system + *(long *)(param_1 + 0xfba90) + 0xb04010);
          puts("Entering sleep mode.");
          *(uint *)(lVar13 + 0x22a8) = *(uint *)(lVar13 + 0x22a8) | 0x10;
          execute_arm_halt_cpu_arm7(lVar13);
          *(undefined4 *)(lVar13 + 0x2110) = 2;
          uVar7 = *(uint *)(*(long *)(lVar13 + 0x22a0) + 0x2110) | 2;
          *(uint *)(*(long *)(lVar13 + 0x22a0) + 0x2110) = uVar7;
          uVar9 = (ulong)uVar7;
        }
        else {
          uVar9 = (ulong)uVar7;
          if (uVar7 == 1) {
            uVar7 = puts("Enter GBA mode: unsupported.");
            uVar9 = (ulong)uVar7;
          }
        }
      }
    }
    else if (param_2 - 0x508 < 2) {
      uVar9 = spu_capture_control(*(undefined8 *)(param_1 + 0xfba80),param_2 - 0x508,uVar8);
    }
    else if (0x7fffff < param_2) {
      return param_1;
    }
    goto switchD_00110fec_caseD_182;
  }
  if (param_2 < 0x180) {
    if (param_2 < 0x132) {
      if (0x12f < param_2) {
        return param_1;
      }
      if (param_2 == 4) {
        uVar8 = *(byte *)(param_1 + 0x23074) & 7 | param_3 & 0xf8;
      }
      else if (param_2 - 6 < 2) {
        return param_1;
      }
    }
    else if (param_2 < 0x138) {
      if (0x135 < param_2) {
        return param_1;
      }
    }
    else if (param_2 == 0x138) {
      uVar9 = rtc_write(*(undefined8 *)(param_1 + 0xfd4c8),uVar8);
      uVar8 = (uint)uVar9 & 0xff;
    }
    goto switchD_00110fec_caseD_182;
  }
  uVar9 = (long)(short)(&switchD_00110fec::switchdataD_0021b858)[param_2 - 0x181] * 4 + 0x110ff0;
  switch(param_2) {
  case 0x181:
    if (((uVar8 >> 5 & 1) != 0) && ((*(byte *)(param_1 + 0x1b1f1) >> 6 & 1) != 0)) {
      lVar13 = *(long *)(nds_system + *(long *)(param_1 + 0xfba90) + 0xb04010);
      if (*(int *)(lVar13 + 0x210c) == 1) {
        *(uint *)(lVar13 + 0x22a8) = *(uint *)(lVar13 + 0x22a8) | 4;
      }
      lVar13 = *(long *)(*(long *)(nds_system + *(long *)(param_1 + 0xfba88) + 0xb04010) + 0x2080);
      uVar7 = *(uint *)(lVar13 + 0x214) | 0x10000;
      *(uint *)(lVar13 + 0x214) = uVar7;
      if ((*(uint *)(*(long *)(nds_system + *(long *)(param_1 + 0xfba88) + 0xb04010) + 0x2110) & 6)
          == 0) {
        *(uint *)(*(long *)(nds_system + *(long *)(param_1 + 0xfba88) + 0xb04010) + 0x2108) =
             -*(int *)(lVar13 + 0x208) & uVar7 & *(uint *)(lVar13 + 0x210);
      }
    }
    uVar9 = param_1 + 0x23200;
    *(byte *)(param_1 + 0x1b1f0) = bVar5 & 0xf;
    *(ushort *)(param_1 + 0x231f1) = (ushort)uVar8 & 0x4f;
  default:
    goto switchD_00110fec_caseD_182;
  case 0x184:
    if (((uVar8 >> 2 & 1) != 0) &&
       (uVar9 = (ulong)*(byte *)(param_1 + 0xfd452), (*(byte *)(param_1 + 0xfd452) & 1) != 0)) {
      lVar10 = *(long *)(*(long *)(nds_system + *(long *)(param_1 + 0xfba90) + 0xb04010) + 0x2080);
      uVar7 = *(uint *)(lVar10 + 0x214) | 0x20000;
      *(uint *)(lVar10 + 0x214) = uVar7;
      lVar13 = *(long *)(nds_system + *(long *)(param_1 + 0xfba90) + 0xb04010);
      if ((*(uint *)(lVar13 + 0x2110) & 6) == 0) {
        uVar7 = -*(int *)(lVar10 + 0x208) & uVar7 & *(uint *)(lVar10 + 0x210);
        *(uint *)(lVar13 + 0x2108) = uVar7;
      }
      else {
        uVar7 = *(uint *)(lVar13 + 0x2108);
      }
      uVar9 = (ulong)uVar7;
      if (uVar7 != 0) {
        uVar7 = *(uint *)(lVar13 + 0x22a8) | 2;
        uVar9 = (ulong)uVar7;
        *(uint *)(lVar13 + 0x22a8) = uVar7;
      }
    }
    if ((uVar8 >> 3 & 1) != 0) {
      uVar9 = ipc_fifo_clear(param_1 + 0xfd3f8);
    }
    *(byte *)(param_1 + 0x231f4) = *(byte *)(param_1 + 0x231f4) & 0xfb | bVar5 & 4;
    break;
  case 0x185:
    bVar3 = *(byte *)(param_1 + 0x231f5);
    if (((uVar8 >> 2 & 1) != 0) && ((*(byte *)(param_1 + 0xfd4b2) & 1) == 0)) {
      lVar10 = *(long *)(*(long *)(nds_system + *(long *)(param_1 + 0xfba90) + 0xb04010) + 0x2080);
      uVar8 = *(uint *)(lVar10 + 0x214) | 0x40000;
      *(uint *)(lVar10 + 0x214) = uVar8;
      lVar13 = *(long *)(nds_system + *(long *)(param_1 + 0xfba90) + 0xb04010);
      if ((*(uint *)(lVar13 + 0x2110) & 6) == 0) {
        uVar8 = -*(int *)(lVar10 + 0x208) & uVar8 & *(uint *)(lVar10 + 0x210);
        *(uint *)(lVar13 + 0x2108) = uVar8;
      }
      else {
        uVar8 = *(uint *)(lVar13 + 0x2108);
      }
      if (uVar8 != 0) {
        *(uint *)(lVar13 + 0x22a8) = *(uint *)(lVar13 + 0x22a8) | 2;
      }
    }
    bVar1 = bVar3 & 0xbf;
    if ((param_3 & 0x40) == 0) {
      bVar1 = bVar3;
    }
    uVar9 = 0xffffff84;
    *(byte *)(param_1 + 0x231f5) = bVar1 & 0x7b | bVar5 & 0x84;
    break;
  case 0x188:
  case 0x189:
  case 0x18a:
  case 0x18b:
    uVar8 = puts("store io8 ARM9 IPCFIFOSEND");
    return (ulong)uVar8;
  case 0x1a2:
    uVar4 = *(ushort *)(param_1 + 0x1b210);
    uVar9 = backup_transfer(*(long *)(param_1 + 0xfd4b8) + 0x968,uVar8);
    uVar6 = (undefined)uVar9;
    if ((uVar4 >> 6 & 1) == 0) {
      uVar9 = backup_deselect(*(long *)(param_1 + 0xfd4b8) + 0x968);
    }
    *(undefined *)(param_1 + 0x1b212) = uVar6;
    break;
  case 0x1a3:
  case 0x1c3:
  case 0x209:
  case 0x20a:
  case 0x20b:
  case 0x215:
  case 0x216:
  case 0x217:
    break;
  case 0x1c0:
  case 0x1c1:
    uVar7 = puts("spi control8");
    uVar9 = (ulong)uVar7;
    goto switchD_00110fec_caseD_182;
  case 0x1c2:
    uVar9 = spi_data_write(*(undefined8 *)(param_1 + 0xfd4c0),uVar8);
    *(char *)(param_1 + 0x23232) = (char)uVar9;
    break;
  case 0x208:
    uVar8 = param_3 & 1;
    uVar9 = *(ulong *)(nds_system + *(long *)(param_1 + 0xfba90) + 0xb04010);
    if (((param_3 & 1) == 0) || (*(int *)(param_1 + 0x23278) != 0)) {
      *(undefined4 *)(uVar9 + 0x2108) = 0;
    }
    else {
      uVar7 = *(uint *)(param_1 + 0x23284) & *(uint *)(param_1 + 0x23280);
      *(uint *)(uVar9 + 0x2108) = uVar7;
      if (uVar7 != 0) {
        *(uint *)(uVar9 + 0x22a8) = *(uint *)(uVar9 + 0x22a8) | 2;
      }
    }
switchD_00110fec_caseD_182:
    *(char *)(param_1 + (uVar11 & 0x7fff) + 0x23070) = (char)uVar8;
    return uVar9;
  case 0x210:
    uVar2 = *(uint *)(param_1 + 0x23280);
    uVar8 = uVar8 | uVar2 & 0xffffff00;
    *(uint *)(param_1 + 0x23280) = uVar8;
    uVar7 = uVar8 & (uVar2 ^ 0xffffffff);
    goto joined_r0x00111204;
  case 0x211:
    uVar2 = *(uint *)(param_1 + 0x23280);
    uVar8 = uVar2 & 0xffff00ff | uVar8 << 8;
    *(uint *)(param_1 + 0x23280) = uVar8;
    uVar7 = uVar8 & (uVar2 ^ 0xffffffff);
joined_r0x00111204:
    uVar9 = (ulong)uVar2;
    if (uVar7 != 0) {
LAB_0011118c:
      uVar8 = -*(int *)(param_1 + 0x23278) & *(uint *)(param_1 + 0x23284) & uVar8;
      uVar9 = *(ulong *)(nds_system + *(long *)(param_1 + 0xfba90) + 0xb04010);
      *(uint *)(uVar9 + 0x2108) = uVar8;
      if (uVar8 != 0) {
        *(uint *)(uVar9 + 0x22a8) = *(uint *)(uVar9 + 0x22a8) | 2;
      }
    }
    break;
  case 0x212:
    uVar2 = *(uint *)(param_1 + 0x23280);
    uVar8 = uVar2 & 0xff00ffff | uVar8 << 0x10;
    *(uint *)(param_1 + 0x23280) = uVar8;
    uVar7 = uVar8 & (uVar2 ^ 0xffffffff);
    goto joined_r0x00111188;
  case 0x213:
    uVar2 = *(uint *)(param_1 + 0x23280);
    uVar8 = uVar2 & 0xffffff | uVar8 << 0x18;
    *(uint *)(param_1 + 0x23280) = uVar8;
    uVar7 = uVar8 & (uVar2 ^ 0xffffffff);
joined_r0x00111188:
    if (uVar7 == 0) {
      return (ulong)uVar2;
    }
    goto LAB_0011118c;
  case 0x214:
    *(uint *)(param_1 + 0x23284) = *(uint *)(param_1 + 0x23284) & (uVar8 ^ 0xffffffff);
    uVar8 = *(uint *)(*(long *)(nds_system + *(long *)(param_1 + 0xfba90) + 0xb04010) + 0x2108) &
            (uVar8 ^ 0xffffffff);
    uVar9 = (ulong)uVar8;
    *(uint *)(*(long *)(nds_system + *(long *)(param_1 + 0xfba90) + 0xb04010) + 0x2108) = uVar8;
  }
  return uVar9;
}


