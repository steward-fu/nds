/*
 * Ghidra decompilation
 *
 * Function : video_2d_process_event
 * Address  : 001420c0
 * Program  : drastic64
 */


void video_2d_process_event(long **param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  undefined2 uVar4;
  int iVar5;
  byte bVar6;
  undefined4 uVar7;
  long *plVar8;
  long **pplVar9;
  byte bVar10;
  uint uVar11;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar12;
  
  uVar2 = *param_2;
  bVar6 = *(byte *)((long)param_2 + 9);
  uVar14 = param_2[1];
  uVar15 = (ulong)uVar14;
  uVar11 = (uint)bVar6;
  uVar12 = (uint)bVar6;
  uVar3 = (ushort)uVar14;
  if (0xfffff < uVar2) {
    uVar1 = uVar2 & 0x3ff;
    if (uVar2 < 0x200000) {
      plVar8 = param_1[3];
    }
    else {
      *(undefined *)((long)param_1 + 0xb6) = 1;
      plVar8 = param_1[6];
    }
    if (uVar12 == 2) {
      *(ushort *)((long)plVar8 + (ulong)uVar1) = uVar3;
      return;
    }
    if (uVar11 == 4) {
      *(uint *)((long)plVar8 + (ulong)uVar1) = uVar14;
      return;
    }
    if (uVar11 != 1) {
      return;
    }
    *(char *)((long)plVar8 + (ulong)uVar1) = (char)uVar14;
    return;
  }
  uVar1 = uVar2 & 0xfff;
  if (0x6c < uVar1) {
    if (uVar1 != 0x305) {
      return;
    }
    bVar6 = *(byte *)((long)param_1 + 0xb7);
    bVar10 = bVar6;
    if (((uVar14 >> 7 & 1) == 0) &&
       (bVar10 = bVar6 ^ 1, *(int *)(*(long *)(**param_1 + 0xfba68) + 0x85a40) != 0)) {
      bVar10 = bVar6;
    }
    plVar8 = (long *)get_screen_ptr(bVar10);
    if (*(char *)(param_1 + 0x17) != '\0') {
      plVar8 = (long *)0x0;
    }
    param_1[7] = plVar8;
    uVar7 = get_screen_pitch(bVar10);
    *(undefined4 *)(param_1 + 8) = uVar7;
    return;
  }
  uVar13 = (uint)bVar6;
  uVar4 = (undefined2)(uVar14 >> 0x10);
  switch(uVar1) {
  case 0:
  case 1:
  case 2:
  case 3:
    if (uVar13 < 4) {
      uVar2 = (uVar2 & 3) << 3;
      uVar15 = (ulong)(*(uint *)(param_1 + 0x12) &
                       ((1 << (ulong)((uVar13 & 3) << 3)) + -1 << (ulong)uVar2 ^ 0xffffffffU) |
                      uVar14 << (ulong)uVar2);
    }
    video_2d_set_display_control(param_1,uVar15);
    return;
  case 8:
  case 9:
    video_2d_set_bg_control(param_1,0,uVar15);
    if (2 < uVar12) {
      uVar15 = (ulong)(uVar14 >> 0x10);
      goto switchD_0014210c_caseD_a;
    }
    break;
  case 10:
  case 0xb:
switchD_0014210c_caseD_a:
    video_2d_set_bg_control(param_1,1,uVar15);
    return;
  case 0xc:
  case 0xd:
    video_2d_set_bg_control(param_1,2,uVar15);
    if (2 < uVar12) {
      uVar15 = (ulong)(uVar14 >> 0x10);
      goto switchD_0014210c_caseD_e;
    }
    break;
  case 0xe:
  case 0xf:
switchD_0014210c_caseD_e:
    video_2d_set_bg_control(param_1,3,uVar15);
    return;
  case 0x10:
  case 0x11:
    if (uVar12 < 2) {
      uVar2 = (uVar2 & 1) << 3;
      *(ushort *)((long)param_1 + 0x15a) =
           (*(ushort *)((long)param_1 + 0x15a) &
            ((ushort)((1 << (ulong)((uVar13 & 3) << 3)) + -1 << (ulong)uVar2) ^ 0xffff) |
           (ushort)(uVar14 << (ulong)uVar2)) & 0x1ff;
      return;
    }
    pplVar9 = param_1 + 0x18;
    *(ushort *)((long)param_1 + 0x15a) = uVar3 & 0x1ff;
    if (uVar13 == 2) {
      return;
    }
    uVar14 = uVar14 >> 0x10;
    goto LAB_00142318;
  case 0x12:
  case 0x13:
    pplVar9 = param_1 + 0x18;
    if (1 < uVar13) goto LAB_00142318;
    goto LAB_0014252c;
  case 0x14:
  case 0x15:
    if (uVar13 < 2) {
      uVar2 = (uVar2 & 1) << 3;
      *(ushort *)((long)param_1 + 0x20a) =
           (*(ushort *)((long)param_1 + 0x20a) &
            ((ushort)((1 << (ulong)((uVar12 & 3) << 3)) + -1 << (ulong)uVar2) ^ 0xffff) |
           (ushort)(uVar14 << (ulong)uVar2)) & 0x1ff;
      return;
    }
    pplVar9 = param_1 + 0x2e;
    *(ushort *)((long)param_1 + 0x20a) = uVar3 & 0x1ff;
    if (uVar13 == 2) {
      return;
    }
    uVar14 = uVar14 >> 0x10;
    goto LAB_00142318;
  case 0x16:
  case 0x17:
    pplVar9 = param_1 + 0x2e;
    goto joined_r0x001425e0;
  case 0x18:
  case 0x19:
    if (uVar13 < 2) {
      uVar2 = (uVar2 & 1) << 3;
      *(ushort *)((long)param_1 + 0x2ba) =
           (*(ushort *)((long)param_1 + 0x2ba) &
            ((ushort)((1 << (ulong)((uVar12 & 3) << 3)) + -1 << (ulong)uVar2) ^ 0xffff) |
           (ushort)(uVar14 << (ulong)uVar2)) & 0x1ff;
      return;
    }
    pplVar9 = param_1 + 0x44;
    *(ushort *)((long)param_1 + 0x2ba) = uVar3 & 0x1ff;
    if (uVar13 == 2) {
      return;
    }
    uVar14 = uVar14 >> 0x10;
    goto LAB_00142318;
  case 0x1a:
  case 0x1b:
    pplVar9 = param_1 + 0x44;
    goto joined_r0x001425e0;
  case 0x1c:
  case 0x1d:
    if (uVar13 < 2) {
      uVar2 = (uVar2 & 1) << 3;
      *(ushort *)((long)param_1 + 0x36a) =
           (*(ushort *)((long)param_1 + 0x36a) &
            ((ushort)((1 << (ulong)((uVar12 & 3) << 3)) + -1 << (ulong)uVar2) ^ 0xffff) |
           (ushort)(uVar14 << (ulong)uVar2)) & 0x1ff;
      return;
    }
    pplVar9 = param_1 + 0x5a;
    *(ushort *)((long)param_1 + 0x36a) = uVar3 & 0x1ff;
    if (uVar13 == 2) {
      return;
    }
    uVar14 = uVar14 >> 0x10;
    goto LAB_00142318;
  case 0x1e:
  case 0x1f:
    pplVar9 = param_1 + 0x5a;
joined_r0x001425e0:
    if (uVar13 < 2) {
LAB_0014252c:
      uVar2 = (uVar2 & 1) << 3;
      uVar14 = (uint)*(ushort *)((long)pplVar9 + 0x9c) &
               ((1 << (ulong)((uVar13 & 3) << 3)) + -1 << (ulong)uVar2 ^ 0xffffffffU) |
               uVar14 << (ulong)uVar2;
    }
LAB_00142318:
    *(ushort *)((long)pplVar9 + 0x9c) = (ushort)uVar14 & 0x1ff;
    break;
  case 0x20:
  case 0x21:
    if (uVar13 < 2) {
      uVar2 = (uVar2 & 1) << 3;
      *(undefined *)((long)param_1 + 0x2ce) = 1;
      *(ushort *)((long)param_1 + 0x2be) =
           *(ushort *)((long)param_1 + 0x2be) &
           ((ushort)((1 << (ulong)((uVar12 & 3) << 3)) + -1 << (ulong)uVar2) ^ 0xffff) |
           (ushort)(uVar14 << (ulong)uVar2);
      return;
    }
    param_1 = param_1 + 0x44;
    goto LAB_001422dc;
  case 0x22:
  case 0x23:
    param_1 = param_1 + 0x44;
    goto joined_r0x001422b8;
  case 0x24:
  case 0x25:
    if (uVar13 < 2) {
      uVar2 = (uVar2 & 1) << 3;
      *(undefined *)((long)param_1 + 0x2ce) = 1;
      *(ushort *)(param_1 + 0x58) =
           *(ushort *)(param_1 + 0x58) &
           ((ushort)((1 << (ulong)((uVar13 & 3) << 3)) + -1 << (ulong)uVar2) ^ 0xffff) |
           (ushort)(uVar14 << (ulong)uVar2);
      return;
    }
    param_1 = param_1 + 0x44;
    goto LAB_00142294;
  case 0x26:
  case 0x27:
    param_1 = param_1 + 0x44;
    goto joined_r0x00142274;
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
    iVar5 = (int)((uVar15 << 0x24) >> 0x20);
    param_1 = param_1 + 0x44;
    goto joined_r0x00142408;
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
    iVar5 = (int)((uVar15 << 0x24) >> 0x20);
    param_1 = param_1 + 0x44;
    goto joined_r0x001423bc;
  case 0x30:
  case 0x31:
    if (uVar13 < 2) {
      uVar2 = (uVar2 & 1) << 3;
      *(undefined *)((long)param_1 + 0x37e) = 1;
      *(ushort *)((long)param_1 + 0x36e) =
           *(ushort *)((long)param_1 + 0x36e) &
           ((ushort)((1 << (ulong)((uVar13 & 3) << 3)) + -1 << (ulong)uVar2) ^ 0xffff) |
           (ushort)(uVar14 << (ulong)uVar2);
      return;
    }
    param_1 = param_1 + 0x5a;
LAB_001422dc:
    *(ushort *)((long)param_1 + 0x9e) = uVar3;
    *(undefined *)((long)param_1 + 0xae) = 1;
    if (uVar13 != 2) {
      uVar15 = (ulong)(uVar14 >> 0x10);
LAB_001422c0:
      *(short *)((long)param_1 + 0xa2) = (short)uVar15;
      *(undefined *)((long)param_1 + 0xae) = 1;
    }
    break;
  case 0x32:
  case 0x33:
    param_1 = param_1 + 0x5a;
joined_r0x001422b8:
    if (bVar6 < 2) {
      uVar2 = (uVar2 & 1) << 3;
      uVar15 = (ulong)((int)*(short *)((long)param_1 + 0xa2) &
                       ((1 << (ulong)((uVar13 & 3) << 3)) + -1 << (ulong)uVar2 ^ 0xffffffffU) |
                      uVar14 << (ulong)uVar2);
    }
    goto LAB_001422c0;
  case 0x34:
  case 0x35:
    if (uVar13 < 2) {
      uVar2 = (uVar2 & 1) << 3;
      *(undefined *)((long)param_1 + 0x37e) = 1;
      *(ushort *)(param_1 + 0x6e) =
           *(ushort *)(param_1 + 0x6e) &
           ((ushort)((1 << (ulong)((uVar13 & 3) << 3)) + -1 << (ulong)uVar2) ^ 0xffff) |
           (ushort)(uVar14 << (ulong)uVar2);
      return;
    }
    param_1 = param_1 + 0x5a;
LAB_00142294:
    *(ushort *)(param_1 + 0x14) = uVar3;
    *(undefined *)((long)param_1 + 0xae) = 1;
    if (uVar13 != 2) {
      uVar15 = (ulong)(uVar14 >> 0x10);
LAB_00142278:
      *(short *)((long)param_1 + 0xa4) = (short)uVar15;
      *(undefined *)((long)param_1 + 0xae) = 1;
    }
    break;
  case 0x36:
  case 0x37:
    param_1 = param_1 + 0x5a;
joined_r0x00142274:
    if (uVar13 < 2) {
      uVar2 = (uVar2 & 1) << 3;
      uVar15 = (ulong)((int)*(short *)((long)param_1 + 0xa4) &
                       ((1 << (ulong)((uVar13 & 3) << 3)) + -1 << (ulong)uVar2 ^ 0xffffffffU) |
                      uVar14 << (ulong)uVar2);
    }
    goto LAB_00142278;
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
    iVar5 = (int)((uVar15 << 0x24) >> 0x20);
    param_1 = param_1 + 0x5a;
joined_r0x00142408:
    uVar14 = iVar5 >> 4;
    if (uVar13 < 4) {
      uVar2 = (uVar2 & 3) << 3;
      uVar14 = *(uint *)(param_1 + 0x11) &
               ((1 << (ulong)((uVar13 & 3) << 3)) + -1 << (ulong)uVar2 ^ 0xffffffffU) |
               uVar14 << (ulong)uVar2;
    }
    *(uint *)(param_1 + 0x11) = uVar14;
    *(uint *)(param_1 + 0x12) = uVar14;
    *(undefined *)((long)param_1 + 0xae) = 1;
    break;
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x3f:
    iVar5 = (int)((uVar15 << 0x24) >> 0x20);
    param_1 = param_1 + 0x5a;
joined_r0x001423bc:
    uVar14 = iVar5 >> 4;
    if (uVar13 < 4) {
      uVar2 = (uVar2 & 3) << 3;
      uVar14 = *(uint *)((long)param_1 + 0x8c) &
               ((1 << (ulong)((uVar13 & 3) << 3)) + -1 << (ulong)uVar2 ^ 0xffffffffU) |
               uVar14 << (ulong)uVar2;
    }
    *(uint *)((long)param_1 + 0x8c) = uVar14;
    *(uint *)((long)param_1 + 0x94) = uVar14;
    *(undefined *)((long)param_1 + 0xae) = 1;
    break;
  case 0x40:
  case 0x41:
    bVar6 = *(byte *)((long)param_1 + 0xb5) | 1;
    if (uVar13 < 2) {
      uVar2 = (uVar2 & 1) << 3;
      *(ushort *)((long)param_1 + 0xaa) =
           *(ushort *)((long)param_1 + 0xaa) &
           ((ushort)((1 << (ulong)((uVar13 & 3) << 3)) + -1 << (ulong)uVar2) ^ 0xffff) |
           (ushort)(uVar14 << (ulong)uVar2);
      *(byte *)((long)param_1 + 0xb5) = bVar6;
      return;
    }
    *(ushort *)((long)param_1 + 0xaa) = uVar3;
    *(byte *)((long)param_1 + 0xb5) = bVar6;
    if (uVar13 == 2) {
      return;
    }
    uVar15 = (ulong)(uVar14 >> 0x10);
    goto LAB_001424c8;
  case 0x42:
  case 0x43:
    bVar6 = *(byte *)((long)param_1 + 0xb5);
    if (uVar13 < 2) {
      uVar2 = (uVar2 & 1) << 3;
      uVar15 = (ulong)((uint)*(ushort *)((long)param_1 + 0xac) &
                       ((1 << (ulong)((uVar13 & 3) << 3)) + -1 << (ulong)uVar2 ^ 0xffffffffU) |
                      uVar14 << (ulong)uVar2);
    }
LAB_001424c8:
    *(short *)((long)param_1 + 0xac) = (short)uVar15;
    *(byte *)((long)param_1 + 0xb5) = bVar6 | 2;
    break;
  case 0x44:
  case 0x45:
    if (uVar13 < 2) {
      uVar2 = (uVar2 & 1) << 3;
      *(ushort *)((long)param_1 + 0xae) =
           *(ushort *)((long)param_1 + 0xae) &
           ((ushort)((1 << (ulong)((uVar13 & 3) << 3)) + -1 << (ulong)uVar2) ^ 0xffff) |
           (ushort)(uVar14 << (ulong)uVar2);
    }
    else {
      *(ushort *)((long)param_1 + 0xae) = uVar3;
      if (uVar13 != 2) {
        *(undefined2 *)(param_1 + 0x16) = uVar4;
      }
    }
    break;
  case 0x46:
  case 0x47:
    if (uVar13 < 2) {
      uVar2 = (uVar2 & 1) << 3;
      *(ushort *)(param_1 + 0x16) =
           *(ushort *)(param_1 + 0x16) &
           ((ushort)((1 << (ulong)((uVar11 & 3) << 3)) + -1 << (ulong)uVar2) ^ 0xffff) |
           (ushort)(uVar14 << (ulong)uVar2);
    }
    else {
      *(ushort *)(param_1 + 0x16) = uVar3;
    }
    break;
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
    if (uVar11 < 4) {
      uVar2 = (uVar2 & 3) << 3;
      uVar14 = *(uint *)((long)param_1 + 0x9c) &
               ((1 << (ulong)((uVar13 & 3) << 3)) + -1 << (ulong)uVar2 ^ 0xffffffffU) |
               uVar14 << (ulong)uVar2;
    }
    *(uint *)((long)param_1 + 0x9c) = uVar14 & 0x3f3f3f3f;
    break;
  case 0x4c:
    if (uVar13 < 2) {
      uVar2 = (uVar2 & 1) << 3;
      *(ushort *)(param_1 + 0x15) =
           *(ushort *)(param_1 + 0x15) &
           ((ushort)((1 << (ulong)((uVar11 & 3) << 3)) + -1 << (ulong)uVar2) ^ 0xffff) |
           (ushort)(uVar14 << (ulong)uVar2);
    }
    else {
      *(ushort *)(param_1 + 0x15) = uVar3;
    }
    break;
  case 0x50:
  case 0x51:
    if (uVar13 < 2) {
      uVar2 = (uVar2 & 1) << 3;
      *(ushort *)(param_1 + 0x14) =
           *(ushort *)(param_1 + 0x14) &
           ((ushort)((1 << (ulong)((uVar11 & 3) << 3)) + -1 << (ulong)uVar2) ^ 0xffff) |
           (ushort)(uVar14 << (ulong)uVar2);
    }
    else {
      *(ushort *)(param_1 + 0x14) = uVar3;
      if (uVar13 != 2) {
        *(undefined2 *)((long)param_1 + 0xa4) = uVar4;
      }
    }
    break;
  case 0x52:
  case 0x53:
    if (uVar11 < 2) {
      uVar2 = (uVar2 & 1) << 3;
      *(ushort *)((long)param_1 + 0xa4) =
           *(ushort *)((long)param_1 + 0xa4) &
           ((ushort)((1 << (ulong)((uVar13 & 3) << 3)) + -1 << (ulong)uVar2) ^ 0xffff) |
           (ushort)(uVar14 << (ulong)uVar2);
    }
    else {
      *(ushort *)((long)param_1 + 0xa4) = uVar3;
    }
    break;
  case 0x54:
    if (uVar12 < 2) {
      uVar2 = (uVar2 & 1) << 3;
      uVar14 = (uint)*(ushort *)((long)param_1 + 0xa2) &
               ((1 << (ulong)((uVar11 & 3) << 3)) + -1 << (ulong)uVar2 ^ 0xffffffffU) |
               uVar14 << (ulong)uVar2;
    }
    *(ushort *)((long)param_1 + 0xa2) = (ushort)uVar14 & 0x1f;
    break;
  case 0x6c:
    if (uVar11 < 2) {
      uVar2 = (uVar2 & 1) << 3;
      *(ushort *)((long)param_1 + 0xa6) =
           *(ushort *)((long)param_1 + 0xa6) &
           ((ushort)((1 << (ulong)((uVar12 & 3) << 3)) + -1 << (ulong)uVar2) ^ 0xffff) |
           (ushort)(uVar14 << (ulong)uVar2);
    }
    else {
      *(ushort *)((long)param_1 + 0xa6) = uVar3;
    }
  }
  return;
}


