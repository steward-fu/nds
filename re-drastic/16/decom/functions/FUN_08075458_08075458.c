/*
 * Ghidra decompilation
 *
 * Function : FUN_08075458
 * Address  : 08075458
 * Program  : drastic16
 */


void FUN_08075458(uint param_1,undefined4 param_2,char *param_3)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  pcVar4 = "b";
  pcVar5 = "";
  if ((param_1 & 0x400000) == 0) {
    pcVar4 = pcVar5;
  }
  pcVar1 = "-";
  if ((param_1 & 0x800000) != 0) {
    pcVar1 = pcVar5;
  }
  uVar2 = (param_1 << 0x10) >> 0x1c;
  uVar3 = (param_1 << 0xc) >> 0x1c;
  if ((param_1 & 0x1000000) != 0) {
    if ((param_1 & 0x200000) != 0) {
      pcVar5 = "!";
    }
    sprintf(param_3,"%s%s%s %s%s, [%s, %s%s]",
            *(undefined4 *)(&DAT_080fa970 + ((int)(param_1 << 0xb) >> 0x1f) * -4),
            (&PTR_DAT_080fa8f0)[param_1 >> 0x1c],pcVar4,(&DAT_080fa8a0)[uVar2],pcVar5,
            (&DAT_080fa8a0)[uVar3],pcVar1,param_2);
    return;
  }
  if ((param_1 & 0x200000) != 0) {
    pcVar5 = "t";
  }
  sprintf(param_3,"%s%s%s%s %s, [%s], %s%s",
          *(undefined4 *)(&DAT_080fa970 + ((int)(param_1 << 0xb) >> 0x1f) * -4),
          (&PTR_DAT_080fa8f0)[param_1 >> 0x1c],pcVar4,pcVar5,(&DAT_080fa8a0)[uVar2],
          (&DAT_080fa8a0)[uVar3],pcVar1,param_2);
  return;
}


