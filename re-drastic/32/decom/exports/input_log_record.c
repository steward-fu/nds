/*
 * Ghidra decompilation
 *
 * Function : input_log_record
 * Address  : 080a6cbc
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void input_log_record(input_struct *input,char *file_name)

{
  FILE *pFVar1;
  
  pFVar1 = fopen(file_name,"wb");
  input->log_file = (FILE *)pFVar1;
  if (pFVar1 != (FILE *)0x0) {
    __printf_chk(1,"Recording input to %s.\n",file_name);
    input->log_mode = '\x01';
    return;
  }
  __printf_chk(1,"Couldn\'t open %s for input recording.\n",file_name);
  return;
}


