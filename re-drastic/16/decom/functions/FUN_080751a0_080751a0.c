/*
 * Ghidra decompilation
 *
 * Function : FUN_080751a0
 * Address  : 080751a0
 * Program  : drastic16
 */


void FUN_080751a0(uint param_1,char *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = (param_1 << 0x19) >> 0x1e;
  uVar2 = param_1 & 0xf;
  if ((param_1 & 0x10) != 0) {
    sprintf(param_2,"%s, %s %s",(&DAT_080fa8a0)[uVar2],*(undefined4 *)(&DAT_080fa8e0 + uVar1 * 4),
            (&DAT_080fa8a0)[(param_1 << 0x14) >> 0x1c]);
    return;
  }
  uVar3 = (param_1 << 0x14) >> 0x1b;
  if (uVar3 == 0) {
    if (uVar1 != 0) {
      if (uVar1 < 3) {
        uVar3 = 0x20;
        goto LAB_08075204;
      }
      if (uVar1 == 3) {
        sprintf(param_2,"%s, rrx #1",(&DAT_080fa8a0)[uVar2]);
        return;
      }
    }
    strcpy(param_2,(char *)(&DAT_080fa8a0)[uVar2]);
    return;
  }
LAB_08075204:
  sprintf(param_2,"%s, %s #%d",(&DAT_080fa8a0)[uVar2],*(undefined4 *)(&DAT_080fa8e0 + uVar1 * 4),
          uVar3);
  return;
}


