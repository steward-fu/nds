/*
 * Ghidra decompilation
 *
 * Function : FUN_0805f21c
 * Address  : 0805f21c
 * Program  : drastic16
 */


undefined4 FUN_0805f21c(int *param_1,char *param_2)

{
  FILE *__s;
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined auStack_818 [1024];
  undefined auStack_418 [1024];
  
  __s = fopen(param_2,"wb");
  fwrite("<?xml version=\'1.0\' encoding=\'UTF-8\'?>\n",1,0x27,__s);
  fwrite("<database>\n",1,0xb,__s);
  if (param_1[4] != 0) {
    iVar3 = 0;
    uVar4 = 0;
    do {
      iVar2 = *param_1 + iVar3;
      FUN_0805df24(auStack_818,*(undefined4 *)(*param_1 + iVar3));
      FUN_0805df24(auStack_418,iVar2 + 4);
      fprintf(__s,"  <cartridge title=\'%s\'>\n",auStack_818);
      fwrite("    <slot1>\n",1,0xc,__s);
      fprintf(__s,"      <rom name=\'rom\' size=\'0x%08x\' crc32=\'%08x\' ",
              *(undefined4 *)(iVar2 + 0x14),*(undefined4 *)(iVar2 + 0x18));
      if (*(int *)(iVar2 + 0x20) == -1) {
        fwrite("/>\n",1,3,__s);
      }
      else {
        fprintf(__s,"id=\'%08x\' title=\'%s\' />\n",*(int *)(iVar2 + 0x20),auStack_418);
      }
      if (*(char *)(iVar2 + 0x2c) == '\0') {
LAB_0805f284:
        uVar1 = *(uint *)(iVar2 + 0x28);
      }
      else {
        fprintf(__s,"      <save name=\'save\' size=\'0x%x\'",*(undefined4 *)(iVar2 + 0x1c));
        if (*(char *)(iVar2 + 0x2c) == '\x01') {
          fprintf(__s," type=\'Flash\' id=\'0x%x\' />\n",*(undefined4 *)(iVar2 + 0x24));
          goto LAB_0805f284;
        }
        if (*(char *)(iVar2 + 0x2c) == '\x03') {
          fwrite(" type=\'NAND\' />\n",1,0x10,__s);
          goto LAB_0805f284;
        }
        fwrite(" type=\'EEPROM\' />\n",1,0x12,__s);
        uVar1 = *(uint *)(iVar2 + 0x28);
      }
      if ((uVar1 & 1) != 0) {
        fwrite("      <irport/>\n",1,0x10,__s);
        uVar1 = *(uint *)(iVar2 + 0x28);
      }
      if ((uVar1 & 2) != 0) {
        fwrite("      <bluetooth/>\n",1,0x13,__s);
      }
      uVar4 = uVar4 + 1;
      fwrite("    </slot1>\n",1,0xd,__s);
      fwrite("  </cartridge>\n",1,0xf,__s);
      iVar3 = iVar3 + 0x30;
    } while (uVar4 < (uint)param_1[4]);
  }
  fwrite("</database>\n",1,0xc,__s);
  fclose(__s);
  return 0;
}


