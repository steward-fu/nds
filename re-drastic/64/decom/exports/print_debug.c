/*
 * Ghidra decompilation
 *
 * Function : print_debug
 * Address  : 00182bd0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void print_debug(long *param_1,undefined4 param_2)

{
  int iVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined2 uVar13;
  int iVar14;
  long lVar15;
  undefined auStack_108 [256];
  long local_8;
  
  lVar11 = _metadata_ptr;
  local_8 = ___stack_chk_guard;
  lVar15 = *param_1;
  if (_metadata_ptr == 0) {
    uVar13 = 0xffff;
    uVar6 = 0xffffffff;
  }
  else {
    _saved_reg = *(undefined8 *)(lVar15 + 0x2370);
    DAT_004ec288 = *(undefined8 *)(lVar15 + 0x2378);
    DAT_004ec290 = *(undefined8 *)(lVar15 + 0x2380);
    DAT_004ec298 = *(undefined8 *)(lVar15 + 0x2388);
    DAT_004ec2a0 = *(undefined8 *)(lVar15 + 0x2390);
    DAT_004ec2a8 = *(undefined8 *)(lVar15 + 0x2398);
    DAT_004ec2b0 = *(undefined8 *)(lVar15 + 0x23a0);
    DAT_004ec2b8 = *(undefined8 *)(lVar15 + 0x23a8);
    uVar7 = *(undefined8 *)(_metadata_ptr + 4);
    uVar10 = (uint)uVar7;
    if ((uVar10 & 0xf) != 0xf) {
      *(undefined4 *)(lVar15 + ((ulong)(uVar10 & 0xf) + 0x8dc) * 4) =
           *(undefined4 *)(lVar15 + 0x22f0);
    }
    uVar9 = uVar10 >> 4 & 0xf;
    if (uVar9 != 0xf) {
      *(undefined4 *)(lVar15 + ((ulong)uVar9 + 0x8dc) * 4) = *(undefined4 *)(lVar15 + 0x22f4);
    }
    uVar9 = uVar10 >> 8 & 0xf;
    if (uVar9 != 0xf) {
      *(undefined4 *)(lVar15 + ((ulong)uVar9 + 0x8dc) * 4) = *(undefined4 *)(lVar15 + 0x22f8);
    }
    uVar9 = uVar10 >> 0xc & 0xf;
    if (uVar9 != 0xf) {
      *(undefined4 *)(lVar15 + ((ulong)uVar9 + 0x8dc) * 4) = *(undefined4 *)(lVar15 + 0x22fc);
    }
    uVar9 = uVar10 >> 0x10 & 0xf;
    if (uVar9 != 0xf) {
      *(undefined4 *)(lVar15 + ((ulong)uVar9 + 0x8dc) * 4) = *(undefined4 *)(lVar15 + 0x2300);
    }
    uVar9 = uVar10 >> 0x14 & 0xf;
    if (uVar9 != 0xf) {
      *(undefined4 *)(lVar15 + ((ulong)uVar9 + 0x8dc) * 4) = *(undefined4 *)(lVar15 + 0x2304);
    }
    uVar9 = uVar10 >> 0x18 & 0xf;
    if (uVar9 != 0xf) {
      *(undefined4 *)(lVar15 + ((ulong)uVar9 + 0x8dc) * 4) = *(undefined4 *)(lVar15 + 0x2308);
    }
    if (uVar10 >> 0x1c != 0xf) {
      *(undefined4 *)(lVar15 + ((ulong)(uVar10 >> 0x1c) + 0x8dc) * 4) =
           *(undefined4 *)(lVar15 + 0x230c);
    }
    uVar10 = (uint)((ulong)uVar7 >> 0x20);
    if ((uVar10 & 0xf) != 0xf) {
      *(undefined4 *)(lVar15 + ((ulong)(uVar10 & 0xf) + 0x8dc) * 4) =
           *(undefined4 *)(lVar15 + 0x2310);
    }
    uVar9 = uVar10 >> 4 & 0xf;
    if (uVar9 != 0xf) {
      *(undefined4 *)(lVar15 + ((ulong)uVar9 + 0x8dc) * 4) = *(undefined4 *)(lVar15 + 0x2314);
    }
    uVar9 = uVar10 >> 8 & 0xf;
    if (uVar9 != 0xf) {
      *(undefined4 *)(lVar15 + ((ulong)uVar9 + 0x8dc) * 4) = *(undefined4 *)(lVar15 + 0x2320);
    }
    uVar10 = uVar10 >> 0xc & 0xf;
    if (uVar10 != 0xf) {
      *(undefined4 *)(lVar15 + ((ulong)uVar10 + 0x8dc) * 4) = *(undefined4 *)(lVar15 + 0x2324);
    }
    uVar10 = (ushort)((ulong)uVar7 >> 0x30) & 0xf;
    if (uVar10 != 0xf) {
      *(undefined4 *)(lVar15 + ((ulong)uVar10 + 0x8dc) * 4) = *(undefined4 *)(lVar15 + 9000);
    }
    uVar13 = *(undefined2 *)(lVar11 + 0xe);
    uVar6 = *(undefined4 *)(lVar11 + 0xc);
  }
  if (*(int *)(lVar15 + 0x210c) == 0) {
    __printf_chk(1,"ARM7: ");
  }
  else {
    __printf_chk(1,"ARM9: ");
  }
  uVar10 = *(uint *)(param_1 + 0x24);
  if ((*(uint *)(lVar15 + 0x23c0) & 0x20 | uVar10 & 1) == 0) {
    uVar8 = load_memory32(*param_1 + 0x23d0,uVar10);
    disasm_arm_instruction(uVar8,auStack_108,uVar10,0,0);
    __printf_chk(1,"ARM op: %08x  %s\n",uVar8 & 0xffffffff,auStack_108);
  }
  else {
    uVar5 = load_memory16(*param_1 + 0x23d0,uVar10 & 0xfffffffe);
    disasm_thumb_instruction(uVar5,auStack_108,uVar10 & 0xfffffffe,0,0);
    __printf_chk(1,"Thumb op: %04x  %s\n",uVar5,auStack_108);
  }
  print_arm_registers(param_1,uVar6);
  print_flags(param_1,uVar13);
  lVar11 = *(long *)(*param_1 + 0x2080);
  __printf_chk(1,"IME: %d  IE: %08x  IF: %08x  cpu IRQ: %08x\n",*(undefined2 *)(lVar11 + 0x208),
               *(undefined4 *)(lVar11 + 0x210),*(undefined4 *)(lVar11 + 0x214),
               *(undefined4 *)(*param_1 + 0x2108));
  bVar2 = *(byte *)(param_1 + 0x26);
  lVar11 = *param_1;
  iVar14 = *(int *)(lVar11 + 0x23a4);
  puts("Stack:");
  if (bVar2 != 0) {
    uVar10 = 0;
    do {
      iVar1 = iVar14 + 0x14;
      do {
        uVar6 = load_memory32(lVar11 + 0x23d0,iVar14);
        __printf_chk(1," %08x",uVar6);
        iVar14 = iVar14 + 4;
      } while (iVar14 != iVar1);
      uVar10 = uVar10 + 1;
      putchar(10);
    } while (bVar2 != uVar10);
  }
  putchar(10);
  puVar12 = *(undefined8 **)(*param_1 + 0x2258);
  __printf_chk(1,
               "%lx instructions in. (%d remain)  Scanline %d, frame %lu, cycle %lu (state %d)\n\n",
               param_1[0x21] + 1,param_2,*(undefined2 *)((long)puVar12 + 0x14),*puVar12,puVar12[1],
               *(undefined4 *)(*param_1 + 0x2110));
  uVar4 = DAT_004ec298;
  uVar3 = DAT_004ec290;
  uVar7 = DAT_004ec288;
  if (_metadata_ptr != 0) {
    *(undefined8 *)(lVar15 + 0x2370) = _saved_reg;
    *(undefined8 *)(lVar15 + 0x2378) = uVar7;
    *(undefined8 *)(lVar15 + 0x2380) = uVar3;
    *(undefined8 *)(lVar15 + 0x2388) = uVar4;
    uVar7 = DAT_004ec2a8;
    *(undefined8 *)(lVar15 + 0x2390) = DAT_004ec2a0;
    *(undefined8 *)(lVar15 + 0x2398) = uVar7;
    uVar7 = DAT_004ec2b8;
    *(undefined8 *)(lVar15 + 0x23a0) = DAT_004ec2b0;
    *(undefined8 *)(lVar15 + 0x23a8) = uVar7;
  }
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


