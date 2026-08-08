/*
 * Ghidra decompilation
 *
 * Function : system_frame_sync
 * Address  : 08006850
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void system_frame_sync(system_struct *system)

{
  bool bVar1;
  u32 uVar2;
  u32 current_audio_buffer_state;
  int iVar3;
  u32 uVar4;
  int iVar5;
  u32 capture_control;
  u8 uVar6;
  uint uVar7;
  int iVar8;
  byte bVar9;
  u32 frameskip_value;
  u64 *puVar10;
  u32 uVar11;
  u32 frame_interval;
  u32 uVar12;
  u32 frameskip_type;
  s32 ticks_delta;
  undefined8 uVar13;
  undefined8 local_50;
  u32 local_3c;
  u64 real_frame_ticks;
  int local_2c;
  
  puVar10 = &system->virtual_frame_ticks;
  uVar11 = (system->config).frame_interval;
  local_2c = __stack_chk_guard;
  uVar2 = audio_buffer_state(&(system->spu).audio);
  current_audio_buffer_state = (u32)&real_frame_ticks;
  uVar12 = (system->config).frameskip_type;
  local_3c = (system->config).frameskip_value;
  get_ticks_us((u64 *)current_audio_buffer_state);
  uVar13 = VectorAdd(CONCAT44(real_frame_ticks._4_4_,(uint)real_frame_ticks),
                     CONCAT44(real_frame_ticks._4_4_,(uint)real_frame_ticks),8);
  uVar7 = (uint)real_frame_ticks + (uint)uVar13;
  iVar3 = uVar7 - *(uint *)&system->real_frame_ticks_base;
  real_frame_ticks._4_4_ =
       (real_frame_ticks._4_4_ + (int)((ulonglong)uVar13 >> 0x20) +
       (uint)CARRY4((uint)real_frame_ticks,(uint)uVar13)) -
       (*(int *)((int)&system->real_frame_ticks_base + 4) +
       (uint)(uVar7 < *(uint *)&system->real_frame_ticks_base));
  if (uVar11 == 0) {
    uVar13 = 50000;
    uVar11 = 50000;
  }
  else {
    uVar13 = VectorShiftRight(CONCAT44(uVar11,uVar11),0x20);
  }
  uVar4 = (system->config).fast_forward;
  local_50 = VectorAdd(uVar13,*puVar10,8);
  *puVar10 = local_50;
  if (uVar4 != 0) {
    uVar4 = (system->benchmark).active;
    local_50 = CONCAT44(real_frame_ticks._4_4_,iVar3);
    *(int *)puVar10 = iVar3;
    *(int *)((int)&system->virtual_frame_ticks + 4) = real_frame_ticks._4_4_;
    if (uVar4 == 0) {
      uVar12 = 1;
      local_3c = 6;
    }
  }
  real_frame_ticks._0_4_ = iVar3;
  if (system->audio_critical == '\0') {
    if (uVar2 != 2) goto LAB_08006a60;
    system->audio_critical_count = '\0';
    system->audio_critical = '\x01';
LAB_08006968:
    iVar3 = (uint)local_50 - iVar3;
    if (iVar3 < 1) {
      bVar1 = true;
      goto LAB_08006ae0;
    }
LAB_08006980:
    delay_us(0);
    bVar1 = true;
LAB_0800698c:
    if (uVar12 != 1) goto LAB_08006994;
LAB_08006a94:
    uVar6 = system->frameskip_count;
    bVar9 = uVar6 + 1;
    if (uVar6 != '\0') {
      uVar6 = '\x01';
    }
    system->skip_current_frame = uVar6;
    system->frameskip_count = bVar9;
    if ((uint)bVar9 != local_3c + 1) goto LAB_08006a0c;
  }
  else {
    if (system->audio_critical_count == '\x14') {
      audio_buffer_force_feed(&(system->spu).audio);
      local_50 = *puVar10;
    }
    else if (uVar2 != 0) {
      system->audio_critical_count = system->audio_critical_count + '\x01';
      goto LAB_08006968;
    }
    iVar3 = (uint)real_frame_ticks;
    system->audio_critical = '\0';
    iVar5 = __aeabi_uidiv(((uVar11 - 1) + (uint)local_50) - (uint)real_frame_ticks,uVar11);
    iVar8 = (uint)local_50 - uVar11 * iVar5;
    local_50._4_4_ = local_50._4_4_ - (uint)((uint)local_50 < uVar11 * iVar5);
    *(int *)puVar10 = iVar8;
    *(int *)((int)&system->virtual_frame_ticks + 4) = local_50._4_4_;
    local_50 = CONCAT44(local_50._4_4_,iVar8);
LAB_08006a60:
    iVar3 = (uint)local_50 - iVar3;
    if (iVar3 < 1) {
      bVar1 = false;
LAB_08006ae0:
      if (iVar3 < -9000) goto LAB_08006980;
      goto LAB_0800698c;
    }
    delay_us(iVar3 / 3);
    bVar1 = false;
    if (uVar12 == 1) goto LAB_08006a94;
LAB_08006994:
    if (uVar12 == 0) {
      system->skip_current_frame = '\0';
      goto LAB_08006a0c;
    }
    if (uVar12 != 2) goto LAB_08006a0c;
    iVar5 = *(int *)((system->memory).arm9_io_registers + 100);
    bVar9 = system->skip_alternate ^ 1;
    system->skip_alternate = bVar9;
    if (iVar5 < 0) {
      if (bVar9 != 0) goto LAB_08006a0c;
      bVar9 = system->captureless_count;
      system->captureless_count = '\0';
      if (0x78 < bVar9) {
        system->skip_current_frame = '\0';
        goto LAB_08006a0c;
      }
    }
    else if (system->captureless_count != 0xff) {
      system->captureless_count = system->captureless_count + '\x01';
    }
    system->skip_current_frame = '\0';
    if (bVar1) {
      bVar9 = system->frameskip_count + 1;
      system->frameskip_count = bVar9;
      if ((uint)bVar9 == local_3c + 1) {
        system->audio_critical = '\0';
        system->frameskip_count = '\0';
        iVar3 = __aeabi_uidiv((uVar11 - 1) + iVar3,uVar11);
        uVar7 = *(uint *)puVar10;
        iVar5 = *(int *)((int)&system->virtual_frame_ticks + 4);
        *(uint *)puVar10 = uVar7 - uVar11 * iVar3;
        *(uint *)((int)&system->virtual_frame_ticks + 4) = iVar5 - (uint)(uVar7 < uVar11 * iVar3);
      }
      else {
        system->skip_current_frame = '\x01';
      }
      goto LAB_08006a0c;
    }
  }
  system->frameskip_count = '\0';
LAB_08006a0c:
  if (local_2c == __stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


