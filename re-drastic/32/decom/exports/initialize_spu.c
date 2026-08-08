/*
 * Ghidra decompilation
 *
 * Function : initialize_spu
 * Address  : 0808de94
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */
/* Local variable poly_out:u32[r1:4] conflicts with parameter, skipped. */

void initialize_spu(spu_struct *spu,system_struct *system)

{
  uint uVar1;
  u32 uVar2;
  u32 uVar3;
  s8 sVar4;
  u8 *puVar5;
  u8 *io_region;
  s8 *psVar6;
  uint uVar7;
  bool bVar8;
  undefined4 extraout_s15;
  undefined8 uVar9;
  undefined8 uVar10;
  
  spu->channels[1].io_region = (system->memory).arm7_io_registers + 0x410;
  spu->channels[2].io_region = (system->memory).arm7_io_registers + 0x420;
  spu->channels[10].io_region = (system->memory).arm7_io_registers + 0x4a0;
  spu->channels[4].io_region = (system->memory).arm7_io_registers + 0x440;
  spu->channels[5].io_region = (system->memory).arm7_io_registers + 0x450;
  spu->channels[6].io_region = (system->memory).arm7_io_registers + 0x460;
  spu->channels[3].io_region = (system->memory).arm7_io_registers + 0x430;
  spu->channels[7].io_region = (system->memory).arm7_io_registers + 0x470;
  spu->channels[8].io_region = (system->memory).arm7_io_registers + 0x480;
  spu->channels[9].io_region = (system->memory).arm7_io_registers + 0x490;
  spu->channels[0xc].io_region = (system->memory).arm7_io_registers + 0x4c0;
  spu->channels[0xd].io_region = (system->memory).arm7_io_registers + 0x4d0;
  puVar5 = (system->memory).arm7_io_registers + 0x400;
  spu->channels[0xe].io_region = (system->memory).arm7_io_registers + 0x4e0;
  spu->channels[0].io_region = puVar5;
  spu->channels[0].capture_timer = 0xff;
  spu->channels[1].capture_timer = '\0';
  spu->channels[2].capture_timer = 0xff;
  spu->channels[4].capture_timer = 0xff;
  spu->channels[5].capture_timer = 0xff;
  spu->channels[6].capture_timer = 0xff;
  spu->channels[7].capture_timer = 0xff;
  spu->channels[8].capture_timer = 0xff;
  spu->channels[9].capture_timer = 0xff;
  spu->channels[10].capture_timer = 0xff;
  spu->channels[0xb].io_region = (system->memory).arm7_io_registers + 0x4b0;
  spu->channels[0xb].capture_timer = 0xff;
  spu->channels[0xc].capture_timer = 0xff;
  spu->channels[0xd].capture_timer = 0xff;
  spu->channels[0xe].capture_timer = 0xff;
  (spu->audio).output_frequency = 0xac44;
  (spu->audio).capture_frequency = 0xac44;
  (spu->audio).enable_output = '\x01';
  (spu->audio).enable_capture = '\x01';
  (spu->audio).synchronize = '\x01';
  spu->channels[3].capture_timer = '\x01';
  spu->channels[0xf].io_region = (system->memory).arm7_io_registers + 0x4f0;
  spu->channels[0xf].capture_timer = 0xff;
  spu->io_region = puVar5;
  spu->memory = &system->memory;
  initialize_audio(&spu->audio);
  uVar7 = (spu->audio).output_frequency;
  uVar2 = __aeabi_uldivmod(0x6f43800,0x10,uVar7,0);
  spu->cycles_per_output_sample = uVar2;
  uVar3 = __aeabi_uldivmod(uVar7 << 0x16,uVar7 >> 10,0x401bd0e,0);
  uVar9 = FixedToFP(CONCAT44(extraout_s15,uVar2),0x20,0x40,10,1,0);
  uVar10 = FixedToFP(CONCAT44(uVar3,uVar3),0x20,0x40,0x16,0,0);
  spu->reciprocal_cycles_per_output_sample = uVar3;
  __printf_chk(1,"%lf cycles per output sample (%lf samples per cycle)\n",(int)uVar9,
               (int)((ulonglong)uVar9 >> 0x20),uVar10);
  psVar6 = (s8 *)((int)reciprocal_table_u + 0xfff);
  uVar7 = 0x7fff;
  do {
    uVar1 = uVar7 >> 1;
    bVar8 = (uVar7 & 1) != 0;
    if (bVar8) {
      sVar4 = '\x7f';
    }
    else {
      sVar4 = -0x80;
    }
    uVar7 = uVar1;
    if (bVar8) {
      uVar7 = uVar1 ^ 0x6000;
    }
    psVar6 = psVar6 + 1;
    *psVar6 = sVar4;
  } while (psVar6 != noise_samples + 0x7ffe);
  return;
}


