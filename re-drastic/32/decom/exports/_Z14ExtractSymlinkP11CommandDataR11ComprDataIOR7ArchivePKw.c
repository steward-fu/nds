/*
 * Ghidra decompilation
 *
 * Function : _Z14ExtractSymlinkP11CommandDataR11ComprDataIOR7ArchivePKw
 * Address  : 0810da8c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

bool ExtractSymlink(CommandData *Cmd,ComprDataIO *DataIO,Archive *Arc,wchar *LinkName)

{
  bool bVar1;
  
  if (Arc->Format == RARFMT15) {
    bVar1 = IsLink((Arc->FileHead).field_3.FileAttr);
    if (bVar1) {
      bVar1 = ExtractUnixLink30(DataIO,Arc,LinkName);
      return bVar1;
    }
    return false;
  }
  if (Arc->Format != RARFMT50) {
    return false;
  }
  bVar1 = ExtractUnixLink50(LinkName,&Arc->FileHead);
  return bVar1;
}


