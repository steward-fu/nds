/*
 * Ghidra decompilation
 *
 * Function : memory_divide
 * Address  : 08010a54
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void memory_divide(memory_struct *memory)

{
  ushort uVar1;
  undefined4 extraout_r1;
  int iVar2;
  s32 denominator;
  uint uVar3;
  s32 denominator_1;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  
  uVar1 = *(ushort *)(memory->arm9_io_registers + 0x280);
  memory->divide_result_available = '\x01';
  if ((uVar1 & 3) == 1) {
    uVar3 = *(uint *)(memory->arm9_io_registers + 0x298);
    if (uVar3 != 0) {
      uVar4 = (int)uVar3 >> 0x1f;
      uVar5 = *(undefined4 *)(memory->arm9_io_registers + 0x290);
      uVar6 = *(undefined4 *)(memory->arm9_io_registers + 0x294);
LAB_08010b4c:
      uVar7 = __aeabi_ldivmod(uVar5,uVar6,uVar3,uVar4);
      *(undefined8 *)(memory->arm9_io_registers + 0x2a0) = uVar7;
      __aeabi_ldivmod(uVar5,uVar6);
      *(uint *)(memory->arm9_io_registers + 0x2a8) = uVar3;
      *(uint *)(memory->arm9_io_registers + 0x2ac) = uVar4;
      return;
    }
  }
  else if ((uVar1 & 3) == 0) {
    iVar2 = *(int *)(memory->arm9_io_registers + 0x298);
    if (iVar2 != 0) {
      uVar6 = *(undefined4 *)(memory->arm9_io_registers + 0x290);
      uVar5 = __aeabi_idiv(uVar6,iVar2);
      uVar7 = VectorShiftRight(CONCAT44(uVar5,uVar5),0x20);
      *(undefined8 *)(memory->arm9_io_registers + 0x2a0) = uVar7;
      __aeabi_idivmod(uVar6,iVar2);
      uVar7 = VectorShiftRight(CONCAT44(extraout_r1,extraout_r1),0x20);
      *(undefined8 *)(memory->arm9_io_registers + 0x2a8) = uVar7;
      return;
    }
  }
  else {
    uVar3 = *(uint *)(memory->arm9_io_registers + 0x298);
    uVar4 = *(uint *)(memory->arm9_io_registers + 0x29c);
    if ((uVar3 | uVar4) != 0) {
      uVar5 = *(undefined4 *)(memory->arm9_io_registers + 0x290);
      uVar6 = *(undefined4 *)(memory->arm9_io_registers + 0x294);
      goto LAB_08010b4c;
    }
  }
  if ((uVar1 & 0x4000) == 0) {
    uVar7 = SIMDExpandImmediate(0,0xe,0xff);
    *(undefined8 *)(memory->arm9_io_registers + 0x2a0) = uVar7;
  }
  else {
    *(undefined8 *)(memory->arm9_io_registers + 0x2a0) = 0;
  }
  return;
}


