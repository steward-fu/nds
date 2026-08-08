/*
 * Ghidra decompilation
 *
 * Function : FUN_080a1ccc
 * Address  : 080a1ccc
 * Program  : drastic16
 */


void FUN_080a1ccc(byte *param_1,char param_2)

{
  uint uVar1;
  char *pcVar2;
  byte *local_c;
  
  for (local_c = param_1; *local_c != 0; local_c = local_c + 1) {
    if (param_2 == '\0') {
      uVar1 = 0xd35c;
    }
    else {
      uVar1 = 0xd354;
    }
    pcVar2 = strchr((char *)(uVar1 | 0x80e0000),(uint)*local_c);
    if ((pcVar2 != (char *)0x0) || ((param_2 != '\0' && (*local_c < 0x20)))) {
      *local_c = 0x5f;
    }
  }
  return;
}


