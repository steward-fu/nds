/*
 * Ghidra decompilation
 *
 * Function : load_logo
 * Address  : 080a091c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void load_logo(menu_state_struct *menu_state)

{
  int iVar1;
  uint uVar2;
  FILE *__stream;
  FILE *logo_file;
  u16 *puVar3;
  int iVar4;
  system_struct *psVar5;
  char path [1024];
  
  iVar1 = __stack_chk_guard;
  psVar5 = menu_state->system;
  uVar2 = time((time_t *)0x0);
  __sprintf_chk(path,1,0x400,"%s%cdrastic_logo_%d.raw",psVar5->root_path,0x2f,uVar2 & 1);
  __stream = fopen(path,"rb");
  if (__stream == (FILE *)0x0) {
    menu_state->drastic_logo = (u16 *)0x0;
  }
  else {
    puVar3 = (u16 *)malloc(120000);
    menu_state->drastic_logo = puVar3;
    iVar4 = __fread_chk(puVar3,120000,120000,1,__stream);
    if (iVar4 != 1) {
      free(menu_state->drastic_logo);
      menu_state->drastic_logo = (u16 *)0x0;
    }
    fclose(__stream);
  }
  if (iVar1 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


