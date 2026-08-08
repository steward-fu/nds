/*
 * Ghidra decompilation
 *
 * Function : cpu_translate_log_live_state
 * Address  : 0018fc20
 * Program  : drastic64
 */


int cpu_translate_log_live_state(FILE *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  
  lVar4 = 0;
  fputc(0x28,param_1);
  do {
    if ((1 << (ulong)(3U - (int)lVar4 & 0x1f) & param_3) == 0) {
      fputc(0x2d,param_1);
    }
    else {
      fputc((uint)(byte)(&DAT_00227300)[lVar4],param_1);
    }
    lVar4 = lVar4 + 1;
  } while (lVar4 != 4);
  fwrite(&DAT_00227308,1,2,param_1);
  uVar3 = 0;
  do {
    while ((1 << (ulong)(uVar3 & 0x1f) & param_2) == 0) {
      uVar3 = uVar3 + 1;
      fputc(0x2d,param_1);
      if (uVar3 == 0x10) goto LAB_0018fcfc;
    }
    uVar1 = uVar3 + 1;
    __fprintf_chk(param_1,1,&DAT_00227310,uVar3);
    uVar3 = uVar1;
  } while (uVar1 != 0x10);
LAB_0018fcfc:
  iVar2 = fputc(0x29,param_1);
  return iVar2;
}


