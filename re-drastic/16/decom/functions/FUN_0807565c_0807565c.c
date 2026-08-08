/*
 * Ghidra decompilation
 *
 * Function : FUN_0807565c
 * Address  : 0807565c
 * Program  : drastic16
 */


void FUN_0807565c(uint param_1,undefined *param_2)

{
  size_t sVar1;
  bool bVar2;
  char *__format;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  char *__dest;
  uint uVar6;
  char acStack_28 [20];
  
  bVar2 = false;
  uVar3 = 0;
  __dest = param_2 + 1;
  *param_2 = 0x7b;
  do {
    if ((param_1 >> (uVar3 & 0xff) & 1) == 0) {
      if ((int)uVar3 < 0x10) {
        while (uVar3 = uVar3 + 1, (param_1 >> (uVar3 & 0xff) & 1) == 0) {
          if (uVar3 == 0x10) goto LAB_08075748;
        }
        goto LAB_080756b4;
      }
      uVar4 = uVar3;
      if (uVar3 == 0x10) goto LAB_08075748;
    }
    else {
LAB_080756b4:
      if (uVar3 == 0x10) {
LAB_08075748:
        if (!bVar2) {
          __dest = __dest + 2;
        }
LAB_08075750:
        *(undefined2 *)(__dest + -2) = 0x7d;
        return;
      }
      uVar4 = uVar3;
      if ((int)uVar3 < 0x10) {
        do {
          uVar3 = uVar3 + 1;
          if ((param_1 >> (uVar3 & 0xff) & 1) == 0) break;
        } while (uVar3 != 0x10);
      }
    }
    uVar6 = uVar3 - 1;
    if (uVar4 == uVar6) {
      sprintf(acStack_28,"%s, ",(&DAT_080fa8a0)[uVar4]);
    }
    else {
      if (uVar4 - uVar6 == 1) {
        uVar5 = (&DAT_080fa8a0)[uVar6];
        __format = "%s, %s, ";
      }
      else {
        uVar5 = (&DAT_080fa8a0)[uVar6];
        __format = "%s - %s, ";
      }
      sprintf(acStack_28,__format,(&DAT_080fa8a0)[uVar4],uVar5);
    }
    strcpy(__dest,acStack_28);
    sVar1 = strlen(acStack_28);
    __dest = __dest + sVar1;
    if (0xf < (int)uVar3) goto LAB_08075750;
    bVar2 = true;
  } while( true );
}


