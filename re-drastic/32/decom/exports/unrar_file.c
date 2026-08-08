/*
 * Ghidra decompilation
 *
 * Function : unrar_file
 * Address  : 080c942c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

u8 * unrar_file(char *rar_file_name,char *match_extension,u32 *_file_size,char *dest_file_name)

{
  int iVar1;
  void *hArcData;
  void *rarFile;
  int iVar2;
  char *pcVar3;
  char *ext;
  FILE *__stream;
  FILE *dest_file;
  u8 *__ptr;
  u8 *data_pos;
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
          g_current_unpack_size._0_4_ = fileInfo.UnpSize;
          g_current_unpack_done = 0;
          g_current_unpack_size._4_4_ = iVar2;
          *_file_size = fileInfo.UnpSize;
          if (dest_file_name == (char *)0x0) {
            __ptr = (u8 *)malloc(fileInfo.UnpSize);
            data_pos = __ptr;
            if (__ptr == (u8 *)0x0) {
              puts("ERROR: could not allocate memory for RAR extraction");
              goto LAB_080c959c;
            }
            RARSetCallback(hArcData,unrar_callback_extract_buffer,(long)&data_pos);
            iVar2 = RARProcessFile(hArcData,1,(char *)0x0,(char *)0x0);
            if (iVar2 != 0) {
              free(__ptr);
              __ptr = (u8 *)0x0;
              goto LAB_080c959c;
            }
          }
          else {
            __stream = fopen64(dest_file_name,"wb");
            RARSetCallback(hArcData,unrar_callback_extract_file,(long)__stream);
            iVar2 = RARProcessFile(hArcData,1,(char *)0x0,(char *)0x0);
            if (iVar2 != 0) {
              puts("ERROR: could not extract RAR file");
            }
            __ptr = (u8 *)(uint)(iVar2 == 0);
            fclose(__stream);
          }
          if (__ptr != (u8 *)0x0) {
            __printf_chk(1,"%s unrar\'ed\n",rar_file_name);
          }
          goto LAB_080c959c;
        }
        RARProcessFile(hArcData,0,(char *)0x0,(char *)0x0);
      }
      __ptr = (u8 *)0x0;
LAB_080c959c:
      RARCloseArchive(hArcData);
    }
    else {
      RARCloseArchive(hArcData);
      puts("ERROR: RAR file not supported");
      __ptr = (u8 *)0x0;
    }
  }
  else {
    RARCloseArchive(hArcData);
    puts("ERROR: could not open RAR");
    __ptr = (u8 *)0x0;
  }
  if (iVar1 == __stack_chk_guard) {
    return __ptr;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


