/*
 * Ghidra decompilation
 *
 * Function : ParseDone
 * Address  : 08103ebc
 * Program  : drastic
 */


/* DWARF original prototype: void ParseDone(CommandData * this) */

void __thiscall CommandData::ParseDone(CommandData *this)

{
  uint uVar1;
  wchar CmdChar;
  
  if (((this->FileArgs).StringsCount == 0) && ((this->super_RAROptions).field_0x125bc == '\0')) {
    StringList::AddString(&this->FileArgs,(wchar *)&DAT_08144c5c);
  }
  uVar1 = toupperw(this->Command[0]);
  if ((uVar1 == 0x45 || (uVar1 & 0xfffffff7) == 0x50) && ((this->super_RAROptions).Test != false)) {
    (this->super_RAROptions).Test = false;
  }
  if ((uVar1 == 0x56 || uVar1 == 0x4c) && (this->Command[1] == 0x42)) {
    this->BareOutput = true;
  }
  return;
}


