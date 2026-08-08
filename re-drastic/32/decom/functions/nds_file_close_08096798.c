/*
 * Ghidra decompilation
 *
 * Function : nds_file_close
 * Address  : 08096798
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void nds_file_close(nds_file_struct *nds_file)

{
  if (nds_file == (nds_file_struct *)0x0) {
    return;
  }
  if (nds_file->mapped_memory == '\0') {
    free(nds_file->data);
  }
  else {
    munmap(nds_file->data,nds_file->size_trimmed);
    close((int)nds_file->handle);
  }
  free(nds_file);
  return;
}


