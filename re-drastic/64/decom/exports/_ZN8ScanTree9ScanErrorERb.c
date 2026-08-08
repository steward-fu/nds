/*
 * Ghidra decompilation
 *
 * Function : _ZN8ScanTree9ScanErrorERb
 * Address  : 001ec8a0
 * Program  : drastic64
 */


/* ScanTree::ScanError(bool&) */

void __thiscall ScanTree::ScanError(ScanTree *this,bool *param_1)

{
  char cVar1;
  
  if (((*param_1 != false) && (*(CommandData **)(this + 0x8030) != (CommandData *)0x0)) &&
     (cVar1 = CommandData::ExclCheck
                        (*(CommandData **)(this + 0x8030),(wchar_t *)(this + 0x2024),false,true,true
                        ), cVar1 != '\0')) {
    *param_1 = false;
  }
  return;
}


