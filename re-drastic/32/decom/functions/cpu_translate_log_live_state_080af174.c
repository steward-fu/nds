/*
 * Ghidra decompilation
 *
 * Function : cpu_translate_log_live_state
 * Address  : 080af174
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void cpu_translate_log_live_state(FILE *output_file,u32 registers,u32 flags)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  
  uVar2 = 3;
  pbVar3 = &UNK_08143aac;
  fputc(0x28,(FILE *)output_file);
  do {
    uVar1 = 0x2d;
    if ((flags & 1 << (uVar2 & 0xff)) != 0) {
      uVar1 = (uint)*pbVar3;
    }
    uVar2 = uVar2 - 1;
    pbVar3 = pbVar3 + 1;
    fputc(uVar1,(FILE *)output_file);
  } while (uVar2 != 0xffffffff);
  fwrite(&DAT_08143ab4,1,2,(FILE *)output_file);
  uVar2 = 0;
  do {
    while ((registers & 1 << (uVar2 & 0xff)) == 0) {
      uVar2 = uVar2 + 1;
      fputc(0x2d,(FILE *)output_file);
      if (uVar2 == 0x10) goto LAB_080af240;
    }
    uVar1 = uVar2 + 1;
    __fprintf_chk(output_file,1,&DAT_08143ab8,uVar2);
    uVar2 = uVar1;
  } while (uVar1 != 0x10);
LAB_080af240:
  fputc(0x29,(FILE *)output_file);
  return;
}


