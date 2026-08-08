/*
 * Ghidra decompilation
 *
 * Function : cpu_translate_log_block
 * Address  : 00196570
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cpu_translate_log_block(long param_1,FILE *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  undefined4 uVar7;
  ushort uVar8;
  ushort uVar9;
  undefined2 uVar10;
  ulong uVar11;
  undefined4 *puVar12;
  int iVar13;
  undefined auStack_208 [256];
  undefined auStack_108 [256];
  long local_8;
  
  lVar3 = (ulong)(uint)param_3[-1] + param_1 + 0x8c000;
  uVar8 = *(ushort *)(lVar3 + 0x10);
  local_8 = ___stack_chk_guard;
  lVar5 = param_1 + 0x15c7d50;
  if ((uVar8 >> 0xc & 8) == 0) {
    lVar5 = param_1 + 0x25ce340;
  }
  uVar9 = *(ushort *)(lVar3 + 0x12);
  iVar6 = *(int *)(lVar3 + 4);
  uVar4 = uVar8 & 0xfff;
  if ((uVar8 >> 0xc & 1) == 0) {
    uVar4 = uVar4 >> 1;
    __fprintf_chk(param_2,1,"%s block (%s) at %x: %d instructions, %d bytes translated\n",
                  &DAT_00227368,(&cpu_type_str_12573)[*(uint *)(lVar5 + 0x210c)],iVar6,uVar4,uVar9);
    __fprintf_chk(param_2,1,"Live flags: %x, live registers: %04x\n",*(undefined2 *)(lVar3 + 0xe),
                  *(undefined2 *)(lVar3 + 0xc));
    if (uVar4 != 0) {
      iVar13 = iVar6;
      do {
        uVar11 = load_memory32(lVar5 + 0x23d0,iVar13);
        disasm_arm_instruction(uVar11,auStack_208,iVar13,0,0);
        iVar1 = iVar13 + 4;
        __fprintf_chk(param_2,1,"  %08x: %08x %s\n",iVar13,uVar11 & 0xffffffff,auStack_208);
        iVar13 = iVar1;
      } while (iVar1 != iVar6 + uVar4 * 4);
    }
  }
  else {
    __fprintf_chk(param_2,1,"%s block (%s) at %x: %d instructions, %d bytes translated\n","Thumb",
                  (&cpu_type_str_12573)[*(uint *)(lVar5 + 0x210c)],iVar6,uVar4,uVar9);
    __fprintf_chk(param_2,1,"Live flags: %x, live registers: %04x\n",*(undefined2 *)(lVar3 + 0xe),
                  *(undefined2 *)(lVar3 + 0xc));
    if ((uVar8 & 0xfff) != 0) {
      iVar13 = iVar6;
      do {
        uVar10 = load_memory16(lVar5 + 0x23d0,iVar13);
        disasm_thumb_instruction(uVar10,auStack_208,iVar13,0,0);
        iVar1 = iVar13 + 2;
        __fprintf_chk(param_2,1,"  %08x: %04x %s\n",iVar13,uVar10,auStack_208);
        iVar13 = iVar1;
      } while (iVar6 + uVar4 * 2 != iVar1);
    }
  }
  fputc(10,param_2);
  if (param_3 < (undefined4 *)((long)param_3 + (ulong)uVar9)) {
    puVar12 = param_3;
    do {
      uVar7 = *puVar12;
      disasm_arm64_instruction(uVar7,auStack_108,puVar12,disasm_labels,0x50);
      puVar2 = puVar12 + 1;
      __fprintf_chk(param_2,1,"  %p: %08x  %s\n",puVar12,uVar7,auStack_108);
      puVar12 = puVar2;
    } while (puVar2 < (undefined4 *)((long)param_3 + (ulong)uVar9));
  }
  fputc(10,param_2);
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_8 - ___stack_chk_guard,0);
  }
  return;
}


