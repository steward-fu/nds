/*
 * Ghidra decompilation
 *
 * Function : _Z14SetExtraInfo20P11CommandDataR7ArchivePw
 * Address  : 0810d9d0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void SetExtraInfo20(CommandData *Cmd,Archive *Arc,wchar *Name)

{
  if (((Arc->SubBlockHead).SubType == 0x101) && ((Cmd->super_RAROptions).ProcessOwners != false)) {
    ExtractUnixOwner20(Arc,Name);
    return;
  }
  return;
}


