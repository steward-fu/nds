/*
 * Ghidra decompilation
 *
 * Function : _ZN11CommandData12CheckWinSizeEv
 * Address  : 081061fc
 * Program  : drastic
 */


/* DWARF original prototype: bool CheckWinSize(CommandData * this) */

bool __thiscall CommandData::CheckWinSize(CommandData *this)

{
  size_t sVar1;
  
  sVar1 = (this->super_RAROptions).WinSize;
  if (((((sVar1 != 0x10000) && (sVar1 != 0x20000)) && (sVar1 != 0x40000)) &&
      (((sVar1 != 0x80000 && (sVar1 != 0x100000)) &&
       ((sVar1 != 0x200000 && ((sVar1 != 0x400000 && (sVar1 != 0x800000)))))))) &&
     ((sVar1 != 0x1000000 &&
      (((((sVar1 != 0x2000000 && (sVar1 != 0x4000000)) && (sVar1 != 0x8000000)) &&
        ((sVar1 != 0x10000000 && (sVar1 != 0x20000000)))) &&
       ((sVar1 != 0x40000000 && (sVar1 != 0x80000000)))))))) {
    (this->super_RAROptions).WinSize = 0x400000;
    return false;
  }
  return true;
}


