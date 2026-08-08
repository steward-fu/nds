/*
 * Ghidra decompilation
 *
 * Function : gamecard_initialize_homebrew
 * Address  : 0808f1a0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void gamecard_initialize_homebrew(gamecard_struct *gamecard)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  u8 *puVar4;
  u8 *main_ram;
  u8 *__s;
  char *argv_command_line;
  system_struct *system;
  system_struct *psVar5;
  undefined4 uVar6;
  char path [1024];
  
  iVar1 = __stack_chk_guard;
  psVar5 = gamecard->system;
  puVar4 = (psVar5->memory).main_ram;
  puts("Homebrew recognized. Setting up R4 flashcart emulation.");
  __s = puVar4 + 0x3e0000;
  if (-1 < gamecard->dldi_file_fd) {
    close(gamecard->dldi_file_fd);
  }
  uVar6 = 0x2f;
  __sprintf_chk(path,1,0x400,"%s%cdrastic_dldi.img",psVar5->user_root_path,0x2f);
  iVar2 = open(path,2);
  gamecard->dldi_file_fd = iVar2;
  if (iVar2 < 0) {
    perror("Couldn\'t load drastic_dldi.img: ");
  }
  __sprintf_chk(__s,1,0xffffffff,"fat:/%s",psVar5->gamecard_filename,uVar6);
  __printf_chk(1,"Using NitroFS path \'%s\'.\n",__s);
  *(undefined4 *)(puVar4 + 0x3ffe70) = 0x5f617267;
  *(undefined4 *)(puVar4 + 0x3ffe74) = 0x27e0000;
  sVar3 = strlen((char *)__s);
  iVar2 = __stack_chk_guard;
  *(size_t *)(puVar4 + 0x3ffe78) = sVar3 + 1;
  if (iVar1 == iVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


