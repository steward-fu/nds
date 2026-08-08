/*
 * Ghidra decompilation
 *
 * Function : FUN_0807535c
 * Address  : 0807535c
 * Program  : drastic16
 */


void FUN_0807535c(uint param_1,undefined4 param_2,char *param_3)

{
  undefined *puVar1;
  uint uVar2;
  char *pcVar3;
  
  uVar2 = param_1 >> 0x15 & 0xf;
  pcVar3 = "s";
  if ((param_1 & 0x100000) == 0) {
    pcVar3 = "";
  }
  puVar1 = (&PTR_DAT_080fa8f0)[param_1 >> 0x1c];
  if (3 < uVar2 - 8) {
    if ((param_1 >> 0x15 & 0xd) != 0xd) {
      sprintf(param_3,"%s%s%s %s, %s, %s",(&PTR_DAT_080fa930)[uVar2],puVar1,pcVar3,
              (&DAT_080fa8a0)[(param_1 << 0x10) >> 0x1c],(&DAT_080fa8a0)[(param_1 << 0xc) >> 0x1c],
              param_2);
      return;
    }
    sprintf(param_3,"%s%s%s %s, %s",(&PTR_DAT_080fa930)[uVar2],puVar1,pcVar3,
            (&DAT_080fa8a0)[(param_1 << 0x10) >> 0x1c],param_2);
    return;
  }
  sprintf(param_3,"%s%s %s, %s",(&PTR_DAT_080fa930)[uVar2],puVar1,
          (&DAT_080fa8a0)[(param_1 << 0xc) >> 0x1c],param_2);
  return;
}


