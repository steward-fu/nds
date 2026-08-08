/*
 * Ghidra decompilation
 *
 * Function : game_database_save
 * Address  : 00173d80
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 game_database_save(long *param_1,char *param_2)

{
  long lVar1;
  uint uVar2;
  char cVar3;
  FILE *__s;
  ulong uVar4;
  undefined auStack_808 [1024];
  undefined auStack_408 [1024];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __s = fopen(param_2,"wb");
  fwrite("<?xml version=\'1.0\' encoding=\'UTF-8\'?>\n",1,0x27,__s);
  fwrite("<database>\n",1,0xb,__s);
  if (*(int *)(param_1 + 4) != 0) {
    uVar4 = 0;
    do {
      lVar1 = *param_1 + uVar4 * 0x38;
      escape_str(auStack_808,*(undefined8 *)(*param_1 + uVar4 * 0x38));
      escape_str(auStack_408,lVar1 + 8);
      __fprintf_chk(__s,1,"  <cartridge title=\'%s\'>\n",auStack_808);
      fwrite("    <slot1>\n",1,0xc,__s);
      __fprintf_chk(__s,1,"      <rom name=\'rom\' size=\'0x%08x\' crc32=\'%08x\' ",
                    *(undefined4 *)(lVar1 + 0x18),*(undefined4 *)(lVar1 + 0x1c));
      if (*(int *)(lVar1 + 0x24) == -1) {
        fwrite("/>\n",1,3,__s);
        cVar3 = *(char *)(lVar1 + 0x30);
      }
      else {
        __fprintf_chk(__s,1,"id=\'%08x\' title=\'%s\' />\n",*(int *)(lVar1 + 0x24),auStack_408);
        cVar3 = *(char *)(lVar1 + 0x30);
      }
      if (cVar3 != '\0') {
        __fprintf_chk(__s,1,"      <save name=\'save\' size=\'0x%x\'",*(undefined4 *)(lVar1 + 0x20))
        ;
        if (*(char *)(lVar1 + 0x30) == '\x01') {
          __fprintf_chk(__s,1," type=\'Flash\' id=\'0x%x\' />\n",*(undefined4 *)(lVar1 + 0x28));
        }
        else if (*(char *)(lVar1 + 0x30) == '\x03') {
          fwrite(" type=\'NAND\' />\n",1,0x10,__s);
        }
        else {
          fwrite(" type=\'EEPROM\' />\n",1,0x12,__s);
        }
      }
      uVar2 = *(uint *)(lVar1 + 0x2c);
      if ((uVar2 & 1) != 0) {
        fwrite("      <irport/>\n",1,0x10,__s);
        uVar2 = *(uint *)(lVar1 + 0x2c);
      }
      if ((uVar2 >> 1 & 1) != 0) {
        fwrite("      <bluetooth/>\n",1,0x13,__s);
      }
      fwrite("    </slot1>\n",1,0xd,__s);
      fwrite("  </cartridge>\n",1,0xf,__s);
      uVar2 = (int)uVar4 + 1;
      uVar4 = (ulong)uVar2;
    } while (uVar2 < *(uint *)(param_1 + 4));
  }
  fwrite("</database>\n",1,0xc,__s);
  fclose(__s);
  if (local_8 - ___stack_chk_guard == 0) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&__stack_chk_guard,local_8 - ___stack_chk_guard,0);
}


