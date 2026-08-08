/*
 * Ghidra decompilation
 *
 * Function : backup_save
 * Address  : 08092710
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void backup_save(backup_struct *backup)

{
  u8 uVar1;
  int iVar2;
  FILE *pFVar3;
  FILE *data_file;
  u8 *__ptr;
  u32 uVar4;
  uint uVar5;
  u32 dirty_page_block;
  u32 backup_size;
  uint __off;
  int iVar6;
  uint uVar7;
  u32 write_offset_in_block;
  char *__filename;
  backup_struct *pbVar8;
  uint uVar9;
  u32 dirty_page_blocks;
  u8 desmume_footer [122];
  
  iVar2 = __stack_chk_guard;
  __filename = backup->file_path;
  uVar4 = backup->address_mask;
  pFVar3 = fopen(__filename,"rb+");
  if (pFVar3 == (FILE *)0x0) {
    __printf_chk(1," Couldn\'t open backup file %s. Trying to create.\n",__filename);
    pFVar3 = fopen(__filename,"wb");
    fclose(pFVar3);
    pFVar3 = fopen(__filename,"rb+");
    if (pFVar3 == (FILE *)0x0) {
      __printf_chk(1,"  Failed to open %s for writing.\n",__filename);
      goto LAB_08092908;
    }
  }
  uVar9 = uVar4 + 0x4000;
  puts("Saving backup data file.");
  if (backup->fix_file_size != 0) {
    __printf_chk(1," Fixing file size to %d bytes.\n");
    iVar6 = fileno(pFVar3);
    iVar6 = ftruncate(iVar6,backup->fix_file_size);
    if (iVar6 != 0) {
      puts(" Truncation failed.");
    }
    backup->fix_file_size = 0;
  }
  if (uVar9 >> 0xe != 0) {
    uVar7 = 0;
    pbVar8 = backup;
    do {
      __off = uVar7;
      for (uVar5 = pbVar8->dirty_page_bitmap[0]; uVar5 != 0; uVar5 = uVar5 >> 1) {
        while ((uVar5 & 1) != 0) {
          fseek(pFVar3,__off,0);
          __ptr = backup->data + __off;
          __off = __off + 0x200;
          fwrite(__ptr,0x200,1,pFVar3);
          uVar5 = uVar5 >> 1;
          if (uVar5 == 0) goto LAB_080927f4;
        }
        __off = __off + 0x200;
      }
LAB_080927f4:
      uVar7 = uVar7 + 0x4000;
      pbVar8->dirty_page_bitmap[0] = 0;
      pbVar8 = (backup_struct *)(pbVar8->dirty_page_bitmap + 1);
    } while (uVar7 != (uVar9 & 0xffffc000));
  }
  uVar1 = backup->footer_written;
  if (uVar1 == '\0') {
    iVar6 = uVar4 + 1;
    memcpy(desmume_footer,
           "|<--Snip above here to create a raw sav by excluding this DeSmuME savedata footer:",0x52
          );
    desmume_footer[94] = backup->address_bytes;
    desmume_footer[82] = (u8)iVar6;
    desmume_footer[85] = (u8)((uint)iVar6 >> 0x18);
    desmume_footer[83] = (u8)((uint)iVar6 >> 8);
    desmume_footer[114] = 'E';
    desmume_footer[115] = ' ';
    desmume_footer[116] = 'S';
    desmume_footer[117] = 'A';
    desmume_footer[84] = (u8)((uint)iVar6 >> 0x10);
    desmume_footer[106] = '|';
    desmume_footer[107] = '-';
    desmume_footer[108] = 'D';
    desmume_footer[109] = 'E';
    desmume_footer[110] = 'S';
    desmume_footer[111] = 'M';
    desmume_footer[112] = 'U';
    desmume_footer[113] = 'M';
    desmume_footer[118] = 'V';
    desmume_footer[119] = 'E';
    desmume_footer[120] = '-';
    desmume_footer[121] = '|';
    desmume_footer[86] = desmume_footer[82];
    desmume_footer[87] = desmume_footer[83];
    desmume_footer[88] = desmume_footer[84];
    desmume_footer[89] = desmume_footer[85];
    desmume_footer[90] = uVar1;
    desmume_footer[91] = uVar1;
    desmume_footer[92] = uVar1;
    desmume_footer[93] = uVar1;
    desmume_footer[95] = uVar1;
    desmume_footer[96] = uVar1;
    desmume_footer[97] = uVar1;
    desmume_footer[98] = desmume_footer[82];
    desmume_footer[99] = desmume_footer[83];
    desmume_footer[100] = desmume_footer[84];
    desmume_footer[101] = desmume_footer[85];
    desmume_footer[102] = uVar1;
    desmume_footer[103] = uVar1;
    desmume_footer[104] = uVar1;
    desmume_footer[105] = uVar1;
    fseek(pFVar3,iVar6,0);
    fwrite(desmume_footer,0x7a,1,pFVar3);
    puts(" Saving DeSmuME footer.");
    backup->footer_written = '\x01';
  }
  fclose(pFVar3);
LAB_08092908:
  if (iVar2 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


