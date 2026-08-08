/*
 * Ghidra decompilation
 *
 * Function : ExtractUnixLink30
 * Address  : 0810d848
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

bool ExtractUnixLink30(ComprDataIO *DataIO,Archive *Arc,wchar *LinkName)

{
  bool bVar1;
  
  bVar1 = IsLink((Arc->FileHead).field_3.FileAttr);
  if (bVar1) {
    bVar1 = ExtractUnixLink30(DataIO,Arc,LinkName);
    return bVar1;
  }
  return bVar1;
}


