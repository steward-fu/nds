/*
 * Ghidra decompilation
 *
 * Function : ExtrCreateFile
 * Address  : 001c99f0
 * Program  : drastic64
 */


/* CmdExtract::ExtrCreateFile(CommandData*, Archive&, File&) */

ulong __thiscall
CmdExtract::ExtrCreateFile(CmdExtract *this,CommandData *param_1,Archive *param_2,File *param_3)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = *(int *)(param_1 + 0x125f4);
  if (iVar1 == 0x50) {
    *(undefined4 *)(param_3 + 0x14) = 1;
    return 1;
  }
  if (iVar1 == 0x45 || iVar1 == 0x58) {
    if ((byte)param_1[0xc4e1] != 0) {
      return (ulong)(uint)(byte)param_1[0xc4e1];
    }
    uVar2 = ExtrCreateFile(this,param_1,param_2,param_3);
    return uVar2;
  }
  return 1;
}


