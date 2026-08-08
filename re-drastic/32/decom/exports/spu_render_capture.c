/*
 * Ghidra decompilation
 *
 * Function : spu_render_capture
 * Address  : 0808d4b4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void spu_render_capture(spu_struct *spu,s32 *render_buffer,u32 sample_count,u32 capture_number)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  u64 *puVar6;
  uint uVar7;
  u8 *puVar8;
  u32 sample_length;
  u32 uVar9;
  u32 sample_length_2;
  uint uVar10;
  int iVar11;
  u32 sample_length_1;
  uint uVar12;
  u32 sample_length_3;
  u32 uVar13;
  u16 *samples;
  u8 *puVar14;
  u8 *samples_1;
  uint uVar15;
  bool bVar16;
  undefined8 uVar17;
  int iStack_34;
  
  bVar2 = spu->capture[capture_number].control;
  uVar3 = (uint)bVar2;
  if ((bVar2 & 0x80) == 0) {
    return;
  }
  switch(uVar3 & 0xb) {
  case 0:
    puVar6 = &spu->capture[capture_number].frequency_step;
    uVar12 = spu->capture[capture_number].sample_length;
    uVar10 = *(uint *)puVar6;
    iVar11 = *(int *)((int)puVar6 + 4);
    puVar14 = spu->capture[capture_number].samples;
    uVar5 = *(uint *)&spu->capture[capture_number].sample_offset;
    uVar7 = *(uint *)((int)&spu->capture[capture_number].sample_offset + 4);
    if (sample_count != 0) {
      uVar15 = uVar3 & 4;
      if ((bVar2 & 4) == 0) {
        do {
          bVar16 = CARRY4(uVar10,uVar5);
          uVar5 = uVar10 + uVar5;
          uVar4 = iVar11 + uVar7 + (uint)bVar16;
          uVar15 = uVar15 + 1;
          *(short *)(puVar14 + uVar7 * 2) = (short)(uVar3 & 4);
          uVar7 = uVar4;
          if (uVar12 <= uVar4) {
            uVar7 = uVar4 - uVar12;
          }
        } while (sample_count != uVar15);
      }
      else {
        uVar9 = 0;
        do {
          bVar16 = CARRY4(uVar5,uVar10);
          uVar5 = uVar5 + uVar10;
          iVar1 = uVar7 * 2;
          uVar7 = uVar7 + iVar11 + (uint)bVar16;
          uVar9 = uVar9 + 1;
          *(undefined2 *)(puVar14 + iVar1) = 0;
          if (uVar12 <= uVar7) goto LAB_0808d560;
        } while (sample_count != uVar9);
      }
    }
    break;
  case 1:
    puVar6 = &spu->capture[capture_number].frequency_step;
    uVar12 = *(uint *)puVar6;
    iVar11 = *(int *)((int)puVar6 + 4);
    uVar10 = spu->capture[capture_number].sample_length;
    uVar5 = *(uint *)&spu->capture[capture_number].sample_offset;
    uVar7 = *(uint *)((int)&spu->capture[capture_number].sample_offset + 4);
    if (sample_count != 0) {
      uVar9 = uVar3 & 4;
      if ((bVar2 & 4) == 0) {
        do {
          bVar16 = CARRY4(uVar5,uVar12);
          uVar5 = uVar5 + uVar12;
          uVar7 = uVar7 + iVar11 + (uint)bVar16;
          uVar9 = uVar9 + 1;
          if (uVar10 <= uVar7) {
            uVar7 = uVar7 - uVar10;
          }
        } while (sample_count != uVar9);
      }
      else {
        uVar9 = 0;
        do {
          bVar16 = CARRY4(uVar5,uVar12);
          uVar5 = uVar5 + uVar12;
          uVar7 = uVar7 + iVar11 + (uint)bVar16;
          uVar9 = uVar9 + 1;
          if (uVar10 <= uVar7) goto LAB_0808d560;
        } while (sample_count != uVar9);
      }
    }
    break;
  default:
    goto switchD_0808d4f8_caseD_2;
  case 8:
    puVar6 = &spu->capture[capture_number].frequency_step;
    uVar12 = spu->capture[capture_number].sample_length;
    uVar10 = *(uint *)puVar6;
    iVar11 = *(int *)((int)puVar6 + 4);
    puVar14 = spu->capture[capture_number].samples;
    uVar5 = *(uint *)&spu->capture[capture_number].sample_offset;
    uVar7 = *(uint *)((int)&spu->capture[capture_number].sample_offset + 4);
    if (sample_count != 0) {
      uVar15 = uVar3 & 4;
      if ((bVar2 & 4) == 0) {
        do {
          bVar16 = CARRY4(uVar5,uVar10);
          uVar5 = uVar5 + uVar10;
          uVar4 = uVar7 + iVar11 + (uint)bVar16;
          uVar15 = uVar15 + 1;
          puVar14[uVar7] = (u8)(uVar3 & 4);
          uVar7 = uVar4;
          if (uVar12 <= uVar4) {
            uVar7 = uVar4 - uVar12;
          }
        } while (sample_count != uVar15);
      }
      else {
        uVar9 = 0;
        do {
          bVar16 = CARRY4(uVar5,uVar10);
          uVar5 = uVar5 + uVar10;
          puVar8 = puVar14 + uVar7;
          uVar7 = uVar7 + iVar11 + (uint)bVar16;
          uVar9 = uVar9 + 1;
          *puVar8 = '\0';
          if (uVar12 <= uVar7) goto LAB_0808d560;
        } while (sample_count != uVar9);
      }
    }
    break;
  case 9:
    puVar6 = &spu->capture[capture_number].frequency_step;
    uVar10 = *(uint *)puVar6;
    iVar11 = *(int *)((int)puVar6 + 4);
    uVar9 = spu->capture[capture_number].sample_length;
    uVar5 = *(uint *)&spu->capture[capture_number].sample_offset;
    uVar7 = *(uint *)((int)&spu->capture[capture_number].sample_offset + 4);
    if (sample_count != 0) {
      uVar13 = uVar3 & 4;
      uVar17 = VectorShiftRight(CONCAT44(uVar9,uVar9),0x20);
      uVar3 = (uint)uVar17;
      iStack_34 = (int)((ulonglong)uVar17 >> 0x20);
      if ((bVar2 & 4) == 0) {
        do {
          uVar13 = uVar13 + 1;
          bVar16 = CARRY4(uVar10,uVar5);
          uVar5 = uVar10 + uVar5;
          uVar7 = iVar11 + uVar7 + (uint)bVar16;
          bVar16 = iStack_34 == 0;
          if (iStack_34 == 0) {
            bVar16 = uVar3 <= uVar7;
          }
          if (bVar16) {
            uVar7 = uVar7 - uVar3;
          }
        } while (uVar13 != sample_count);
      }
      else {
        uVar9 = 0;
        do {
          bVar16 = CARRY4(uVar5,uVar10);
          uVar5 = uVar5 + uVar10;
          uVar7 = uVar7 + iVar11 + (uint)bVar16;
          bVar16 = iStack_34 == 0;
          uVar9 = uVar9 + 1;
          if (iStack_34 == 0) {
            bVar16 = uVar3 <= uVar7;
          }
          if (bVar16) goto LAB_0808d560;
        } while (sample_count != uVar9);
      }
    }
  }
LAB_0808d588:
  *(uint *)&spu->capture[capture_number].sample_offset = uVar5;
  *(uint *)((int)&spu->capture[capture_number].sample_offset + 4) = uVar7;
switchD_0808d4f8_caseD_2:
  return;
LAB_0808d560:
  spu->capture[capture_number].control = bVar2 & 0x7f;
  spu->io_region[capture_number + 0x108] = bVar2 & 0x7f;
  goto LAB_0808d588;
}


