/*
 * Ghidra decompilation
 *
 * Function : FUN_08032168
 * Address  : 08032168
 * Program  : drastic16
 */


void FUN_08032168(int param_1,uint *param_2)

{
  ulonglong uVar1;
  ushort uVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar7 = *param_2;
  uVar9 = param_2[1];
  uVar8 = (uint)*(byte *)((int)param_2 + 9);
  uVar3 = (undefined2)uVar9;
  if (0xfffff < uVar7) {
    if (0x1fffff < uVar7) {
      iVar5 = *(int *)(param_1 + 0x18);
      uVar7 = uVar7 & 0x3ff;
      *(undefined *)(param_1 + 0x96) = 1;
      if (uVar8 == 2) {
        *(undefined2 *)(iVar5 + uVar7) = uVar3;
        return;
      }
      if (uVar8 == 4) {
        *(uint *)(iVar5 + uVar7) = uVar9;
        return;
      }
      if (uVar8 == 1) {
        *(char *)(iVar5 + uVar7) = (char)uVar9;
      }
      return;
    }
    iVar5 = *(int *)(param_1 + 0xc);
    uVar7 = uVar7 & 0x3ff;
    if (uVar8 == 2) {
      *(undefined2 *)(iVar5 + uVar7) = uVar3;
      return;
    }
    if (uVar8 == 4) {
      *(uint *)(iVar5 + uVar7) = uVar9;
      return;
    }
    if (uVar8 == 1) {
      *(char *)(iVar5 + uVar7) = (char)uVar9;
    }
    return;
  }
  switch(uVar7 & 0xfff) {
  case 0:
  case 1:
  case 2:
  case 3:
    if (uVar8 < 4) {
      iVar5 = (uVar7 & 3) << 3;
      uVar9 = *(uint *)(param_1 + 0x70) & ~(~(-1 << ((uVar8 & 0x1f) << 3)) << iVar5) |
              uVar9 << iVar5;
    }
    FUN_08032024(param_1,uVar9);
    return;
  case 8:
  case 9:
    iVar5 = ((uVar9 << 0x1a) >> 0x1c) * 0x4000;
    iVar4 = ((uVar9 << 0x13) >> 0x1b) * 0x800;
    *(int *)(param_1 + 0xbc) = iVar5;
    *(int *)(param_1 + 0xb8) = iVar4;
    iVar5 = iVar5 + *(int *)(param_1 + 0x78);
    iVar4 = iVar4 + *(int *)(param_1 + 0x74);
    *(int *)(param_1 + 0xb0) = iVar5;
    uVar2 = *(ushort *)(param_1 + 0x108);
    *(int *)(param_1 + 0xac) = iVar4;
    *(undefined2 *)(param_1 + 0x108) = uVar3;
    if (*(char *)(param_1 + 0x97) == '\x01') {
      uVar1 = SIMDExpandImmediate(1,5,0x1e);
      *(ulonglong *)(param_1 + 0xac) = CONCAT44(iVar5,iVar4) & ~uVar1;
    }
    if (((uVar2 ^ uVar9) & 3) != 0) {
      FUN_08031b14(param_1);
    }
    *(undefined4 *)(param_1 + 0xa4) =
         *(undefined4 *)(*(int *)(param_1 + 0x10) + ((int)(uVar9 << 0x12) >> 0x1f) * -8);
    if (uVar8 < 3) {
      return;
    }
    uVar9 = uVar9 >> 0x10;
  case 10:
  case 0xb:
    iVar5 = ((uVar9 << 0x1a) >> 0x1c) * 0x4000;
    iVar4 = ((uVar9 << 0x13) >> 0x1b) * 0x800;
    *(int *)(param_1 + 0x144) = iVar5;
    *(int *)(param_1 + 0x140) = iVar4;
    iVar5 = iVar5 + *(int *)(param_1 + 0x78);
    iVar4 = iVar4 + *(int *)(param_1 + 0x74);
    *(int *)(param_1 + 0x138) = iVar5;
    uVar2 = *(ushort *)(param_1 + 400);
    *(int *)(param_1 + 0x134) = iVar4;
    *(short *)(param_1 + 400) = (short)uVar9;
    if (*(char *)(param_1 + 0x97) == '\x01') {
      uVar1 = SIMDExpandImmediate(1,5,0x1e);
      *(ulonglong *)(param_1 + 0x134) = CONCAT44(iVar5,iVar4) & ~uVar1;
    }
    if (((uVar9 ^ uVar2) & 3) != 0) {
      FUN_08031b14(param_1);
    }
    *(undefined4 *)(param_1 + 300) =
         *(undefined4 *)(*(int *)(param_1 + 0x10) + (((int)(uVar9 << 0x12) >> 0x1f) * -2 + 1) * 4);
    break;
  case 0xc:
  case 0xd:
    FUN_08031e6c(param_1,2,uVar9);
    if (2 < uVar8) {
      uVar9 = uVar9 >> 0x10;
      goto switchD_0803218c_caseD_e;
    }
    break;
  case 0xe:
  case 0xf:
switchD_0803218c_caseD_e:
    FUN_08031e6c(param_1,3,uVar9);
    return;
  case 0x10:
  case 0x11:
    if (uVar8 < 2) {
      iVar5 = 0x10a;
LAB_08032b24:
      iVar4 = (uVar7 & 1) << 3;
      *(ushort *)(param_1 + iVar5) =
           (ushort)((((uint)*(ushort *)(param_1 + iVar5) &
                      ~(~(-1 << ((uVar8 & 0x1f) << 3)) << iVar4) | uVar9 << iVar4) << 0x17) >> 0x17)
      ;
      return;
    }
    iVar5 = uVar9 << 0x17;
    if (uVar8 != 2) {
      uVar9 = uVar9 >> 0x10;
    }
    *(ushort *)(param_1 + 0x10a) = (ushort)((uint)iVar5 >> 0x17);
    if (uVar8 == 2) {
      return;
    }
    goto LAB_080325e0;
  case 0x12:
  case 0x13:
    if (uVar8 < 2) {
      iVar5 = (uVar7 & 1) << 3;
      uVar9 = (uint)*(ushort *)(param_1 + 0x10c) & ~(~(-1 << ((uVar8 & 0x1f) << 3)) << iVar5) |
              uVar9 << iVar5;
    }
LAB_080325e0:
    *(ushort *)(param_1 + 0x10c) = (ushort)((uVar9 << 0x17) >> 0x17);
    break;
  case 0x14:
  case 0x15:
    if (uVar8 < 2) {
      iVar5 = 0x192;
      goto LAB_08032b24;
    }
    iVar5 = uVar9 << 0x17;
    if (uVar8 != 2) {
      uVar9 = uVar9 >> 0x10;
    }
    *(ushort *)(param_1 + 0x192) = (ushort)((uint)iVar5 >> 0x17);
    if (uVar8 == 2) {
      return;
    }
    goto LAB_080325a4;
  case 0x16:
  case 0x17:
    if (uVar8 < 2) {
      iVar5 = (uVar7 & 1) << 3;
      uVar9 = (uint)*(ushort *)(param_1 + 0x194) & ~(~(-1 << ((uVar8 & 0x1f) << 3)) << iVar5) |
              uVar9 << iVar5;
    }
LAB_080325a4:
    *(ushort *)(param_1 + 0x194) = (ushort)((uVar9 << 0x17) >> 0x17);
    break;
  case 0x18:
  case 0x19:
    if (uVar8 < 2) {
      iVar5 = 0x21a;
      goto LAB_08032b24;
    }
    iVar5 = uVar9 << 0x17;
    if (uVar8 != 2) {
      uVar9 = uVar9 >> 0x10;
    }
    *(ushort *)(param_1 + 0x21a) = (ushort)((uint)iVar5 >> 0x17);
    if (uVar8 == 2) {
      return;
    }
    goto LAB_08032538;
  case 0x1a:
  case 0x1b:
    if (uVar8 < 2) {
      iVar5 = (uVar7 & 1) << 3;
      uVar9 = (uint)*(ushort *)(param_1 + 0x21c) & ~(~(-1 << ((uVar8 & 0x1f) << 3)) << iVar5) |
              uVar9 << iVar5;
    }
LAB_08032538:
    *(ushort *)(param_1 + 0x21c) = (ushort)((uVar9 << 0x17) >> 0x17);
    break;
  case 0x1c:
  case 0x1d:
    if (uVar8 < 2) {
      iVar5 = 0x2a2;
      goto LAB_08032b24;
    }
    iVar5 = uVar9 << 0x17;
    if (uVar8 != 2) {
      uVar9 = uVar9 >> 0x10;
    }
    *(ushort *)(param_1 + 0x2a2) = (ushort)((uint)iVar5 >> 0x17);
    if (uVar8 == 2) {
      return;
    }
    goto LAB_080326ac;
  case 0x1e:
  case 0x1f:
    if (uVar8 < 2) {
      iVar5 = (uVar7 & 1) << 3;
      uVar9 = (uint)*(ushort *)(param_1 + 0x2a4) & ~(~(-1 << ((uVar8 & 0x1f) << 3)) << iVar5) |
              uVar9 << iVar5;
    }
LAB_080326ac:
    *(ushort *)(param_1 + 0x2a4) = (ushort)((uVar9 << 0x17) >> 0x17);
    break;
  case 0x20:
  case 0x21:
    if (uVar8 < 2) {
      iVar5 = 0x21e;
LAB_08032bdc:
      uVar2 = *(ushort *)(param_1 + iVar5);
      iVar4 = (uVar7 & 1) << 3;
      *(undefined *)(param_1 + 0x22e) = 1;
      *(ushort *)(param_1 + iVar5) =
           uVar2 & ~(ushort)((1 << ((uVar8 & 0x1f) << 3)) + -1 << iVar4) | (ushort)(uVar9 << iVar4);
      return;
    }
    *(undefined2 *)(param_1 + 0x21e) = uVar3;
    if (uVar8 != 2) {
      uVar9 = uVar9 >> 0x10;
    }
    *(undefined *)(param_1 + 0x22e) = 1;
    if (uVar8 == 2) {
      return;
    }
    goto LAB_08032644;
  case 0x22:
  case 0x23:
    if (uVar8 < 2) {
      iVar5 = (uVar7 & 1) << 3;
      uVar9 = (int)*(short *)(param_1 + 0x222) & ~(~(-1 << ((uVar8 & 0x1f) << 3)) << iVar5) |
              uVar9 << iVar5;
    }
LAB_08032644:
    *(short *)(param_1 + 0x222) = (short)uVar9;
    *(undefined *)(param_1 + 0x22e) = 1;
    break;
  case 0x24:
  case 0x25:
    if (uVar8 < 2) {
      iVar5 = 0x220;
      goto LAB_08032bdc;
    }
    *(undefined2 *)(param_1 + 0x220) = uVar3;
    if (uVar8 != 2) {
      uVar9 = uVar9 >> 0x10;
    }
    *(undefined *)(param_1 + 0x22e) = 1;
    if (uVar8 == 2) {
      return;
    }
    goto LAB_080324f8;
  case 0x26:
  case 0x27:
    if (uVar8 < 2) {
      iVar5 = (uVar7 & 1) << 3;
      uVar9 = (int)*(short *)(param_1 + 0x224) & ~(~(-1 << ((uVar8 & 0x1f) << 3)) << iVar5) |
              uVar9 << iVar5;
    }
LAB_080324f8:
    *(short *)(param_1 + 0x224) = (short)uVar9;
    *(undefined *)(param_1 + 0x22e) = 1;
    break;
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
    uVar9 = (int)(uVar9 << 4) >> 4;
    if (uVar8 < 4) {
      iVar5 = (uVar7 & 3) << 3;
      uVar9 = *(uint *)(param_1 + 0x208) & ~(~(-1 << ((uVar8 & 0x1f) << 3)) << iVar5) |
              uVar9 << iVar5;
    }
    *(uint *)(param_1 + 0x208) = uVar9;
    *(uint *)(param_1 + 0x210) = uVar9;
    *(undefined *)(param_1 + 0x22e) = 1;
    break;
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
    uVar9 = (int)(uVar9 << 4) >> 4;
    if (uVar8 < 4) {
      iVar5 = (uVar7 & 3) << 3;
      uVar9 = *(uint *)(param_1 + 0x20c) & ~(~(-1 << ((uVar8 & 0x1f) << 3)) << iVar5) |
              uVar9 << iVar5;
    }
    *(uint *)(param_1 + 0x20c) = uVar9;
    *(uint *)(param_1 + 0x214) = uVar9;
    *(undefined *)(param_1 + 0x22e) = 1;
    break;
  case 0x30:
  case 0x31:
    if (uVar8 < 2) {
      iVar5 = 0x2a6;
LAB_08032ba8:
      uVar2 = *(ushort *)(param_1 + iVar5);
      iVar4 = (uVar7 & 1) << 3;
      *(undefined *)(param_1 + 0x2b6) = 1;
      *(ushort *)(param_1 + iVar5) =
           uVar2 & ~(ushort)((1 << ((uVar8 & 0x1f) << 3)) + -1 << iVar4) | (ushort)(uVar9 << iVar4);
      return;
    }
    *(undefined2 *)(param_1 + 0x2a6) = uVar3;
    if (uVar8 != 2) {
      uVar9 = uVar9 >> 0x10;
    }
    *(undefined *)(param_1 + 0x2b6) = 1;
    if (uVar8 == 2) {
      return;
    }
    goto LAB_08032950;
  case 0x32:
  case 0x33:
    if (uVar8 < 2) {
      iVar5 = (uVar7 & 1) << 3;
      uVar9 = (int)*(short *)(param_1 + 0x2aa) & ~(~(-1 << ((uVar8 & 0x1f) << 3)) << iVar5) |
              uVar9 << iVar5;
    }
LAB_08032950:
    *(short *)(param_1 + 0x2aa) = (short)uVar9;
    *(undefined *)(param_1 + 0x2b6) = 1;
    break;
  case 0x34:
  case 0x35:
    if (uVar8 < 2) {
      iVar5 = 0x2a8;
      goto LAB_08032ba8;
    }
    *(undefined2 *)(param_1 + 0x2a8) = uVar3;
    if (uVar8 != 2) {
      uVar9 = uVar9 >> 0x10;
    }
    *(undefined *)(param_1 + 0x2b6) = 1;
    if (uVar8 == 2) {
      return;
    }
    goto LAB_080328e8;
  case 0x36:
  case 0x37:
    if (uVar8 < 2) {
      iVar5 = (uVar7 & 1) << 3;
      uVar9 = (int)*(short *)(param_1 + 0x2ac) & ~(~(-1 << ((uVar8 & 0x1f) << 3)) << iVar5) |
              uVar9 << iVar5;
    }
LAB_080328e8:
    *(short *)(param_1 + 0x2ac) = (short)uVar9;
    *(undefined *)(param_1 + 0x2b6) = 1;
    break;
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
    uVar9 = (int)(uVar9 << 4) >> 4;
    if (uVar8 < 4) {
      iVar5 = (uVar7 & 3) << 3;
      uVar9 = *(uint *)(param_1 + 0x290) & ~(~(-1 << ((uVar8 & 0x1f) << 3)) << iVar5) |
              uVar9 << iVar5;
    }
    *(uint *)(param_1 + 0x290) = uVar9;
    *(uint *)(param_1 + 0x298) = uVar9;
    *(undefined *)(param_1 + 0x2b6) = 1;
    break;
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x3f:
    uVar9 = (int)(uVar9 << 4) >> 4;
    if (uVar8 < 4) {
      iVar5 = (uVar7 & 3) << 3;
      uVar9 = *(uint *)(param_1 + 0x294) & ~(~(-1 << ((uVar8 & 0x1f) << 3)) << iVar5) |
              uVar9 << iVar5;
    }
    *(uint *)(param_1 + 0x294) = uVar9;
    *(uint *)(param_1 + 0x29c) = uVar9;
    *(undefined *)(param_1 + 0x2b6) = 1;
    break;
  case 0x40:
  case 0x41:
    if (uVar8 < 2) {
      iVar5 = (uVar7 & 1) << 3;
      *(byte *)(param_1 + 0x95) = *(byte *)(param_1 + 0x95) | 1;
      *(ushort *)(param_1 + 0x8a) =
           *(ushort *)(param_1 + 0x8a) & ~(ushort)(~(-1 << ((uVar8 & 0x1f) << 3)) << iVar5) |
           (ushort)(uVar9 << iVar5);
      return;
    }
    *(undefined2 *)(param_1 + 0x8a) = uVar3;
    if (uVar8 != 2) {
      uVar9 = uVar9 >> 0x10;
    }
    bVar6 = *(byte *)(param_1 + 0x95) | 1;
    *(byte *)(param_1 + 0x95) = bVar6;
    if (uVar8 == 2) {
      return;
    }
    goto LAB_080329dc;
  case 0x42:
  case 0x43:
    if (uVar8 < 2) {
      iVar5 = (uVar7 & 1) << 3;
      bVar6 = *(byte *)(param_1 + 0x95);
      uVar9 = (uint)*(ushort *)(param_1 + 0x8c) & ~(~(-1 << ((uVar8 & 0x1f) << 3)) << iVar5) |
              uVar9 << iVar5;
    }
    else {
      bVar6 = *(byte *)(param_1 + 0x95);
    }
LAB_080329dc:
    *(short *)(param_1 + 0x8c) = (short)uVar9;
    *(byte *)(param_1 + 0x95) = bVar6 | 2;
    break;
  case 0x44:
  case 0x45:
    if (uVar8 < 2) {
      iVar5 = (uVar7 & 1) << 3;
      *(ushort *)(param_1 + 0x8e) =
           *(ushort *)(param_1 + 0x8e) & ~(ushort)(~(-1 << ((uVar8 & 0x1f) << 3)) << iVar5) |
           (ushort)(uVar9 << iVar5);
      return;
    }
    *(undefined2 *)(param_1 + 0x8e) = uVar3;
    if (uVar8 == 2) {
      return;
    }
    uVar9 = uVar9 >> 0x10;
    goto LAB_0803298c;
  case 0x46:
  case 0x47:
    if (uVar8 < 2) {
      iVar5 = (uVar7 & 1) << 3;
      uVar9 = (uint)*(ushort *)(param_1 + 0x90) & ~(~(-1 << ((uVar8 & 0x1f) << 3)) << iVar5) |
              uVar9 << iVar5;
    }
LAB_0803298c:
    *(short *)(param_1 + 0x90) = (short)uVar9;
    break;
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
    if (uVar8 < 4) {
      iVar5 = (uVar7 & 3) << 3;
      uVar9 = *(uint *)(param_1 + 0x7c) & ~(~(-1 << ((uVar8 & 0x1f) << 3)) << iVar5) |
              uVar9 << iVar5;
    }
    *(uint *)(param_1 + 0x7c) = uVar9 & 0x3f3f3f3f;
    break;
  case 0x4c:
    if (uVar8 < 2) {
      iVar5 = (uVar7 & 1) << 3;
      uVar9 = (uint)*(ushort *)(param_1 + 0x88) & ~(~(-1 << ((uVar8 & 0x1f) << 3)) << iVar5) |
              uVar9 << iVar5;
    }
    *(short *)(param_1 + 0x88) = (short)uVar9;
    break;
  case 0x50:
  case 0x51:
    if (uVar8 < 2) {
      iVar5 = (uVar7 & 1) << 3;
      *(ushort *)(param_1 + 0x80) =
           *(ushort *)(param_1 + 0x80) & ~(ushort)(~(-1 << ((uVar8 & 0x1f) << 3)) << iVar5) |
           (ushort)(uVar9 << iVar5);
      return;
    }
    *(undefined2 *)(param_1 + 0x80) = uVar3;
    if (uVar8 == 2) {
      return;
    }
    uVar9 = uVar9 >> 0x10;
    goto LAB_080326e4;
  case 0x52:
  case 0x53:
    if (uVar8 < 2) {
      iVar5 = (uVar7 & 1) << 3;
      uVar9 = (uint)*(ushort *)(param_1 + 0x84) & ~(~(-1 << ((uVar8 & 0x1f) << 3)) << iVar5) |
              uVar9 << iVar5;
    }
LAB_080326e4:
    *(short *)(param_1 + 0x84) = (short)uVar9;
    break;
  case 0x54:
    if (uVar8 < 2) {
      iVar5 = (uVar7 & 1) << 3;
      uVar9 = (uint)*(ushort *)(param_1 + 0x82) & ~(~(-1 << ((uVar8 & 0x1f) << 3)) << iVar5) |
              uVar9 << iVar5;
    }
    *(ushort *)(param_1 + 0x82) = (ushort)uVar9 & 0x1f;
    break;
  case 0x6c:
    if (uVar8 < 2) {
      iVar5 = (uVar7 & 1) << 3;
      uVar9 = (uint)*(ushort *)(param_1 + 0x86) & ~(~(-1 << ((uVar8 & 0x1f) << 3)) << iVar5) |
              uVar9 << iVar5;
    }
    *(short *)(param_1 + 0x86) = (short)uVar9;
  }
  return;
}


