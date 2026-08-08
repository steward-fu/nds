/*
 * Ghidra decompilation
 *
 * Function : Init
 * Address  : 08103e24
 * Program  : drastic
 */


/* DWARF original prototype: void Init(CommandData * this) */

void __thiscall CommandData::Init(CommandData *this)

{
  longlong *__ptr;
  
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
  return;
}


