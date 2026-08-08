/*
 * Ghidra decompilation
 *
 * Function : spu_render_samples
 * Address  : 080c64c8
 * Program  : drastic
 */


void spu_render_samples(spu_struct *param_1,undefined8 *param_2,int param_3)

{
  undefined2 uVar1;
  undefined4 uVar2;
  spu_channel_struct *channel;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  u32 uVar11;
  u8 *puVar12;
  u32 uVar13;
  uint uVar14;
  bool bVar15;
  undefined8 extraout_d0;
  undefined8 uVar16;
  undefined auVar17 [16];
  
  if (param_3 == 0) {
    return;
  }
  iVar5 = 0x10;
  channel = param_1->channels;
  do {
    uVar6._0_1_ = channel->format;
    uVar6._1_1_ = channel->dirty_bits;
    uVar6._2_1_ = channel->active;
    uVar6._3_1_ = channel->adpcm_loop_index;
    if ((uVar6 & 0x10000) != 0) {
      if ((uVar6 & 0x300) != 0) {
        spu_update_channel_settings(param_1,channel);
      }
      uVar7 = *(uint *)&channel->sample_offset;
      uVar8 = *(uint *)((int)&channel->sample_offset + 4);
      uVar9 = *(uint *)&channel->frequency_step;
      iVar10 = *(int *)((int)&channel->frequency_step + 4);
      uVar2._0_2_ = channel->volume_multiplier_left;
      uVar2._2_2_ = channel->volume_multiplier_right;
      uVar16 = CONCAT44(uVar2,uVar2);
      uVar11 = channel->sample_length;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(uVar6 & 0xff) {
      case 0:
        puVar12 = channel->samples;
        puVar3 = param_2;
        iVar4 = param_3;
        do {
          while( true ) {
            uVar1 = CONCAT11(puVar12[uVar8],puVar12[uVar8]);
            uVar2 = CONCAT22(uVar1,uVar1);
            auVar17 = VectorShiftLongLeft(CONCAT44(uVar2,uVar2),1);
            bVar15 = CARRY4(uVar7,uVar9);
            uVar7 = uVar7 + uVar9;
            auVar17 = VectorMultiplyAccumulate(auVar17._0_8_,uVar16,2,0);
            uVar8 = uVar8 + iVar10 + (uint)bVar15;
            *puVar3 = auVar17._0_8_;
            puVar3 = puVar3 + 1;
            if (uVar11 <= uVar8) break;
            iVar4 = iVar4 + -1;
            if (iVar4 == 0) goto LAB_080c6214;
          }
          uVar6 = *(uint *)channel->io_region;
          if ((uVar6 & 0x8000000) == 0) {
            *(uint *)channel->io_region = uVar6 & 0x7fffffff;
            channel->active = '\0';
            break;
          }
          uVar8 = uVar8 - channel->loop_wrap;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
LAB_080c6214:
        *(uint *)&channel->sample_offset = uVar7;
        *(uint *)((int)&channel->sample_offset + 4) = uVar8;
        break;
      case 1:
        puVar12 = channel->samples;
        puVar3 = param_2;
        iVar4 = param_3;
        do {
          while( true ) {
            uVar2 = CONCAT22(*(undefined2 *)(puVar12 + uVar8 * 2),
                             *(undefined2 *)(puVar12 + uVar8 * 2));
            bVar15 = CARRY4(uVar7,uVar9);
            uVar7 = uVar7 + uVar9;
            auVar17 = VectorMultiplyAccumulate(CONCAT44(uVar2,uVar2),uVar16,2,0);
            uVar8 = uVar8 + iVar10 + (uint)bVar15;
            *puVar3 = auVar17._0_8_;
            puVar3 = puVar3 + 1;
            if (uVar11 <= uVar8) break;
            iVar4 = iVar4 + -1;
            if (iVar4 == 0) goto LAB_080c6298;
          }
          uVar6 = *(uint *)channel->io_region;
          if ((uVar6 & 0x8000000) == 0) {
            *(uint *)channel->io_region = uVar6 & 0x7fffffff;
            channel->active = '\0';
            break;
          }
          uVar8 = uVar8 - channel->loop_wrap;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
LAB_080c6298:
        *(uint *)&channel->sample_offset = uVar7;
        *(uint *)((int)&channel->sample_offset + 4) = uVar8;
        break;
      case 2:
        uVar6 = channel->adpcm_cache_block_offset;
        puVar3 = param_2;
        iVar4 = param_3;
        do {
          while( true ) {
            for (; uVar6 <= uVar8; uVar6 = uVar6 + 8) {
              spu_adpcm_decode_block(channel);
              uVar16 = extraout_d0;
            }
            uVar2 = CONCAT22(channel->adpcm_sample_cache[uVar8 & 0x3f],
                             channel->adpcm_sample_cache[uVar8 & 0x3f]);
            bVar15 = CARRY4(uVar7,uVar9);
            uVar7 = uVar7 + uVar9;
            auVar17 = VectorMultiplyAccumulate(CONCAT44(uVar2,uVar2),uVar16,2,0);
            uVar8 = uVar8 + iVar10 + (uint)bVar15;
            *puVar3 = auVar17._0_8_;
            puVar3 = puVar3 + 1;
            if (uVar11 <= uVar8) break;
joined_r0x080c6390:
            iVar4 = iVar4 + -1;
            if (iVar4 == 0) goto LAB_080c632c;
          }
          uVar14 = *(uint *)channel->io_region;
          if ((uVar14 & 0x8000000) == 0) {
            *(uint *)channel->io_region = uVar14 & 0x7fffffff;
            channel->active = '\0';
            break;
          }
          uVar13 = channel->loop_wrap;
          uVar8 = uVar8 - uVar13;
          if (channel->adpcm_looped == '\0') {
            uVar8 = uVar8 + uVar13;
            uVar11 = uVar11 + uVar13;
            channel->sample_length = uVar11;
            channel->adpcm_loop_sample = channel->adpcm_sample;
            channel->adpcm_loop_index = channel->adpcm_current_index;
            channel->adpcm_looped = '\x01';
            goto joined_r0x080c6390;
          }
          uVar6 = uVar6 - uVar13;
          channel->adpcm_cache_block_offset = uVar6;
          channel->adpcm_sample = channel->adpcm_loop_sample;
          channel->adpcm_cache_block_offset = uVar6;
          channel->adpcm_current_index = channel->adpcm_loop_index;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
LAB_080c632c:
        *(uint *)&channel->sample_offset = uVar7;
        *(uint *)((int)&channel->sample_offset + 4) = uVar8;
        break;
      case 3:
        puVar12 = channel->samples;
        puVar3 = param_2;
        iVar4 = param_3;
        do {
          while( true ) {
            uVar2 = CONCAT22(*(undefined2 *)(puVar12 + uVar8 * 2),
                             *(undefined2 *)(puVar12 + uVar8 * 2));
            bVar15 = CARRY4(uVar7,uVar9);
            uVar7 = uVar7 + uVar9;
            auVar17 = VectorMultiplyAccumulate(CONCAT44(uVar2,uVar2),uVar16,2,0);
            uVar8 = uVar8 + iVar10 + (uint)bVar15;
            *puVar3 = auVar17._0_8_;
            puVar3 = puVar3 + 1;
            if (uVar11 <= uVar8) break;
            iVar4 = iVar4 + -1;
            if (iVar4 == 0) goto LAB_080c6408;
          }
          uVar8 = uVar8 - channel->loop_wrap;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
LAB_080c6408:
        *(uint *)&channel->sample_offset = uVar7;
        *(uint *)((int)&channel->sample_offset + 4) = uVar8;
        break;
      case 4:
        puVar12 = channel->samples;
        puVar3 = param_2;
        iVar4 = param_3;
        do {
          while( true ) {
            uVar1 = CONCAT11(puVar12[uVar8],puVar12[uVar8]);
            uVar2 = CONCAT22(uVar1,uVar1);
            auVar17 = VectorShiftLongLeft(CONCAT44(uVar2,uVar2),1);
            bVar15 = CARRY4(uVar7,uVar9);
            uVar7 = uVar7 + uVar9;
            auVar17 = VectorMultiplyAccumulate(auVar17._0_8_,uVar16,2,0);
            uVar8 = uVar8 + iVar10 + (uint)bVar15;
            *puVar3 = auVar17._0_8_;
            puVar3 = puVar3 + 1;
            if (uVar11 <= uVar8) break;
            iVar4 = iVar4 + -1;
            if (iVar4 == 0) goto LAB_080c6484;
          }
          uVar8 = uVar8 - channel->loop_wrap;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
LAB_080c6484:
        *(uint *)&channel->sample_offset = uVar7;
        *(uint *)((int)&channel->sample_offset + 4) = uVar8;
      }
    }
    channel = channel + 1;
    iVar5 = iVar5 + -1;
    if (iVar5 == 0) {
      return;
    }
  } while( true );
}


