/*
 * Ghidra decompilation
 *
 * Function : platform_initialize
 * Address  : 080a7ed0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void platform_initialize(system_struct *system)

{
  char *pcVar1;
  char *test;
  uchar *__s2;
  
  SDL_Init(0x100220);
  initialize_signal_handlers(system);
  pcVar1 = getenv("DRASTIC_MIC_EN");
  if (((pcVar1 != (char *)0x0) && (*pcVar1 == '1')) && (pcVar1[1] == '\0')) {
    mic_dev_name = getenv("DRASTIC_MIC_NAME");
    if (mic_dev_name != (char *)0x0) {
      mic_en = '\x01';
    }
  }
  return;
}


