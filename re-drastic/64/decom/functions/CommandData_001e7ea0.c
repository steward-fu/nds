/*
 * Ghidra decompilation
 *
 * Function : CommandData
 * Address  : 001e7ea0
 * Program  : drastic64
 */


/* CommandData::CommandData() */

void __thiscall CommandData::CommandData(CommandData *this)

{
  void *__ptr;
  
  RAROptions::RAROptions((RAROptions *)this);
                    /* try { // try from 001e7ec8 to 001e7ecb has its CatchHandler @ 001e7f94 */
  StringList::StringList((StringList *)(this + 0x16638));
                    /* try { // try from 001e7ed8 to 001e7edb has its CatchHandler @ 001e802c */
  StringList::StringList((StringList *)(this + 0x166f0));
                    /* try { // try from 001e7ee8 to 001e7eeb has its CatchHandler @ 001e801c */
  StringList::StringList((StringList *)(this + 0x167a8));
                    /* try { // try from 001e7ef8 to 001e7efb has its CatchHandler @ 001e800c */
  StringList::StringList((StringList *)(this + 0x16860));
                    /* try { // try from 001e7f08 to 001e7f0b has its CatchHandler @ 001e7ffc */
  StringList::StringList((StringList *)(this + 0x16918));
                    /* try { // try from 001e7f10 to 001e7f5b has its CatchHandler @ 001e7fa8 */
  RAROptions::Init();
  *(undefined4 *)(this + 0x125f4) = 0;
  *(undefined4 *)(this + 0x14634) = 0;
  *(undefined2 *)(this + 0x125e8) = 0;
  *(undefined4 *)(this + 0x125ec) = 0;
  this[0x125f0] = (CommandData)0x0;
  StringList::Reset();
  StringList::Reset();
  StringList::Reset();
  StringList::Reset();
  StringList::Reset();
  __ptr = *(void **)(this + 0xc278);
  if (__ptr != (void *)0x0) {
    free(__ptr);
    *(void **)(this + 0xc278) = (void *)0x0;
  }
  *(undefined8 *)(this + 0xc280) = 0;
  *(undefined8 *)(this + 0xc288) = 0;
  return;
}


