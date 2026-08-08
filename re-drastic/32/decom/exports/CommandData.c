/*
 * Ghidra decompilation
 *
 * Function : CommandData
 * Address  : 08103cac
 * Program  : drastic
 */


/* DWARF original prototype: CommandData * CommandData(CommandData * this) */

CommandData * __thiscall CommandData::CommandData(CommandData *this)

{
  longlong *__ptr;
  
  RAROptions::RAROptions(&this->super_RAROptions);
  StringList::StringList(&this->FileArgs);
  StringList::StringList(&this->ExclArgs);
  StringList::StringList(&this->InclArgs);
  StringList::StringList(&this->ArcNames);
  StringList::StringList(&this->StoreArgs);
  RAROptions::Init(&this->super_RAROptions);
  this->Command[0] = 0;
  this->ArcName[0] = 0;
  (this->super_RAROptions).field_0x125bc = 0;
  this->NoMoreSwitches = false;
  this->ListMode = RCLM_AUTO;
  this->BareOutput = false;
  StringList::Reset(&this->FileArgs);
  StringList::Reset(&this->ExclArgs);
  StringList::Reset(&this->InclArgs);
  StringList::Reset(&this->StoreArgs);
  StringList::Reset(&this->ArcNames);
  __ptr = (this->super_RAROptions).NextVolSizes.Buffer;
  if (__ptr != (longlong *)0x0) {
    free(__ptr);
    (this->super_RAROptions).NextVolSizes.Buffer = (longlong *)0x0;
  }
  (this->super_RAROptions).NextVolSizes.BufSize = 0;
  (this->super_RAROptions).NextVolSizes.AllocSize = 0;
  return this;
}


