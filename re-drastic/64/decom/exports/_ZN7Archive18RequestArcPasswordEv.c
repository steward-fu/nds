/*
 * Ghidra decompilation
 *
 * Function : _ZN7Archive18RequestArcPasswordEv
 * Address  : 001bbcd0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Archive::RequestArcPassword() */

void Archive::RequestArcPassword(void)

{
  int iVar1;
  long in_x0;
  long lVar2;
  wchar_t local_288 [128];
  char local_88 [128];
  long local_8;
  
  lVar2 = *(long *)(in_x0 + 0x7600);
  local_8 = ___stack_chk_guard;
  if (*(char *)(lVar2 + 0xa22c) != '\0') goto LAB_001bbd78;
  if (*(code **)(lVar2 + 0x125d0) != (code *)0x0) {
    local_288[0] = L'\0';
    iVar1 = (**(code **)(lVar2 + 0x125d0))(4,*(undefined8 *)(lVar2 + 0x125c8),local_288,0x80);
    if (iVar1 == -1) {
      local_288[0] = L'\0';
LAB_001bbdd0:
      local_88[0] = '\0';
      iVar1 = (**(code **)(*(long *)(in_x0 + 0x7600) + 0x125d0))
                        (2,*(undefined8 *)(*(long *)(in_x0 + 0x7600) + 0x125c8),local_88,0x80);
      if (iVar1 == -1) {
        local_88[0] = '\0';
      }
      GetWideName(local_88,(wchar_t *)0x0,local_288,0x80);
      cleandata(local_88,0x80);
    }
    else if (local_288[0] == L'\0') goto LAB_001bbdd0;
    SecPassword::Set((SecPassword *)(*(long *)(in_x0 + 0x7600) + 0xa02c),local_288);
    cleandata(local_288,0x200);
    if (*(char *)(*(long *)(in_x0 + 0x7600) + 0xa22c) != '\0') goto LAB_001bbd78;
  }
  File::Close();
  *(undefined4 *)(*(long *)(in_x0 + 0x7600) + 0x125c0) = 0x16;
  ErrorHandler::Exit((ErrorHandler *)&ErrHandler,0xff);
LAB_001bbd78:
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


