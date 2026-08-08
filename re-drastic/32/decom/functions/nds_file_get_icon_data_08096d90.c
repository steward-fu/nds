/*
 * Ghidra decompilation
 *
 * Function : nds_file_get_icon_data
 * Address  : 08096d90
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

s32 nds_file_get_icon_data(char *file_path,nds_icon_struct *nds_icon)

{
  uint uVar1;
  s32 sVar2;
  u32 *tile_ptr;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  u8 *puVar7;
  u32 *pixels;
  undefined4 uVar8;
  u32 uVar9;
  u32 file_size;
  u8 auStack_45c [32];
  undefined4 auStack_43c [8];
  undefined4 auStack_41c [8];
  u32 icon_data_offset;
  u32 local_3f4;
  undefined4 auStack_3dc [104];
  undefined4 local_23c;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 local_228;
  undefined4 local_224;
  undefined4 local_220;
  undefined auStack_11c [256];
  int local_1c;
  
  local_1c = __stack_chk_guard;
  sVar2 = nds_file_read_to_memory_partial(file_path,&file_size,auStack_45c,0x80,0);
  if (sVar2 == 0) {
    sVar2 = nds_file_read_to_memory_partial(file_path,&file_size,auStack_45c,0x440,local_3f4);
    if (sVar2 == 0) {
      *(undefined4 *)nds_icon->palette = local_23c;
      *(undefined4 *)(nds_icon->palette + 2) = local_238;
      *(undefined4 *)(nds_icon->palette + 4) = uStack_234;
      *(undefined4 *)(nds_icon->palette + 6) = uStack_230;
      *(undefined4 *)(nds_icon->palette + 8) = uStack_22c;
      *(undefined4 *)(nds_icon->palette + 10) = local_228;
      *(undefined4 *)(nds_icon->palette + 0xc) = local_224;
      *(undefined4 *)(nds_icon->palette + 0xe) = local_220;
      memcpy(nds_icon->title_en_utf16,auStack_11c,0x100);
      puVar7 = nds_icon->pixels;
      uVar6 = 0;
      do {
        puVar7 = puVar7 + 0x10;
        uVar1 = uVar6 >> 3;
        uVar3 = uVar6 & 7;
        uVar6 = uVar6 + 1;
        iVar4 = uVar3 + uVar1 * 0x20;
        uVar8 = auStack_41c[iVar4];
        uVar9 = (&icon_data_offset)[iVar4];
        uVar5 = auStack_3dc[iVar4];
        *(undefined4 *)((nds_icon_struct *)(puVar7 + -0x10))->pixels = auStack_43c[iVar4];
        *(undefined4 *)(puVar7 + -0xc) = uVar8;
        *(u32 *)(puVar7 + -8) = uVar9;
        *(undefined4 *)(puVar7 + -4) = uVar5;
      } while (uVar6 != 0x20);
      nds_icon->palette[0] = 0;
      sVar2 = 0;
      goto LAB_08096ea0;
    }
  }
  sVar2 = -1;
LAB_08096ea0:
  if (local_1c == __stack_chk_guard) {
    return sVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


