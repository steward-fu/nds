/*
 * Ghidra decompilation
 *
 * Function : FUN_08075554
 * Address  : 08075554
 * Program  : drastic16
 */


void FUN_08075554(uint param_1,undefined4 param_2,char *param_3)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  
  iVar1 = (int)(param_1 << 0xb) >> 0x1f;
  uVar4 = (param_1 << 0x19) >> 0x1e;
  if (uVar4 == 2) {
    uVar5 = (-iVar1 ^ 1U) & 1;
  }
  else {
    uVar5 = 0;
  }
  iVar1 = iVar1 * -4;
  iVar3 = iVar1 + uVar4;
  if (uVar5 != 0) {
    iVar1 = 4;
  }
  pcVar2 = "-";
  if ((param_1 & 0x800000) != 0) {
    pcVar2 = "";
  }
  if ((param_1 & 0x1000000) == 0) {
    sprintf(param_3,"%s%s%s %s, [%s], %s%s",*(undefined4 *)(&DAT_080fa970 + iVar1),
            (&PTR_DAT_080fa8f0)[param_1 >> 0x1c],*(undefined4 *)(&DAT_080fa978 + iVar3 * 4),
            (&DAT_080fa8a0)[(param_1 << 0x10) >> 0x1c],(&DAT_080fa8a0)[(param_1 << 0xc) >> 0x1c],
            pcVar2,param_2);
    return;
  }
  pcVar6 = "";
  if ((param_1 & 0x200000) != 0) {
    pcVar6 = "!";
  }
  sprintf(param_3,"%s%s%s %s%s, [%s, %s%s]",*(undefined4 *)(&DAT_080fa970 + iVar1),
          (&PTR_DAT_080fa8f0)[param_1 >> 0x1c],*(undefined4 *)(&DAT_080fa978 + iVar3 * 4),
          (&DAT_080fa8a0)[(param_1 << 0x10) >> 0x1c],pcVar6,
          (&DAT_080fa8a0)[(param_1 << 0xc) >> 0x1c],pcVar2,param_2);
  return;
}


