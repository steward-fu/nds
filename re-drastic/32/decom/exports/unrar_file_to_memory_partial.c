/*
 * Ghidra decompilation
 *
 * Function : unrar_file_to_memory_partial
 * Address  : 080c96a8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

s32 unrar_file_to_memory_partial
              (char *rar_file_name,char *match_extension,u32 *_file_size,u8 *dest,
              u32 file_size_limit,u32 file_offset)

{
  int iVar1;
  void *hArcData;
  void *rarFile;
  int iVar2;
  char *pcVar3;
  char *ext;
  int err;
  s32 sVar4;
  RAROpenArchiveDataEx archiveInfo;
  RARHeaderDataEx fileInfo;
  
  iVar1 = __stack_chk_guard;
  *_file_size = 0;
  memset(&archiveInfo,0,0x9c);
  archiveInfo.OpenMode = L'\x01';
  archiveInfo.ArcName = rar_file_name;
  hArcData = RAROpenArchiveEx((RAROpenArchiveDataEx_conflict *)&archiveInfo);
  if (archiveInfo.OpenResult == L'\0') {
    if ((archiveInfo.Flags & 0x1c5U) == 0) {
      fileInfo.CmtBuf = (char *)0x0;
      while (iVar2 = RARReadHeaderEx(hArcData,(RARHeaderDataEx_conflict *)&fileInfo), iVar2 == 0) {
        pcVar3 = strrchr(fileInfo.FileName,0x2e);
        if ((pcVar3 != (char *)0x0) && (iVar2 = strcasecmp(pcVar3 + 1,match_extension), iVar2 == 0))
        {
          pcVar3 = (char *)(uint)(file_size_limit == 0 || dest == (u8 *)0x0);
          *_file_size = fileInfo.UnpSize;
          if (file_size_limit != 0 && dest != (u8 *)0x0) {
            if ((uint)fileInfo.UnpSize < file_size_limit + file_offset) break;
            unrar_userdata.bytes_remaining = file_size_limit;
            unrar_userdata.start_offset = file_offset;
            unrar_userdata.buffer_pos = dest;
            unrar_userdata.bytes_processed = (u32)pcVar3;
            RARSetProcessDataProc(hArcData,unrar_process_data_partial);
            iVar2 = RARProcessFile(hArcData,1,pcVar3,pcVar3);
            if (unrar_userdata.bytes_remaining != 0) {
              sVar4 = -1;
              __printf_chk(1,"ERROR: %d/%d bytes remaining. %d\n",unrar_userdata.bytes_remaining,
                           file_size_limit,iVar2);
              goto LAB_080c97b0;
            }
          }
          sVar4 = 0;
          goto LAB_080c97b0;
        }
        RARProcessFile(hArcData,0,(char *)0x0,(char *)0x0);
      }
      sVar4 = -1;
LAB_080c97b0:
      RARCloseArchive(hArcData);
    }
    else {
      RARCloseArchive(hArcData);
      puts("ERROR: RAR file not supported");
      sVar4 = -1;
    }
  }
  else {
    RARCloseArchive(hArcData);
    puts("ERROR: could not open RAR");
    sVar4 = -1;
  }
  if (iVar1 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return sVar4;
}


