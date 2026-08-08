/*
 * Ghidra decompilation
 *
 * Function : _ZN10CmdExtract18ExtractArchiveInitEP11CommandDataR7Archive
 * Address  : 001c9340
 * Program  : drastic64
 */


/* CmdExtract::ExtractArchiveInit(CommandData*, Archive&) */

void __thiscall
CmdExtract::ExtractArchiveInit(CmdExtract *this,CommandData *param_1,Archive *param_2)

{
  CmdExtract CVar1;
  undefined8 uVar2;
  
  uVar2 = File::FileLength((File *)param_2);
  *(undefined8 *)(this + 0x45e0) = 0;
  *(undefined8 *)(this + 0x45e8) = 0;
  *(undefined8 *)(this + 0x20a0) = uVar2;
  this[0x45f0] = (CmdExtract)0x1;
  CVar1 = *(CmdExtract *)(param_1 + 0xa22c);
  this[0x67f8] = CVar1;
  if (CVar1 != (CmdExtract)0x0) {
    memcpy(this + 0x65f4,param_1 + 0xa02c,0x201);
  }
  this[0x2099] = (CmdExtract)0x0;
  this[0x67f9] = (CmdExtract)0x0;
  this[0x45f1] = (CmdExtract)0x1;
  *(undefined2 *)(this + 0x45f2) = 0;
  RarTime::SetCurrentTime();
  return;
}


