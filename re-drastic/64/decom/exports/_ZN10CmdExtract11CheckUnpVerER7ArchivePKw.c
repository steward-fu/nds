/*
 * Ghidra decompilation
 *
 * Function : _ZN10CmdExtract11CheckUnpVerER7ArchivePKw
 * Address  : 001c9a50
 * Program  : drastic64
 */


/* CmdExtract::CheckUnpVer(Archive&, wchar_t const*) */

bool CmdExtract::CheckUnpVer(Archive *param_1,wchar_t *param_2)

{
  if (param_2[0x4482] != L'\x03') {
    return *(char *)((long)param_2 + 0x878a) == '\0' ||
           (byte)(*(char *)((long)param_2 + 0x8789) - 0xdU) < 0x11;
  }
  return *(char *)((long)param_2 + 0x878a) == '\0' || *(char *)((long)param_2 + 0x8789) == '\0';
}


