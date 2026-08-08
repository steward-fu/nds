/*
 * Ghidra decompilation
 *
 * Function : SzArEx_Init
 * Address  : 080ca23c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void SzArEx_Init(CSzArEx *p)

{
  (p->db).PackSizes = (UInt64 *)0x0;
  (p->db).PackCRCsDefined = (Byte *)0x0;
  (p->db).PackCRCs = (UInt32 *)0x0;
  (p->db).Folders = (CSzFolder *)0x0;
  (p->db).Files = (CSzFileItem *)0x0;
  (p->db).NumPackStreams = 0;
  (p->db).NumFolders = 0;
  (p->db).NumFiles = 0;
  p->FolderStartPackStreamIndex = (UInt32 *)0x0;
  p->PackStreamStartPositions = (UInt64 *)0x0;
  p->FolderStartFileIndex = (UInt32 *)0x0;
  p->FileIndexToFolderIndexMap = (UInt32 *)0x0;
  p->FileNameOffsets = (size_t *)0x0;
  Buf_Init(&p->FileNames);
  return;
}


