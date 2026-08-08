/*
 * Ghidra decompilation
 *
 * Function : _ZN7Archive17ConvertAttributesEv
 * Address  : 080db590
 * Program  : drastic
 */


/* DWARF original prototype: void ConvertAttributes(Archive * this) */

void __thiscall Archive::ConvertAttributes(Archive *this)

{
  HOST_SYSTEM_TYPE HVar1;
  uint uVar2;
  
  if (ConvertAttributes::mask == 0xffffffff) {
    ConvertAttributes::mask = umask(0x12);
    umask(ConvertAttributes::mask);
  }
  HVar1 = (this->FileHead).HSType;
  if (HVar1 == HSYS_WINDOWS) {
    uVar2 = (this->FileHead).field_3.FileAttr;
    if ((uVar2 & 0x10) == 0) {
      if ((uVar2 & 1) == 0) {
        (this->FileHead).field_3.FileAttr = ~ConvertAttributes::mask & 0x1b6;
      }
      else {
        (this->FileHead).field_3.FileAttr = ~ConvertAttributes::mask & 0x124;
      }
    }
    else {
      (this->FileHead).field_3.FileAttr = ~ConvertAttributes::mask & 0x1ff;
    }
  }
  else if (HVar1 != HSYS_UNIX) {
    if ((this->FileHead).Dir == false) {
      uVar2 = 0x81b6;
    }
    else {
      uVar2 = 0x41ff;
    }
    (this->FileHead).field_3.FileAttr = uVar2 & ~ConvertAttributes::mask;
  }
  return;
}


