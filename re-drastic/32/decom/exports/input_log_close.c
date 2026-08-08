/*
 * Ghidra decompilation
 *
 * Function : input_log_close
 * Address  : 080a6e38
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void input_log_close(input_struct *input)

{
  if ((input->log_mode == '\x01') && ((FILE *)input->log_file != (FILE *)0x0)) {
    fclose((FILE *)input->log_file);
    return;
  }
  return;
}


