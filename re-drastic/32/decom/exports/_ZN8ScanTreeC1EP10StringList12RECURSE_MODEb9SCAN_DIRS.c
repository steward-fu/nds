/*
 * Ghidra decompilation
 *
 * Function : _ZN8ScanTreeC1EP10StringList12RECURSE_MODEb9SCAN_DIRS
 * Address  : 08107fdc
 * Program  : drastic
 */


/* DWARF original prototype: ScanTree * ScanTree(ScanTree * this, StringList * FileMasks,
   RECURSE_MODE Recurse, bool GetLinks, SCAN_DIRS GetDirs) */

ScanTree * __thiscall
ScanTree::ScanTree(ScanTree *this,StringList *FileMasks,RECURSE_MODE Recurse,bool GetLinks,
                  SCAN_DIRS GetDirs)

{
  this->SetAllMaskDepth = 0;
  this->FileMasks = FileMasks;
  this->Recurse = Recurse;
  this->GetLinks = GetLinks;
  this->GetDirs = GetDirs;
  this->ScanEntireDisk = false;
  this->CurMask[0] = 0;
  memset(this,0,0x1000);
  this->Depth = 0;
  this->Errors = 0;
  this->ErrArcName[0] = 0;
  this->Cmd = (CommandData *)0x0;
  return this;
}


