/*
 * Ghidra decompilation
 *
 * Function : FUN_08075288
 * Address  : 08075288
 * Program  : drastic16
 */


void FUN_08075288(uint param_1,char *param_2)

{
  uint unaff_r4;
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (param_1 << 0x14) >> 0x1b;
  uVar2 = (param_1 << 0x19) >> 0x1e;
  if (uVar3 != 0) {
    unaff_r4 = 0xa8a0;
  }
  param_1 = param_1 & 0xf;
  if (uVar3 != 0) {
    puVar1 = (undefined4 *)(unaff_r4 & 0xffff | 0x80f0000);
  }
  else {
    if (uVar2 != 0) {
      if (uVar2 < 3) {
        puVar1 = &DAT_080fa8a0;
        uVar3 = 0x20;
        goto LAB_080752f8;
      }
      if (uVar2 == 3) {
        sprintf(param_2,"%s, rrx #1",(&DAT_080fa8a0)[param_1]);
        return;
      }
    }
    puVar1 = &DAT_080fa8a0;
    param_2 = strcpy(param_2,(char *)(&DAT_080fa8a0)[param_1]);
  }
LAB_080752f8:
  sprintf(param_2,"%s, %s #%d",puVar1[param_1],puVar1[uVar2 + 0x10],uVar3);
  return;
}


