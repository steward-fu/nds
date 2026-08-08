/*
 * Ghidra decompilation
 *
 * Function : SetExtraInfo20
 * Address  : 001f0920
 * Program  : drastic64
 */


/* SetExtraInfo20(CommandData*, Archive&, wchar_t*) */

void SetExtraInfo20(CommandData *param_1,Archive *param_2,wchar_t *param_3)

{
  if ((*(short *)(param_2 + 0xcac0) == 0x101) && (param_1[0xc2a8] != (CommandData)0x0)) {
    ExtractUnixOwner20(param_2,param_3);
    return;
  }
  return;
}


