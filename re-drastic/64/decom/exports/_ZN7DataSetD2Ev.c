/*
 * Ghidra decompilation
 *
 * Function : _ZN7DataSetD2Ev
 * Address  : 001b3f50
 * Program  : drastic64
 */


/* DataSet::~DataSet() */

void __thiscall DataSet::~DataSet(DataSet *this)

{
  CmdExtract::~CmdExtract((CmdExtract *)(this + 0x29c28));
  Archive::~Archive((Archive *)(this + 0x169d0));
  if (*(void **)(this + 0x16918) != (void *)0x0) {
    free(*(void **)(this + 0x16918));
  }
  if (*(void **)(this + 0x16860) != (void *)0x0) {
    free(*(void **)(this + 0x16860));
  }
  if (*(void **)(this + 0x167a8) != (void *)0x0) {
    free(*(void **)(this + 0x167a8));
  }
  if (*(void **)(this + 0x166f0) != (void *)0x0) {
    free(*(void **)(this + 0x166f0));
  }
  if (*(void **)(this + 0x16638) != (void *)0x0) {
    free(*(void **)(this + 0x16638));
  }
  RAROptions::~RAROptions((RAROptions *)this);
  return;
}


