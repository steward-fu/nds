/*
 * Ghidra decompilation
 *
 * Function : _ZN10CmdExtract18ExtrDllGetPasswordEP11CommandData
 * Address  : 001c96c0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CmdExtract::ExtrDllGetPassword(CommandData*) */

undefined __thiscall CmdExtract::ExtrDllGetPassword(CmdExtract *this,CommandData *param_1)

{
  int iVar1;
  undefined uVar2;
  wchar_t local_288 [128];
  char local_88 [128];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1[0xa22c] == (CommandData)0x0) {
    uVar2 = 0;
    if (*(code **)(param_1 + 0x125d0) == (code *)0x0) goto LAB_001c977c;
    local_288[0] = L'\0';
    iVar1 = (**(code **)(param_1 + 0x125d0))(4,*(undefined8 *)(param_1 + 0x125c8),local_288,0x80);
    if (iVar1 == -1) {
      local_288[0] = L'\0';
LAB_001c97b4:
      local_88[0] = '\0';
      iVar1 = (**(code **)(param_1 + 0x125d0))(2,*(undefined8 *)(param_1 + 0x125c8),local_88,0x80);
      if (iVar1 == -1) {
        local_88[0] = '\0';
      }
      GetWideName(local_88,(wchar_t *)0x0,local_288,0x80);
      cleandata(local_88,0x80);
    }
    else if (local_288[0] == L'\0') goto LAB_001c97b4;
    SecPassword::Set((SecPassword *)(param_1 + 0xa02c),local_288);
    cleandata(local_288,0x200);
    if (param_1[0xa22c] == (CommandData)0x0) goto LAB_001c977c;
  }
  uVar2 = 1;
  memcpy(this + 0x65f4,param_1 + 0xa02c,0x201);
LAB_001c977c:
  if (local_8 - ___stack_chk_guard == 0) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


