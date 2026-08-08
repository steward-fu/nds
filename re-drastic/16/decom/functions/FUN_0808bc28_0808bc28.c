/*
 * Ghidra decompilation
 *
 * Function : FUN_0808bc28
 * Address  : 0808bc28
 * Program  : drastic16
 */


/* WARNING: Control flow encountered unimplemented instructions */

void FUN_0808bc28(ulonglong *param_1,ulonglong *param_2,uint param_3,int param_4)

{
  uint *puVar1;
  ulonglong *puVar2;
  uint *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  ulonglong in_d18;
  undefined8 uVar11;
  ulonglong in_d20;
  ulonglong in_d21;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong in_d22;
  ulonglong in_d23;
  
  if (param_1 + 0x20 <= param_2 || param_2 + 2 <= param_1) {
    SIMDExpandImmediate(0,10,0x80);
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
    halt_unimplemented();
  }
  iVar7 = 0;
  do {
    puVar1 = (uint *)((int)param_1 + 0xc);
    puVar2 = param_1 + 1;
    puVar3 = (uint *)((int)param_1 + 4);
    uVar8 = *(uint *)param_1;
    param_1 = param_1 + 2;
    uVar8 = (*puVar1 & 0x80008000) >> 9 | (*(uint *)puVar2 & 0x80008000) >> 0xb |
            (*puVar3 & 0x80008000) >> 0xd | (uVar8 & 0x80008000) >> 0xf;
    *(byte *)((int)param_2 + iVar7) = (byte)uVar8 | (byte)(uVar8 >> 0xf);
    iVar7 = iVar7 + 1;
  } while (iVar7 != 0x10);
  if (param_4 != 0x80) {
    uVar11 = SIMDExpandImmediate(0,0xe,0xff);
    uVar10 = VectorShiftLeft(uVar11,in_d18 & 0xffffffffffff0000 |
                                    (ulonglong)(uint)-(0x80 - param_4) & 0xffff,8,1);
    param_2[1] = param_2[1] & uVar10;
  }
  if ((int)param_3 < 0) {
    uVar13 = VectorShiftLeft(param_2[1],
                             in_d21 & 0xffffffffffff0000 | (ulonglong)(param_3 + 0x40) & 0xffff,8,1)
    ;
    param_2[2] = 0;
    uVar10 = VectorShiftLeft(*param_2,in_d22 & 0xffffffffffff0000 | (ulonglong)param_3 & 0xffff,8,1)
    ;
    param_2[3] = 0;
    uVar12 = VectorShiftLeft(param_2[1],uVar13 & 0xffffffffffff0000 | (ulonglong)param_3 & 0xffff,8,
                             1);
    param_2[1] = uVar12;
    *param_2 = uVar13 | uVar10;
    return;
  }
  if (param_3 == 0) {
    param_2[2] = 0;
    param_2[3] = 0;
  }
  else {
    uVar8 = param_3 & 0x3f;
    uVar10 = param_2[1];
    uVar11 = VectorShiftLeft(*param_2,in_d20 & 0xffffffffffff0000 | (ulonglong)uVar8,8,1);
    uVar5 = (undefined4)((ulonglong)uVar11 >> 0x20);
    uVar9 = (undefined4)uVar11;
    uVar12 = VectorShiftLeft(*param_2,in_d22 & 0xffffffffffff0000 |
                                      (ulonglong)-(0x40 - uVar8) & 0xffff,8,1);
    *(undefined4 *)(param_2 + 3) = 0;
    *(undefined4 *)((int)param_2 + 0x1c) = 0;
    uVar13 = VectorShiftLeft(uVar10,in_d22 & 0xffffffffffff0000 | (ulonglong)uVar8,8,1);
    uVar12 = uVar12 | uVar13;
    param_2[1] = uVar12;
    uVar10 = VectorShiftLeft(uVar10,in_d23 & 0xffffffffffff0000 |
                                    (ulonglong)-(0x40 - uVar8) & 0xffff,8,1);
    param_2[2] = uVar10;
    uVar6 = (undefined4)(uVar12 >> 0x20);
    uVar4 = (undefined4)uVar12;
    *(undefined4 *)param_2 = uVar9;
    *(undefined4 *)((int)param_2 + 4) = uVar5;
    if ((param_3 & 0x40) != 0) {
      param_2[3] = uVar10;
      param_2[2] = uVar12;
      *(undefined4 *)(param_2 + 1) = uVar9;
      *(undefined4 *)((int)param_2 + 0xc) = uVar5;
      *(undefined4 *)param_2 = 0;
      *(undefined4 *)((int)param_2 + 4) = 0;
      uVar4 = uVar9;
      uVar6 = uVar5;
      uVar5 = 0;
      uVar9 = 0;
    }
    if ((param_3 & 0x80) != 0) {
      *(undefined4 *)(param_2 + 3) = uVar4;
      *(undefined4 *)((int)param_2 + 0x1c) = uVar6;
      param_2[1] = 0;
      *(undefined4 *)(param_2 + 2) = uVar9;
      *param_2 = 0;
      *(undefined4 *)((int)param_2 + 0x14) = uVar5;
      return;
    }
  }
  return;
}


