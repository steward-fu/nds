/*
 * Ghidra decompilation
 *
 * Function : PreprocessSwitch
 * Address  : 001e9620
 * Program  : drastic64
 */


/* CommandData::PreprocessSwitch(wchar_t const*) */

undefined8 __thiscall CommandData::PreprocessSwitch(CommandData *this,wchar_t *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 != L'-') {
    return 1;
  }
  uVar1 = PreprocessSwitch(this,param_1);
  return uVar1;
}


