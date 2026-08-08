/*
 * Ghidra decompilation
 *
 * Function : _ZN8ScanTreeC1EP10StringList12RECURSE_MODEb9SCAN_DIRS
 * Address  : 001ebf50
 * Program  : drastic64
 */


/* ScanTree::ScanTree(StringList*, RECURSE_MODE, bool, SCAN_DIRS) */

void __thiscall
ScanTree::ScanTree(ScanTree *this,StringList *param_1,RECURSE_MODE param_2,bool param_3,
                  SCAN_DIRS param_4)

{
  *(StringList **)(this + 0x2008) = param_1;
  *(RECURSE_MODE *)(this + 0x2010) = param_2;
  this[0x2014] = (ScanTree)param_3;
  *(SCAN_DIRS *)(this + 0x2018) = param_4;
  this[0x2020] = (ScanTree)0x0;
  *(undefined4 *)(this + 0x2024) = 0;
  memset(this,0,0x2000);
  *(undefined8 *)(this + 0x2000) = 0;
  *(undefined4 *)(this + 0x201c) = 0;
  *(undefined4 *)(this + 0x6030) = 0;
  *(undefined8 *)(this + 0x8030) = 0;
  return;
}


