/*
 * Ghidra decompilation
 *
 * Function : operator=
 * Address  : 001b7830
 * Program  : drastic64
 */


/* File::TEMPNAMEPLACEHOLDERVALUE(File&) */

void __thiscall File::operator=(File *this,File *param_1)

{
  undefined4 uVar1;
  File FVar2;
  File FVar3;
  
  FVar2 = param_1[0x1a];
  FVar3 = param_1[0x10];
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  this[0x10] = FVar3;
  *(undefined4 *)(this + 0x14) = uVar1;
  this[0x1a] = FVar2;
  param_1[0x18] = (File)0x1;
  return;
}


